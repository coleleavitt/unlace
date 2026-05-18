//! Lumina v6 packet identifiers and authorization-mask table.
//!
//! Source references in `research/lumina/all/`:
//!
//! * Packet registry: `unk_237640` (at file offset 0x237640) — 40-entry array
//!   of `{ u64 id; char *name; void *factory; }`, indexed by `id - 10`.
//! * Auth/feature mask: `dword_1B6840` (at 0x1B6840) — 35 u32 entries, indexed
//!   by `packet_id - 14`, covering ids 14..=48.
//! * Admin gate: `sub_421D0.c` (bit `0x40000000` is admin-required).

use std::fmt;

/// Strongly-typed Lumina packet id. The on-the-wire byte is recovered by
/// [`Packet::as_u8`] (and parsed back via [`Packet::from_u8`]).
///
/// Names match the reverse-engineered string table at `unk_237640`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
#[repr(u8)]
pub enum Packet {
    RpcOk = 10,
    RpcFail = 11,
    RpcNotify = 12,
    Helo = 13,
    PullMd = 14,
    PullMdResult = 15,
    PushMd = 16,
    PushMdResult = 17,
    GetPop = 18,
    GetPopResult = 19,
    ListPeers = 20,
    ListPeersResult = 21,
    KillSessions = 22,
    KillSessionsResult = 23,
    DelHistory = 24,
    DelHistoryResult = 25,
    ShowHistory = 26,
    ShowHistoryResult = 27,
    DumpMd = 28,
    DumpMdResult = 29,
    CleanDb = 30,
    DebugCtl = 31,
    Decompile = 32,
    DecompileResult = 33,
    PushTlm = 34,
    ShowTlmSessions = 35,
    ShowTlmSessionsResult = 36,
    ShowPushes = 37,
    ShowPushesResult = 38,
    UserOperation = 39,
    ShowUsers = 40,
    ShowUsersResult = 41,
    SetPassword = 42,
    GetLuminaInfo = 43,
    GetLuminaInfoResult = 44,
    GetLuminaStats = 45,
    GetLuminaStatsResult = 46,
    GetFuncHistories = 47,
    GetFuncHistoriesResult = 48,
    HeloResult = 49,
}

impl Packet {
    /// Convert a raw packet-id byte into a [`Packet`].
    pub fn from_u8(b: u8) -> Option<Self> {
        Some(match b {
            10 => Self::RpcOk,
            11 => Self::RpcFail,
            12 => Self::RpcNotify,
            13 => Self::Helo,
            14 => Self::PullMd,
            15 => Self::PullMdResult,
            16 => Self::PushMd,
            17 => Self::PushMdResult,
            18 => Self::GetPop,
            19 => Self::GetPopResult,
            20 => Self::ListPeers,
            21 => Self::ListPeersResult,
            22 => Self::KillSessions,
            23 => Self::KillSessionsResult,
            24 => Self::DelHistory,
            25 => Self::DelHistoryResult,
            26 => Self::ShowHistory,
            27 => Self::ShowHistoryResult,
            28 => Self::DumpMd,
            29 => Self::DumpMdResult,
            30 => Self::CleanDb,
            31 => Self::DebugCtl,
            32 => Self::Decompile,
            33 => Self::DecompileResult,
            34 => Self::PushTlm,
            35 => Self::ShowTlmSessions,
            36 => Self::ShowTlmSessionsResult,
            37 => Self::ShowPushes,
            38 => Self::ShowPushesResult,
            39 => Self::UserOperation,
            40 => Self::ShowUsers,
            41 => Self::ShowUsersResult,
            42 => Self::SetPassword,
            43 => Self::GetLuminaInfo,
            44 => Self::GetLuminaInfoResult,
            45 => Self::GetLuminaStats,
            46 => Self::GetLuminaStatsResult,
            47 => Self::GetFuncHistories,
            48 => Self::GetFuncHistoriesResult,
            49 => Self::HeloResult,
            _ => return None,
        })
    }

    /// The raw on-the-wire packet-id byte.
    pub fn as_u8(self) -> u8 {
        self as u8
    }

    /// Human-readable packet name, matching the `unk_237640` strings.
    pub fn name(self) -> &'static str {
        match self {
            Self::RpcOk => "RPC_OK",
            Self::RpcFail => "RPC_FAIL",
            Self::RpcNotify => "RPC_NOTIFY",
            Self::Helo => "HELO",
            Self::PullMd => "PULL_MD",
            Self::PullMdResult => "PULL_MD_RESULT",
            Self::PushMd => "PUSH_MD",
            Self::PushMdResult => "PUSH_MD_RESULT",
            Self::GetPop => "GET_POP",
            Self::GetPopResult => "GET_POP_RESULT",
            Self::ListPeers => "LIST_PEERS",
            Self::ListPeersResult => "LIST_PEERS_RESULT",
            Self::KillSessions => "KILL_SESSIONS",
            Self::KillSessionsResult => "KILL_SESSIONS_RESULT",
            Self::DelHistory => "DEL_HISTORY",
            Self::DelHistoryResult => "DEL_HISTORY_RESULT",
            Self::ShowHistory => "SHOW_HISTORY",
            Self::ShowHistoryResult => "SHOW_HISTORY_RESULT",
            Self::DumpMd => "DUMP_MD",
            Self::DumpMdResult => "DUMP_MD_RESULT",
            Self::CleanDb => "CLEAN_DB",
            Self::DebugCtl => "DEBUGCTL",
            Self::Decompile => "DECOMPILE",
            Self::DecompileResult => "DECOMPILE_RESULT",
            Self::PushTlm => "PUSH_TLM",
            Self::ShowTlmSessions => "SHOW_TLM_SESSIONS",
            Self::ShowTlmSessionsResult => "SHOW_TLM_SESSIONS_RESULT",
            Self::ShowPushes => "SHOW_PUSHES",
            Self::ShowPushesResult => "SHOW_PUSHES_RESULT",
            Self::UserOperation => "USER_OPERATION",
            Self::ShowUsers => "SHOW_USERS",
            Self::ShowUsersResult => "SHOW_USERS_RESULT",
            Self::SetPassword => "SET_PASSWORD",
            Self::GetLuminaInfo => "GET_LUMINA_INFO",
            Self::GetLuminaInfoResult => "GET_LUMINA_INFO_RESULT",
            Self::GetLuminaStats => "GET_LUMINA_STATS",
            Self::GetLuminaStatsResult => "GET_LUMINA_STATS_RESULT",
            Self::GetFuncHistories => "GET_FUNC_HISTORIES",
            Self::GetFuncHistoriesResult => "GET_FUNC_HISTORIES_RESULT",
            Self::HeloResult => "HELO_RESULT",
        }
    }
}

impl fmt::Display for Packet {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}({})", self.name(), self.as_u8())
    }
}

/// Admin-required bit from `sub_421D0.c`. Any command whose auth mask AND
/// this is non-zero requires `session.is_admin == 1`.
pub const ADMIN_BIT: u32 = 0x4000_0000;

/// Feature/auth mask for command packets 14..=48, taken verbatim from
/// `dword_1B6840`. Indexed by `packet_id - 14`.
pub const AUTH_MASK: [u32; 35] = [
    0x0000_0001, // 14 PULL_MD
    0x0000_0001, // 15 PULL_MD_RESULT
    0x0000_0001, // 16 PUSH_MD
    0x0000_0001, // 17 PUSH_MD_RESULT
    0x0000_0001, // 18 GET_POP
    0x0000_0001, // 19 GET_POP_RESULT
    0x4000_0000, // 20 LIST_PEERS
    0x4000_0000, // 21 LIST_PEERS_RESULT
    0x4000_0000, // 22 KILL_SESSIONS
    0x4000_0000, // 23 KILL_SESSIONS_RESULT
    0x0000_0001, // 24 DEL_HISTORY
    0x0000_0001, // 25 DEL_HISTORY_RESULT
    0x4000_0001, // 26 SHOW_HISTORY
    0x4000_0001, // 27 SHOW_HISTORY_RESULT
    0x4000_0001, // 28 DUMP_MD
    0x4000_0001, // 29 DUMP_MD_RESULT
    0x4000_0000, // 30 CLEAN_DB
    0x4000_0000, // 31 DEBUGCTL
    0x0000_0002, // 32 DECOMPILE
    0x0000_0002, // 33 DECOMPILE_RESULT
    0x0000_0004, // 34 PUSH_TLM
    0x4000_0004, // 35 SHOW_TLM_SESSIONS
    0x4000_0004, // 36 SHOW_TLM_SESSIONS_RESULT
    0x4000_0001, // 37 SHOW_PUSHES
    0x4000_0001, // 38 SHOW_PUSHES_RESULT
    0x4000_0000, // 39 USER_OPERATION
    0x4000_0001, // 40 SHOW_USERS
    0x4000_0001, // 41 SHOW_USERS_RESULT
    0x4000_0000, // 42 SET_PASSWORD
    0x0000_0000, // 43 GET_LUMINA_INFO
    0x0000_0000, // 44 GET_LUMINA_INFO_RESULT
    0x4000_0000, // 45 GET_LUMINA_STATS
    0x4000_0000, // 46 GET_LUMINA_STATS_RESULT
    0x0000_0001, // 47 GET_FUNC_HISTORIES
    0x0000_0001, // 48 GET_FUNC_HISTORIES_RESULT
];

/// Look up the auth mask for a packet. Returns `None` for ids outside the
/// 14..=48 range (HELO, RPC_OK/FAIL/NOTIFY, HELO_RESULT).
pub fn auth_mask(id: u8) -> Option<u32> {
    if !(14..=48).contains(&id) {
        return None;
    }
    Some(AUTH_MASK[(id - 14) as usize])
}

/// Convenience wrapper: `auth_mask(id) & ADMIN_BIT != 0`.
pub fn admin_required(id: u8) -> bool {
    auth_mask(id).is_some_and(|m| m & ADMIN_BIT != 0)
}

/// Feature bits in the low nibble of the auth mask. Sessions carry a
/// per-user enabled-feature mask; the server ANDs it with the command's
/// low bits before dispatching.
pub mod features {
    /// `0x01` — generic metadata / history access (PULL_MD, PUSH_MD, ...).
    pub const METADATA: u32 = 0x0000_0001;
    /// `0x02` — decompile-as-a-service.
    pub const DECOMPILE: u32 = 0x0000_0002;
    /// `0x04` — telemetry uploads.
    pub const TELEMETRY: u32 = 0x0000_0004;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn packet_id_roundtrip_for_all_known_ids() {
        for raw in 10u8..=49 {
            let p = Packet::from_u8(raw).expect("known id");
            assert_eq!(p.as_u8(), raw);
        }
    }

    #[test]
    fn packet_id_rejects_unknown() {
        assert!(Packet::from_u8(0).is_none());
        assert!(Packet::from_u8(9).is_none());
        assert!(Packet::from_u8(50).is_none());
        assert!(Packet::from_u8(255).is_none());
    }

    #[test]
    fn auth_mask_admin_examples() {
        // LIST_PEERS, KILL_SESSIONS, CLEAN_DB, DEBUGCTL, USER_OPERATION,
        // SET_PASSWORD, GET_LUMINA_STATS, KILL_SESSIONS_RESULT, LIST_PEERS_RESULT
        for id in [20u8, 21, 22, 23, 30, 31, 39, 42, 45, 46] {
            assert!(admin_required(id), "id {id} should require admin");
        }
    }

    #[test]
    fn auth_mask_non_admin_examples() {
        // PULL_MD, PUSH_MD, GET_POP, DECOMPILE, PUSH_TLM, GET_LUMINA_INFO,
        // GET_FUNC_HISTORIES
        for id in [14u8, 16, 18, 32, 34, 43, 47] {
            assert!(!admin_required(id), "id {id} should NOT require admin");
        }
    }

    #[test]
    fn auth_mask_out_of_range() {
        assert!(auth_mask(13).is_none()); // HELO
        assert!(auth_mask(10).is_none()); // RPC_OK
        assert!(auth_mask(49).is_none()); // HELO_RESULT
    }

    #[test]
    fn show_history_uses_both_admin_and_metadata() {
        assert_eq!(auth_mask(26), Some(0x4000_0001));
    }
}

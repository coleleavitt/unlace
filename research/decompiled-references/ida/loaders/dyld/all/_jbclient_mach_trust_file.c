__int64 __fastcall jbclient_mach_trust_file(int a1, __int128 *a2)
{
  __int128 v2; // q1
  __int128 v3; // q1
  __int64 result; // x0
  _BYTE v5[32]; // [xsp+0h] [xbp-110h] BYREF
  __int128 v6; // [xsp+20h] [xbp-F0h]
  __int128 v7; // [xsp+30h] [xbp-E0h]
  __int128 v8; // [xsp+40h] [xbp-D0h]
  __int128 v9; // [xsp+50h] [xbp-C0h]
  __int128 v10; // [xsp+60h] [xbp-B0h]
  int v11; // [xsp+70h] [xbp-A0h]
  __int64 v12[3]; // [xsp+80h] [xbp-90h] BYREF
  __int128 v13; // [xsp+98h] [xbp-78h]
  __int64 v14; // [xsp+A8h] [xbp-68h]
  bool v15; // [xsp+B0h] [xbp-60h]
  __int128 v16; // [xsp+B8h] [xbp-58h]
  __int128 v17; // [xsp+C8h] [xbp-48h]
  __int128 v18; // [xsp+D8h] [xbp-38h]
  __int128 v19; // [xsp+E8h] [xbp-28h]

  v12[0] = 0x7800000000LL;
  v13 = xmmword_90D00;
  v14 = a1;
  v15 = a2 != nullptr;
  if ( a2 )
  {
    v2 = a2[1];
    v16 = *a2;
    v17 = v2;
    v3 = a2[3];
    v18 = a2[2];
    v19 = v3;
  }
  v11 = 0;
  v9 = 0u;
  v10 = 0u;
  v7 = 0u;
  v8 = 0u;
  v6 = 0u;
  memset(v5, 0, sizeof(v5));
  *(_DWORD *)&v5[4] = 116;
  result = jbclient_mach_send_msg((__int64)v12, (mach_msg_header_t *)v5);
  if ( !(_DWORD)result )
    return DWORD2(v6);
  return result;
}

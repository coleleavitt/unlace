__int64 __fastcall jbclient_mach_fork_fix(int a1)
{
  __int64 result; // x0
  __int64 v2[3]; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v3; // [xsp+18h] [xbp-A8h]
  int v4; // [xsp+28h] [xbp-98h]
  _BYTE v5[32]; // [xsp+30h] [xbp-90h] BYREF
  __int128 v6; // [xsp+50h] [xbp-70h]
  __int128 v7; // [xsp+60h] [xbp-60h]
  __int128 v8; // [xsp+70h] [xbp-50h]
  __int128 v9; // [xsp+80h] [xbp-40h]
  __int128 v10; // [xsp+90h] [xbp-30h]
  int v11; // [xsp+A0h] [xbp-20h]

  v2[0] = 0x3000000000LL;
  v3 = xmmword_90CF0;
  v4 = a1;
  v11 = 0;
  v9 = 0u;
  v10 = 0u;
  v7 = 0u;
  v8 = 0u;
  v6 = 0u;
  memset(v5, 0, sizeof(v5));
  *(_DWORD *)&v5[4] = 116;
  result = jbclient_mach_send_msg((__int64)v2, (mach_msg_header_t *)v5);
  if ( !(_DWORD)result )
    return DWORD2(v6);
  return result;
}

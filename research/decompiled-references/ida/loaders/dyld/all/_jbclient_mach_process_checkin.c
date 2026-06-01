__int64 __fastcall jbclient_mach_process_checkin(char *a1, char *a2, char *a3, _BYTE *a4)
{
  __int64 result; // x0
  __int64 v9[3]; // [xsp+0h] [xbp-CE0h] BYREF
  __int128 v10; // [xsp+18h] [xbp-CC8h]
  mach_msg_header_t v11; // [xsp+2Ch] [xbp-CB4h] BYREF
  unsigned int v12; // [xsp+54h] [xbp-C8Ch]
  char v13; // [xsp+5Ch] [xbp-C84h]
  char v14[1024]; // [xsp+5Dh] [xbp-C83h] BYREF
  char v15[37]; // [xsp+45Dh] [xbp-883h] BYREF
  char v16[2070]; // [xsp+482h] [xbp-85Eh] BYREF

  v9[0] = 0x2800000000LL;
  v10 = xmmword_90CE0;
  bzero(&v11, 0xC6Cu);
  v11.msgh_size = 3180;
  result = jbclient_mach_send_msg((__int64)v9, &v11);
  if ( !(_DWORD)result )
  {
    v14[1023] = 0;
    if ( a1 )
      strcpy_0(a1, v14);
    v15[36] = 0;
    if ( a2 )
      strcpy_0(a2, v15);
    v16[1999] = 0;
    if ( a3 )
      strcpy_0(a3, v16);
    if ( a4 )
      *a4 = v13;
    return v12;
  }
  return result;
}

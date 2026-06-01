__int64 __fastcall sub_E16D0(char a1, int a2)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v5; // rsi
  int v6; // eax
  __int64 nsec_stamp; // rax
  int v9; // eax
  unsigned __int64 v10; // [rsp+4h] [rbp-40h]

  if ( !dword_2515A4 )
    return 4294967294LL;
  if ( (a1 & 8) != 0 )
  {
    if ( !dbg )
      return 0xFFFFFFFFLL;
    if ( dword_25159C )
    {
      byte_2515A0 = 1;
      byte_251290 = 0;
      goto LABEL_3;
    }
    if ( dword_2515A4 < 0 && (int)sub_D46B0((a1 & 4) != 0, byte_251598) <= 0 )
      return 0xFFFFFFFFLL;
  }
LABEL_3:
  if ( (a1 & 0x10) != 0 )
    return 0;
  v10 = 0;
  if ( a2 != -1 )
    v10 = ((a1 & 0x20) == 0 ? 1000000000LL : 1000LL) * a2 + get_nsec_stamp();
  v3 = dword_2515A4;
  if ( (a1 & 2) != 0 )
  {
LABEL_14:
    if ( v3 < 0 )
      return qword_251330 & 0xFFFFFFF;
  }
  if ( v3 )
  {
    v4 = 8 * ((a1 & 4) != 0);
    if ( a2 == -1 )
    {
      while ( 1 )
      {
        v9 = sub_E14A0(v4);
        if ( !v9 )
          break;
        if ( v9 == 1 )
        {
          if ( (a1 & 1) != 0 )
            return qword_251330 & 0xFFFFFFF;
        }
        else if ( v9 == -1 )
        {
          return 0xFFFFFFFFLL;
        }
        sub_19F870(v4, 0xFFFFFFFFLL);
        if ( (a1 & 2) != 0 )
        {
          if ( dword_2515A4 < 0 )
            return qword_251330 & 0xFFFFFFF;
          if ( !dword_2515A4 )
            return 4294967294LL;
          v4 = 8 * ((a1 & 4) != 0);
        }
        else if ( !dword_2515A4 )
        {
          return 4294967294LL;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = 0xFFFFFFFFLL;
        if ( (*(_BYTE *)(dbg + 34LL) & 8) != 0 )
        {
          nsec_stamp = get_nsec_stamp();
          v5 = 0;
          if ( (__int64)(v10 - nsec_stamp) >= 0 )
            v5 = (unsigned int)(((int)v10 - (int)nsec_stamp) / 1000000);
        }
        v6 = sub_E14A0(v4);
        if ( !v6 )
          break;
        if ( v6 == 1 )
        {
          if ( (a1 & 1) != 0 )
            return qword_251330 & 0xFFFFFFF;
        }
        else if ( v6 == -1 )
        {
          return 0xFFFFFFFFLL;
        }
        sub_19F870(v4, v5);
        if ( v10 < get_nsec_stamp() )
          return 0;
        v3 = dword_2515A4;
        if ( (a1 & 2) != 0 )
          goto LABEL_14;
        if ( !dword_2515A4 )
          return 4294967294LL;
        v4 = 8 * ((a1 & 4) != 0);
      }
    }
    return qword_251330 & 0xFFFFFFF;
  }
  return 4294967294LL;
}


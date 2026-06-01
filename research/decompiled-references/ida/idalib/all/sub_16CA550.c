__int64 __fastcall sub_16CA550(__int64 a1, __int64 a2)
{
  int v3; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v4; // [rsp+10h] [rbp-38h] BYREF
  __int64 v5; // [rsp+18h] [rbp-30h]
  unsigned int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+24h] [rbp-24h]

  v4 = a1;
  v5 = a2;
  v7 = 0;
  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1851876211 && *(_BYTE *)(a1 + 4) == 102 )
    {
      v6 = 0;
      LOBYTE(v7) = 1;
      v3 = 1;
    }
    else
    {
      v3 = 1;
    }
    goto LABEL_4;
  }
  v3 = 1;
  if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 == 1852404336 && *(_WORD *)(a1 + 4) == 26228 )
    {
LABEL_19:
      LOBYTE(v7) = 1;
      v6 = 1;
      goto LABEL_20;
    }
  }
  else if ( a2 == 7 && *(_DWORD *)a1 == 1852404336 && *(_WORD *)(a1 + 4) == 26228 && *(_BYTE *)(a1 + 6) == 48 )
  {
    goto LABEL_19;
  }
LABEL_4:
  sub_16CA4E0((__int64)&v4, &v3, "syslog", 6);
  if ( (_BYTE)v7 )
    goto LABEL_20;
  if ( v5 == 8 && (*(_QWORD *)v4 == 0x676E69727453534ELL || *(_QWORD *)v4 == 0x676E697274534643LL) )
  {
    v6 = 2;
    LOBYTE(v7) = 1;
    goto LABEL_20;
  }
  if ( v5 == 8 && *(_QWORD *)v4 == 0x656D697466727473LL )
  {
    v6 = 3;
    LOBYTE(v7) = 1;
    goto LABEL_20;
  }
  if ( v5 != 7 )
  {
LABEL_20:
    v3 = 5;
    goto LABEL_21;
  }
  if ( *(_DWORD *)v4 == 1718776947 && *(_WORD *)(v4 + 4) == 28525 && *(_BYTE *)(v4 + 6) == 110 )
  {
    v6 = 4;
    LOBYTE(v7) = 1;
    v3 = 5;
  }
  else
  {
    v3 = 5;
    if ( *(_DWORD *)v4 == 1769107563 && *(_WORD *)(v4 + 4) == 29806 && *(_BYTE *)(v4 + 6) == 102
      || *(_DWORD *)v4 == 1601072483 && *(_WORD *)(v4 + 4) == 29285 && *(_BYTE *)(v4 + 6) == 114 )
    {
      return 5;
    }
  }
LABEL_21:
  if ( !(unsigned __int8)sub_16CA4E0((__int64)&v4, &v3, "vcmn_err", 8) )
    sub_16CA4E0((__int64)&v4, &v3, "zcmn_err", 8);
  if ( (_BYTE)v7 )
    return v6;
  if ( v5 == 15 )
  {
    if ( *(_QWORD *)v4 == 0x5F64736265657266LL
      && *(_DWORD *)(v4 + 8) == 1769107563
      && *(_WORD *)(v4 + 12) == 29806
      && *(_BYTE *)(v4 + 14) == 102 )
    {
      return 6;
    }
LABEL_26:
    if ( v5 == 6 && *(_DWORD *)v4 == 1818194799 && *(_WORD *)(v4 + 4) == 26479 )
      goto LABEL_47;
    return 10;
  }
  if ( v5 != 8 )
    goto LABEL_26;
  if ( *(_QWORD *)v4 != 0x65636172745F736FLL )
    return 10;
LABEL_47:
  v6 = 8;
  return 8;
}

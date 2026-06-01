__int64 __fastcall sub_11EA4A0(_DWORD *a1, __int64 a2)
{
  char v2; // al
  int v4; // [rsp+Ch] [rbp-4Ch] BYREF
  _DWORD *v5; // [rsp+10h] [rbp-48h] BYREF
  __int64 v6; // [rsp+18h] [rbp-40h]
  unsigned int v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+24h] [rbp-34h]

  v5 = a1;
  v6 = a2;
  v8 = 0;
  v4 = 37;
  if ( a2 == 4 && *a1 == 909652841 )
  {
    LOBYTE(v8) = 1;
    v2 = 1;
    v7 = 37;
  }
  else
  {
    if ( !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "i486", 4)
      && !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "i486SX", 6)
      && !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "i586", 4) )
    {
      sub_11EA430((__int64)&v5, &v4, "i686", 4);
    }
    v2 = v8;
  }
  v4 = 37;
  if ( !v2 && v6 == 7 && *v5 == 1953391984 && *((_WORD *)v5 + 2) == 30057 && *((_BYTE *)v5 + 6) == 109 )
  {
    v7 = 37;
    LOBYTE(v8) = 1;
    v4 = 38;
  }
  else
  {
    if ( !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "pentpro", 7)
      && !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "pentIIm3", 8)
      && !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "pentIIm5", 8) )
    {
      sub_11EA430((__int64)&v5, &v4, "pentium4", 8);
    }
    v4 = 38;
    if ( !(_BYTE)v8 && v6 == 6 && *v5 == 1597388920 && *((_WORD *)v5 + 2) == 13366 )
    {
      v7 = 38;
      LOBYTE(v8) = 1;
      v4 = 1;
      goto LABEL_15;
    }
  }
  sub_11EA430((__int64)&v5, &v4, "x86_64h", 7);
  v4 = 1;
  if ( !(_BYTE)v8 && v6 == 3 && *(_WORD *)v5 == 29281 && *((_BYTE *)v5 + 2) == 109 )
  {
    v7 = 1;
    LOBYTE(v8) = 1;
    goto LABEL_19;
  }
LABEL_15:
  if ( !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "armv4t", 6)
    && !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "armv5", 5)
    && !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "armv6", 5) )
  {
    sub_11EA430((__int64)&v5, &v4, "armv6m", 6);
  }
  v4 = 1;
  if ( !(_BYTE)v8 && v6 == 5 && *v5 == 1986884193 && *((_BYTE *)v5 + 4) == 55 )
  {
    v7 = 1;
    LOBYTE(v8) = 1;
    goto LABEL_23;
  }
LABEL_19:
  if ( !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "armv7em", 7)
    && !(unsigned __int8)sub_11EA430((__int64)&v5, &v4, "armv7k", 6) )
  {
    sub_11EA430((__int64)&v5, &v4, "armv7m", 6);
  }
  v4 = 1;
  if ( !(_BYTE)v8 && v6 == 6 && *v5 == 1986884193 && *((_WORD *)v5 + 2) == 29495 )
  {
    v7 = 1;
    LOBYTE(v8) = 1;
    v4 = 3;
    goto LABEL_26;
  }
LABEL_23:
  sub_11EA430((__int64)&v5, &v4, "xscale", 6);
  v4 = 3;
  if ( !(_BYTE)v8 && v6 == 5 && *v5 == 913142369 && *((_BYTE *)v5 + 4) == 52 )
    return 3;
LABEL_26:
  sub_11EA430((__int64)&v5, &v4, "arm64e", 6);
  if ( (_BYTE)v8 )
    return v7;
  switch ( v6 )
  {
    case 8LL:
      if ( *(_QWORD *)v5 == 0x32335F34366D7261LL )
      {
        v7 = 5;
        return 5;
      }
      break;
    case 4LL:
      if ( *v5 == 808466034 )
      {
        v7 = 25;
        return 25;
      }
      break;
    case 6LL:
      if ( *v5 == 1734634849 && *((_WORD *)v5 + 2) == 28259 )
        return 26;
      goto LABEL_31;
  }
  if ( v6 == 5 )
  {
    if ( *v5 == 1953527406 && *((_BYTE *)v5 + 4) == 120 )
      return 41;
LABEL_44:
    if ( v6 == 5 )
    {
      if ( *v5 == 1768189281 && *((_BYTE *)v5 + 4) == 108 )
        return 43;
      return 0;
    }
    goto LABEL_33;
  }
LABEL_31:
  if ( v6 != 7 )
    goto LABEL_44;
  if ( *v5 == 1953527406 && *((_WORD *)v5 + 2) == 13944 && *((_BYTE *)v5 + 6) == 52 )
    return 42;
LABEL_33:
  if ( v6 != 4 || *v5 != 1919512691 )
    return 0;
  v7 = 47;
  return 47;
}

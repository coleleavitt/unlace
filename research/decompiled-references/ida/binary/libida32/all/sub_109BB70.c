__int64 __fastcall sub_109BB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h] BYREF
  __int64 v6; // [rsp+18h] [rbp-30h]
  __int16 v7; // [rsp+20h] [rbp-28h]

  v5 = a2;
  v6 = a3;
  HIBYTE(v7) = 0;
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "intel", 5);
  if ( HIBYTE(v7) )
    goto LABEL_33;
  switch ( v6 )
  {
    case 3LL:
      if ( *(_WORD *)v5 == 28001 && *(_BYTE *)(v5 + 2) == 100 )
        goto LABEL_75;
      break;
    case 7LL:
      if ( *(_DWORD *)v5 == 1852731234 && *(_WORD *)(v5 + 4) == 27749 && *(_BYTE *)(v5 + 6) == 108 )
        goto LABEL_75;
      break;
    case 5LL:
      if ( *(_DWORD *)v5 == 1701998435 && *(_BYTE *)(v5 + 4) == 50 )
        goto LABEL_75;
      goto LABEL_7;
  }
  if ( v6 == 6 && *(_DWORD *)v5 == 1701998435 && *(_WORD *)(v5 + 4) == 14185 )
    goto LABEL_75;
LABEL_7:
  if ( v6 == 9 )
  {
    if ( *(_QWORD *)v5 == 0x30316D6166646D61LL && *(_BYTE *)(v5 + 8) == 104
      || *(_QWORD *)v5 == 0x35316D6166646D61LL && *(_BYTE *)(v5 + 8) == 104 )
    {
      goto LABEL_75;
    }
  }
  else if ( v6 == 10 )
  {
    if ( *(_QWORD *)v5 == 0x6F6D7265766C6973LL && *(_WORD *)(v5 + 8) == 29806 )
      goto LABEL_75;
    goto LABEL_12;
  }
  if ( v6 == 3 && *(_WORD *)v5 == 28267 && *(_BYTE *)(v5 + 2) == 108 )
    goto LABEL_75;
LABEL_12:
  switch ( v6 )
  {
    case 6LL:
      if ( *(_DWORD *)v5 == 1702261858 && *(_WORD *)(v5 + 4) == 12658
        || *(_DWORD *)v5 == 1702261858 && *(_WORD *)(v5 + 4) == 12914 )
      {
        goto LABEL_75;
      }
      break;
    case 9LL:
      if ( *(_QWORD *)v5 == 0x37316D6166646D61LL && *(_BYTE *)(v5 + 8) == 104 )
        goto LABEL_75;
      break;
    case 3LL:
      if ( *(_WORD *)v5 == 28267 && *(_BYTE *)(v5 + 2) == 109 )
        goto LABEL_75;
      goto LABEL_17;
  }
  if ( v6 == 8 )
  {
    if ( *(_QWORD *)v5 == 0x746E6F6D646C6F67LL )
      goto LABEL_75;
    goto LABEL_88;
  }
LABEL_17:
  if ( v6 == 13 )
  {
    if ( *(_QWORD *)v5 == 0x746E6F6D646C6F67LL && *(_DWORD *)(v5 + 8) == 1970040877 && *(_BYTE *)(v5 + 12) == 115 )
      goto LABEL_75;
    goto LABEL_19;
  }
LABEL_88:
  if ( v6 == 7 )
  {
    if ( *(_DWORD *)v5 == 1835364980 && *(_WORD *)(v5 + 4) == 28271 && *(_BYTE *)(v5 + 6) == 116 )
      goto LABEL_75;
    goto LABEL_90;
  }
LABEL_19:
  if ( v6 == 9 )
  {
    if ( *(_QWORD *)v5 == 0x39316D6166646D61LL && *(_BYTE *)(v5 + 8) == 104 )
      goto LABEL_75;
    goto LABEL_21;
  }
LABEL_90:
  if ( v6 == 13 )
  {
    if ( *(_QWORD *)v5 == 0x5F6E69786F61687ALL && *(_DWORD *)(v5 + 8) == 929915238 && *(_BYTE *)(v5 + 12) == 104 )
      goto LABEL_75;
    goto LABEL_92;
  }
LABEL_21:
  if ( v6 == 12 )
  {
    if ( *(_QWORD *)v5 == 0x6F66617272656973LL && *(_DWORD *)(v5 + 8) == 1953719666 )
      goto LABEL_75;
    goto LABEL_23;
  }
LABEL_92:
  if ( v6 == 10 )
  {
    if ( *(_QWORD *)v5 == 0x646972646E617267LL && *(_WORD *)(v5 + 8) == 25959 )
      goto LABEL_75;
    goto LABEL_94;
  }
LABEL_23:
  if ( v6 == 16 )
  {
    if ( *(_QWORD *)v5 ^ 0x7461777261656C63LL | *(_QWORD *)(v5 + 8) ^ 0x747365726F667265LL )
      goto LABEL_25;
LABEL_75:
    v7 = 257;
    goto LABEL_33;
  }
LABEL_94:
  if ( v6 == 9 )
  {
    if ( *(_QWORD *)v5 == 0x61316D6166646D61LL && *(_BYTE *)(v5 + 8) == 104 )
      goto LABEL_75;
    goto LABEL_27;
  }
LABEL_25:
  if ( v6 == 4 && *(_DWORD *)v5 == 1836020833 )
    goto LABEL_75;
LABEL_27:
  if ( v6 == 8 )
  {
    if ( *(_QWORD *)v5 == 0x30316D6166646D61LL
      || *(_QWORD *)v5 == 0x35316D6166646D61LL
      || *(_QWORD *)v5 == 0x61316D6166646D61LL )
    {
      goto LABEL_75;
    }
  }
  else if ( v6 == 3 )
  {
    if ( *(_WORD *)v5 == 27763 && *(_BYTE *)(v5 + 2) == 109 )
      goto LABEL_75;
LABEL_100:
    if ( v6 == 8 && *(_QWORD *)v5 == 0x6572656D74736577LL )
      goto LABEL_75;
    goto LABEL_33;
  }
  if ( v6 != 7 )
    goto LABEL_100;
  if ( *(_DWORD *)v5 == 1634231662 && *(_WORD *)(v5 + 4) == 25964 && *(_BYTE *)(v5 + 6) == 109 )
    goto LABEL_75;
LABEL_33:
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "sandybridge", 11);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "barcelona", 9);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "shanghai", 8);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "istanbul", 8);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "bdver1", 6);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "bdver2", 6);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "bdver3", 6);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "bdver4", 6);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "znver1", 6);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "ivybridge", 9);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "haswell", 7);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "broadwell", 9);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "skylake", 7);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "skylake-avx512", 14);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "cannonlake", 10);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "icelake-client", 14);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "icelake-server", 14);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "znver2", 6);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "cascadelake", 11);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "tigerlake", 9);
  if ( HIBYTE(v7) )
    goto LABEL_53;
  switch ( v6 )
  {
    case 10LL:
      if ( *(_QWORD *)v5 == 0x616C7265706F6F63LL && *(_WORD *)(v5 + 8) == 25963 )
        goto LABEL_69;
      break;
    case 14LL:
      if ( *(_QWORD *)v5 == 0x6572696870706173LL && *(_DWORD *)(v5 + 8) == 1768972658 && *(_WORD *)(v5 + 12) == 29540 )
        goto LABEL_69;
      break;
    case 9LL:
      if ( *(_QWORD *)v5 == 0x6B616C7265646C61LL && *(_BYTE *)(v5 + 8) == 101 )
        goto LABEL_69;
      goto LABEL_60;
  }
  if ( v6 == 6 )
  {
    if ( *(_DWORD *)v5 == 1702260346 && *(_WORD *)(v5 + 4) == 13170 )
      goto LABEL_69;
    goto LABEL_39;
  }
LABEL_60:
  if ( v6 == 10 )
  {
    if ( *(_QWORD *)v5 == 0x616C74656B636F72LL && *(_WORD *)(v5 + 8) == 25963 )
      goto LABEL_69;
    goto LABEL_62;
  }
LABEL_39:
  if ( v6 == 22 )
  {
    if ( !(*(_QWORD *)v5 ^ 0x5F6E69786F61687ALL | *(_QWORD *)(v5 + 8) ^ 0x756C5F68376D6166LL)
      && *(_DWORD *)(v5 + 16) == 2053204330
      && *(_WORD *)(v5 + 20) == 26997 )
    {
      goto LABEL_69;
    }
    goto LABEL_41;
  }
LABEL_62:
  if ( v6 == 6 )
  {
    if ( *(_DWORD *)v5 == 1702260346 && *(_WORD *)(v5 + 4) == 13426 )
      goto LABEL_69;
    goto LABEL_64;
  }
LABEL_41:
  if ( v6 == 13 )
  {
    if ( *(_QWORD *)v5 == 0x726574696E617267LL && *(_DWORD *)(v5 + 8) == 1684631649 && *(_BYTE *)(v5 + 12) == 115 )
      goto LABEL_69;
    goto LABEL_43;
  }
LABEL_64:
  if ( v6 == 15 )
  {
    if ( *(_QWORD *)v5 == 0x726574696E617267LL
      && *(_DWORD *)(v5 + 8) == 1684631649
      && *(_WORD *)(v5 + 12) == 11635
      && *(_BYTE *)(v5 + 14) == 100 )
    {
      goto LABEL_69;
    }
    goto LABEL_45;
  }
LABEL_43:
  if ( v6 == 9 && *(_QWORD *)v5 == 0x6B616C776F727261LL && *(_BYTE *)(v5 + 8) == 101 )
    goto LABEL_69;
LABEL_45:
  if ( v6 == 11 )
  {
    if ( *(_QWORD *)v5 == 0x6B616C776F727261LL && *(_WORD *)(v5 + 8) == 11621 && *(_BYTE *)(v5 + 10) == 115
      || *(_QWORD *)v5 == 0x6C726568746E6170LL && *(_WORD *)(v5 + 8) == 27489 && *(_BYTE *)(v5 + 10) == 101 )
    {
      goto LABEL_69;
    }
  }
  else if ( v6 == 6 )
  {
    if ( *(_DWORD *)v5 == 1702260346 && *(_WORD *)(v5 + 4) == 13682 )
      goto LABEL_69;
    goto LABEL_50;
  }
  if ( v6 == 13
    && *(_QWORD *)v5 == 0x72646E6F6D616964LL
    && *(_DWORD *)(v5 + 8) == 1684631649
    && *(_BYTE *)(v5 + 12) == 115 )
  {
LABEL_69:
    v7 = 257;
    goto LABEL_53;
  }
LABEL_50:
  if ( v6 == 10
    && (*(_QWORD *)v5 == 0x616C726F74706172LL && *(_WORD *)(v5 + 8) == 25963
     || *(_QWORD *)v5 == 0x616C726F6574656DLL && *(_WORD *)(v5 + 8) == 25963) )
  {
    goto LABEL_69;
  }
LABEL_53:
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "emeraldrapids", 13);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "lunarlake", 9);
  v4 = 1;
  sub_B5A360((__int64)&v5, &v4, "gracemont", 9);
  result = HIBYTE(v7);
  if ( HIBYTE(v7) )
    return (unsigned __int8)v7;
  return result;
}


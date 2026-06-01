__int64 __fastcall sub_80FAB0(_QWORD *a1)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _WORD *v8; // rax
  int v9; // edx

  if ( (unsigned int)((__int64)(a1[3] - a1[2]) >> 3) != 1 )
    return 0;
  v3 = *(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v3 + 16) - 2) > 4u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      return 0;
    v3 = sub_B0D320(v3);
    if ( !v3 )
      return 0;
  }
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_BYTE *)(v4 + 16);
  switch ( v5 )
  {
    case 13:
      if ( (((*(_WORD *)(v4 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        return 0;
      break;
    case 46:
      v6 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v6 + 74) & 1) == 0 && *(_QWORD *)(v6 + 128) <= 7u || *(char *)(sub_B14A40(v4) + 76) < 0 )
        return 0;
      break;
    case 10:
      break;
    default:
      return 0;
  }
  v7 = *(_QWORD *)a1[2];
  if ( !v7 )
    return 0;
  v8 = (_WORD *)sub_80F310(v7);
  v9 = *v8 & 0x1FF;
  LOBYTE(v8) = (_WORD)v9 == 10;
  LOBYTE(v9) = (_WORD)v9 == 38;
  return v9 | (unsigned int)v8;
}


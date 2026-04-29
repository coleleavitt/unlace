unsigned __int64 __fastcall sub_10730(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx

  v2 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v2;
  if ( !v2 || (v3 = v2 + 24, v2 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v11 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v11 < 0x20 )
      v11 = 32;
    *(_QWORD *)(a1 + 32) = v11;
    v12 = v11 + 8;
    v13 = malloc(v11 + 8);
    v14 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v13;
    *v13 = v14;
    v2 = ((unsigned __int64)v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v13 + v12;
    v3 = v2 + 24;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_WORD *)(v2 + 16) = a2;
  *(_BYTE *)(v2 + 18) = 0;
  LODWORD(v3) = *(_DWORD *)(a1 + 96);
  while ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3);
    *(_DWORD *)(a1 + 96) = v3;
    if ( !v4 )
      break;
    if ( !v2 )
      continue;
    sub_C080(v2, v4, (_QWORD *)a1);
    LODWORD(v3) = *(_DWORD *)(a1 + 96);
  }
  sub_C3A0(v2, 0);
  v5 = sub_102E0((_QWORD *)a1);
  if ( v2 && v5 )
  {
    sub_C080(v2, v5, (_QWORD *)a1);
    v6 = sub_105A0((_QWORD *)a1);
    if ( v6 )
      sub_C080(v2, v6, (_QWORD *)a1);
    else
      v2 = 0;
  }
  else
  {
    v2 = 0;
    sub_105A0((_QWORD *)a1);
  }
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 >= *(_QWORD *)(a1 + 64) || *(_BYTE *)(*(_QWORD *)(a1 + 56) + v7) != 112 )
    return 0;
  *(_QWORD *)(a1 + 72) = v7 + 1;
  v8 = sub_105A0((_QWORD *)a1);
  if ( v2 && v8 )
    sub_C080(v2, v8, (_QWORD *)a1);
  else
    v2 = 0;
  v9 = *(_QWORD *)(a1 + 72);
  if ( v9 >= *(_QWORD *)(a1 + 64) || *(_BYTE *)(*(_QWORD *)(a1 + 56) + v9) != 114 )
    return 0;
  *(_QWORD *)(a1 + 72) = v9 + 1;
  return v2;
}

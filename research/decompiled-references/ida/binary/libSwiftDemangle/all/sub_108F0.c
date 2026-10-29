__int64 __fastcall sub_108F0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx

  v1 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v1;
  if ( !v1 || (v2 = v1 + 24, v1 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v8 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v8 < 0x20 )
      v8 = 32;
    *(_QWORD *)(a1 + 32) = v8;
    v9 = v8 + 8;
    v10 = malloc(v8 + 8);
    v11 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v10;
    *v10 = v11;
    v1 = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v10 + v9;
    v2 = v1 + 24;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_WORD *)(v1 + 16) = 311;
  *(_BYTE *)(v1 + 18) = 0;
  LODWORD(v2) = *(_DWORD *)(a1 + 96);
  while ( (_DWORD)v2 )
  {
    v2 = (unsigned int)(v2 - 1);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2);
    *(_DWORD *)(a1 + 96) = v2;
    if ( !v3 )
      break;
    if ( !v1 )
      continue;
    sub_C080(v1, v3, (_QWORD *)a1);
    LODWORD(v2) = *(_DWORD *)(a1 + 96);
  }
  sub_C3A0(v1, 0);
  v4 = sub_102E0((_QWORD *)a1);
  if ( v1 && v4 )
  {
    sub_C080(v1, v4, (_QWORD *)a1);
    v5 = sub_105A0((_QWORD *)a1);
    if ( v5 )
      sub_C080(v1, v5, (_QWORD *)a1);
    else
      v1 = 0;
  }
  else
  {
    v1 = 0;
    sub_105A0((_QWORD *)a1);
  }
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 >= *(_QWORD *)(a1 + 64) )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + v6) != 112 )
    return 0;
  *(_QWORD *)(a1 + 72) = v6 + 1;
  v12 = sub_105A0((_QWORD *)a1);
  v13 = sub_CCF0((_QWORD *)a1, v1, v12);
  v14 = *(_QWORD *)(a1 + 72);
  v15 = v13;
  if ( v14 >= *(_QWORD *)(a1 + 64) )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + v14) != 114 )
    return 0;
  *(_QWORD *)(a1 + 72) = v14 + 1;
  v16 = sub_105A0((_QWORD *)a1);
  result = sub_CCF0((_QWORD *)a1, v15, v16);
  v17 = *(_QWORD *)(a1 + 72);
  if ( v17 >= *(_QWORD *)(a1 + 64) || *(_BYTE *)(*(_QWORD *)(a1 + 56) + v17) != 80 )
    return 0;
  *(_QWORD *)(a1 + 72) = v17 + 1;
  return result;
}


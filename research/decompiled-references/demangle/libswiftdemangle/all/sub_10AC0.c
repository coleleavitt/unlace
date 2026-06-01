__int64 __fastcall sub_10AC0(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  char v7; // al
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rdx

  v1 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v1;
  if ( !v1 || (v2 = v1 + 24, v1 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v17 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v17 < 0x20 )
      v17 = 32;
    *(_QWORD *)(a1 + 32) = v17;
    v18 = v17 + 8;
    v19 = malloc(v17 + 8);
    v20 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v19;
    *v19 = v20;
    v1 = ((unsigned __int64)v19 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v19 + v18;
    v2 = v1 + 24;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_WORD *)(v1 + 16) = 313;
  *(_BYTE *)(v1 + 18) = 0;
  LODWORD(v2) = *(_DWORD *)(a1 + 96);
  if ( (_DWORD)v2
    && (v3 = (unsigned int)(v2 - 1), v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3), *(_WORD *)(v4 + 16) == 40) )
  {
    *(_DWORD *)(a1 + 96) = v3;
    LODWORD(v2) = v2 - 1;
  }
  else
  {
    v4 = 0;
  }
  while ( (_DWORD)v2 )
  {
    v2 = (unsigned int)(v2 - 1);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2);
    *(_DWORD *)(a1 + 96) = v2;
    if ( !v5 )
      break;
    if ( !v1 )
      continue;
    sub_C080(v1, v5, (_QWORD *)a1);
    LODWORD(v2) = *(_DWORD *)(a1 + 96);
  }
  sub_C3A0(v1, 0);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 >= *(_QWORD *)(a1 + 64) )
    return 0;
  *(_QWORD *)(a1 + 72) = v6 + 1;
  v7 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v6);
  if ( v7 == 108 )
  {
    v8 = 108;
  }
  else if ( v7 > 108 )
  {
    v14 = 0;
    if ( v7 != 114 )
      return v14;
    v8 = 114;
  }
  else if ( v7 == 100 )
  {
    v8 = 100;
  }
  else
  {
    if ( v7 != 102 )
      return 0;
    v8 = 102;
  }
  v9 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v9;
  if ( !v9 || (v10 = v9 + 24, v9 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v21 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v21 < 0x20 )
      v21 = 32;
    *(_QWORD *)(a1 + 32) = v21;
    v22 = v21 + 8;
    v23 = malloc(v21 + 8);
    v24 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v23;
    *v23 = v24;
    v9 = ((unsigned __int64)v23 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v23 + v22;
    v10 = v9 + 24;
  }
  *(_QWORD *)(a1 + 8) = v10;
  *(_WORD *)(v9 + 16) = 99;
  *(_BYTE *)(v9 + 18) = 2;
  *(_QWORD *)v9 = v8;
  if ( v1 && v9 )
  {
    sub_C080(v1, v9, (_QWORD *)a1);
    v11 = sub_105A0((_QWORD *)a1);
    if ( v11 )
      sub_C080(v1, v11, (_QWORD *)a1);
    else
      v1 = 0;
  }
  else
  {
    v1 = 0;
    sub_105A0((_QWORD *)a1);
  }
  v12 = *(_QWORD *)(a1 + 72);
  if ( v12 < *(_QWORD *)(a1 + 64) && *(_BYTE *)(*(_QWORD *)(a1 + 56) + v12) == 112 )
  {
    *(_QWORD *)(a1 + 72) = v12 + 1;
    v13 = sub_105A0((_QWORD *)a1);
    v14 = sub_CCF0((_QWORD *)a1, v1, v13);
    v15 = *(_QWORD *)(a1 + 72);
    if ( v15 < *(_QWORD *)(a1 + 64) && *(_BYTE *)(*(_QWORD *)(a1 + 56) + v15) == 114 )
    {
      *(_QWORD *)(a1 + 72) = v15 + 1;
      sub_CCF0((_QWORD *)a1, v14, v4);
      return v14;
    }
  }
  return 0;
}

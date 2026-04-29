unsigned __int64 __fastcall sub_11C80(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  char v4; // al
  int v5; // eax
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int16 v23; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 64);
  v24 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 >= v1 )
  {
    LOBYTE(v23) = 0;
    v4 = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 72) = v2 + 1;
    LOBYTE(v23) = *(_BYTE *)(v3 + v2);
    if ( v1 <= v2 + 1 )
    {
      v4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = v2 + 2;
      v4 = *(_BYTE *)(v3 + v2 + 1);
    }
  }
  HIBYTE(v23) = v4;
  v5 = sub_B7C0(&v23, 2);
  v6 = v5;
  if ( v5 < 0 )
    return 0;
  v7 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 || (v8 = v7 + 24, v7 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v19 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v19 < 0x20 )
      v19 = 32;
    *(_QWORD *)(a1 + 32) = v19;
    v20 = v19 + 8;
    v21 = malloc(v19 + 8);
    v22 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v21;
    *v21 = v22;
    v7 = ((unsigned __int64)v21 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v21 + v20;
    v8 = v7 + 24;
  }
  *(_QWORD *)(a1 + 8) = v8;
  *(_WORD *)(v7 + 16) = 241;
  *(_BYTE *)(v7 + 18) = 0;
  v9 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v9;
  if ( !v9 || (v10 = v9 + 24, v9 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v15 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v15 < 0x20 )
      v15 = 32;
    *(_QWORD *)(a1 + 32) = v15;
    v16 = v15 + 8;
    v17 = malloc(v15 + 8);
    v18 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v17;
    *v17 = v18;
    v9 = ((unsigned __int64)v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v17 + v16;
    v10 = v9 + 24;
  }
  *(_QWORD *)(a1 + 8) = v10;
  *(_WORD *)(v9 + 16) = 99;
  *(_BYTE *)(v9 + 18) = 2;
  *(_QWORD *)v9 = v6;
  if ( v9 && v7 )
    sub_C080(v7, v9, (_QWORD *)a1);
  v11 = *(_DWORD *)(a1 + 96);
  if ( !v11 )
    return 0;
  v12 = (unsigned int)(v11 - 1);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v12);
  if ( *(_WORD *)(v13 + 16) != 221 )
    return 0;
  *(_DWORD *)(a1 + 96) = v12;
  if ( !v13 || !v7 )
    return 0;
  sub_C080(v7, v13, (_QWORD *)a1);
  return v7;
}

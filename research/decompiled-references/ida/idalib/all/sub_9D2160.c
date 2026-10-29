void __fastcall sub_9D2160(__int64 a1, char *a2, _QWORD *a3)
{
  char *v5; // rbp
  char *v6; // rbx
  char *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  unsigned __int64 v13; // r14
  _QWORD *v14; // rsi
  char *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  char *v18; // rax
  __int64 v19; // rdx
  char *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  char *i; // r15
  _DWORD **v24; // rdi
  _QWORD *v25; // [rsp+8h] [rbp-50h] BYREF
  char *v26; // [rsp+10h] [rbp-48h]
  _QWORD *v27; // [rsp+18h] [rbp-40h]

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  v8 = (__int64)&v5[-*(_QWORD *)a1] >> 4;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_24;
  }
  v9 = 2 * v8;
  v10 = 0x1FFFFFFFFFFFFFFELL;
  if ( v8 > 2 * v8 || v9 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_24:
    v10 = 2 * v9;
LABEL_3:
    v27 = a3;
    v26 = v7;
    v11 = (_QWORD *)operator new(v10 * 8);
    v7 = v26;
    a3 = v27;
    v25 = v11;
    v12 = &v11[v10];
    v13 = (unsigned __int64)(v11 + 2);
    v14 = v11;
    goto LABEL_4;
  }
  v25 = nullptr;
  v13 = 16;
  v12 = nullptr;
  v14 = nullptr;
LABEL_4:
  v15 = &v7[(_QWORD)v14];
  *(_QWORD *)v15 = *a3;
  v16 = a3[1];
  a3[1] = 0;
  *((_QWORD *)v15 + 1) = v16;
  if ( a2 != v6 )
  {
    v17 = v14;
    v18 = v6;
    do
    {
      *v17 = *(_QWORD *)v18;
      v19 = *((_QWORD *)v18 + 1);
      v17[1] = v19;
      if ( v19 )
        ++*(_DWORD *)(v19 + 68);
      v18 += 16;
      v17 += 2;
    }
    while ( a2 != v18 );
    v13 = (unsigned __int64)v25 + ((a2 - 16 - v6) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  v20 = a2;
  v21 = (_QWORD *)v13;
  if ( a2 != v5 )
  {
    do
    {
      *v21 = *(_QWORD *)v20;
      v22 = *((_QWORD *)v20 + 1);
      v21[1] = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 68);
      v20 += 16;
      v21 += 2;
    }
    while ( v20 != v5 );
    v13 += ((v5 - a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  for ( i = v6; i != v5; i += 16 )
  {
    v24 = (_DWORD **)(i + 8);
    sub_9D1F20(v24);
  }
  if ( v6 )
    operator delete(v6);
  v25 = (_QWORD *)v13;
  *(_QWORD *)(a1 + 16) = v12;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v25);
}

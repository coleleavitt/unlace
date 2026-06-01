/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C3C0
// Address: 0x000000000046C3C0

//----- (000000000046C3C0) ----------------------------------------------------
_QWORD *__fastcall sub_46C3C0(int a1, unsigned __int64 *a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // eax
  unsigned __int64 v10; // rsi
  int v11; // eax
  const char *v12; // r14
  unsigned __int64 v13; // rbp
  const char *v14; // rbx
  const char *v15; // rax
  size_t v17; // rax
  size_t v18; // r9
  size_t v19; // rax
  size_t v20; // rbx
  void *v21; // rdi
  unsigned __int64 v22; // rbp
  void *v23; // rdi
  size_t v24; // rbx
  void *v25; // rax
  void *v26; // rax
  _QWORD *v27; // [rsp+0h] [rbp-48h]
  size_t v28; // [rsp+8h] [rbp-40h]
  size_t v29; // [rsp+8h] [rbp-40h]

  v27 = nullptr;
  if ( a1 > 0 )
  {
    v3 = 7LL * a1;
    v4 = (_QWORD *)operator new[](v3 * 8 + 8);
    *v4 = a1;
    v27 = v4 + 1;
    v5 = v4 + 1;
    v6 = a1 - 2LL;
    do
    {
      --v6;
      *((_OWORD *)v5 + 1) = 0;
      v5 += 7;
      *(v5 - 7) = 0;
      *(v5 - 6) = 0;
      *(v5 - 3) = 0;
      *((_OWORD *)v5 - 1) = 0;
    }
    while ( v6 != -2 );
    v7 = (__int64)(v4 + 2);
    v8 = (__int64)&v4[v3 + 2];
    do
    {
      v9 = sub_47FD50(a2, a2[1]);
      v10 = a2[1];
      *(_DWORD *)(v7 - 8) = v9;
      v11 = sub_47FD50(a2, v10);
      v12 = (const char *)*a2;
      v13 = a2[1];
      *(_DWORD *)(v7 - 4) = v11;
      v14 = v12;
      do
      {
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_8;
        ++v14;
      }
      while ( *(v14 - 1) );
      *a2 = (unsigned __int64)v14;
      if ( !v12 || (v17 = strlen(v12), (v18 = v17) == 0) )
      {
        v12 = v14;
LABEL_8:
        *(_QWORD *)(v7 + 8) = 0;
        goto LABEL_9;
      }
      v23 = *(void **)v7;
      v24 = v17 + 1;
      if ( *(_QWORD *)(v7 + 16) < v17 + 1 )
      {
        v29 = v17;
        v26 = sub_481540(v7, *(void **)v7, v17 + 1, 1u);
        v18 = v29;
        *(_QWORD *)v7 = v26;
        v23 = v26;
      }
      *(_QWORD *)(v7 + 8) = v24;
      v28 = v18;
      memmove(v23, v12, v18);
      *(_BYTE *)(*(_QWORD *)v7 + v28) = 0;
      v13 = a2[1];
      v12 = (const char *)*a2;
LABEL_9:
      v15 = v12;
      do
      {
        if ( (unsigned __int64)v15 >= v13 )
          goto LABEL_12;
        ++v15;
      }
      while ( *(v15 - 1) );
      *a2 = (unsigned __int64)v15;
      if ( !v12 || (v19 = strlen(v12), (v20 = v19) == 0) )
      {
LABEL_12:
        *(_QWORD *)(v7 + 32) = 0;
        goto LABEL_13;
      }
      v21 = *(void **)(v7 + 24);
      v22 = v19 + 1;
      if ( *(_QWORD *)(v7 + 40) < v19 + 1 )
      {
        v25 = sub_481540(v7 + 24, *(void **)(v7 + 24), v22, 1u);
        *(_QWORD *)(v7 + 24) = v25;
        v21 = v25;
      }
      *(_QWORD *)(v7 + 32) = v22;
      memmove(v21, v12, v20);
      *(_BYTE *)(*(_QWORD *)(v7 + 24) + v20) = 0;
LABEL_13:
      v7 += 56;
    }
    while ( v7 != v8 );
  }
  return v27;
}

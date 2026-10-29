/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400425D0
// Address: 0x00000001400425D0

//----- (00000001400425D0) ----------------------------------------------------
__int64 __fastcall sub_1400425D0(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  void *v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  size_t v20; // r8

  v6 = a1 + 34;
  sub_14001A450(a1 + 34, 0);
  (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(*a1 + 24))(a1, v6, a3);
  v7 = a1[35];
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v9 = 0;
    do
    {
      v10 = (_QWORD *)(v9 + *(_QWORD *)a2);
      v11 = (void *)v10[1];
      if ( v11 )
      {
        v10[2] = 0;
        j_free(v11);
        v10[1] = 0;
        v10[3] = 0;
      }
      v9 += 32;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a2 + 8) = 0;
  if ( v7 > *(_QWORD *)(a2 + 16) )
    *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v7, 0x20u);
  if ( v7 )
  {
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(a2 + 8) + 1LL;
      if ( v13 > *(_QWORD *)(a2 + 16) )
        *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v13, 0x20u);
      v14 = *(_QWORD *)a2 + 32LL * *(_QWORD *)(a2 + 8);
      v15 = v14 + 8;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      ++*(_QWORD *)(a2 + 8);
      v16 = v12 + *v6;
      *(_DWORD *)v14 = *(_DWORD *)v16;
      v17 = 8;
      if ( *(_QWORD *)(v16 + 48) > 1u )
        v17 = 40;
      v18 = v16 + v17;
      if ( v15 != v18 )
      {
        v19 = *(_QWORD *)(v18 + 8);
        v20 = v19 - 1;
        if ( !v19 )
          v20 = 0;
        if ( v20 )
          sub_140001810(v15, *(const void **)v18, v20);
        else
          *(_QWORD *)(v15 + 8) = 0;
      }
      v12 += 64;
      --v7;
    }
    while ( v7 );
  }
  return 1;
}

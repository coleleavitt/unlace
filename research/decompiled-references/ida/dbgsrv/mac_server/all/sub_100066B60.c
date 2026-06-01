/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066B60
// Address: 0x0000000100066B60

//----- (0000000100066B60) ----------------------------------------------------
__int64 __fastcall sub_100066B60(__int64 *a1, __int64 a2, __int64 *a3, unsigned __int64 *a4)
{
  int v7; // eax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  char *v10; // rax
  const void *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  char *v18; // rax
  const void *v19; // rsi
  unsigned __int64 v20; // rax
  void *v21; // rdi
  unsigned __int8 v23; // [rsp+Eh] [rbp-32h] BYREF
  unsigned __int8 v24; // [rsp+Fh] [rbp-31h] BYREF

  sub_100066970(a1, 1, a4);
  v7 = unpack_dd(a4, a4[1]);
  v8 = v7;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 >= v7 )
  {
    if ( v9 != v7 )
    {
      v23 = 0;
      sub_10001CE90(a2, v7, &v23);
    }
  }
  else
  {
    v10 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < v8 )
    {
      v10 = (char *)qvector_reserve(a2, *(void **)a2, v8, 1u);
      *(_QWORD *)a2 = v10;
      v9 = *(_QWORD *)(a2 + 8);
    }
    __bzero(&v10[v9], v8 - v9);
    *(_QWORD *)(a2 + 8) = v8;
  }
  v11 = (const void *)*a4;
  v12 = a4[1];
  v13 = *a4 + v8;
  if ( v13 >= *a4 && v13 <= v12 )
  {
    v14 = *(void **)a2;
    *a4 = v13;
    memcpy(v14, v11, v8);
    v12 = a4[1];
  }
  *(_QWORD *)(a2 + 24) = unpack_dq(a4, v12) - 1;
  v15 = unpack_dd(a4, a4[1]);
  v16 = v15;
  v17 = *(_QWORD *)(a2 + 40);
  if ( v17 >= v15 )
  {
    if ( v17 != v15 )
    {
      v24 = 0;
      sub_10001CE90(a2 + 32, v15, &v24);
    }
  }
  else
  {
    v18 = *(char **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 48) < v16 )
    {
      v18 = (char *)qvector_reserve(a2 + 32, *(void **)(a2 + 32), v16, 1u);
      *(_QWORD *)(a2 + 32) = v18;
      v17 = *(_QWORD *)(a2 + 40);
    }
    __bzero(&v18[v17], v16 - v17);
    *(_QWORD *)(a2 + 40) = v16;
  }
  v19 = (const void *)*a4;
  v20 = *a4 + v16;
  if ( v20 >= *a4 && v20 <= a4[1] )
  {
    v21 = *(void **)(a2 + 32);
    *a4 = v20;
    memcpy(v21, v19, v16);
  }
  if ( a3 )
    sub_100066970(a3, 0, a4);
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);

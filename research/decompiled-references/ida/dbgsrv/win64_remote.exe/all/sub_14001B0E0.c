/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001B0E0
// Address: 0x000000014001B0E0

//----- (000000014001B0E0) ----------------------------------------------------
__int64 __fastcall sub_14001B0E0(__int64 a1, const void **a2, int a3)
{
  const void **i; // r15
  unsigned __int64 v6; // r8
  __int64 *v7; // rsi
  const void *v8; // rbp
  size_t v9; // rax
  __int64 v10; // rsi
  void *v11; // rdx
  unsigned __int64 v12; // r8
  void *v13; // rdx
  unsigned __int64 v14; // r8
  __int64 result; // rax

  for ( i = a2; *i; ++*(_QWORD *)(a1 + 56) )
  {
    v6 = *(_QWORD *)(a1 + 32) + 1LL;
    if ( v6 > *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v6, 0x18u);
    v7 = (__int64 *)(*(_QWORD *)(a1 + 24) + 24LL * *(_QWORD *)(a1 + 32));
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    ++*(_QWORD *)(a1 + 32);
    v8 = *i++;
    if ( v8 && (v9 = strlen((const char *)v8)) != 0 )
      sub_140001810((__int64)v7, v8, v9);
    else
      v7[1] = 0;
    v10 = *v7;
    v11 = *(void **)(a1 + 48);
    v12 = *(_QWORD *)(a1 + 56) + 1LL;
    if ( v12 > *(_QWORD *)(a1 + 64) )
    {
      v11 = sub_14005ABE0(a1 + 48, v11, v12, 8u);
      *(_QWORD *)(a1 + 48) = v11;
    }
    *((_QWORD *)v11 + *(_QWORD *)(a1 + 56)) = v10;
  }
  v13 = *(void **)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 56) + 1LL;
  if ( v14 > *(_QWORD *)(a1 + 64) )
  {
    v13 = sub_14005ABE0(a1 + 48, v13, v14, 8u);
    *(_QWORD *)(a1 + 48) = v13;
  }
  result = *(_QWORD *)(a1 + 56);
  *((_QWORD *)v13 + result) = 0;
  ++*(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 96) = a3;
  return result;
}

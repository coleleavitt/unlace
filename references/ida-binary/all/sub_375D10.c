_DWORD *__fastcall sub_375D10(
        __int64 a1,
        const char **a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  const char *v11; // rsi
  _DWORD *v12; // rbx
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ebp
  char v26; // [rsp+0h] [rbp-18h]

  v10 = qalloc_or_throw(344);
  v11 = *a2;
  v12 = (_DWORD *)v10;
  sub_374830(v10, v11, *(double *)a3.m128_u64, a4, a5, a6, v13, v14, a9, a10);
  v20 = *(_QWORD *)(a1 + 440);
  v21 = 1;
  if ( v20 )
  {
    v22 = *(_QWORD *)(v20 + 8);
    if ( v22 )
      v21 = *(unsigned int *)(v22 + 36);
  }
  v23 = v12[58];
  v12[9] = v21;
  if ( v23 <= 0 )
    sub_169700(
      (int)"Coherency check failed: pg->get_node_count() > 0\n",
      (__int64)v11,
      v21,
      v15,
      v16,
      v17,
      a3,
      a4,
      a5,
      a6,
      v18,
      v19,
      a9,
      a10,
      v26);
  v24 = sub_373B00((__int64)v12, *(double *)a3.m128_u64);
  if ( v24 >= (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 64LL))(v12) )
    sub_373A10((__int64)v12, 0, *(double *)a3.m128_u64);
  return v12;
}

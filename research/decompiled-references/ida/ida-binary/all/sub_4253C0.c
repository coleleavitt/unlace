__int64 __fastcall sites_chooser_t__::vfunc_12(
        char *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  char v11; // al
  double v12; // xmm4_8
  double v13; // xmm5_8
  const void **v14; // rbx
  __int64 v15; // r13
  bool v16; // bp
  unsigned int v17; // r14d
  const void *v18; // rsi

  v10 = sub_426230(a1, (const char *)a2);
  v11 = sub_4170D0(v10);
  v14 = *(const void ***)a2;
  v15 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)a2 )
    return 0;
  v16 = v11;
  v17 = 0;
  do
  {
    v18 = *v14++;
    v17 |= (unsigned __int8)sub_423CA0(a1, v18, v16, a3, a4, a5, a6, v12, v13, a9, a10);
  }
  while ( (const void **)v15 != v14 );
  return v17;
}

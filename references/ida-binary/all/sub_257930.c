bool __fastcall proc_chooser_t__::vfunc_4(
        _QWORD *a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 i; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi

  v10 = (__int64)(a1 + 23);
  v12 = a1[23];
  if ( v12 )
  {
    v13 = a1[24];
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = v12 + 32 * i;
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          *(_QWORD *)(v15 + 16) = 0;
          qfree(v16, a2);
          v12 = a1[23];
        }
      }
    }
    a1[24] = 0;
    *(double *)a3.m128_u64 = qfree(v12, a2);
    a1[23] = 0;
    a1[25] = 0;
  }
  sub_2578B0(v10, a3, a4, a5, a6, a7, a8, a9, a10);
  return a1[24] != 0;
}

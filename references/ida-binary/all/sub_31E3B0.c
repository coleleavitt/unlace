void __fastcall sub_31E3B0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5

  if ( !qword_8CD8C8 )
  {
    v15 = 60000 * reg_int_op("AutoSsInterval", 0, 0, 0);
    dword_8CD8D0 = v15;
    if ( v15 )
    {
      qword_8CD8C8 = (__int64)sub_1C9EF0(v15, (__int64)&sub_31FCE0, 0, *(double *)a1.m128_u64, a2);
      if ( !qword_8CD8C8 )
        sub_169700(
          (int)"Failed to install snapshot timer for automatic backups\n",
          (__int64)&sub_31FCE0,
          v16,
          v17,
          v18,
          v19,
          a1,
          a2,
          a3,
          a4,
          v20,
          v21,
          a7,
          a8,
          a15);
    }
  }
}

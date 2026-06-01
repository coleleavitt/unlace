__int64 __fastcall sub_2F2B40(
        unsigned int a1,
        __int64 *a2,
        unsigned __int8 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v15; // r12
  unsigned int v16; // r13d
  double v18; // xmm4_8
  double v19; // xmm5_8
  void *v20; // [rsp+0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+10h] [rbp-68h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  char v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  src = nullptr;
  v25 = 0;
  v26 = 0;
  v24 = 0;
  sub_17E750((__int64)&src, a2, 1, 0, 0.0, *(double *)a5.m128_u64, a6, a7, a8, a9, a10, a11, a13, a14);
  v15 = v24;
  v16 = 0;
  if ( (_QWORD)v24 )
  {
    v20 = (void *)qalloc_or_throw(8 * v24);
    v22 = v15;
    memcpy(v20, src, 8 * v15);
    a2 = (__int64 *)&v20;
    v21 = v15;
    v16 = (unsigned __int8)sub_2F2720(a1, (const char *)&v20, a3, 0.0, a5, a6, a7, v18, v19, a10, a11);
    if ( v20 )
    {
      v21 = 0;
      qfree(v20, (const char *)&v20);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    qfree(src, (const char *)a2);
  }
  return v16;
}

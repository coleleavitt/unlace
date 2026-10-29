__int64 __fastcall sub_2F16B0(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  const char *v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // ebp
  void *v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  void *v21; // [rsp+0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h]
  void *src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v25; // [rsp+28h] [rbp-40h]
  char v26; // [rsp+38h] [rbp-30h]
  __int64 v27; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v28; // [rsp+48h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  v14 = (const char *)a1;
  v26 = 0;
  src = nullptr;
  v27 = 0;
  v25 = 0;
  sub_17E750((__int64)&src, a1, 1, 1, 0.0, *(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a13, a14);
  v15 = v25;
  v16 = 0;
  if ( (_QWORD)v25 )
  {
    v18 = (void *)qalloc_or_throw(8 * v25);
    v14 = (const char *)src;
    v21 = v18;
    v23 = v15;
    memcpy(v18, src, 8 * v15);
    v22 = v15;
    v16 = sub_2EFD40((__int64)&v21, (__m128)0LL, a3, a4, a5, v19, v20, a8, a9);
    if ( v21 )
    {
      v22 = 0;
      qfree(v21, v14);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v25 = 0;
    qfree(src, v14);
  }
  return v16;
}

unsigned __int64 __fastcall sub_197370(__int64 *a1, _QWORD *a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 v5; // rbp
  void *v6; // r13
  void *v7; // r12
  __m128i v8; // xmm0
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  v13 = -1;
  src = nullptr;
  sub_1971F0(a1, (__int64 *)&src, 1, 0.0, a4, a5);
  v5 = v12;
  v6 = src;
  v7 = nullptr;
  if ( (_QWORD)v12 )
  {
    v7 = (void *)qalloc_or_throw();
    memcpy(v7, v6, 8 * v5);
  }
  v8 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( *a2 )
  {
    a2[1] = 0;
    v10 = v8;
    qfree();
    v8 = _mm_load_si128(&v10);
  }
  *a2 = v7;
  *(__m128i *)(a2 + 1) = v8;
  if ( v6 )
    qfree();
  return v5;
}


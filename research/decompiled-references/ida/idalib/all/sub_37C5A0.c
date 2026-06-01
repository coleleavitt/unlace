__int64 __fastcall sub_37C5A0(__int64 a1, __m128i *a2)
{
  void *v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v6; // [rsp+0h] [rbp-60h] BYREF
  void *v7; // [rsp+8h] [rbp-58h] BYREF
  __m128i v8; // [rsp+10h] [rbp-50h] BYREF
  void *ptr; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+28h] [rbp-38h]
  unsigned __int64 v11; // [rsp+40h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v6 = 0;
  v8 = 0;
  v7 = nullptr;
  ptr = nullptr;
  v10 = 0;
  a2->m128i_i8[0] = 7;
  a2->m128i_i64[1] = 0;
  a2[1] = 0;
  if ( get_edm_by_tid(&v6, &v7) != -1 )
  {
    v2 = (void *)a2->m128i_i64[1];
    v3 = _mm_loadu_si128(a2 + 1);
    v4 = _mm_loadu_si128(&v8);
    a2->m128i_i64[1] = (__int64)v7;
    v7 = v2;
    a2[1] = v4;
    v8 = v3;
  }
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  if ( v7 )
  {
    v8.m128i_i64[0] = 0;
    qfree(v7);
  }
  clear_tinfo_t(&v6);
  return 0;
}

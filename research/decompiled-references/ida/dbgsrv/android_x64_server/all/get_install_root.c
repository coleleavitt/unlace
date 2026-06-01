/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_install_root
// Address: 0x00000000000BD110

//----- (00000000000BD110) ----------------------------------------------------
unsigned __int64 __fastcall get_install_root(__m128i *a1)
{
  char *v1; // rax
  __m128i v2; // xmm0
  __int64 v3; // rax
  __m128i v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v1 = idadir(nullptr);
  sub_37F60((__int64)&v5, v1);
  v2 = _mm_loadu_si128(a1);
  v3 = a1[1].m128i_i64[0];
  *a1 = v5;
  a1[1].m128i_i64[0] = v6;
  v5 = v2;
  v6 = v3;
  if ( v2.m128i_i64[0] )
  {
    v5.m128i_i64[1] = 0;
    qfree((void *)v2.m128i_i64[0]);
    v5.m128i_i64[0] = 0;
    v6 = 0;
  }
  return __readfsqword(0x28u);
}

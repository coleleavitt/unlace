unsigned __int64 __fastcall sub_CCC40(const __m128i *a1)
{
  __int64 v2; // rdi
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-8h]
  __m128i vars0; // [rsp+8h] [rbp+0h] BYREF
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]

  vars10 = __readfsqword(0x28u);
  vars0 = 0;
  dbg_restore_manual_regions();
  v3 = _mm_loadu_si128(a1 + 1);
  v4 = _mm_loadu_si128(&vars0);
  v8 = a1->m128i_i64[1];
  v2 = v8;
  a1->m128i_i64[1] = 0;
  a1[1] = v4;
  vars0 = v3;
  if ( v8 )
  {
    if ( v3.m128i_i64[0] )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v2 + 80 * v5);
        if ( v6[5] )
        {
          v6[6] = 0;
          qfree();
        }
        if ( v6[2] )
        {
          v6[3] = 0;
          qfree();
        }
        ++v5;
        v2 = v8;
      }
      while ( v3.m128i_i64[0] != v5 );
    }
    vars0.m128i_i64[0] = 0;
    qfree();
  }
  return vars10 - __readfsqword(0x28u);
}


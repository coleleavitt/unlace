__int64 __fastcall sub_CD0E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // r13d
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-48h]
  __m128i v11; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  v2 = 0;
  v3 = sub_9E1E0();
  if ( v3 > 0 )
  {
    v4 = *a2;
    v5 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = 0;
    v10 = v4;
    v2 = v4;
    *(__m128i *)(a2 + 1) = _mm_loadu_si128(&v11);
    v11 = v5;
  }
  if ( v2 )
  {
    v6 = v11.m128i_i64[0];
    if ( v11.m128i_i64[0] )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v2 + 80 * v7);
        if ( v8[5] )
        {
          v8[6] = 0;
          qfree();
        }
        if ( v8[2] )
        {
          v8[3] = 0;
          qfree();
        }
        ++v7;
        v2 = v10;
      }
      while ( v6 != v7 );
    }
    v11.m128i_i64[0] = 0;
    qfree();
  }
  return (unsigned int)v3;
}


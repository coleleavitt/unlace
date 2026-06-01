void __fastcall sub_A28FB0(__m128i *a1, __m128i *a2)
{
  __m128i *v2; // r15
  __m128i *v3; // r13
  __m128i *v4; // r14
  unsigned int *v5; // r12
  __int64 m128i_i64; // rbp
  __m128i *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rdi
  __m128i *v10; // r14
  __m128i v12; // [rsp+18h] [rbp-E8h] BYREF
  _BYTE v13[152]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+C0h] [rbp-40h]

  if ( a1 != a2 )
  {
    v2 = a1 + 11;
    if ( a2 != &a1[11] )
    {
      do
      {
        v3 = v2 + 1;
        v4 = v2 - 11;
        v5 = (unsigned int *)&v2[-11];
        m128i_i64 = (__int64)v2[1].m128i_i64;
        v7 = v2 + 11;
        if ( (unsigned __int8)sub_A09E20((unsigned int *)v2, (unsigned int *)a1) )
        {
          v12 = _mm_loadu_si128(v2);
          sub_A0A000((__int64)v13, (__int64)v2[1].m128i_i64);
          v14 = v2[10].m128i_i64[1];
          v8 = 0x2E8BA2E8BA2E8BA3LL * (v2 - a1);
          if ( (char *)v2 - (char *)a1 > 0 )
          {
            while ( 1 )
            {
              v9 = (__int64)v3;
              v3 = v4 + 1;
              v4[11] = _mm_loadu_si128(v4);
              sub_A0AAD0(v9, (__m128i *)v4[1].m128i_i64);
              v4[14].m128i_i8[0] = v4[3].m128i_i8[0] & 8
                                 | v4[3].m128i_i8[0] & 4
                                 | v4[3].m128i_i8[0] & 2
                                 | v4[3].m128i_i8[0] & 1
                                 | v4[14].m128i_i8[0] & 0xF0;
              sub_A0AAD0((__int64)&v4[14].m128i_i64[1], &v4[3].m128i_i64[1]);
              sub_A0AB90((__m128i *)((char *)v4 + 264), (__m128i *)((char *)v4 + 88));
              sub_A0AB90(v4 + 19, v4 + 8);
              v4[21].m128i_i64[1] = v4[10].m128i_i64[1];
              if ( !--v8 )
                break;
              v4 -= 11;
            }
          }
          *a1 = _mm_load_si128(&v12);
          sub_A28A10((__int64)a1[1].m128i_i64, (__int64)v13);
          a1[10].m128i_i64[1] = v14;
          sub_A09C70((__int64)v13);
        }
        else
        {
          v12 = _mm_loadu_si128(v2);
          sub_A0A000((__int64)v13, (__int64)v2[1].m128i_i64);
          v14 = v2[10].m128i_i64[1];
          while ( 1 )
          {
            v10 = (__m128i *)(m128i_i64 - 16);
            if ( !(unsigned __int8)sub_A09E20((unsigned int *)&v12, v5) )
              break;
            v5 = (unsigned int *)(m128i_i64 - 368);
            *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 192));
            sub_A28120(m128i_i64, m128i_i64 - 176);
            sub_A0AB90((__m128i *)(m128i_i64 + 72), (__m128i *)(m128i_i64 - 104));
            sub_A0AB90((__m128i *)(m128i_i64 + 112), (__m128i *)(m128i_i64 - 64));
            *(_QWORD *)(m128i_i64 + 152) = *(_QWORD *)(m128i_i64 - 24);
            m128i_i64 -= 176;
          }
          *v10 = _mm_load_si128(&v12);
          sub_A28A10(m128i_i64, (__int64)v13);
          v10[10].m128i_i64[1] = v14;
          sub_A09C70((__int64)v13);
        }
        v2 += 11;
      }
      while ( a2 != v7 );
    }
  }
}

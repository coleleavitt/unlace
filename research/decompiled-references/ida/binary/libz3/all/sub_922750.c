__int64 __fastcall sub_922750(__int64 a1)
{
  __int64 result; // rax
  int v2; // r14d
  __int64 v3; // rbp
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rsi
  char v7; // al
  void *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r12
  __m128i *v11; // rax
  __m128i v12; // [rsp+0h] [rbp-80h] BYREF
  char *v13; // [rsp+10h] [rbp-70h]
  char v14; // [rsp+27h] [rbp-59h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v16[9]; // [rsp+38h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v2 = *(_DWORD *)(result - 4);
    if ( v2 > 0 )
    {
      v3 = 0;
      v12.m128i_i64[1] = (unsigned int)v2;
      v4 = 8LL * (unsigned int)v2;
      v13 = &v14;
      while ( 1 )
      {
        result = *(_QWORD *)(a1 + 288);
        if ( !result || *(_DWORD *)(result - 4) <= (int)v3 )
          break;
        v5 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v3);
        v6 = *v5;
        v15[0] = 0;
        v15[1] = 0;
        v16[0] = 1;
        v16[1] = 0;
        v7 = sub_1666AE0(a1 + 96, v6, v15, v13);
        v8 = qword_1C7F2C0;
        if ( !v7 || LODWORD(v15[0]) )
        {
          sub_182CBA0(qword_1C7F2C0, v15);
          ++v3;
          sub_182CBA0(v8, v16);
          result = v12.m128i_i64[1];
          if ( v3 == v12.m128i_i64[1] )
            return result;
        }
        else
        {
          sub_182CBA0(qword_1C7F2C0, v15);
          sub_182CBA0(v8, v16);
          v12.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8 * v3);
          if ( _mm_cvtsi128_si32((__m128i)v12.m128i_u64[0])
             | _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)v12.m128i_u64[0], 229)) )
          {
            v9 = 0;
            v10 = sub_15D1F10(*v5);
            do
            {
              while ( v10 != sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + v9)) )
              {
                v9 += 8;
                if ( v9 == v4 )
                  goto LABEL_13;
              }
              v11 = (__m128i *)(v9 + *(_QWORD *)(a1 + 288));
              v9 += 8;
              v11->m128i_i64[0] = _mm_sub_epi32(_mm_loadl_epi64(v11), _mm_loadl_epi64(&v12)).m128i_u64[0];
            }
            while ( v9 != v4 );
          }
LABEL_13:
          result = v12.m128i_i64[1];
          if ( ++v3 == v12.m128i_i64[1] )
            return result;
        }
      }
    }
  }
  return result;
}


__m128i *__fastcall sub_644230(__m128i *a1, __int64 a2, __int64 *a3, double a4, __m128 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __m128 v7; // xmm0
  unsigned __int64 v9; // xmm1_8
  __int64 v10; // rdx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]

  v5 = a3[1];
  v6 = *a3;
  if ( *a3 != v5 )
  {
    v7 = (__m128)_mm_loadu_si128(a1);
    v9 = _mm_movehl_ps(a5, v7).m128_u64[0];
    v10 = v7.m128_u64[0];
    if ( v7.m128_u64[0] == v9 )
    {
      a1->m128i_i64[0] = v6;
      v13 = a3[1];
      v14 = a1[1].m128i_i64[0];
      v16 = v7;
      a1->m128i_i64[1] = v13;
      v15 = a3[2];
      v17 = v14;
      a1[1].m128i_i64[0] = v15;
      a3[2] = 0;
      *(_OWORD *)a3 = 0;
      sub_6441A0((__int64 *)&v16);
    }
    else
    {
      if ( a2 == v9 )
        goto LABEL_18;
      if ( *(_DWORD *)(a2 + 32) == 10 && *(_DWORD *)(v5 - 48) == 10 )
      {
        v5 -= 80;
        std::string::reserve();
        std::string::_M_replace();
        v10 = a1->m128i_i64[0];
      }
      if ( a2 != v10 )
      {
LABEL_18:
        if ( *(_DWORD *)(a2 - 48) == 10 )
        {
          v12 = *a3;
          if ( *(_DWORD *)(v12 + 32) == 10 )
          {
            std::string::reserve();
            if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a2 - 72)) < *(_QWORD *)(v12 + 8) )
              std::__throw_length_error("basic_string::append");
            v6 += 80;
            std::string::_M_append();
          }
        }
      }
      sub_641BC0(a1->m128i_i64, (char *)a2, v6, v5);
    }
  }
  return a1;
}


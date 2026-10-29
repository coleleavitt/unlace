unsigned __int64 __fastcall sub_B73090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rax
  __m128i si128; // xmm0
  unsigned __int64 v11; // rdi
  __m128i v12[2]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 128);
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      v7 = *(unsigned int *)(v6 + 8);
      if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        v11 = *(_QWORD *)(a1 + 128) & 0xFFFFFFFFFFFFFFF8LL;
        v12[0].m128i_i64[0] = a3;
        sub_22134E0(v11, v6 + 16, v7 + 1, 8);
        v7 = *(unsigned int *)(v6 + 8);
        v3 = v12[0].m128i_i64[0];
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v7) = v3;
      ++*(_DWORD *)(v6 + 8);
      result = *(_QWORD *)(a1 + 128);
    }
    else
    {
      v12[0].m128i_i64[0] = a3;
      v12[0] = (__m128i)_mm_loadh_ps((const double *)v12[0].m128i_i64);
      v9 = operator new(0x30u);
      si128 = _mm_load_si128(v12);
      *(_QWORD *)(v9 + 8) = 0x400000002LL;
      *(_QWORD *)v9 = v9 + 16;
      *(__m128i *)(v9 + 16) = si128;
      result = v9 | 4;
      *(_QWORD *)(a1 + 128) = result;
    }
  }
  else
  {
    result = a3 & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD *)(a1 + 128) = a3 & 0xFFFFFFFFFFFFFFFBLL;
  }
  if ( (result & 4) != 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)(result + 8) == 2 )
      return (unsigned __int64)sub_A3B850(a2, (__int64)sub_B72300, a1 + 128);
  }
  return result;
}


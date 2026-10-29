__int64 __fastcall sub_174E60(__int64 *a1, __int64 a2, unsigned int a3)
{
  __m128i v3; // xmm1
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // rcx
  __int64 i; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // [rsp+0h] [rbp-10h]

  v3 = _mm_cvtsi32_si128(a3);
  v5 = a1[1];
  result = *a1;
  if ( v5 )
  {
    v7 = (_DWORD *)*a1;
    for ( i = 0; i != v5; ++i )
    {
      if ( *v7 == *(_DWORD *)(a2 + 80) )
      {
        v7[1] = _mm_cvtsi128_si32(v3);
        return result;
      }
      v7 += 2;
    }
    v9 = v5 + 1;
  }
  else
  {
    v9 = 1;
  }
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 80)), v3).m128i_u64[0];
  if ( a1[2] < v9 )
  {
    v11 = v10;
    result = qvector_reserve();
    v5 = a1[1];
    *a1 = result;
  }
  *(_QWORD *)(result + 8 * v5) = v10;
  ++a1[1];
  return result;
}


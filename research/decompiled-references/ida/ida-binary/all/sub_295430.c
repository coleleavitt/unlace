__m128i *__fastcall sub_295430(__int64 a1, int a2, __int64 a3, char a4)
{
  int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  __int64 (*v7)(void); // rdx
  __int64 (*v8)(void); // rax
  int v9; // eax
  __m128i *result; // rax

  v4 = a4 == 0 ? -1 : 1;
  if ( (int)a3 < 0 )
  {
    v5 = -50 * v4 + a3;
    if ( a3 >= 0 )
      goto LABEL_3;
  }
  else
  {
    v5 = 50 * v4 + a3;
    if ( a3 >= 0 )
    {
LABEL_3:
      v6 = 50 * v4 + HIDWORD(a3);
      goto LABEL_4;
    }
  }
  v6 = -50 * v4 + HIDWORD(a3);
LABEL_4:
  v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 152LL);
  if ( (char *)v7 == (char *)interactive_graph_t__::vfunc_19 )
  {
    v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
    if ( (char *)v8 == (char *)interactive_graph_t__::vfunc_7 )
      v9 = *(_DWORD *)(a1 + 184);
    else
      v9 = v8();
    if ( a2 >= v9 )
      sub_16B930((__int64)"nrect(%d) failed", a2);
    result = (__m128i *)(*(_QWORD *)(a1 + 224) + 16LL * a2);
  }
  else
  {
    result = (__m128i *)v7();
  }
  *result = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v6)),
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(v5 + result->m128i_i32[2] - result->m128i_i32[0]),
                _mm_cvtsi32_si128(v6 + result->m128i_i32[3] - result->m128i_i32[1])));
  return result;
}

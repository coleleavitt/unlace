__int64 __fastcall sub_29B610(__int64 a1, int **a2, __int64 a3)
{
  int *v3; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax
  __m128i *v10; // rsi
  __int32 v11; // edi
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, unsigned int); // rdx
  int v15; // [rsp+Ch] [rbp-3Ch]

  v3 = *a2;
  result = 4LL * (_QWORD)a2[1];
  if ( result )
  {
    do
    {
      v13 = *v3;
      v14 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v14 == interactive_graph_t__::vfunc_19 )
      {
        v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v8 == interactive_graph_t__::vfunc_7 )
        {
          v9 = *(_DWORD *)(a1 + 184);
        }
        else
        {
          v15 = *v3;
          v9 = v8(a1);
          v13 = v15;
        }
        if ( (int)v13 >= v9 )
          sub_16B930((__int64)"nrect(%d) failed", v13);
        v10 = (__m128i *)(*(_QWORD *)(a1 + 224) + 16 * v13);
      }
      else
      {
        v10 = (__m128i *)v14(a1, v13);
      }
      ++v3;
      v11 = v10->m128i_i32[3];
      v12 = HIDWORD(a3) + (v10->m128i_i32[1] - v11) / 2;
      *v10 = _mm_unpacklo_epi64(
               _mm_unpacklo_epi32(
                 _mm_cvtsi32_si128((int)a3 + (v10->m128i_i32[0] - v10->m128i_i32[2]) / 2),
                 _mm_cvtsi32_si128(v12)),
               _mm_unpacklo_epi32(
                 _mm_cvtsi32_si128((int)a3 + (v10->m128i_i32[0] - v10->m128i_i32[2]) / 2 + v10->m128i_i32[2]
                                                                                         - v10->m128i_i32[0]),
                 _mm_cvtsi32_si128(v12 + v11 - v10->m128i_i32[1])));
      result = (__int64)&(*a2)[(_QWORD)a2[1]];
    }
    while ( v3 != (int *)result );
  }
  return result;
}

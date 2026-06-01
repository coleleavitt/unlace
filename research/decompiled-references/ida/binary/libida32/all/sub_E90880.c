unsigned __int64 __fastcall sub_E90880(
        _QWORD *a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 result; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // [rsp+0h] [rbp-38h]
  __int64 v19; // [rsp+8h] [rbp-30h]

  v10 = 16 * a6;
  v11 = 16 * a6 + 32;
  v12 = a1[294];
  a1[304] += v11;
  v18 = a6;
  result = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + result && v12 )
  {
    a1[294] = v11 + result;
  }
  else
  {
    v19 = a5;
    result = sub_962430((__int64)(a1 + 294), v11, 16 * a6 + 32, 3, a5, a6);
    a5 = v19;
  }
  v14 = a5 + v10;
  *(_BYTE *)(result + 8) = a2;
  *(_QWORD *)result = off_2B21CC0;
  v15 = result + 32;
  for ( *(__m128i *)(result + 12) = _mm_unpacklo_epi64(
                                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a7)),
                                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(v18)));
        v14 != a5;
        *(_QWORD *)(v15 - 8) = v17 )
  {
    v16 = *(_DWORD *)a5;
    v17 = *(_QWORD *)(a5 + 8);
    a5 += 16;
    v15 += 16LL;
    *(_DWORD *)(v15 - 16) = v16;
  }
  return result;
}


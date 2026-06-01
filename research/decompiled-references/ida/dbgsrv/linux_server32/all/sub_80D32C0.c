/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D32C0
// Address: 0x080D32C0

//----- (080D32C0) --------------------------------------------------------
__int16 __cdecl sub_80D32C0(_QWORD *a1, int a2, signed int a3, __int16 a4)
{
  __int16 result; // ax
  __int64 v5; // rax
  unsigned __int64 v6; // [esp+8h] [ebp-2Ch]
  _BOOL4 v7; // [esp+10h] [ebp-24h]
  int v8; // [esp+14h] [ebp-20h]

  if ( a1 )
  {
    result = a4;
    if ( (_BYTE)a4 )
    {
      sub_80D3200(a1, (const __m128i *)a1, a2);
      switch ( a2 )
      {
        case 1:
          *(_BYTE *)a1 += a3;
          goto LABEL_11;
        case 2:
          *(_WORD *)a1 += a3;
          goto LABEL_11;
        case 4:
          *(_DWORD *)a1 += a3;
          goto LABEL_11;
        case 8:
          *a1 = _mm_add_epi64(
                  _mm_loadl_epi64((const __m128i *)a1),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a3 >> 31))).m128i_u64[0];
          goto LABEL_11;
        case 16:
LABEL_4:
          v6 = *a1;
          v7 = __CFADD__(*a1, a3);
          v8 = *(_DWORD *)a1 + a3;
          v5 = *a1 + a3;
          *a1 = v5;
          if ( a3 > 0 && v7 )
          {
            a1[1] = _mm_add_epi64(
                      _mm_loadl_epi64((const __m128i *)(a1 + 1)),
                      _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
          }
          else if ( a3 < 0 && v6 < __PAIR64__(HIDWORD(v5), v8) )
          {
            a1[1] = _mm_add_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 1)), (__m128i)-1LL).m128i_u64[0];
          }
          result = a4;
          if ( !(_BYTE)a4 )
            return result;
          goto LABEL_11;
        default:
LABEL_11:
          result = sub_80D3200(a1, (const __m128i *)a1, a2);
          break;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 1:
          result = (unsigned __int8)a3;
          *(_BYTE *)a1 += a3;
          break;
        case 2:
          result = a3;
          *(_WORD *)a1 += a3;
          break;
        case 4:
          result = a3;
          *(_DWORD *)a1 += a3;
          break;
        case 8:
          result = a3;
          *a1 = _mm_add_epi64(
                  _mm_loadl_epi64((const __m128i *)a1),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a3 >> 31))).m128i_u64[0];
          break;
        case 16:
          goto LABEL_4;
        default:
          return result;
      }
    }
  }
  return result;
}
// 80DE200: using guessed type __int128 xmmword_80DE200;

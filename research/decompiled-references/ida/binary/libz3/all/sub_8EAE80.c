__int64 __fastcall sub_8EAE80(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx
  double v5; // xmm1_8
  double v6; // xmm0_8
  double v7; // xmm0_8
  __int64 v8; // rdi

  result = *(unsigned int *)(a1 + 10344);
  if ( *(_DWORD *)(a1 + 10328) < (unsigned int)result )
    goto LABEL_7;
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_DWORD *)(v3 + 600);
  if ( v4 == 2 )
  {
    v8 = (unsigned int)(*(_DWORD *)(a1 + 10352) + 1);
    *(_DWORD *)(a1 + 10352) = v8;
    result = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 604LL) * (unsigned int)sub_1856050(v8);
    *(_DWORD *)(a1 + 10328) = 0;
    *(_DWORD *)(a1 + 10344) = result;
  }
  else if ( v4 > 2 )
  {
    if ( v4 != 4 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 10328) = 0;
      return result;
    }
    result = (unsigned int)(int)((double)(int)result + *(double *)(v3 + 608));
    *(_DWORD *)(a1 + 10344) = result;
    *(_DWORD *)(a1 + 10328) = 0;
  }
  else
  {
    if ( v4 )
    {
      v5 = *(double *)(v3 + 608);
      v6 = (double)(int)result;
      result = *(unsigned int *)(a1 + 10348);
      v7 = v6 * v5;
      *(_DWORD *)(a1 + 10344) = (int)v7;
      if ( (unsigned int)result < (int)v7 )
      {
        result = (unsigned int)(int)((double)(int)result * v5);
        *(_QWORD *)(a1 + 10344) = _mm_unpacklo_epi32(
                                    _mm_cvtsi32_si128(*(_DWORD *)(v3 + 604)),
                                    _mm_cvtsi32_si128(result)).m128i_u64[0];
      }
      goto LABEL_7;
    }
    result = (unsigned int)(int)((double)(int)result * *(double *)(v3 + 608));
    *(_DWORD *)(a1 + 10344) = result;
    *(_DWORD *)(a1 + 10328) = 0;
  }
  return result;
}


__int64 __fastcall sub_792B00(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // eax
  const __m128i *v3; // rax
  __int64 result; // rax
  __m128i v5; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)a1 & 7LL;
  if ( (_DWORD)v1 == 7 )
  {
    v2 = *(_DWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v2 > 3 )
      v2 = 3;
    v1 = v2 + 8;
  }
  switch ( v1 )
  {
    case 0LL:
    case 1LL:
    case 2LL:
    case 7LL:
      goto LABEL_7;
    case 3LL:
    case 4LL:
    case 5LL:
      v3 = *(const __m128i **)(a1 + 16);
      if ( v3 )
      {
        v5 = _mm_unpacklo_epi64(_mm_loadl_epi64(v3), (__m128i)(unsigned __int64)&v3->m128i_u64[1]);
        result = sub_B1E800(&v5);
      }
      else
      {
LABEL_7:
        result = *(unsigned int *)(a1 + 8);
      }
      break;
    case 6LL:
      result = *(unsigned int *)(a1 + 20);
      break;
  }
  return result;
}


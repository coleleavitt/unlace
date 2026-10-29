__int64 __fastcall sub_8C1F80(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  const __m128i *v3; // rdx
  unsigned int v4; // ebx
  _OWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(a1 + 72);
  if ( v1 && (v1 & 4) == 0 )
  {
    v3 = (const __m128i *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v3 )
    {
      v5[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(v3), (__m128i)(unsigned __int64)&v3->m128i_u64[1]);
      v4 = sub_B1E800(v5);
      sub_B1E2D0(v5);
      return v4;
    }
  }
  return result;
}


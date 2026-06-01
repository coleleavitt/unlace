__int64 __fastcall sub_778050(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  const __m128i *v7; // rdx
  __m128i v9; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 116);
  v2 = v1;
  if ( !v1 )
    v2 = *(unsigned int *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 120);
  if ( (v3 & 4) != 0 && (v4 = v3 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v4 + 16)) )
    v5 = *(_DWORD *)(**(_QWORD **)(v4 + 24) + 8LL);
  else
    v5 = *(_DWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 128);
  if ( v6 )
  {
    if ( (v6 & 4) != 0 )
    {
      v7 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v1 )
      {
        if ( v7 )
        {
          v9 = _mm_unpacklo_epi64(_mm_loadl_epi64(v7), (__m128i)(unsigned __int64)&v7->m128i_u64[1]);
          v2 = sub_B1E800(&v9);
        }
      }
    }
  }
  return (v2 << 32) | v5;
}


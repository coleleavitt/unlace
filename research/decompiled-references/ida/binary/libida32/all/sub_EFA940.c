__int64 __fastcall sub_EFA940(_DWORD *a1, int a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // rax

  a1[2] = a2;
  *a1 = *((_DWORD *)a3 + 68);
  a1[1] = *((_DWORD *)a3 + 69);
  result = *((unsigned int *)a3 + 2);
  a1[3] = result;
  if ( (_DWORD)result )
  {
    v5 = 0;
    do
    {
      v6 = *a3;
      v7 = v5++;
      result = 32 * v7;
      *(__m128i *)(a4 + result) = _mm_loadu_si128((const __m128i *)(*a3 + result));
      *(__m128i *)(a4 + result + 16) = _mm_loadu_si128((const __m128i *)(v6 + result + 16));
    }
    while ( a1[3] != v5 );
  }
  return result;
}


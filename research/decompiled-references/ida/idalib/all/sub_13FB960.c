__int64 __fastcall sub_13FB960(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 result; // rax
  unsigned __int64 v10; // rbp

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  v6 = *(_QWORD *)a1 + 80 * v3;
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    if ( v4 > a2 || v6 <= a2 )
    {
      sub_13FB900(a1, v5);
      v6 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v10 = a2 - v4;
      sub_13FB900(a1, v5);
      a2 = *(_QWORD *)a1 + v10;
      v6 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
    }
  }
  *(_DWORD *)v6 = *(_DWORD *)a2;
  *(_DWORD *)(v6 + 4) = *(_DWORD *)(a2 + 4);
  *(_QWORD *)(v6 + 8) = v6 + 24;
  sub_13F27F0((_QWORD *)(v6 + 8), *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16));
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_BYTE *)(v6 + 40) = *(_BYTE *)(a2 + 40);
  result = *(unsigned __int8 *)(a2 + 41);
  *(__m128i *)(v6 + 48) = v7;
  *(_BYTE *)(v6 + 41) = result;
  *(__m128i *)(v6 + 64) = v8;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

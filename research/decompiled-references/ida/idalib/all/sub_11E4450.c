__int64 __fastcall sub_11E4450(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __m128i si128; // xmm2
  __m128i v5; // xmm3
  __int64 v6; // rdx
  __m128i v7; // xmm4

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(__m128i *)(a1 + 12) = _mm_loadu_si128((const __m128i *)(a2 + 12));
  *(__m128i *)(a1 + 28) = _mm_loadu_si128((const __m128i *)(a2 + 28));
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = a1 + 80;
  v2 = *(_QWORD *)(a2 + 64);
  result = a2 + 80;
  if ( v2 == a2 + 80 )
  {
    *(__m128i *)(a1 + 80) = _mm_load_si128((const __m128i *)(a2 + 80));
  }
  else
  {
    *(_QWORD *)(a1 + 64) = v2;
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  }
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  si128 = _mm_load_si128((const __m128i *)(a2 + 96));
  *(_QWORD *)(a2 + 64) = result;
  *(_QWORD *)(a2 + 72) = 0;
  *(_BYTE *)(a2 + 80) = 0;
  *(__m128i *)(a1 + 96) = si128;
  v5 = _mm_load_si128((const __m128i *)(a2 + 112));
  *(_BYTE *)(a1 + 184) = 0;
  *(__m128i *)(a1 + 112) = v5;
  if ( *(_BYTE *)(a2 + 184) )
  {
    *(_QWORD *)(a1 + 128) = a1 + 144;
    v6 = *(_QWORD *)(a2 + 128);
    if ( v6 == a2 + 144 )
    {
      *(__m128i *)(a1 + 144) = _mm_load_si128((const __m128i *)(a2 + 144));
    }
    else
    {
      *(_QWORD *)(a1 + 128) = v6;
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
    }
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
    v7 = _mm_load_si128((const __m128i *)(a2 + 160));
    *(_QWORD *)(a2 + 128) = a2 + 144;
    *(_QWORD *)(a2 + 136) = 0;
    *(_BYTE *)(a2 + 144) = 0;
    *(__m128i *)(a1 + 160) = v7;
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 176);
    result = *(unsigned int *)(a2 + 180);
    *(_BYTE *)(a1 + 184) = 1;
    *(_DWORD *)(a1 + 180) = result;
  }
  return result;
}

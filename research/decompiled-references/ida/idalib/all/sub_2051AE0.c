__int64 __fastcall sub_2051AE0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __int64 result; // rax
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  v2 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  result = *(_QWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 80) = 0;
  v5 = *(_BYTE *)(a2 + 80) == 0;
  *(__m128i *)(a1 + 8) = v2;
  *(__m128i *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 40) = result;
  if ( !v5 )
  {
    v6 = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 56) = v6;
    if ( v6 > 0x40 )
    {
      sub_2205510(a1 + 48);
      v8 = *(_DWORD *)(a2 + 72);
      *(_DWORD *)(a1 + 72) = v8;
      if ( v8 <= 0x40 )
        goto LABEL_4;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
      v7 = *(_DWORD *)(a2 + 72);
      *(_DWORD *)(a1 + 72) = v7;
      if ( v7 <= 0x40 )
      {
LABEL_4:
        result = *(_QWORD *)(a2 + 64);
        *(_BYTE *)(a1 + 80) = 1;
        *(_QWORD *)(a1 + 64) = result;
        return result;
      }
    }
    result = sub_2205510(a1 + 64);
    *(_BYTE *)(a1 + 80) = 1;
  }
  return result;
}

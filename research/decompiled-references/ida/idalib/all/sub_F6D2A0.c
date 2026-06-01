__int64 __fastcall sub_F6D2A0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rdi
  __m128i v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rcx

  result = a1[1];
  v4 = *a1;
  *(_DWORD *)result = a3;
  if ( (*(_BYTE *)(v4 + 32) & 0x3F) != 0 )
  {
    *(_DWORD *)(result + 4) = a3;
    *(_DWORD *)(result + 8) = a3;
    v5 = *(_BYTE *)(v4 + 32) & 0x3F;
    if ( (*(_BYTE *)(v4 + 32) & 0x3F) != 0 )
    {
      v6 = result + 12;
      if ( v5 - 1 <= 2 )
      {
        result = 0;
      }
      else
      {
        v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
        v8 = result + 16LL * (v5 >> 2);
        do
        {
          *(__m128i *)(result + 12) = v7;
          result += 16;
        }
        while ( result != v8 );
        result = v5 & 0xFFFFFFFC;
        if ( v5 == (_DWORD)result )
          return result;
      }
      *(_DWORD *)(v6 + 4LL * (unsigned int)result) = a3;
      v9 = (unsigned int)(result + 1);
      if ( v5 != (_DWORD)v9 )
      {
        result = (unsigned int)(result + 2);
        *(_DWORD *)(v6 + 4 * v9) = a3;
        if ( v5 != (_DWORD)result )
          *(_DWORD *)(v6 + 4 * result) = a3;
      }
    }
  }
  return result;
}

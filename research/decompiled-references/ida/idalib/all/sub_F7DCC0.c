__int64 __fastcall sub_F7DCC0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // r8
  int v7; // esi
  unsigned int v8; // ecx
  __int64 *v9; // rdx
  __int64 v10; // r9
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __int64 v14; // rdx
  int v15; // edx
  int v16; // r10d
  __int64 v17; // r9

  result = a1;
  v4 = *a2;
  v5 = *((_DWORD *)a2 + 4);
  if ( v5 )
  {
    v6 = *a3;
    v7 = v5 - 1;
    v8 = v7 & (((0xBF58476D1CE4E5B9LL * *a3) >> 31) ^ (484763065 * *(_DWORD *)a3));
    v9 = (__int64 *)(v4 + ((unsigned __int64)v8 << 6));
    v10 = *v9;
    if ( v6 == *v9 )
    {
LABEL_3:
      v11 = _mm_loadu_si128((const __m128i *)(v9 + 1));
      v12 = _mm_loadu_si128((const __m128i *)(v9 + 3));
      v13 = _mm_loadu_si128((const __m128i *)(v9 + 5));
      v14 = v9[7];
      *(__m128i *)result = v11;
      *(__m128i *)(result + 16) = v12;
      *(__m128i *)(result + 32) = v13;
      *(_QWORD *)(result + 48) = v14;
      return result;
    }
    v15 = 1;
    if ( v10 != -1 )
    {
      do
      {
        v16 = v15 + 1;
        v8 = v7 & (v15 + v8);
        v9 = (__int64 *)(v4 + ((unsigned __int64)v8 << 6));
        v17 = *v9;
        if ( v6 == *v9 )
          goto LABEL_3;
        v15 = v16;
      }
      while ( v17 != -1 );
    }
  }
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 40) = 0;
  return result;
}

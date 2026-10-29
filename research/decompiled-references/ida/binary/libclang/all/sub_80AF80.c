__int64 __fastcall sub_80AF80(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int16 a9,
        int a10,
        __int64 a11,
        unsigned int a12,
        char a13)
{
  char v17; // cl
  unsigned int v18; // r10d
  unsigned int v19; // edx
  __int64 v20; // rdi
  char v21; // al
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 result; // rax
  unsigned int v30; // edx
  int v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]

  v17 = a13;
  v18 = a12;
  *(_WORD *)a1 = a2 & 0x1FF | *(_WORD *)a1 & 0xFE00;
  if ( byte_4AD234C )
  {
    v32 = a6;
    v31 = a5;
    sub_AC4570(a2);
    v17 = a13;
    a6 = v32;
    v18 = a12;
    a5 = v31;
  }
  *(_QWORD *)(a1 + 8) = a6;
  if ( v18 < (unsigned int)a8 )
    v18 = a8;
  v19 = a8;
  *(_DWORD *)(a1 + 20) = a10;
  *(_DWORD *)(a1 + 16) = v18;
  *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFF001FF | (a9 << 9) & 0x600 | ((a5 & 1) << 19);
  if ( a2 > 0x5C || a2 <= 0x5A )
  {
    v20 = 24;
    v21 = 24;
  }
  else
  {
    v20 = 32;
    v21 = 32;
  }
  *(_BYTE *)(a1 + 3) = v21;
  *(_BYTE *)(a1 + 2) = (16 * (v17 & 1)) | *(_BYTE *)(a1 + 2) & 0xEF;
  *(_QWORD *)(a1 + v20) = a3;
  if ( a5 )
  {
    v22 = 8LL * (unsigned int)(a5 - 1) + 16;
    v23 = 8;
    do
    {
      v24 = *(_QWORD *)(a4 + v23 - 8);
      v25 = a1 + v23;
      v23 += 8;
      *(_QWORD *)(v25 + *(unsigned __int8 *)(a1 + 3)) = v24;
    }
    while ( v22 != v23 );
  }
  v26 = 0;
  v27 = 0;
  if ( a8 )
  {
    do
    {
      *(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + 8 * v27 + *(unsigned __int8 *)(a1 + 3)) = *(_QWORD *)(a7 + 8 * v27);
      v27 = (unsigned int)++v26;
    }
    while ( a8 != v26 );
  }
  if ( (_DWORD)a8 != *(_DWORD *)(a1 + 16) )
  {
    do
    {
      v28 = v19++;
      *(_QWORD *)(a1 + 8 * v28 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a1 + 3)) = 0;
    }
    while ( *(_DWORD *)(a1 + 16) != v19 );
  }
  result = *(_DWORD *)a1 & 0xFF983FFF
         | ((HIDWORD(a11) != 0) << 21)
         | ((sub_76C380(a1, (_DWORD **)(a1 + *(unsigned __int8 *)(a1 + 3) + 8), (*(_BYTE *)(a1 + 2) & 8) != 0) & 0x1F) << 14);
  *(_DWORD *)a1 = result;
  v30 = WORD1(result);
  if ( (result & 0x200000) != 0 )
  {
    result = *(unsigned __int8 *)(a1 + 3);
    *(_QWORD *)(8 * (*(_DWORD *)(a1 + 16) + (unsigned int)((v30 & 8) != 0) + 1) + a1 + result) = _mm_unpacklo_epi32(
                                                                                                   _mm_cvtsi32_si128(a11),
                                                                                                   _mm_cvtsi32_si128(HIDWORD(a11))).m128i_u64[0];
  }
  return result;
}


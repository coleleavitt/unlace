__int64 __fastcall aes_setkey_dec(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // r9
  int v12; // eax
  int v13; // esi
  int v14; // r13d
  __int64 v15; // rdx
  int *v16; // r12
  int *v17; // rbp
  int v18; // eax
  int *v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // r14
  int *v23; // r8
  __int64 i; // rsi
  unsigned int v25; // edx
  __int64 v26; // r13
  unsigned int v27; // r9d
  unsigned int v28; // edi
  _DWORD *v29; // r10
  unsigned int v30; // ebx
  unsigned int v31; // esi
  unsigned int v32; // ebp
  unsigned int v33; // r12d
  unsigned int v34; // r11d
  _DWORD *v35; // r14
  unsigned int v36; // r10d
  unsigned int v37; // r9d
  unsigned int v38; // edx
  unsigned int v39; // ebx
  unsigned int v40; // edi
  __m128i *v41; // rsi
  int v42; // r15d
  int v43; // ecx
  int v44; // r11d
  unsigned int v45; // r10d
  _DWORD *v46; // rbp
  unsigned int v47; // edi
  unsigned int v48; // ebx
  unsigned int v49; // r9d
  unsigned int v50; // esi
  int *v51; // [rsp+0h] [rbp-178h]
  int v52; // [rsp+Ch] [rbp-16Ch]
  _QWORD v53[45]; // [rsp+10h] [rbp-168h] BYREF

  v53[37] = __readfsqword(0x28u);
  result = 0;
  *(_QWORD *)(a1 + 8) = a1 + 16;
  memset(v53, 0, 0x120u);
  switch ( a3 )
  {
    case 0xC0u:
      v7 = 12;
      break;
    case 0x100u:
      v7 = 14;
      break;
    case 0x80u:
      v7 = 10;
      break;
    default:
      return result;
  }
  v8 = &v53[2];
  LODWORD(v53[0]) = v7;
  v9 = a2;
  v53[1] = &v53[2];
  v10 = &v53[2];
  v11 = a2 + 4LL * (a3 >> 5);
  do
  {
    v12 = *(unsigned __int8 *)(v9 + 1);
    v13 = *(unsigned __int8 *)(v9 + 2);
    v9 += 4;
    v10 = (_QWORD *)((char *)v10 + 4);
    *((_DWORD *)v10 - 1) = (*(unsigned __int8 *)(v9 - 1) << 24)
                         | *(unsigned __int8 *)(v9 - 4)
                         | (v13 << 16)
                         | (v12 << 8);
  }
  while ( v9 != v11 );
  v14 = v53[0];
  switch ( LODWORD(v53[0]) )
  {
    case 0xC:
      v44 = v53[4];
      v45 = HIDWORD(v53[3]);
      v46 = &unk_2396E40;
      v47 = HIDWORD(v53[2]);
      v48 = HIDWORD(v53[4]);
      v49 = v53[3];
      v50 = v53[2];
      do
      {
        v8 += 3;
        v50 ^= *v46++
             ^ (byte_2397F80[BYTE2(v48)] << 8)
             ^ (byte_2397F80[(unsigned __int8)v48] << 24)
             ^ byte_2397F80[BYTE1(v48)]
             ^ (byte_2397F80[HIBYTE(v48)] << 16);
        v47 ^= v50;
        v49 ^= v47;
        v45 ^= v49;
        v44 ^= v45;
        v48 ^= v44;
        *((_DWORD *)v8 + 4) = v44;
        *((_DWORD *)v8 + 5) = v48;
        *(__m128i *)v8 = _mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v50), _mm_cvtsi32_si128(v47)),
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(v45)));
      }
      while ( v8 != &v53[26] );
      break;
    case 0xE:
      v32 = HIDWORD(v53[4]);
      v52 = 14;
      v33 = v53[5];
      v34 = v53[4];
      v35 = &unk_2396E40;
      v36 = v53[3];
      v37 = HIDWORD(v53[2]);
      v38 = HIDWORD(v53[3]);
      v39 = HIDWORD(v53[5]);
      v40 = v53[2];
      v41 = (__m128i *)&v53[2];
      do
      {
        v41 += 2;
        v40 ^= *v35++
             ^ (byte_2397F80[BYTE2(v39)] << 8)
             ^ (byte_2397F80[(unsigned __int8)v39] << 24)
             ^ (byte_2397F80[HIBYTE(v39)] << 16)
             ^ byte_2397F80[BYTE1(v39)];
        v37 ^= v40;
        v36 ^= v37;
        v38 ^= v36;
        v42 = byte_2397F80[(unsigned __int8)v38];
        v43 = byte_2397F80[HIBYTE(v38)];
        *v41 = _mm_unpacklo_epi64(
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v37)),
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v38)));
        LODWORD(v51) = v42 ^ (v43 << 24);
        v34 ^= (byte_2397F80[BYTE2(v38)] << 16) ^ (byte_2397F80[BYTE1(v38)] << 8) ^ (unsigned int)v51;
        v32 ^= v34;
        v33 ^= v32;
        v39 ^= v33;
        v41[1] = _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v32)),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v39)));
      }
      while ( v41 != (__m128i *)&v53[30] );
      v14 = v52;
      break;
    case 0xA:
      v27 = v53[3];
      v28 = HIDWORD(v53[2]);
      v29 = &unk_2396E40;
      v30 = HIDWORD(v53[3]);
      v31 = v53[2];
      do
      {
        v8 += 2;
        v31 ^= *v29++
             ^ (byte_2397F80[BYTE2(v30)] << 8)
             ^ (byte_2397F80[(unsigned __int8)v30] << 24)
             ^ (byte_2397F80[HIBYTE(v30)] << 16)
             ^ byte_2397F80[BYTE1(v30)];
        v28 ^= v31;
        v27 ^= v28;
        v30 ^= v27;
        *(__m128i *)v8 = _mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(v28)),
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v30)));
      }
      while ( v8 != &v53[22] );
      break;
  }
  v15 = v53[1];
  *(_DWORD *)a1 = v14;
  v16 = (int *)(a1 + 32);
  v17 = (int *)(v15 + 16LL * v14);
  v18 = *v17;
  v19 = v17 - 4;
  *(_DWORD *)(a1 + 16) = v18;
  *(_DWORD *)(a1 + 20) = v19[5];
  *(_DWORD *)(a1 + 24) = v19[6];
  *(_DWORD *)(a1 + 28) = v19[7];
  if ( v14 - 1 > 0 )
  {
    v20 = (unsigned int)(v14 - 2);
    v51 = v19;
    v21 = a1 + 32;
    v22 = a1 + 16 * (v20 + 3);
    v23 = v19;
    do
    {
      for ( i = 0; i != 4; ++i )
      {
        v25 = v23[i];
        *(_DWORD *)(v21 + i * 4) = dword_2397280[byte_2397F80[BYTE2(v25)]]
                                 ^ dword_2397680[byte_2397F80[BYTE1(v25)]]
                                 ^ dword_2396E80[byte_2397F80[HIBYTE(v25)]]
                                 ^ dword_2397A80[byte_2397F80[(unsigned __int8)v25]];
      }
      v21 += 16;
      v23 -= 4;
    }
    while ( v22 != v21 );
    v26 = -4 * v20;
    v19 = &v51[v26 - 4];
    v16 = (int *)((char *)v16 + 16 - v26 * 4);
  }
  *v16 = *v19;
  v16[1] = v19[1];
  v16[2] = v19[2];
  v16[3] = v19[3];
  return 1;
}


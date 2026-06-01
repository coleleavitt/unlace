__int64 __fastcall sub_C03E70(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  _QWORD *v11; // rdx
  __int16 v12; // ax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r9
  int v20; // r11d
  int v21; // r10d
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __m128i v25; // xmm0
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // al
  __int64 result; // rax
  int v29; // [rsp+4h] [rbp-44h]

  v11 = a7;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x2B;
  if ( unk_2CD7484 )
  {
    v29 = a5;
    sub_EE9B50(43);
    v11 = a7;
    a5 = v29;
  }
  v12 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_DWORD *)(a1 + 24) = a5;
  *(_WORD *)(a1 + 1) = v12 & 0xF801 | 2;
  *(_DWORD *)(a1 + 28) = a8;
  if ( (_DWORD)a8 )
  {
    v13 = 0;
    v14 = 1;
    do
    {
      v15 = *v11;
      v16 = v14 - 1;
      v17 = v11[3];
      v11 += 6;
      v18 = *(v11 - 4);
      *(_QWORD *)(a1 + v13 + 32) = v15;
      v19 = *(v11 - 5);
      *(_DWORD *)(a1
                + 4 * v16
                + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
                + 32) = *((_DWORD *)v11 - 4);
      v20 = *((_DWORD *)v11 - 3);
      v21 = *((_DWORD *)v11 - 2);
      *(_QWORD *)(a1 + 8 * v16 + 8LL * *(unsigned int *)(a1 + 28) + 32) = v19;
      v22 = 4LL * v14;
      v23 = 8LL * v14 + 8LL * *(unsigned int *)(a1 + 28);
      v24 = v14 + 1;
      v14 += 3;
      *(_QWORD *)(a1 + v23 + 32) = v18;
      *(_QWORD *)(a1 + 8 * v24 + 8LL * *(unsigned int *)(a1 + 28) + 32) = v17;
      v25 = _mm_loadu_si128((const __m128i *)(a9 + 4 * v13));
      *(_DWORD *)(a1
                + v22
                + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
                + 32) = v20;
      *(_DWORD *)(a1
                + 4 * v24
                + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
                + 32) = v21;
      v26 = (a1
           + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
           + 4LL * (unsigned int)(3 * *(_DWORD *)(a1 + 28))
           + 32
           + 7)
          & 0xFFFFFFFFFFFFFFF8LL;
      *(__m128i *)(v26 + 4 * v13) = v25;
      *(__m128i *)(v26 + 4 * v13 + 16) = _mm_loadu_si128((const __m128i *)(a9 + 4 * v13 + 16));
      v13 += 8;
    }
    while ( 3 * (_DWORD)a8 + 1 != v14 );
  }
  v27 = sub_B63BD0(a1);
  *(_BYTE *)(a1 + 1) = (v27 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v27 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

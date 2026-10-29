__int64 __fastcall sub_81CFF0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rsi
  int v11; // r14d
  _QWORD *v13; // rdx
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // r12
  int v19; // r11d
  int v20; // r10d
  __m128i v21; // xmm0
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // al
  __int64 result; // rax

  v10 = a3;
  v11 = a4;
  v13 = a7;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x2C;
  if ( byte_4AD234C )
  {
    sub_AC4570(44);
    v13 = a7;
    v10 = (unsigned int)v10;
  }
  v14 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = v10;
  *(_DWORD *)(a1 + 20) = v11;
  *(_DWORD *)(a1 + 24) = a5;
  *(_WORD *)(a1 + 1) = v14 & 0xF801 | 2;
  *(_DWORD *)(a1 + 28) = a8;
  if ( (_DWORD)a8 )
  {
    a4 = 0;
    LODWORD(v10) = 1;
    do
    {
      v15 = *v13;
      v16 = (unsigned int)(v10 - 1);
      v17 = v13[2];
      v13 += 6;
      v18 = *(v13 - 3);
      v19 = *((_DWORD *)v13 - 3);
      v20 = *((_DWORD *)v13 - 2);
      v21 = _mm_loadu_si128((const __m128i *)(a9 + 4 * a4));
      *(_QWORD *)(a1 + a4 + 32) = v15;
      *(_DWORD *)(a1
                + 4 * v16
                + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
                + 32) = *((_DWORD *)v13 - 4);
      *(_QWORD *)(a1 + 8 * v16 + 8LL * *(unsigned int *)(a1 + 28) + 32) = *(v13 - 5);
      v22 = 4LL * (unsigned int)v10;
      v23 = 8LL * (unsigned int)v10 + 8LL * *(unsigned int *)(a1 + 28);
      v24 = (unsigned int)(v10 + 1);
      v10 = (unsigned int)(v10 + 3);
      *(_QWORD *)(a1 + v23 + 32) = v17;
      *(_QWORD *)(a1 + 8 * v24 + 8LL * *(unsigned int *)(a1 + 28) + 32) = v18;
      *(_DWORD *)(a1
                + v22
                + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
                + 32) = v19;
      *(_DWORD *)(a1
                + 4 * v24
                + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
                + 32) = v20;
      v25 = (a1
           + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
           + 4LL * (unsigned int)(3 * *(_DWORD *)(a1 + 28))
           + 32
           + 7)
          & 0xFFFFFFFFFFFFFFF8LL;
      *(__m128i *)(v25 + 4 * a4) = v21;
      *(__m128i *)(v25 + 4 * a4 + 16) = _mm_loadu_si128((const __m128i *)(a9 + 4 * a4 + 16));
      a4 += 8;
    }
    while ( (_DWORD)v10 != 3 * (_DWORD)a8 + 1 );
  }
  v26 = sub_76BE70(a1, v10, (__int64)v13, a4);
  *(_BYTE *)(a1 + 1) = (v26 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v26 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}


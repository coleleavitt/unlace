void __fastcall sub_A185A0(__int64 *a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rax
  char *v6; // r13
  _BYTE *v7; // rcx
  _BYTE *v8; // r8
  __int64 v9; // rdx
  _BYTE *v10; // r9
  _BYTE *v11; // rdi
  char v12; // si
  char v13; // si
  char v14; // si
  _BYTE *v15; // rsi
  _BYTE *v16; // rsi
  _BYTE *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // r10
  __int64 v22; // rsi
  __m128i v23; // xmm1
  _BYTE *v24; // rsi
  char *v25; // r14
  int v26; // r14d
  __int64 v27[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (char *)(a1 + 2);
  v4 = sub_2237400(a1, a1 + 2, a2, 192, v27);
  v5 = (char *)*a1;
  v6 = (char *)(*a1 + 192LL * *((unsigned int *)a1 + 2));
  if ( (char *)*a1 != v6 )
  {
    v7 = v5 + 32;
    v8 = v5 + 120;
    v9 = v4;
    v10 = v5 + 152;
    v11 = v5 + 72;
    do
    {
      v23 = _mm_loadu_si128((const __m128i *)v7 - 2);
      *(_QWORD *)(v9 + 16) = v9 + 32;
      *(__m128i *)v9 = v23;
      v24 = *((_BYTE **)v7 - 2);
      if ( v24 == v7 )
      {
        *(__m128i *)(v9 + 32) = _mm_loadu_si128((const __m128i *)v7);
      }
      else
      {
        *(_QWORD *)(v9 + 16) = v24;
        *(_QWORD *)(v9 + 32) = *(_QWORD *)v7;
      }
      *(_QWORD *)(v9 + 24) = *((_QWORD *)v7 - 1);
      *((_QWORD *)v7 - 2) = v7;
      *((_QWORD *)v7 - 1) = 0;
      *v7 = 0;
      v12 = v5[48] & 1 | *(_BYTE *)(v9 + 48) & 0xFE;
      *(_BYTE *)(v9 + 48) = v12;
      v13 = v5[48] & 2 | v12 & 0xFD;
      *(_BYTE *)(v9 + 48) = v13;
      v14 = v5[48] & 4 | v13 & 0xFB;
      *(_BYTE *)(v9 + 48) = v14;
      *(_BYTE *)(v9 + 48) = v5[48] & 8 | v14 & 0xF7;
      *(_QWORD *)(v9 + 56) = v9 + 72;
      v15 = *((_BYTE **)v7 + 3);
      if ( v15 == v11 )
      {
        *(__m128i *)(v9 + 72) = _mm_loadu_si128((const __m128i *)(v7 + 40));
      }
      else
      {
        *(_QWORD *)(v9 + 56) = v15;
        *(_QWORD *)(v9 + 72) = *((_QWORD *)v7 + 5);
      }
      *(_QWORD *)(v9 + 64) = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 3) = v11;
      *((_QWORD *)v7 + 4) = 0;
      v7[40] = 0;
      *(_BYTE *)(v9 + 88) = v5[88] & 1 | *(_BYTE *)(v9 + 88) & 0xFE;
      *(_WORD *)(v9 + 88) = *((_WORD *)v5 + 44) & 0x1FE | *(_WORD *)(v9 + 88) & 0xFE01;
      *(_BYTE *)(v9 + 89) = v5[89] & 0xE | *(_BYTE *)(v9 + 89) & 0xF1;
      *(_QWORD *)(v9 + 96) = *((_QWORD *)v7 + 8);
      *(_QWORD *)(v9 + 104) = v9 + 120;
      v16 = *((_BYTE **)v7 + 9);
      if ( v16 == v8 )
      {
        *(__m128i *)(v9 + 120) = _mm_loadu_si128((const __m128i *)(v7 + 88));
      }
      else
      {
        *(_QWORD *)(v9 + 104) = v16;
        *(_QWORD *)(v9 + 120) = *((_QWORD *)v7 + 11);
      }
      *(_QWORD *)(v9 + 112) = *((_QWORD *)v7 + 10);
      *((_QWORD *)v7 + 9) = v8;
      *((_QWORD *)v7 + 10) = 0;
      v7[88] = 0;
      *(_QWORD *)(v9 + 136) = v9 + 152;
      v17 = *((_BYTE **)v7 + 13);
      if ( v17 == v10 )
      {
        *(__m128i *)(v9 + 152) = _mm_loadu_si128((const __m128i *)(v7 + 120));
      }
      else
      {
        *(_QWORD *)(v9 + 136) = v17;
        *(_QWORD *)(v9 + 152) = *((_QWORD *)v7 + 15);
      }
      v18 = *((_QWORD *)v7 + 14);
      v5 += 192;
      v9 += 192;
      v7 += 192;
      v8 += 192;
      v11 += 192;
      *(_QWORD *)(v9 - 48) = v18;
      *(v7 - 72) = 0;
      *((_QWORD *)v7 - 11) = v10;
      v10 += 192;
      *((_QWORD *)v7 - 10) = 0;
      *(_OWORD *)(v9 - 24) = 0;
      *(_QWORD *)(v9 - 8) = 0;
      *(_QWORD *)(v9 - 24) = *((_QWORD *)v7 - 7);
      v19 = *((_QWORD *)v7 - 6);
      *((_QWORD *)v7 - 7) = 0;
      v20 = *(_QWORD *)(v9 - 16);
      *(_QWORD *)(v9 - 16) = v19;
      v21 = *((_QWORD *)v7 - 5);
      *((_QWORD *)v7 - 6) = v20;
      v22 = *(_QWORD *)(v9 - 8);
      *(_QWORD *)(v9 - 8) = v21;
      *((_QWORD *)v7 - 5) = v22;
    }
    while ( v6 != v5 );
    v25 = (char *)*a1;
    v6 = (char *)(*a1 + 192LL * *((unsigned int *)a1 + 2));
    if ( (char *)*a1 != v6 )
    {
      do
      {
        v6 -= 192;
        sub_A09D30((__int64)(v6 + 16));
      }
      while ( v25 != v6 );
      v6 = (char *)*a1;
    }
  }
  v26 = v27[0];
  if ( v3 != v6 )
    free(v6);
  *a1 = v4;
  *((_DWORD *)a1 + 3) = v26;
}

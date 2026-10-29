void __fastcall sub_A14160(__int64 *a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  char *v5; // rsi
  __int64 v6; // rbp
  char *v7; // r13
  char *v8; // rax
  char *v9; // r9
  __int64 v10; // rdx
  char *v11; // r8
  char *v12; // rdi
  char v13; // cl
  char v14; // cl
  char v15; // cl
  char *v16; // rcx
  char *v17; // rcx
  char *v18; // rcx
  char v19; // r10
  char v20; // cl
  char v21; // cl
  char v22; // cl
  char v23; // cl
  char v24; // cl
  char v25; // cl
  char v26; // cl
  __m128i v27; // xmm0
  char *v28; // rcx
  char *v29; // r14
  int v30; // r14d
  __int64 v31[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (char *)(a1 + 2);
  v4 = sub_2237400(a1, a1 + 2, a2, 176, v31);
  v5 = (char *)*a1;
  v6 = v4;
  v7 = (char *)(*a1 + 176LL * *((unsigned int *)a1 + 2));
  if ( (char *)*a1 != v7 )
  {
    v8 = v5 + 32;
    v9 = v5 + 144;
    v10 = v6;
    v11 = v5 + 72;
    v12 = v5 + 104;
    do
    {
      v27 = _mm_loadu_si128((const __m128i *)v8 - 2);
      *(_QWORD *)(v10 + 16) = v10 + 32;
      *(__m128i *)v10 = v27;
      v28 = *((char **)v8 - 2);
      if ( v28 == v8 )
      {
        *(__m128i *)(v10 + 32) = _mm_loadu_si128((const __m128i *)v8);
      }
      else
      {
        *(_QWORD *)(v10 + 16) = v28;
        *(_QWORD *)(v10 + 32) = *(_QWORD *)v8;
      }
      *(_QWORD *)(v10 + 24) = *((_QWORD *)v8 - 1);
      *((_QWORD *)v8 - 2) = v8;
      *((_QWORD *)v8 - 1) = 0;
      *v8 = 0;
      v13 = v5[48] & 1 | *(_BYTE *)(v10 + 48) & 0xFE;
      *(_BYTE *)(v10 + 48) = v13;
      v14 = v5[48] & 2 | v13 & 0xFD;
      *(_BYTE *)(v10 + 48) = v14;
      v15 = v5[48] & 4 | v14 & 0xFB;
      *(_BYTE *)(v10 + 48) = v15;
      *(_BYTE *)(v10 + 48) = v5[48] & 8 | v15 & 0xF7;
      *(_QWORD *)(v10 + 56) = v10 + 72;
      v16 = *((char **)v8 + 3);
      if ( v16 == v11 )
      {
        *(__m128i *)(v10 + 72) = _mm_loadu_si128((const __m128i *)(v8 + 40));
      }
      else
      {
        *(_QWORD *)(v10 + 56) = v16;
        *(_QWORD *)(v10 + 72) = *((_QWORD *)v8 + 5);
      }
      *(_QWORD *)(v10 + 64) = *((_QWORD *)v8 + 4);
      *((_QWORD *)v8 + 3) = v11;
      *((_QWORD *)v8 + 4) = 0;
      v8[40] = 0;
      *(_BYTE *)(v10 + 120) = 0;
      if ( v8[88] )
      {
        *(_QWORD *)(v10 + 88) = v10 + 104;
        v17 = *((char **)v8 + 7);
        if ( v17 == v12 )
        {
          *(__m128i *)(v10 + 104) = _mm_loadu_si128((const __m128i *)(v8 + 72));
        }
        else
        {
          *(_QWORD *)(v10 + 88) = v17;
          *(_QWORD *)(v10 + 104) = *((_QWORD *)v8 + 9);
        }
        *(_QWORD *)(v10 + 96) = *((_QWORD *)v8 + 8);
        *((_QWORD *)v8 + 7) = v12;
        *((_QWORD *)v8 + 8) = 0;
        v8[72] = 0;
        *(_BYTE *)(v10 + 120) = 1;
      }
      *(_BYTE *)(v10 + 160) = 0;
      if ( v8[128] )
      {
        *(_QWORD *)(v10 + 128) = v10 + 144;
        v18 = *((char **)v8 + 12);
        if ( v18 == v9 )
        {
          *(__m128i *)(v10 + 144) = _mm_loadu_si128((const __m128i *)v8 + 7);
        }
        else
        {
          *(_QWORD *)(v10 + 128) = v18;
          *(_QWORD *)(v10 + 144) = *((_QWORD *)v8 + 14);
        }
        *(_QWORD *)(v10 + 136) = *((_QWORD *)v8 + 13);
        *((_QWORD *)v8 + 12) = v9;
        *((_QWORD *)v8 + 13) = 0;
        v8[112] = 0;
        *(_BYTE *)(v10 + 160) = 1;
      }
      v19 = v5[168];
      v20 = *(_BYTE *)(v10 + 168);
      v5 += 176;
      v10 += 176;
      v8 += 176;
      v9 += 176;
      v11 += 176;
      v12 += 176;
      v21 = v19 & 1 | v20 & 0xFE;
      *(_BYTE *)(v10 - 8) = v21;
      v22 = *(v5 - 8) & 6 | v21 & 0xF9;
      *(_BYTE *)(v10 - 8) = v22;
      v23 = *(v5 - 8) & 8 | v22 & 0xF7;
      *(_BYTE *)(v10 - 8) = v23;
      v24 = *(v5 - 8) & 0x10 | v23 & 0xEF;
      *(_BYTE *)(v10 - 8) = v24;
      v25 = *(v5 - 8) & 0x20 | v24 & 0xDF;
      *(_BYTE *)(v10 - 8) = v25;
      v26 = *(v5 - 8) & 0x40 | v25 & 0xBF;
      *(_BYTE *)(v10 - 8) = v26;
      *(_BYTE *)(v10 - 8) = *(v5 - 8) & 0x80 | v26 & 0x7F;
    }
    while ( v7 != v5 );
    v29 = (char *)*a1;
    v7 = (char *)(*a1 + 176LL * *((unsigned int *)a1 + 2));
    if ( (char *)*a1 != v7 )
    {
      do
      {
        v7 -= 176;
        sub_A09C70((__int64)(v7 + 16));
      }
      while ( v29 != v7 );
      v7 = (char *)*a1;
    }
  }
  v30 = v31[0];
  if ( v3 != v7 )
    free(v7);
  *a1 = v6;
  *((_DWORD *)a1 + 3) = v30;
}

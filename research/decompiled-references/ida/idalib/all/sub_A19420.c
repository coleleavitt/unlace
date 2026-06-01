void __fastcall sub_A19420(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rdi
  __int64 v5; // rbp
  char *v6; // rbx
  char *v7; // rcx
  char *v8; // r14
  __int64 v9; // rdx
  char *v10; // r13
  char *v11; // r11
  char *v12; // r10
  char *v13; // r9
  char *v14; // r8
  char *v15; // rax
  char v16; // si
  char v17; // si
  char v18; // si
  char *v19; // rsi
  char *v20; // r15
  char *v21; // rsi
  char v22; // si
  char v23; // si
  char v24; // si
  char v25; // si
  char v26; // si
  char v27; // r15
  char *v28; // rsi
  char *v29; // rsi
  char *v30; // rsi
  char *v31; // rsi
  char *v32; // rsi
  __int64 v33; // rsi
  __m128i v34; // xmm0
  char *v35; // rsi
  char *v36; // r13
  int v37; // r13d
  char *v38; // [rsp+8h] [rbp-50h]
  __int64 v39[8]; // [rsp+18h] [rbp-40h] BYREF

  v38 = (char *)(a1 + 2);
  v3 = sub_2237400(a1, a1 + 2, a2, 384, v39);
  v4 = (char *)*a1;
  v5 = v3;
  v6 = (char *)(*a1 + 384LL * *((unsigned int *)a1 + 2));
  if ( (char *)*a1 != v6 )
  {
    v7 = v4 + 32;
    v8 = v4 + 352;
    v9 = v3;
    v10 = v4 + 312;
    v11 = v4 + 272;
    v12 = v4 + 232;
    v13 = v4 + 192;
    v14 = v4 + 144;
    v15 = v4 + 72;
    do
    {
      v34 = _mm_loadu_si128((const __m128i *)v7 - 2);
      *(_QWORD *)(v9 + 16) = v9 + 32;
      *(__m128i *)v9 = v34;
      v35 = *((char **)v7 - 2);
      if ( v7 == v35 )
      {
        *(__m128i *)(v9 + 32) = _mm_loadu_si128((const __m128i *)v7);
      }
      else
      {
        *(_QWORD *)(v9 + 16) = v35;
        *(_QWORD *)(v9 + 32) = *(_QWORD *)v7;
      }
      *(_QWORD *)(v9 + 24) = *((_QWORD *)v7 - 1);
      *((_QWORD *)v7 - 2) = v7;
      *((_QWORD *)v7 - 1) = 0;
      *v7 = 0;
      v16 = v4[48] & 1 | *(_BYTE *)(v9 + 48) & 0xFE;
      *(_BYTE *)(v9 + 48) = v16;
      v17 = v4[48] & 2 | v16 & 0xFD;
      *(_BYTE *)(v9 + 48) = v17;
      v18 = v4[48] & 4 | v17 & 0xFB;
      *(_BYTE *)(v9 + 48) = v18;
      *(_BYTE *)(v9 + 48) = v4[48] & 8 | v18 & 0xF7;
      *(_QWORD *)(v9 + 56) = v9 + 72;
      v19 = *((char **)v7 + 3);
      if ( v19 == v15 )
      {
        *(__m128i *)(v9 + 72) = _mm_loadu_si128((const __m128i *)(v7 + 40));
      }
      else
      {
        *(_QWORD *)(v9 + 56) = v19;
        *(_QWORD *)(v9 + 72) = *((_QWORD *)v7 + 5);
      }
      *(_QWORD *)(v9 + 64) = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 3) = v15;
      *((_QWORD *)v7 + 4) = 0;
      v7[40] = 0;
      *(_BYTE *)(v9 + 120) = 0;
      if ( v7[88] )
      {
        *(_QWORD *)(v9 + 88) = v9 + 104;
        v20 = *((char **)v7 + 7);
        if ( v20 == v4 + 104 )
        {
          *(__m128i *)(v9 + 104) = _mm_loadu_si128((const __m128i *)(v7 + 72));
        }
        else
        {
          *(_QWORD *)(v9 + 88) = v20;
          *(_QWORD *)(v9 + 104) = *((_QWORD *)v7 + 9);
        }
        *(_QWORD *)(v9 + 96) = *((_QWORD *)v7 + 8);
        *((_QWORD *)v7 + 7) = v4 + 104;
        *((_QWORD *)v7 + 8) = 0;
        v7[72] = 0;
        *(_BYTE *)(v9 + 120) = 1;
      }
      *(_BYTE *)(v9 + 160) = 0;
      if ( v7[128] )
      {
        *(_QWORD *)(v9 + 128) = v9 + 144;
        v21 = *((char **)v7 + 12);
        if ( v21 == v14 )
        {
          *(__m128i *)(v9 + 144) = _mm_loadu_si128((const __m128i *)v7 + 7);
        }
        else
        {
          *(_QWORD *)(v9 + 128) = v21;
          *(_QWORD *)(v9 + 144) = *((_QWORD *)v7 + 14);
        }
        *(_QWORD *)(v9 + 136) = *((_QWORD *)v7 + 13);
        *((_QWORD *)v7 + 12) = v14;
        *((_QWORD *)v7 + 13) = 0;
        v7[112] = 0;
        *(_BYTE *)(v9 + 160) = 1;
      }
      v22 = v4[168] & 1 | *(_BYTE *)(v9 + 168) & 0xFE;
      *(_BYTE *)(v9 + 168) = v22;
      v23 = v4[168] & 2 | v22 & 0xFD;
      *(_BYTE *)(v9 + 168) = v23;
      v24 = v4[168] & 4 | v23 & 0xFB;
      *(_BYTE *)(v9 + 168) = v24;
      v25 = v4[168] & 8 | v24 & 0xF7;
      *(_BYTE *)(v9 + 168) = v25;
      v26 = v4[168] & 0x10 | v25 & 0xEF;
      *(_BYTE *)(v9 + 168) = v26;
      v27 = v4[168];
      *(_BYTE *)(v9 + 208) = 0;
      *(_BYTE *)(v9 + 168) = v27 & 0x20 | v26 & 0xDF;
      if ( v7[176] )
      {
        *(_QWORD *)(v9 + 176) = v9 + 192;
        v28 = *((char **)v7 + 18);
        if ( v28 == v13 )
        {
          *(__m128i *)(v9 + 192) = _mm_loadu_si128((const __m128i *)v7 + 10);
        }
        else
        {
          *(_QWORD *)(v9 + 176) = v28;
          *(_QWORD *)(v9 + 192) = *((_QWORD *)v7 + 20);
        }
        *(_QWORD *)(v9 + 184) = *((_QWORD *)v7 + 19);
        *((_QWORD *)v7 + 18) = v13;
        *((_QWORD *)v7 + 19) = 0;
        v7[160] = 0;
        *(_BYTE *)(v9 + 208) = 1;
      }
      *(_BYTE *)(v9 + 248) = 0;
      if ( v7[216] )
      {
        *(_QWORD *)(v9 + 216) = v9 + 232;
        v29 = *((char **)v7 + 23);
        if ( v29 == v12 )
        {
          *(__m128i *)(v9 + 232) = _mm_loadu_si128((const __m128i *)(v7 + 200));
        }
        else
        {
          *(_QWORD *)(v9 + 216) = v29;
          *(_QWORD *)(v9 + 232) = *((_QWORD *)v7 + 25);
        }
        *(_QWORD *)(v9 + 224) = *((_QWORD *)v7 + 24);
        *((_QWORD *)v7 + 23) = v12;
        *((_QWORD *)v7 + 24) = 0;
        v7[200] = 0;
        *(_BYTE *)(v9 + 248) = 1;
      }
      *(_BYTE *)(v9 + 288) = 0;
      if ( v7[256] )
      {
        *(_QWORD *)(v9 + 256) = v9 + 272;
        v30 = *((char **)v7 + 28);
        if ( v30 == v11 )
        {
          *(__m128i *)(v9 + 272) = _mm_loadu_si128((const __m128i *)v7 + 15);
        }
        else
        {
          *(_QWORD *)(v9 + 256) = v30;
          *(_QWORD *)(v9 + 272) = *((_QWORD *)v7 + 30);
        }
        *(_QWORD *)(v9 + 264) = *((_QWORD *)v7 + 29);
        *((_QWORD *)v7 + 28) = v11;
        *((_QWORD *)v7 + 29) = 0;
        v7[240] = 0;
        *(_BYTE *)(v9 + 288) = 1;
      }
      *(_BYTE *)(v9 + 328) = 0;
      if ( v7[296] )
      {
        *(_QWORD *)(v9 + 296) = v9 + 312;
        v31 = *((char **)v7 + 33);
        if ( v31 == v10 )
        {
          *(__m128i *)(v9 + 312) = _mm_loadu_si128((const __m128i *)(v7 + 280));
        }
        else
        {
          *(_QWORD *)(v9 + 296) = v31;
          *(_QWORD *)(v9 + 312) = *((_QWORD *)v7 + 35);
        }
        *(_QWORD *)(v9 + 304) = *((_QWORD *)v7 + 34);
        *((_QWORD *)v7 + 33) = v10;
        *((_QWORD *)v7 + 34) = 0;
        v7[280] = 0;
        *(_BYTE *)(v9 + 328) = 1;
      }
      *(_BYTE *)(v9 + 368) = 0;
      if ( v7[336] )
      {
        *(_QWORD *)(v9 + 336) = v9 + 352;
        v32 = *((char **)v7 + 38);
        if ( v32 == v8 )
        {
          *(__m128i *)(v9 + 352) = _mm_loadu_si128((const __m128i *)v7 + 20);
        }
        else
        {
          *(_QWORD *)(v9 + 336) = v32;
          *(_QWORD *)(v9 + 352) = *((_QWORD *)v7 + 40);
        }
        *(_QWORD *)(v9 + 344) = *((_QWORD *)v7 + 39);
        *((_QWORD *)v7 + 38) = v8;
        *((_QWORD *)v7 + 39) = 0;
        v7[320] = 0;
        *(_BYTE *)(v9 + 368) = 1;
      }
      v33 = *((_QWORD *)v7 + 43);
      v4 += 384;
      v9 += 384;
      v7 += 384;
      v8 += 384;
      v10 += 384;
      v11 += 384;
      v12 += 384;
      *(_QWORD *)(v9 - 8) = v33;
      v13 += 384;
      v14 += 384;
      v15 += 384;
    }
    while ( v6 != v4 );
    v36 = (char *)*a1;
    v6 = (char *)(*a1 + 384LL * *((unsigned int *)a1 + 2));
    if ( (char *)*a1 != v6 )
    {
      do
      {
        v6 -= 384;
        sub_A0A3E0((__int64)(v6 + 16));
      }
      while ( v36 != v6 );
      v6 = (char *)*a1;
    }
  }
  v37 = v39[0];
  if ( v38 != v6 )
    free(v6);
  *a1 = v5;
  *((_DWORD *)a1 + 3) = v37;
}

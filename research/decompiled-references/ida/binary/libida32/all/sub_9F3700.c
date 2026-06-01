void __fastcall sub_9F3700(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rbx
  __int64 v4; // rax
  _BYTE *v5; // rcx
  __int64 v6; // rbp
  _BYTE *v7; // r12
  _BYTE *v8; // rdx
  _BYTE *v9; // r14
  _BYTE *v10; // r11
  _BYTE *v11; // r10
  _BYTE *v12; // r9
  _BYTE *v13; // r8
  _BYTE *v14; // rdi
  __m128i v15; // xmm1
  _BYTE *v16; // rsi
  char v17; // si
  char v18; // si
  char v19; // si
  _BYTE *v20; // rsi
  _BYTE *v21; // rsi
  _BYTE *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rsi
  _BYTE *v27; // rsi
  char v28; // si
  char v29; // si
  char v30; // si
  _BYTE *v31; // rsi
  char v32; // si
  _BYTE *v33; // rsi
  char v34; // si
  char v35; // si
  char v36; // si
  char v37; // si
  char v38; // r15
  _BYTE *v39; // r14
  int v40; // r14d
  __int64 v41[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (_BYTE *)(a1 + 16);
  v4 = sub_22136C0(a1, a1 + 16, a2, 320, v41);
  v5 = *(_BYTE **)a1;
  v6 = v4;
  v7 = (_BYTE *)(*(_QWORD *)a1 + 320LL * *(unsigned int *)(a1 + 8));
  if ( *(_BYTE **)a1 != v7 )
  {
    v8 = v5 + 32;
    v9 = v5 + 152;
    v10 = v5 + 288;
    v11 = v5 + 248;
    v12 = v5 + 208;
    v13 = v5 + 120;
    v14 = v5 + 72;
    do
    {
      v15 = _mm_loadu_si128((const __m128i *)v8 - 2);
      *(_QWORD *)(v4 + 16) = v4 + 32;
      *(__m128i *)v4 = v15;
      v16 = *((_BYTE **)v8 - 2);
      if ( v16 == v8 )
      {
        *(__m128i *)(v4 + 32) = _mm_loadu_si128((const __m128i *)v8);
      }
      else
      {
        *(_QWORD *)(v4 + 16) = v16;
        *(_QWORD *)(v4 + 32) = *(_QWORD *)v8;
      }
      *(_QWORD *)(v4 + 24) = *((_QWORD *)v8 - 1);
      *((_QWORD *)v8 - 2) = v8;
      *((_QWORD *)v8 - 1) = 0;
      *v8 = 0;
      v17 = v5[48] & 1 | *(_BYTE *)(v4 + 48) & 0xFE;
      *(_BYTE *)(v4 + 48) = v17;
      v18 = v5[48] & 2 | v17 & 0xFD;
      *(_BYTE *)(v4 + 48) = v18;
      v19 = v5[48] & 4 | v18 & 0xFB;
      *(_BYTE *)(v4 + 48) = v19;
      *(_BYTE *)(v4 + 48) = v5[48] & 8 | v19 & 0xF7;
      *(_QWORD *)(v4 + 56) = v4 + 72;
      v20 = *((_BYTE **)v8 + 3);
      if ( v20 == v14 )
      {
        *(__m128i *)(v4 + 72) = _mm_loadu_si128((const __m128i *)(v8 + 40));
      }
      else
      {
        *(_QWORD *)(v4 + 56) = v20;
        *(_QWORD *)(v4 + 72) = *((_QWORD *)v8 + 5);
      }
      *(_QWORD *)(v4 + 64) = *((_QWORD *)v8 + 4);
      *((_QWORD *)v8 + 3) = v14;
      *((_QWORD *)v8 + 4) = 0;
      v8[40] = 0;
      *(_BYTE *)(v4 + 88) = v5[88] & 1 | *(_BYTE *)(v4 + 88) & 0xFE;
      *(_WORD *)(v4 + 88) = *((_WORD *)v5 + 44) & 0x1FE | *(_WORD *)(v4 + 88) & 0xFE01;
      *(_BYTE *)(v4 + 89) = v5[89] & 0xE | *(_BYTE *)(v4 + 89) & 0xF1;
      *(_QWORD *)(v4 + 96) = *((_QWORD *)v8 + 8);
      *(_QWORD *)(v4 + 104) = v4 + 120;
      v21 = *((_BYTE **)v8 + 9);
      if ( v21 == v13 )
      {
        *(__m128i *)(v4 + 120) = _mm_loadu_si128((const __m128i *)(v8 + 88));
      }
      else
      {
        *(_QWORD *)(v4 + 104) = v21;
        *(_QWORD *)(v4 + 120) = *((_QWORD *)v8 + 11);
      }
      *(_QWORD *)(v4 + 112) = *((_QWORD *)v8 + 10);
      *((_QWORD *)v8 + 9) = v13;
      *((_QWORD *)v8 + 10) = 0;
      v8[88] = 0;
      *(_QWORD *)(v4 + 136) = v4 + 152;
      v22 = *((_BYTE **)v8 + 13);
      if ( v22 == v9 )
      {
        *(__m128i *)(v4 + 152) = _mm_loadu_si128((const __m128i *)(v8 + 120));
      }
      else
      {
        *(_QWORD *)(v4 + 136) = v22;
        *(_QWORD *)(v4 + 152) = *((_QWORD *)v8 + 15);
      }
      *(_QWORD *)(v4 + 144) = *((_QWORD *)v8 + 14);
      v8[120] = 0;
      *((_QWORD *)v8 + 13) = v9;
      *((_QWORD *)v8 + 14) = 0;
      *(_OWORD *)(v4 + 168) = 0;
      *(_QWORD *)(v4 + 184) = 0;
      *(_QWORD *)(v4 + 168) = *((_QWORD *)v8 + 17);
      v23 = *((_QWORD *)v8 + 18);
      *((_QWORD *)v8 + 17) = 0;
      v24 = *(_QWORD *)(v4 + 176);
      *(_QWORD *)(v4 + 176) = v23;
      v25 = *((_QWORD *)v8 + 19);
      *((_QWORD *)v8 + 18) = v24;
      v26 = *(_QWORD *)(v4 + 184);
      *(_QWORD *)(v4 + 184) = v25;
      *((_QWORD *)v8 + 19) = v26;
      *(_BYTE *)(v4 + 312) = 0;
      if ( v8[280] )
      {
        *(_QWORD *)(v4 + 192) = v4 + 208;
        v27 = *((_BYTE **)v8 + 20);
        if ( v27 == v12 )
        {
          *(__m128i *)(v4 + 208) = _mm_loadu_si128((const __m128i *)v8 + 11);
        }
        else
        {
          *(_QWORD *)(v4 + 192) = v27;
          *(_QWORD *)(v4 + 208) = *((_QWORD *)v8 + 22);
        }
        *(_QWORD *)(v4 + 200) = *((_QWORD *)v8 + 21);
        *((_QWORD *)v8 + 20) = v12;
        *((_QWORD *)v8 + 21) = 0;
        v8[176] = 0;
        v28 = v5[224] & 1 | *(_BYTE *)(v4 + 224) & 0xFE;
        *(_BYTE *)(v4 + 224) = v28;
        v29 = v5[224] & 2 | v28 & 0xFD;
        *(_BYTE *)(v4 + 224) = v29;
        v30 = v5[224] & 4 | v29 & 0xFB;
        *(_BYTE *)(v4 + 224) = v30;
        *(_BYTE *)(v4 + 224) = v5[224] & 8 | v30 & 0xF7;
        *(_QWORD *)(v4 + 232) = v4 + 248;
        v31 = *((_BYTE **)v8 + 25);
        if ( v31 == v11 )
        {
          *(__m128i *)(v4 + 248) = _mm_loadu_si128((const __m128i *)(v8 + 216));
        }
        else
        {
          *(_QWORD *)(v4 + 232) = v31;
          *(_QWORD *)(v4 + 248) = *((_QWORD *)v8 + 27);
        }
        *(_QWORD *)(v4 + 240) = *((_QWORD *)v8 + 26);
        *((_QWORD *)v8 + 25) = v11;
        *((_QWORD *)v8 + 26) = 0;
        v8[216] = 0;
        v32 = v5[264] & 1 | *(_BYTE *)(v4 + 264) & 0xFE;
        *(_BYTE *)(v4 + 264) = v32;
        *(_BYTE *)(v4 + 264) = v5[264] & 6 | v32 & 0xF9;
        *(_QWORD *)(v4 + 272) = v4 + 288;
        v33 = *((_BYTE **)v8 + 30);
        if ( v33 == v10 )
        {
          *(__m128i *)(v4 + 288) = _mm_loadu_si128((const __m128i *)v8 + 16);
        }
        else
        {
          *(_QWORD *)(v4 + 272) = v33;
          *(_QWORD *)(v4 + 288) = *((_QWORD *)v8 + 32);
        }
        *(_QWORD *)(v4 + 280) = *((_QWORD *)v8 + 31);
        *((_QWORD *)v8 + 30) = v10;
        *((_QWORD *)v8 + 31) = 0;
        v8[256] = 0;
        v34 = v5[304] & 1 | *(_BYTE *)(v4 + 304) & 0xFE;
        *(_BYTE *)(v4 + 304) = v34;
        v35 = v5[304] & 2 | v34 & 0xFD;
        *(_BYTE *)(v4 + 304) = v35;
        v36 = v5[304] & 4 | v35 & 0xFB;
        *(_BYTE *)(v4 + 304) = v36;
        v37 = v5[304] & 8 | v36 & 0xF7;
        *(_BYTE *)(v4 + 304) = v37;
        v38 = v5[304];
        *(_BYTE *)(v4 + 312) = 1;
        *(_BYTE *)(v4 + 304) = v38 & 0x70 | v37 & 0x8F;
      }
      v5 += 320;
      v4 += 320;
      v8 += 320;
      v9 += 320;
      v10 += 320;
      v11 += 320;
      v12 += 320;
      v13 += 320;
      v14 += 320;
    }
    while ( v7 != v5 );
    v39 = *(_BYTE **)a1;
    v7 = (_BYTE *)(*(_QWORD *)a1 + 320LL * *(unsigned int *)(a1 + 8));
    if ( *(_BYTE **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 320;
          if ( v7[312] )
            break;
          sub_9E5FF0((__int64)(v7 + 16));
          if ( v39 == v7 )
          {
            v7 = *(_BYTE **)a1;
            goto LABEL_28;
          }
        }
        sub_9E5FA0((__int64)(v7 + 192));
        sub_9E5FF0((__int64)(v7 + 16));
      }
      while ( v39 != v7 );
      v7 = *(_BYTE **)a1;
    }
  }
LABEL_28:
  v40 = v41[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v40;
}


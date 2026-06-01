__int64 __fastcall sub_A1B090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r12
  __int64 v6; // rbp
  char v7; // al
  char v8; // al
  char v9; // al
  _QWORD *v10; // r14
  _QWORD *v11; // r15
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rdi
  char *v18; // rdi
  char v19; // al
  __int64 v20; // rdi
  __int64 v22; // rdx
  char v23; // dl
  char v24; // al
  char v25; // al
  char v26; // al
  __int64 v27; // rdx
  char v28; // dl
  char v29; // al
  __int64 v30; // rdx
  char v31; // dl
  char v32; // al
  char v33; // al
  char v34; // al
  char v35; // al
  char v36; // dl
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  char v42; // al
  char v43; // al
  char v44; // al

  v3 = a2 - a1;
  v4 = 0xCCCCCCCCCCCCCCCDLL * (v3 >> 6);
  if ( v3 > 0 )
  {
    v6 = a1;
    do
    {
      *(__m128i *)a3 = _mm_loadu_si128((const __m128i *)v6);
      sub_A0AAD0(a3 + 16, (_QWORD *)(v6 + 16));
      v7 = *(_BYTE *)(v6 + 48) & 1 | *(_BYTE *)(a3 + 48) & 0xFE;
      *(_BYTE *)(a3 + 48) = v7;
      v8 = *(_BYTE *)(v6 + 48) & 2 | v7 & 0xFD;
      *(_BYTE *)(a3 + 48) = v8;
      v9 = *(_BYTE *)(v6 + 48) & 4 | v8 & 0xFB;
      *(_BYTE *)(a3 + 48) = v9;
      *(_BYTE *)(a3 + 48) = *(_BYTE *)(v6 + 48) & 8 | v9 & 0xF7;
      sub_A0AAD0(a3 + 56, (_QWORD *)(v6 + 56));
      *(_BYTE *)(a3 + 88) = *(_BYTE *)(v6 + 88) & 1 | *(_BYTE *)(a3 + 88) & 0xFE;
      *(_WORD *)(a3 + 88) = *(_WORD *)(v6 + 88) & 0x1FE | *(_WORD *)(a3 + 88) & 0xFE01;
      *(_BYTE *)(a3 + 89) = *(_BYTE *)(v6 + 89) & 0xE | *(_BYTE *)(a3 + 89) & 0xF1;
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(v6 + 96);
      sub_A0AAD0(a3 + 104, (_QWORD *)(v6 + 104));
      sub_A0AAD0(a3 + 136, (_QWORD *)(v6 + 136));
      *(_QWORD *)(a3 + 184) = 0;
      v10 = *(_QWORD **)(a3 + 168);
      v11 = *(_QWORD **)(a3 + 176);
      *(_OWORD *)(a3 + 168) = 0;
      v12 = v10;
      *(_QWORD *)(a3 + 168) = *(_QWORD *)(v6 + 168);
      v13 = *(_QWORD *)(v6 + 176);
      *(_QWORD *)(v6 + 168) = 0;
      v14 = *(_QWORD *)(a3 + 176);
      *(_QWORD *)(a3 + 176) = v13;
      v15 = *(_QWORD *)(v6 + 184);
      *(_QWORD *)(v6 + 176) = v14;
      v16 = *(_QWORD *)(a3 + 184);
      *(_QWORD *)(a3 + 184) = v15;
      for ( *(_QWORD *)(v6 + 184) = v16; v11 != v12; v12 += 15 )
      {
        while ( 1 )
        {
          v17 = (char *)v12[10];
          if ( v17 != (char *)(v12 + 12) )
            operator delete(v17);
          v18 = (char *)v12[5];
          if ( v18 != (char *)(v12 + 7) )
            operator delete(v18);
          if ( (_QWORD *)*v12 == v12 + 2 )
            break;
          operator delete((void *)*v12);
          v12 += 15;
          if ( v11 == v12 )
            goto LABEL_10;
        }
      }
LABEL_10:
      if ( v10 )
        operator delete(v10);
      v19 = *(_BYTE *)(v6 + 312);
      if ( *(_BYTE *)(a3 + 312) )
      {
        v20 = a3 + 192;
        if ( v19 )
        {
          sub_A0AAD0(v20, (_QWORD *)(v6 + 192));
          v37 = *(_BYTE *)(v6 + 224) & 1 | *(_BYTE *)(a3 + 224) & 0xFE;
          *(_BYTE *)(a3 + 224) = v37;
          v38 = *(_BYTE *)(v6 + 224) & 2 | v37 & 0xFD;
          *(_BYTE *)(a3 + 224) = v38;
          v39 = *(_BYTE *)(v6 + 224) & 4 | v38 & 0xFB;
          *(_BYTE *)(a3 + 224) = v39;
          *(_BYTE *)(a3 + 224) = *(_BYTE *)(v6 + 224) & 8 | v39 & 0xF7;
          sub_A0AAD0(a3 + 232, (_QWORD *)(v6 + 232));
          v40 = *(_BYTE *)(v6 + 264) & 1 | *(_BYTE *)(a3 + 264) & 0xFE;
          *(_BYTE *)(a3 + 264) = v40;
          *(_BYTE *)(a3 + 264) = *(_BYTE *)(v6 + 264) & 6 | v40 & 0xF9;
          sub_A0AAD0(a3 + 272, (_QWORD *)(v6 + 272));
          v41 = *(_BYTE *)(v6 + 304) & 1 | *(_BYTE *)(a3 + 304) & 0xFE;
          *(_BYTE *)(a3 + 304) = v41;
          v42 = *(_BYTE *)(v6 + 304) & 2 | v41 & 0xFD;
          *(_BYTE *)(a3 + 304) = v42;
          v43 = *(_BYTE *)(v6 + 304) & 4 | v42 & 0xFB;
          *(_BYTE *)(a3 + 304) = v43;
          v44 = *(_BYTE *)(v6 + 304) & 8 | v43 & 0xF7;
          *(_BYTE *)(a3 + 304) = v44;
          *(_BYTE *)(a3 + 304) = *(_BYTE *)(v6 + 304) & 0x70 | v44 & 0x8F;
        }
        else
        {
          *(_BYTE *)(a3 + 312) = 0;
          sub_A09CE0(v20);
        }
      }
      else if ( v19 )
      {
        *(_QWORD *)(a3 + 192) = a3 + 208;
        v22 = *(_QWORD *)(v6 + 192);
        if ( v22 == v6 + 208 )
        {
          *(__m128i *)(a3 + 208) = _mm_loadu_si128((const __m128i *)(v6 + 208));
        }
        else
        {
          *(_QWORD *)(a3 + 192) = v22;
          *(_QWORD *)(a3 + 208) = *(_QWORD *)(v6 + 208);
        }
        *(_QWORD *)(a3 + 200) = *(_QWORD *)(v6 + 200);
        v23 = *(_BYTE *)(v6 + 224);
        *(_QWORD *)(v6 + 192) = v6 + 208;
        *(_QWORD *)(v6 + 200) = 0;
        *(_BYTE *)(v6 + 208) = 0;
        v24 = v23 & 1 | *(_BYTE *)(a3 + 224) & 0xFE;
        *(_BYTE *)(a3 + 224) = v24;
        v25 = *(_BYTE *)(v6 + 224) & 2 | v24 & 0xFD;
        *(_BYTE *)(a3 + 224) = v25;
        v26 = *(_BYTE *)(v6 + 224) & 4 | v25 & 0xFB;
        *(_BYTE *)(a3 + 224) = v26;
        *(_BYTE *)(a3 + 224) = *(_BYTE *)(v6 + 224) & 8 | v26 & 0xF7;
        *(_QWORD *)(a3 + 232) = a3 + 248;
        v27 = *(_QWORD *)(v6 + 232);
        if ( v27 == v6 + 248 )
        {
          *(__m128i *)(a3 + 248) = _mm_loadu_si128((const __m128i *)(v6 + 248));
        }
        else
        {
          *(_QWORD *)(a3 + 232) = v27;
          *(_QWORD *)(a3 + 248) = *(_QWORD *)(v6 + 248);
        }
        *(_QWORD *)(a3 + 240) = *(_QWORD *)(v6 + 240);
        v28 = *(_BYTE *)(v6 + 264);
        *(_QWORD *)(v6 + 232) = v6 + 248;
        *(_QWORD *)(v6 + 240) = 0;
        *(_BYTE *)(v6 + 248) = 0;
        v29 = v28 & 1 | *(_BYTE *)(a3 + 264) & 0xFE;
        *(_BYTE *)(a3 + 264) = v29;
        *(_BYTE *)(a3 + 264) = *(_BYTE *)(v6 + 264) & 6 | v29 & 0xF9;
        *(_QWORD *)(a3 + 272) = a3 + 288;
        v30 = *(_QWORD *)(v6 + 272);
        if ( v30 == v6 + 288 )
        {
          *(__m128i *)(a3 + 288) = _mm_loadu_si128((const __m128i *)(v6 + 288));
        }
        else
        {
          *(_QWORD *)(a3 + 272) = v30;
          *(_QWORD *)(a3 + 288) = *(_QWORD *)(v6 + 288);
        }
        *(_QWORD *)(a3 + 280) = *(_QWORD *)(v6 + 280);
        v31 = *(_BYTE *)(v6 + 304);
        *(_QWORD *)(v6 + 272) = v6 + 288;
        *(_QWORD *)(v6 + 280) = 0;
        *(_BYTE *)(v6 + 288) = 0;
        v32 = v31 & 1 | *(_BYTE *)(a3 + 304) & 0xFE;
        *(_BYTE *)(a3 + 304) = v32;
        v33 = *(_BYTE *)(v6 + 304) & 2 | v32 & 0xFD;
        *(_BYTE *)(a3 + 304) = v33;
        v34 = *(_BYTE *)(v6 + 304) & 4 | v33 & 0xFB;
        *(_BYTE *)(a3 + 304) = v34;
        v35 = *(_BYTE *)(v6 + 304) & 8 | v34 & 0xF7;
        *(_BYTE *)(a3 + 304) = v35;
        v36 = *(_BYTE *)(v6 + 304);
        *(_BYTE *)(a3 + 312) = 1;
        *(_BYTE *)(a3 + 304) = v36 & 0x70 | v35 & 0x8F;
      }
      v6 += 320;
      a3 += 320;
      --v4;
    }
    while ( v4 );
  }
  return a3;
}

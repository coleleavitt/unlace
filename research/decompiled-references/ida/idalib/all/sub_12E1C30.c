__int64 __fastcall sub_12E1C30(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // r12
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  _BYTE *v20; // rsi
  __int64 v21; // rdx
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  __m128i v24; // xmm1
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __m128i v27; // xmm2
  _BYTE *v28; // rsi
  __int64 v29; // rdx
  _BYTE *v30; // rsi
  __int64 v31; // rdx
  __m128 *v32; // rax
  volatile signed __int32 *v33; // rdi
  _DWORD *v34; // rax
  _DWORD **v35; // rdx
  _DWORD *v36; // rdi
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 *v42; // rsi
  __int64 v43; // rdx
  unsigned __int8 v44; // cl
  char v45; // r10
  int v46; // eax
  unsigned __int8 v47; // r9
  char v48; // bp
  char v49; // di
  char v50; // bl
  int v51; // r8d
  char v52; // r11
  __int64 v53; // r9
  unsigned __int64 v54; // r8
  _DWORD **v55; // rax
  double v56[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( **(_QWORD **)(a1 + 56) )
    return 0;
  v5 = (_QWORD *)operator new(0x228u);
  v6 = *(_BYTE **)a2;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = v5;
  v5[1] = 0x100000001LL;
  v9 = (__int64)(v5 + 2);
  *v5 = off_2C42D40;
  v5[2] = v5 + 4;
  sub_12DB130(v5 + 2, v6, (__int64)&v6[v7]);
  v10 = *(_BYTE **)(a2 + 32);
  v11 = *(_QWORD *)(a2 + 40);
  v8[6] = v8 + 8;
  sub_12DB130(v8 + 6, v10, (__int64)&v10[v11]);
  v12 = *(_BYTE **)(a2 + 64);
  v13 = *(_QWORD *)(a2 + 72);
  v8[10] = v8 + 12;
  sub_12DB130(v8 + 10, v12, (__int64)&v12[v13]);
  v14 = *(_BYTE **)(a2 + 96);
  v15 = *(_QWORD *)(a2 + 104);
  v8[14] = v8 + 16;
  sub_12DB130(v8 + 14, v14, (__int64)&v14[v15]);
  v16 = *(_BYTE **)(a2 + 128);
  v17 = *(_QWORD *)(a2 + 136);
  v8[18] = v8 + 20;
  sub_12DB130(v8 + 18, v16, (__int64)&v16[v17]);
  v18 = *(_BYTE **)(a2 + 160);
  v19 = *(_QWORD *)(a2 + 168);
  v8[22] = v8 + 24;
  sub_12DB130(v8 + 22, v18, (__int64)&v18[v19]);
  v20 = *(_BYTE **)(a2 + 200);
  v21 = *(_QWORD *)(a2 + 208);
  *((_DWORD *)v8 + 52) = *(_DWORD *)(a2 + 192);
  v8[27] = v8 + 29;
  sub_12DB130(v8 + 27, v20, (__int64)&v20[v21]);
  sub_C23620((__int64)(v8 + 31), (__int64 *)(a2 + 232));
  sub_C23620((__int64)(v8 + 34), (__int64 *)(a2 + 256));
  sub_12E1AE0(v8 + 37, (__int64 *)(a2 + 280));
  sub_12E1AE0(v8 + 40, (__int64 *)(a2 + 304));
  sub_C23620((__int64)(v8 + 43), (__int64 *)(a2 + 328));
  v22 = *(_BYTE **)(a2 + 368);
  v23 = *(_QWORD *)(a2 + 376);
  *((_WORD *)v8 + 184) = *(_WORD *)(a2 + 352);
  *(_QWORD *)((char *)v8 + 372) = *(_QWORD *)(a2 + 356);
  v8[48] = v8 + 50;
  sub_12DB130(v8 + 48, v22, (__int64)&v22[v23]);
  v24 = _mm_loadu_si128((const __m128i *)(a2 + 408));
  v25 = *(_BYTE **)(a2 + 424);
  v26 = *(_QWORD *)(a2 + 432);
  v8[52] = *(_QWORD *)(a2 + 400);
  v8[55] = v8 + 57;
  *(__m128i *)(v8 + 53) = v24;
  sub_12DB130(v8 + 55, v25, (__int64)&v25[v26]);
  v27 = _mm_loadu_si128((const __m128i *)(a2 + 456));
  v28 = *(_BYTE **)(a2 + 472);
  v8[61] = v8 + 63;
  v29 = *(_QWORD *)(a2 + 480);
  *(__m128i *)(v8 + 59) = v27;
  sub_12DB130(v8 + 61, v28, (__int64)&v28[v29]);
  v30 = *(_BYTE **)(a2 + 504);
  v31 = *(_QWORD *)(a2 + 512);
  v8[65] = v8 + 67;
  sub_12DB130(v8 + 65, v30, (__int64)&v30[v31]);
  *(_QWORD *)&v56[0] = v9;
  v32 = *(__m128 **)(a1 + 48);
  *(_QWORD *)&v56[0] = v8;
  v33 = (volatile signed __int32 *)v32->m128_u64[1];
  *v32 = _mm_loadh_ps(v56);
  if ( v33 )
  {
    sub_4343A0(v33);
    v9 = **(_QWORD **)(a1 + 48);
  }
  v34 = sub_105D340(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), v9);
  if ( v34 )
  {
    v35 = *(_DWORD ***)(a1 + 56);
    ++v34[50];
    v36 = *v35;
    *v35 = v34;
    if ( !v36 || (v37 = v36[50] == 1, --v36[50], !v37) )
    {
LABEL_9:
      if ( *(_BYTE *)(a1 + 72) )
      {
        (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v34 + 432LL))(
          v34,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL),
          *(_QWORD *)(a1 + 40),
          0);
        sub_145BE40(*(_QWORD *)(a1 + 8), **(_QWORD **)(a1 + 56), 0);
        v41 = *(_QWORD *)(a1 + 16);
        if ( v41 )
        {
          sub_A87340(v41, **(_QWORD **)(a1 + 56), 0, v38, v39, v40);
          v42 = *(__int64 **)(a1 + 40);
          v43 = *(_QWORD *)(a1 + 16);
          v44 = *((_BYTE *)v42 + 3);
          v45 = *(_BYTE *)v42;
          v46 = *(_DWORD *)v42;
          v47 = *((_BYTE *)v42 + 1);
          v48 = *(_BYTE *)v42;
          v49 = *((_BYTE *)v42 + 89);
          v50 = *(_BYTE *)(v43 + 17465);
          v37 = (*(_WORD *)v42 & 0x1008) == 0;
          *(_QWORD *)(v43 + 17472) = 0;
          LOBYTE(v51) = (v46 & 0x10000080) == 128;
          v52 = *(_BYTE *)(v43 + 17466) & 0x7F;
          *(_BYTE *)(v43 + 17465) = (v47 >> 2) & 2 | v50 & 0xFD;
          LOBYTE(v46) = *(_BYTE *)(v43 + 17467);
          *(_BYTE *)(v43 + 17466) = (v44 >> 2 << 7) | v52;
          LOBYTE(v46) = ((((v47 >> 4) ^ 1) & 1) << 6)
                      | (32 * (((v47 >> 3) ^ 1) & 1)) & 0xBF
                      | (8 * v45) & 0x10
                      | (v47 >> 1) & 8
                      | (4 * (v48 & 1)) & 0x8F
                      | (v47 >> 2) & 2
                      | !v37
                      | v46 & 0x80;
          v53 = (unsigned int)(4 * v51);
          *(_BYTE *)(v43 + 17467) = v46;
          v54 = (unsigned int)v53 | (v44 >> 2) & 2 | *(_BYTE *)(v43 + 17468) & 0xF9;
          LOBYTE(v46) = *(_BYTE *)(v43 + 17469) & 0x7F;
          *(_BYTE *)(v43 + 17468) = v53 | (v44 >> 2) & 2 | *(_BYTE *)(v43 + 17468) & 0xF9;
          *(_BYTE *)(v43 + 17469) = v46 | (v49 << 7);
          *(_QWORD *)(v43 + 17464) = *(_QWORD *)(v43 + 17464) & 0xFFFF80067F800200LL | 0x660800442002LL;
          sub_B3E800(v43 + 18568, v42 + 68, v43, 0x660800442002LL, v54, v53);
        }
      }
      return 0;
    }
  }
  else
  {
    v55 = *(_DWORD ***)(a1 + 56);
    v36 = *v55;
    *v55 = nullptr;
    if ( !v36 )
      return 0;
    v37 = v36[50]-- == 1;
    if ( !v37 )
      return 0;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v36 + 8LL))(v36);
  v34 = **(_DWORD ***)(a1 + 56);
  if ( v34 )
    goto LABEL_9;
  return 0;
}

void __fastcall sub_1E88B80(__int64 a1, int *a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 *v7; // r9
  __int64 v8; // r10
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdx
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rbp
  __int64 v22; // rdx
  __m128 si128; // xmm0
  unsigned __int64 v24; // rdx
  unsigned int v25; // ebp
  char v26; // al
  __int16 v27; // ax
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  int v31; // edx
  unsigned __int8 v32; // si
  __int64 v33; // rsi
  unsigned __int64 v34; // r15
  unsigned int v35; // eax
  char v36; // r9
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  __int64 v46; // rbp
  __int64 v47; // r15
  int v48; // edi
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp-1Ch] [rbp-21C8h]
  __int64 v54; // [rsp-14h] [rbp-21C0h]
  unsigned int v55; // [rsp+0h] [rbp-21ACh]
  int v56; // [rsp+Ch] [rbp-21A0h]
  int v57; // [rsp+Ch] [rbp-21A0h]
  char v58; // [rsp+10h] [rbp-219Ch]
  char v59; // [rsp+10h] [rbp-219Ch]
  __int64 v60; // [rsp+24h] [rbp-2188h]
  char *v61; // [rsp+3Ch] [rbp-2170h] BYREF
  __m128i v62; // [rsp+44h] [rbp-2168h] BYREF
  void *ptr; // [rsp+54h] [rbp-2158h] BYREF
  __int64 v64; // [rsp+5Ch] [rbp-2150h]
  _BYTE v65[40]; // [rsp+64h] [rbp-2148h] BYREF
  __int64 v66; // [rsp+8Ch] [rbp-2120h]
  int v67; // [rsp+A4h] [rbp-2108h] BYREF
  __int64 v68; // [rsp+ACh] [rbp-2100h]
  __int64 v69; // [rsp+B4h] [rbp-20F8h]
  int v70; // [rsp+BCh] [rbp-20F0h]
  __int64 v71; // [rsp+C4h] [rbp-20E8h]
  __int128 v72; // [rsp+D4h] [rbp-20D8h] BYREF
  char *v73; // [rsp+E4h] [rbp-20C8h]
  __int64 v74; // [rsp+ECh] [rbp-20C0h]
  char v75; // [rsp+F4h] [rbp-20B8h] BYREF
  __m128 *v76; // [rsp+114h] [rbp-2098h]
  __int64 v77; // [rsp+11Ch] [rbp-2090h]
  __m128 v78; // [rsp+124h] [rbp-2088h] BYREF
  int v79[36]; // [rsp+134h] [rbp-2078h] BYREF
  __int64 v80[1021]; // [rsp+1C4h] [rbp-1FE8h] BYREF

  v5 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v5 )
  {
    v6 = 0;
    v7 = *(__int64 **)a3;
    v8 = *(_QWORD *)a3 + 8 * v5;
    v9 = *(__int64 **)a3;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 13 )
      {
        v10 = (*(_WORD *)(v10 + 18) >> 3) & 0x1FF;
        LOBYTE(v10) = (_WORD)v10 == 435;
        v6 = (unsigned int)v10 | (unsigned int)v6;
      }
      ++v9;
    }
    while ( (__int64 *)v8 != v9 );
    v55 = (unsigned int)a2;
    if ( (_BYTE)v6 )
    {
      sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), (unsigned int)a2, 0x192Eu, 0);
      a2 = v79;
      v79[0] = 30;
      sub_1E889E0((__int64)v80, v79);
      sub_15F7200(v80);
      v7 = *(__int64 **)a3;
    }
    v60 = *v7;
    v13 = *v7 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v15 - 25) <= 1 )
    {
      sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), v55, 0x192Eu, 0);
      a2 = v79;
      v79[0] = 29;
      sub_1E889E0((__int64)v80, v79);
      sub_15F7200(v80);
      v14 = *(_QWORD *)v13;
      v15 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
    if ( (_BYTE)v15 == 5 )
    {
      sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), v55, 0x192Eu, 0);
      a2 = v79;
      v79[0] = 31;
      sub_1E889E0((__int64)v80, v79);
      sub_15F7200(v80);
      v14 = *(_QWORD *)v13;
    }
    v16 = (char *)sub_F63270(v14, (__int64)a2, v15, v10, v6, (__int64)v7);
    v21 = v16;
    v61 = v16;
    if ( v16 )
    {
      if ( v16[28] >= 0 )
      {
        if ( *((_QWORD *)v16 + 16)
          || (sub_7052B0((__int64 *)(*((_QWORD *)v16 + 13) + 96LL), *((_QWORD *)v16 + 13), v17, v18, v19, v20),
              *((_QWORD *)v21 + 16)) )
        {
          v22 = *(unsigned int *)(a3 + 8);
          v73 = &v75;
          v74 = 0x400000000LL;
          v72 = 0;
          si128 = (__m128)_mm_load_si128((const __m128i *)&unk_23A7BC0);
          v76 = &v78;
          v56 = v22;
          v24 = v22 - 1;
          v77 = 0;
          v78 = si128;
          ptr = v65;
          v64 = 0x200000000LL;
          if ( v24 > 2 )
          {
            sub_2237220(&ptr, v65, v24, 8);
            v56 = *(_DWORD *)(a3 + 8);
          }
          if ( v56 == 1 )
          {
LABEL_32:
            sub_18C74E0(a1, 0, 0, 4);
            v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
            v45 = sub_704780((__int64 *)(v40 + 72), v40, v41, v42, v43, v44);
            v46 = *(_QWORD *)(a1 + 544);
            v47 = *(_QWORD *)(a1 + 512);
            if ( v45 )
              v45 += 5;
            v57 = *(_DWORD *)(a1 + 80);
            v48 = *(_DWORD *)(a1 + 2632);
            v49 = *(_QWORD *)(a1 + 9944);
            v67 = 9;
            *(_QWORD *)(a1 + 544) = v45;
            v50 = *(_DWORD *)(a1 + 40);
            v66 = v49;
            *(_DWORD *)(a1 + 80) = v50;
            *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
            v68 = 0;
            v69 = v60;
            v62.m128i_i16[0] = 0;
            v70 = 0;
            v62.m128i_i32[1] = v55;
            v62.m128i_i32[2] = v55;
            v62.m128i_i32[3] = v55;
            v71 = 0;
            *(_QWORD *)(a1 + 512) = 0;
            *(_QWORD *)(a1 + 9944) = 0;
            sub_1A19220((__int64)v80, a1, (__int64)&v67, &v62, (__int64)ptr, (unsigned int)v64, si128, a5, 0, 1u);
            sub_1A22930(
              (__int64)v80,
              a1,
              (__int64)&v67,
              (__int64)&v62,
              (unsigned __int64 *)ptr,
              (unsigned int)v64,
              si128,
              a5,
              v53,
              v54);
            sub_168B9F0((__int64)v79, (__int64 *)(a1 + 8), *((_DWORD *)v61 + 6), 0x170Bu, 0);
            sub_184B8A0((__int64)v79, (__int64 *)&v61);
            sub_15F7200(v79);
            sub_1A0BB10((__int64)v80);
            if ( v46 )
            {
              v51 = v66;
              *(_QWORD *)(a1 + 544) = v46;
              *(_QWORD *)(a1 + 512) = v47;
              *(_QWORD *)(a1 + 9944) = v51;
              *(_DWORD *)(a1 + 80) = v57;
              *(_DWORD *)(a1 + 2632) = v48;
            }
            sub_190D5E0(a1, si128);
            if ( ptr != v65 )
              free(ptr);
            sub_9B7090((__int64)&v72);
            return;
          }
          v25 = 1;
          while ( 1 )
          {
            v80[0] = *(_QWORD *)(*(_QWORD *)a3 + 8LL * v25);
            v30 = *(_QWORD *)(*(_QWORD *)(v80[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
            v31 = *(unsigned __int8 *)(*(_QWORD *)v30 + 16LL);
            if ( v31 == 43 )
              goto LABEL_26;
            v32 = v31 - 25;
            if ( v31 == 44 || v32 <= 1u )
            {
              if ( v32 > 1u )
                goto LABEL_26;
            }
            else if ( (_BYTE)v31 == 13 && ((*(_WORD *)(*(_QWORD *)v30 + 18LL) >> 3) & 0x1FF) == 0x1B3 )
            {
              goto LABEL_26;
            }
            v80[0] = sub_A72DD0(*(_QWORD *)(a1 + 248), v80[0]);
LABEL_26:
            v33 = *(_QWORD *)(a1 + 248);
            v34 = sub_F67970(v80, v33);
            v35 = sub_18C0240(v80[0], v33);
            v78.m128_u64[0] += 24LL;
            v36 = v35;
            v37 = (v72 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v38 = v37;
            if ( *((_QWORD *)&v72 + 1) >= v37 + 24 && (_QWORD)v72 )
            {
              *(_QWORD *)&v72 = v37 + 24;
              v39 = v37;
            }
            else
            {
              v59 = v35;
              v52 = sub_986170((__int64)&v72, 24, 24, 3, v37, v35);
              v36 = v59;
              v39 = v52;
              v38 = v52;
            }
            *(_WORD *)v39 = *(_WORD *)v39 & 0xFE00 | 0x1A;
            if ( unk_2CD7484 )
            {
              v58 = v36;
              sub_EE9B50(26);
              v36 = v58;
            }
            v26 = *(_BYTE *)(v39 + 1);
            *(_QWORD *)(v39 + 8) = v34;
            *(_QWORD *)(v39 + 16) = 0;
            *(_BYTE *)(v39 + 1) = (2 * (v36 & 3)) | v26 & 0xF9;
            v27 = *(_WORD *)(v39 + 1) & 0xF807;
            *(_WORD *)(v39 + 1) = v27;
            *(_BYTE *)(v39 + 2) = HIBYTE(v27) & 0xF7;
            *(_DWORD *)(v39 + 4) = v55;
            v28 = sub_B62360(v39);
            *(_BYTE *)(v39 + 1) = (v28 << 6) | *(_BYTE *)(v39 + 1) & 0x3F;
            *(_BYTE *)(v39 + 2) = *(_BYTE *)(v39 + 2) & 0xF8 | (v28 >> 2) & 7;
            v29 = (unsigned int)v64 + 1LL;
            if ( v29 > HIDWORD(v64) )
            {
              ++v25;
              sub_2237220(&ptr, v65, v29, 8);
              *((_QWORD *)ptr + (unsigned int)v64) = v38;
              LODWORD(v64) = v64 + 1;
              if ( v25 == v56 )
                goto LABEL_32;
            }
            else
            {
              ++v25;
              *((_QWORD *)ptr + (unsigned int)v64) = v38;
              LODWORD(v64) = v64 + 1;
              if ( v25 == v56 )
                goto LABEL_32;
            }
          }
        }
      }
    }
  }
}

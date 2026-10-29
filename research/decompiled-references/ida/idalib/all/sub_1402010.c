void __fastcall sub_1402010(__int64 a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _BYTE *v10; // rcx
  size_t v11; // r8
  int v12; // edx
  unsigned int v13; // esi
  bool v14; // zf
  __int64 v15; // rax
  bool v16; // cl
  __m128i *v17; // rdi
  __int64 v18; // rdi
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  size_t v21; // rax
  int v22; // edx
  __int64 *v23; // r9
  __int64 v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r15
  void **v29; // rcx
  __int64 v30; // rax
  unsigned __int8 *v31; // rdx
  void *v32; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rdx
  int v35; // eax
  _BYTE *v36; // r15
  __int64 v37; // r14
  int v38; // eax
  _DWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // r15
  _QWORD *v43; // rdi
  __int64 v44; // r15
  int v45; // r14d
  _DWORD *v46; // rdi
  __int64 v47; // rax
  __int64 *v48; // [rsp+8h] [rbp-180h]
  _DWORD *v49; // [rsp+10h] [rbp-178h]
  __int64 *v50; // [rsp+18h] [rbp-170h]
  char v51; // [rsp+2Fh] [rbp-159h] BYREF
  void *v52[2]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v53; // [rsp+40h] [rbp-148h] BYREF
  void *v54[2]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v55[16]; // [rsp+60h] [rbp-128h] BYREF
  void *v56; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v57[12]; // [rsp+78h] [rbp-110h] BYREF
  char v58; // [rsp+84h] [rbp-104h]
  void *v59[2]; // [rsp+88h] [rbp-100h] BYREF
  _BYTE v60[24]; // [rsp+98h] [rbp-F0h] BYREF
  unsigned __int64 v61; // [rsp+B0h] [rbp-D8h]
  void *v62; // [rsp+B8h] [rbp-D0h] BYREF
  const char *v63; // [rsp+C0h] [rbp-C8h]
  __m128i v64; // [rsp+C8h] [rbp-C0h] BYREF
  __int16 v65; // [rsp+D8h] [rbp-B0h]
  __m128i v66; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v67; // [rsp+F0h] [rbp-98h] BYREF
  const char *v68; // [rsp+100h] [rbp-88h] BYREF
  void *v69; // [rsp+108h] [rbp-80h]
  const char *v70; // [rsp+110h] [rbp-78h]
  __m128i v71; // [rsp+118h] [rbp-70h] BYREF
  bool v72; // [rsp+128h] [rbp-60h]
  char v73; // [rsp+129h] [rbp-5Fh]
  __m128i v74; // [rsp+130h] [rbp-58h]
  __m128i v75; // [rsp+140h] [rbp-48h]

  v4 = *(_BYTE *)(a2 + 56);
  if ( (v4 & 1) != 0 )
  {
    v6 = 3;
    v7 = 1;
    v5 = *(_QWORD *)(a1 + 48);
    if ( (v4 & 2) != 0 )
      v7 = 3;
    if ( *(_BYTE *)(a1 + 76) )
      goto LABEL_5;
LABEL_32:
    if ( !sub_2236570(a1 + 56, v5) )
      goto LABEL_10;
    goto LABEL_9;
  }
  v5 = *(_QWORD *)(a1 + 48);
  v6 = (v4 & 8) == 0 ? 2 : 6;
  v7 = (v4 & 8) != 0 ? 4 : 0;
  if ( (v4 & 2) != 0 )
    v7 = (v4 & 8) == 0 ? 2 : 6;
  if ( !*(_BYTE *)(a1 + 76) )
    goto LABEL_32;
LABEL_5:
  v8 = *(_QWORD **)(a1 + 56);
  v9 = &v8[*(unsigned int *)(a1 + 68)];
  if ( v8 == v9 )
    goto LABEL_10;
  while ( v5 != *v8 )
  {
    if ( v9 == ++v8 )
      goto LABEL_10;
  }
LABEL_9:
  v7 = v6;
LABEL_10:
  v65 = 0;
  v10 = *(_BYTE **)a2;
  v11 = *(_QWORD *)(a2 + 8);
  v61 = 0;
  v62 = &v64;
  v63 = nullptr;
  v64.m128i_i8[0] = 0;
  v66.m128i_i8[8] = 0;
  v67.m128i_i8[8] = 0;
  sub_99BDC0(&v62, 0, 0, v10, v11);
  v12 = *(_DWORD *)(a2 + 20);
  v13 = dword_2614760[v7];
  v14 = (*(_BYTE *)(a2 + 56) & 4) == 0;
  v15 = *(_QWORD *)(a1 + 48);
  v16 = !v14;
  v61 = __PAIR64__(v12, v13);
  LOBYTE(v65) = !v14;
  if ( v14 || !*(_BYTE *)(v15 + 96) )
  {
    if ( *(_BYTE *)(a2 + 32) )
      v66 = _mm_loadu_si128((const __m128i *)(a2 + 24));
    if ( *(_BYTE *)(a2 + 48) )
      v67 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v18 = *(_QWORD *)(a1 + 16);
    v51 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 16) + 21LL) & 0x10) == 0 )
      goto LABEL_22;
    v30 = sub_FEEE40(v15);
    v31 = *(unsigned __int8 **)v30;
    v32 = *(void **)(v30 + 8);
    BYTE1(v70) = 0;
    LOBYTE(v56) = 1;
    v68 = (const char *)v31;
    v69 = v32;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_float", 14);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_inttypes", 17);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_iso646", 15);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_limits", 15);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_stdalign", 17);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_stdarg", 15);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_stdatomic", 18);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_stdbool", 16);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_stddef", 15);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_stdint", 15);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_stdnoreturn", 20);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_tgmath", 15);
    LOBYTE(v56) = 1;
    sub_B7E0A0((__int64)&v68, (char *)&v56, "_Builtin_unwind", 15);
    if ( BYTE1(v70) )
    {
      v15 = *(_QWORD *)(a1 + 48);
      if ( !(_BYTE)v70 )
      {
        v18 = *(_QWORD *)(a1 + 16);
        v13 = v61;
        v16 = v65;
LABEL_22:
        v68 = (const char *)__PAIR64__(HIDWORD(v61), v13);
        v69 = &v71;
        if ( v62 == &v64 )
        {
          v71 = _mm_loadu_si128(&v64);
        }
        else
        {
          v69 = v62;
          v71.m128i_i64[0] = v64.m128i_i64[0];
        }
        v72 = v16;
        v19 = _mm_load_si128(&v66);
        v64.m128i_i8[0] = 0;
        v70 = v63;
        v20 = _mm_load_si128(&v67);
        v62 = &v64;
        v63 = nullptr;
        v73 = HIBYTE(v65);
        v74 = v19;
        v75 = v20;
        sub_1401CB0(v18, (__int64 *)v15, (unsigned int *)&v68, &v51);
        if ( v69 != &v71 )
          operator delete(v69);
LABEL_26:
        if ( v51 )
        {
          sub_FC70B0((__int64)&v68, *(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 28), 1268);
          sub_FEEE60((__int64)v52, *(__int64 **)(a1 + 48), 0);
          sub_AEC220((unsigned __int8 **)&v68, (_BYTE *)v52[0], (signed __int64)v52[1]);
          v21 = j__strlen("framework module");
          v22 = *(_DWORD *)(a1 + 28);
          *(_QWORD *)&v57[4] = 0;
          LODWORD(v56) = v22;
          HIDWORD(v56) = v22;
          v59[0] = v60;
          v58 = 0;
          v59[1] = nullptr;
          v60[0] = 0;
          v60[16] = 0;
          v57[0] = 1;
          v54[0] = v55;
          sub_13F28B0(v54, "framework module", (__int64)&aFrameworkModul[v21]);
          sub_A0AAD0((__int64)v59, v54);
          if ( v54[0] != v55 )
            operator delete(v54[0]);
          if ( (_DWORD)v56 && HIDWORD(v56) )
          {
            v23 = (__int64 *)v68;
            if ( v68 )
            {
              v24 = *((unsigned int *)v68 + 134);
              v25 = *((_QWORD *)v68 + 66);
              v26 = *((unsigned int *)v68 + 135);
              v27 = v24 + 1;
              v28 = v25 + (v24 << 6);
            }
            else
            {
              v34 = v69;
              v35 = *((_DWORD *)v69 + 3744);
              if ( v35 )
              {
                v40 = (unsigned int)(v35 - 1);
                *((_DWORD *)v69 + 3744) = v40;
                v23 = (__int64 *)v34[v40 + 1856];
                v41 = *((unsigned int *)v23 + 134);
                *(_BYTE *)v23 = 0;
                v25 = v23[66];
                *((_DWORD *)v23 + 106) = 0;
                v42 = (_QWORD *)(v25 + (v41 << 6));
                if ( (_QWORD *)v25 != v42 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v42 -= 8;
                      v43 = (_QWORD *)v42[3];
                      if ( v43 == v42 + 5 )
                        break;
                      v49 = (_DWORD *)v25;
                      v48 = v23;
                      operator delete(v43);
                      v25 = (unsigned __int64)v49;
                      v23 = v48;
                      if ( v49 == (_DWORD *)v42 )
                        goto LABEL_64;
                    }
                  }
                  while ( (_QWORD *)v25 != v42 );
LABEL_64:
                  v25 = v23[66];
                }
                *((_DWORD *)v23 + 134) = 0;
                v26 = *((unsigned int *)v23 + 135);
              }
              else
              {
                v26 = 6;
                v23 = (__int64 *)operator new(0x3A0u);
                *(_BYTE *)v23 = 0;
                v23[12] = (__int64)(v23 + 14);
                v23[16] = (__int64)(v23 + 18);
                v23[20] = (__int64)(v23 + 22);
                v23[24] = (__int64)(v23 + 26);
                v23[28] = (__int64)(v23 + 30);
                v23[32] = (__int64)(v23 + 34);
                v23[36] = (__int64)(v23 + 38);
                v23[40] = (__int64)(v23 + 42);
                v23[44] = (__int64)(v23 + 46);
                v23[48] = (__int64)(v23 + 50);
                v23[52] = (__int64)(v23 + 54);
                v23[13] = 0;
                *((_BYTE *)v23 + 112) = 0;
                v23[17] = 0;
                *((_BYTE *)v23 + 144) = 0;
                v23[21] = 0;
                *((_BYTE *)v23 + 176) = 0;
                v23[25] = 0;
                *((_BYTE *)v23 + 208) = 0;
                v23[29] = 0;
                *((_BYTE *)v23 + 240) = 0;
                v23[33] = 0;
                *((_BYTE *)v23 + 272) = 0;
                v23[37] = 0;
                *((_BYTE *)v23 + 304) = 0;
                v23[41] = 0;
                *((_BYTE *)v23 + 336) = 0;
                v23[45] = 0;
                *((_BYTE *)v23 + 368) = 0;
                v23[49] = 0;
                *((_BYTE *)v23 + 400) = 0;
                v23[53] = 0x800000000LL;
                v25 = (unsigned __int64)(v23 + 68);
                v23[66] = (__int64)(v23 + 68);
                v23[67] = 0x600000000LL;
              }
              v68 = (const char *)v23;
              v28 = v25;
              v27 = 1;
            }
            v29 = &v56;
            if ( v27 > v26 )
            {
              v50 = v23;
              if ( v25 > (unsigned __int64)&v56 || v28 <= (unsigned __int64)&v56 )
              {
                v49 = v23 + 68;
                v48 = v23 + 66;
                v44 = sub_2237400(v23 + 66, v23 + 68, v27, 64, v54);
                sub_9EF810(v48, v44);
                v23 = v50;
                v45 = (int)v54[0];
                v46 = (_DWORD *)v50[66];
                if ( v46 != v49 )
                {
                  v48 = v50;
                  free(v46);
                  v23 = v50;
                }
                v47 = *((unsigned int *)v23 + 134);
                v23[66] = v44;
                v29 = &v56;
                *((_DWORD *)v23 + 135) = v45;
                v28 = (v47 << 6) + v44;
              }
              else
              {
                v49 = v23 + 68;
                v48 = v23 + 66;
                v36 = &v57[-v25 - 8];
                v37 = sub_2237400(v23 + 66, v23 + 68, v27, 64, v54);
                sub_9EF810(v48, v37);
                v23 = v50;
                v38 = (int)v54[0];
                v39 = (_DWORD *)v50[66];
                if ( v39 == v49 )
                {
                  v50[66] = v37;
                  *((_DWORD *)v23 + 135) = v38;
                }
                else
                {
                  v49 = v54[0];
                  v48 = v50;
                  free(v39);
                  v23 = v50;
                  v50[66] = v37;
                  *((_DWORD *)v48 + 135) = (_DWORD)v49;
                }
                v29 = (void **)&v36[v37];
                v28 = v37 + ((unsigned __int64)*((unsigned int *)v23 + 134) << 6);
              }
            }
            v49 = v23;
            v48 = (__int64 *)v29;
            *(_QWORD *)v28 = *v29;
            *(_DWORD *)(v28 + 8) = *((_DWORD *)v29 + 2);
            *(_QWORD *)(v28 + 12) = *(void **)((char *)v29 + 12);
            *(_DWORD *)(v28 + 20) = *((_DWORD *)v29 + 5);
            *(_QWORD *)(v28 + 24) = v28 + 40;
            sub_13F27F0((_QWORD *)(v28 + 24), v29[3], (__int64)v29[4] + (_QWORD)v29[3]);
            *(_BYTE *)(v28 + 56) = *((_BYTE *)v48 + 56);
            ++v49[134];
          }
          if ( v59[0] != v60 )
            operator delete(v59[0]);
          if ( v52[0] != &v53 )
            operator delete(v52[0]);
          sub_AEA040((__int64)&v68);
        }
        v17 = (__m128i *)v62;
        if ( v62 != &v64 )
          goto LABEL_15;
        return;
      }
      v33 = *(_QWORD *)(a1 + 48);
      v68 = "_Builtin_stddef";
      v69 = byte_9 + 6;
      v70 = "max_align_t";
      v71.m128i_i64[0] = 11;
      if ( !sub_FEF1A0(v33, (__int64)&v68, 2) )
        goto LABEL_26;
    }
    v18 = *(_QWORD *)(a1 + 16);
    v15 = *(_QWORD *)(a1 + 48);
    v13 = v61;
    v16 = v65;
    goto LABEL_22;
  }
  sub_FC70B0((__int64)&v68, *(_QWORD *)(a1 + 8), v12, 1094);
  sub_FEEE60((__int64)&v56, *(__int64 **)(a1 + 48), 0);
  sub_AEC220((unsigned __int8 **)&v68, v56, *(signed __int64 *)v57);
  if ( v56 != &v57[8] )
    operator delete(v56);
  sub_AEA040((__int64)&v68);
  v17 = (__m128i *)v62;
  *(_BYTE *)(a1 + 41) = 1;
  if ( v17 != &v64 )
LABEL_15:
    operator delete(v17);
}

__int64 __fastcall sub_1800490(__int64 *a1, __int64 *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  signed __int64 v15; // r15
  void *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 *v19; // r9
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r11d
  void *v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned int v29; // r15d
  unsigned __int64 v30; // rax
  __int64 v31; // rbp
  size_t v33; // rdx
  _BYTE *v34; // rdi
  char *v37; // [rsp+8h] [rbp-C90h]
  unsigned int v38; // [rsp+8h] [rbp-C90h]
  char *v39; // [rsp+8h] [rbp-C90h]
  int v40; // [rsp+8h] [rbp-C90h]
  unsigned int src; // [rsp+10h] [rbp-C88h]
  char *srca; // [rsp+10h] [rbp-C88h]
  void *srcb; // [rsp+10h] [rbp-C88h]
  char v44[4]; // [rsp+24h] [rbp-C74h] BYREF
  char v45[8]; // [rsp+28h] [rbp-C70h] BYREF
  __int64 v46; // [rsp+30h] [rbp-C68h] BYREF
  int v47; // [rsp+38h] [rbp-C60h]
  __int64 v48; // [rsp+40h] [rbp-C58h]
  void *ptr; // [rsp+48h] [rbp-C50h]
  __int64 v50; // [rsp+50h] [rbp-C48h]
  _BYTE v51[16]; // [rsp+58h] [rbp-C40h] BYREF
  char v52; // [rsp+68h] [rbp-C30h]
  _QWORD v53[5]; // [rsp+C0h] [rbp-BD8h] BYREF
  void *v54; // [rsp+E8h] [rbp-BB0h]
  __int64 v55; // [rsp+F0h] [rbp-BA8h]
  _BYTE v56[16]; // [rsp+F8h] [rbp-BA0h] BYREF
  __int64 v57; // [rsp+108h] [rbp-B90h] BYREF
  void *v58; // [rsp+110h] [rbp-B88h]
  __int64 v59; // [rsp+118h] [rbp-B80h]
  _QWORD v60[4]; // [rsp+120h] [rbp-B78h] BYREF
  void *v61; // [rsp+140h] [rbp-B58h]
  __int64 v62; // [rsp+148h] [rbp-B50h]
  __int64 v63; // [rsp+150h] [rbp-B48h]
  __int64 v64; // [rsp+158h] [rbp-B40h]
  __int64 v65; // [rsp+160h] [rbp-B38h]
  __int64 v66; // [rsp+168h] [rbp-B30h]
  __int64 v67; // [rsp+170h] [rbp-B28h]
  __int64 v68; // [rsp+178h] [rbp-B20h]
  __int64 v69; // [rsp+180h] [rbp-B18h]
  __int64 v70; // [rsp+188h] [rbp-B10h]
  __int64 v71; // [rsp+190h] [rbp-B08h]
  __int64 v72; // [rsp+198h] [rbp-B00h]
  __int64 v73; // [rsp+1A0h] [rbp-AF8h]
  __int64 v74; // [rsp+1A8h] [rbp-AF0h]
  __int64 v75; // [rsp+1B0h] [rbp-AE8h]
  __int64 v76; // [rsp+1B8h] [rbp-AE0h]
  __int64 v77; // [rsp+1C0h] [rbp-AD8h]
  __int64 v78; // [rsp+1C8h] [rbp-AD0h]
  __int64 v79; // [rsp+1D0h] [rbp-AC8h]
  __int16 v80; // [rsp+1D8h] [rbp-AC0h]
  __int64 v81; // [rsp+1E0h] [rbp-AB8h]
  _QWORD *v82; // [rsp+1F0h] [rbp-AA8h] BYREF
  __int64 v83; // [rsp+1F8h] [rbp-AA0h]
  __int128 v84; // [rsp+200h] [rbp-A98h]
  __int64 v85; // [rsp+210h] [rbp-A88h]
  __int64 v86; // [rsp+218h] [rbp-A80h]
  __int64 v87; // [rsp+220h] [rbp-A78h]
  int v88; // [rsp+228h] [rbp-A70h]
  __int64 v89; // [rsp+230h] [rbp-A68h]
  unsigned int v90; // [rsp+240h] [rbp-A58h]
  unsigned int v91; // [rsp+244h] [rbp-A54h]
  __int64 v92; // [rsp+248h] [rbp-A50h]
  int v93; // [rsp+250h] [rbp-A48h]
  __int64 v94; // [rsp+258h] [rbp-A40h]
  __int64 v95; // [rsp+260h] [rbp-A38h]
  int v96; // [rsp+268h] [rbp-A30h]
  __int64 *v97; // [rsp+270h] [rbp-A28h] BYREF
  __int64 v98; // [rsp+278h] [rbp-A20h]
  __int64 v99; // [rsp+280h] [rbp-A18h] BYREF
  __int16 v100; // [rsp+4C0h] [rbp-7D8h]
  __int64 v101; // [rsp+4C8h] [rbp-7D0h]
  _BYTE *v102; // [rsp+4D0h] [rbp-7C8h] BYREF
  __int64 v103; // [rsp+4D8h] [rbp-7C0h]
  _BYTE v104[16]; // [rsp+4E0h] [rbp-7B8h] BYREF
  _QWORD v105[3]; // [rsp+4F0h] [rbp-7A8h] BYREF
  _QWORD v106[242]; // [rsp+508h] [rbp-790h] BYREF

  v9 = *(_QWORD *)(a5 + 40);
  v53[0] &= 0xFFFFFFC000000000LL;
  v57 = v9;
  v54 = v56;
  v58 = v60;
  memset(&v53[2], 0, 24);
  v55 = 0x200000000LL;
  v59 = 0x200000000LL;
  v60[2] = 0;
  v60[3] = 0;
  v61 = nullptr;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v10 = (_QWORD *)a1[30];
  v11 = (_QWORD *)a1[31];
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 &= 0xF000u;
  v81 = 0;
  v12 = sub_16043A0(v11, v10, (__int64)v56, a4, a5, a6);
  v83 = v13;
  v82 = (_QWORD *)v12;
  sub_15AE040((__int64)v53, 50, a3, (__int64)v45, (__int64)v44, (__int64)&v82);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v82 = v53;
  v83 = 0;
  v92 = v65;
  v97 = &v99;
  v98 = 0x400000000LL;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v93 = 9;
  v94 = 0;
  LOBYTE(v100) = (((LODWORD(v53[0]) >> 12) & 0x7F) == 69) | v100 & 0xFE;
  v105[0] = v57;
  v103 = 0x200000000LL;
  v105[2] = 0x200000000LL;
  v95 = 0;
  v96 = 0;
  v100 &= 0xFC01u;
  v101 = 0;
  v102 = v104;
  v105[1] = v106;
  v106[2] = qword_2CD8AE0;
  memset(&v106[3], 0, 40);
  v14 = *(unsigned int *)(a5 + 16);
  v91 = a3;
  v15 = 8 * v14;
  v90 = a3;
  v89 = a4;
  v16 = *(void **)(a5 + 8);
  v106[232] = 0;
  v17 = v15 >> 3;
  if ( (unsigned __int64)v15 > 0x10 )
  {
    srcb = v16;
    sub_2237220(&v102, v104, v15 >> 3, 8);
    v17 = v15 >> 3;
    v16 = srcb;
    v34 = &v102[8 * (unsigned int)v103];
  }
  else
  {
    if ( !v15 )
      goto LABEL_4;
    v34 = v104;
  }
  v40 = v17;
  memcpy(v34, v16, v15);
  LODWORD(v15) = v103;
  LODWORD(v17) = v40;
LABEL_4:
  *(_DWORD *)(a5 + 16) = 0;
  LODWORD(v103) = v17 + v15;
  sub_15D8C50((__int64)v105, a5 + 40);
  v18 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a5 + 56) = 0;
  if ( v18 )
    HIDWORD(v92) = v18;
  HIDWORD(v46) = a3;
  v52 &= 0xFCu;
  v19 = &v46;
  ptr = v51;
  v50 = 0x200000000LL;
  v47 = 0;
  v20 = (unsigned int)v98 + 1LL;
  v48 = 0;
  LODWORD(v46) = 1;
  v21 = (unsigned __int64)&v97[18 * (unsigned int)v98];
  if ( v20 > HIDWORD(v98) )
  {
    if ( v97 > &v46 || v21 <= (unsigned __int64)&v46 )
    {
      sub_1497B50((__int64)&v97, v20);
      v19 = &v46;
      v21 = (unsigned __int64)&v97[18 * (unsigned int)v98];
    }
    else
    {
      v39 = (char *)v97;
      sub_1497B50((__int64)&v97, v20);
      v19 = (__int64 *)((char *)v97 + (char *)&v46 - v39);
      v21 = (unsigned __int64)&v97[18 * (unsigned int)v98];
    }
  }
  v22 = 0x200000000LL;
  *(_DWORD *)v21 = *(_DWORD *)v19;
  *(_DWORD *)(v21 + 4) = *((_DWORD *)v19 + 1);
  *(_DWORD *)(v21 + 8) = *((_DWORD *)v19 + 2);
  v23 = v19[2];
  *(_QWORD *)(v21 + 32) = 0x200000000LL;
  *(_QWORD *)(v21 + 16) = v23;
  v24 = *((_DWORD *)v19 + 8);
  v25 = (void *)(v21 + 40);
  *(_QWORD *)(v21 + 24) = v21 + 40;
  if ( v24 && (__int64 *)(v21 + 24) != v19 + 3 )
  {
    v33 = 8LL * v24;
    if ( v24 <= 2uLL
      || (srca = (char *)v19,
          v38 = v24,
          sub_2237220(v21 + 24, v21 + 40, v24, 8),
          v19 = (__int64 *)srca,
          v25 = *(void **)(v21 + 24),
          v24 = v38,
          (v33 = 8LL * *((unsigned int *)srca + 8)) != 0) )
    {
      src = v24;
      v37 = (char *)v19;
      memcpy(v25, (const void *)v19[3], v33);
      v24 = src;
      v19 = (__int64 *)v37;
    }
    *(_DWORD *)(v21 + 32) = v24;
  }
  v26 = _mm_loadu_si128((const __m128i *)(v19 + 7));
  *(__m128i *)(v21 + 56) = v26;
  *(__m128i *)(v21 + 72) = _mm_loadu_si128((const __m128i *)(v19 + 9));
  *(__m128i *)(v21 + 88) = _mm_loadu_si128((const __m128i *)(v19 + 11));
  *(__m128i *)(v21 + 104) = _mm_loadu_si128((const __m128i *)(v19 + 13));
  *(__m128i *)(v21 + 120) = _mm_loadu_si128((const __m128i *)(v19 + 15));
  *(_QWORD *)(v21 + 136) = v19[17];
  LODWORD(v98) = v98 + 1;
  if ( a3 )
    HIDWORD(v92) = a3;
  if ( ptr != v51 )
    free(ptr);
  v27 = sub_17FF1A0(a1, (__int64)a2, (__int64)&v82, 0.0, *(double *)v26.m128i_i64, v22, (__int64)&v46, (__int64)v19);
  v46 = v27;
  *(_BYTE *)(v27 + 97) |= 8u;
  sub_17BF6B0((__int64)a1, v27, 0.0);
  v29 = *(_DWORD *)(a5 + 4);
  if ( !v29 )
    v29 = a3;
  v30 = sub_17B3220(a1, a2, (__int64)v53, (unsigned __int64)&v46, 1, v28, (__m128)0LL);
  v31 = sub_1C36280(a1, v30, a3, v29);
  sub_147A7A0((char *)&v82);
  if ( HIDWORD(v62) )
    free(v61);
  sub_15DCED0(v57, (__int64)&v57);
  if ( v58 != v60 )
    free(v58);
  if ( v54 != v56 )
    free(v54);
  return v31;
}

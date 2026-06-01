_QWORD *__fastcall sub_21C3F80(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, void *a5)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 **v10; // rax
  char **v11; // rbp
  char *v12; // rax
  unsigned __int64 v14; // rax
  void *v15; // rdi
  void *v16; // rdx
  int v17; // esi
  __m128 v18; // xmm0
  __int64 v19; // r15
  __int64 *v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  __int64 *v23; // r13
  __m128 v24; // xmm0
  int v25; // edx
  unsigned __int64 **v26; // rax
  __int64 v27; // r15
  _QWORD *v28; // rdx
  _QWORD *v29; // r13
  __int64 v30; // rbp
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  __int64 v35; // r15
  _QWORD *v36; // r13
  _QWORD *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r15
  __m128i si128; // xmm0
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  unsigned __int64 **v44; // r13
  unsigned __int64 **v45; // r14
  unsigned __int64 **v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // r14
  __int64 *v55; // r13
  __int64 i; // rdx
  __int64 v57; // rsi
  unsigned int v58; // ecx
  __int64 v59; // rdi
  __int64 *v60; // r14
  __int64 *v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rdi
  void *v64; // rdi
  __int64 v66; // [rsp+8h] [rbp-390h] BYREF
  unsigned __int64 v67; // [rsp+10h] [rbp-388h]
  unsigned __int64 **v68; // [rsp+18h] [rbp-380h] BYREF
  __int64 *v69; // [rsp+20h] [rbp-378h]
  __int64 v70; // [rsp+28h] [rbp-370h] BYREF
  char **v71; // [rsp+30h] [rbp-368h]
  _QWORD *v72; // [rsp+38h] [rbp-360h] BYREF
  __int64 v73; // [rsp+40h] [rbp-358h] BYREF
  __int64 *v74; // [rsp+48h] [rbp-350h] BYREF
  __int64 v75; // [rsp+50h] [rbp-348h] BYREF
  __int64 *v76; // [rsp+58h] [rbp-340h] BYREF
  unsigned __int64 *v77[2]; // [rsp+60h] [rbp-338h] BYREF
  unsigned __int8 v78; // [rsp+70h] [rbp-328h]
  char *v79[30]; // [rsp+80h] [rbp-318h] BYREF
  char v80; // [rsp+170h] [rbp-228h]
  void *v81; // [rsp+180h] [rbp-218h] BYREF
  void *v82; // [rsp+188h] [rbp-210h] BYREF
  __int64 v83; // [rsp+190h] [rbp-208h]
  _BYTE v84[224]; // [rsp+198h] [rbp-200h] BYREF
  void *ptr; // [rsp+278h] [rbp-120h] BYREF
  __int64 v86; // [rsp+280h] [rbp-118h]
  _BYTE v87[168]; // [rsp+288h] [rbp-110h] BYREF
  _BYTE *v88; // [rsp+330h] [rbp-68h] BYREF
  __int64 v89; // [rsp+338h] [rbp-60h]
  _BYTE v90[88]; // [rsp+340h] [rbp-58h] BYREF

  v6 = a2;
  v72 = a4;
  v7 = *a4;
  v72 = a4 + 1;
  v8 = a4[1];
  v72 = a4 + 2;
  v9 = a4[2];
  v66 = a3;
  v72 = a4 + 3;
  if ( (unsigned __int64)a5 > 3 )
  {
    v14 = a4[3];
    v72 = a4 + 4;
    v67 = v14;
    v68 = &v72;
    sub_21E7170(&v81, &v72);
    v15 = *(void **)(a2 + 8);
    v10 = &v72;
    v16 = v81;
    v81 = nullptr;
    *(_QWORD *)(a2 + 8) = v16;
    if ( v15 )
    {
      operator delete(v15, 0x30u);
      v10 = v68;
      if ( v81 )
      {
        operator delete(v81, 0x30u);
        v10 = v68;
      }
    }
  }
  else
  {
    v67 = 0;
    v10 = &v72;
  }
  v11 = v79;
  sub_21E6EB0(v79, v10);
  if ( (v80 & 1) == 0 )
  {
    v69 = (__int64 *)(a2 + 16);
    sub_21C38A0((void **)(a2 + 16), v79);
    v81 = a5;
    v17 = *(_DWORD *)(a2 + 24);
    v68 = (unsigned __int64 **)(v7 + v66);
    *(_DWORD *)(v6 + 296) = (unsigned __int64)(v8 - v7) >> 2;
    v18 = _mm_loadh_ps((const double *)&v68);
    v82 = v84;
    *(__m128 *)(v6 + 280) = v18;
    v83 = 0x1C00000000LL;
    if ( v17 )
      sub_21C38A0(&v82, (char **)(v6 + 16));
    ptr = v87;
    v86 = 0x100000000LL;
    v89 = 0x100000000LL;
    v88 = v90;
    v19 = v66 + v9;
    v20 = *(__int64 **)(v66 + v9);
    v68 = (unsigned __int64 **)(v66 + v8);
    v69 = v20;
    v70 = *(_QWORD *)(v66 + v9 + 8);
    v21 = operator new(0x208u);
    v22 = v83;
    v23 = (__int64 *)v21;
    *(__m128 *)v21 = _mm_loadh_ps((const double *)&v70);
    v69 = (__int64 *)(v19 + 16);
    *(_QWORD *)(v21 + 32) = v81;
    v24 = _mm_loadh_ps((const double *)&v66);
    *(_QWORD *)(v21 + 40) = v21 + 56;
    *(__m128 *)(v21 + 16) = v24;
    *(_QWORD *)(v21 + 48) = 0x1C00000000LL;
    if ( v22 )
      sub_21C38A0((void **)(v21 + 40), (char **)&v82);
    v25 = v86;
    v23[35] = (__int64)(v23 + 37);
    v23[36] = 0x100000000LL;
    if ( v25 )
      sub_21C3B50(v23 + 35, (__int64 *)&ptr);
    v23[58] = (__int64)(v23 + 60);
    v23[59] = 0x100000000LL;
    if ( (_DWORD)v89 )
      sub_21C3D70((__int64)(v23 + 58), (__int64 *)&v88);
    v26 = v68;
    v27 = *(_QWORD *)(v6 + 256);
    *(_QWORD *)(v6 + 256) = v23;
    v23[64] = (__int64)v26;
    if ( v27 )
    {
      v28 = *(_QWORD **)(v27 + 464);
      v29 = &v28[4 * *(unsigned int *)(v27 + 472)];
      if ( v28 != v29 )
      {
        v68 = (unsigned __int64 **)v79;
        v30 = v6;
        v31 = v28;
        do
        {
          while ( 1 )
          {
            v29 -= 4;
            v32 = (_QWORD *)v29[1];
            if ( v32 == v29 + 3 )
              break;
            free(v32);
            if ( v31 == v29 )
              goto LABEL_22;
          }
        }
        while ( v31 != v29 );
LABEL_22:
        v6 = v30;
        v29 = *(_QWORD **)(v27 + 464);
        v11 = (char **)v68;
      }
      if ( v29 != (_QWORD *)(v27 + 480) )
        free(v29);
      v33 = *(void **)(v27 + 280);
      if ( v33 != (void *)(v27 + 296) )
        free(v33);
      v34 = *(void **)(v27 + 40);
      if ( v34 != (void *)(v27 + 56) )
        free(v34);
      operator delete((void *)v27, 0x208u);
    }
    v35 = (__int64)v88;
    v36 = &v88[32 * (unsigned int)v89];
    if ( v88 != (_BYTE *)v36 )
    {
      do
      {
        while ( 1 )
        {
          v36 -= 4;
          v37 = (_QWORD *)v36[1];
          if ( v37 == v36 + 3 )
            break;
          free(v37);
          if ( (_QWORD *)v35 == v36 )
            goto LABEL_33;
        }
      }
      while ( (_QWORD *)v35 != v36 );
LABEL_33:
      v36 = v88;
    }
    if ( v36 != (_QWORD *)v90 )
      free(v36);
    if ( ptr != v87 )
      free(ptr);
    if ( v82 != v84 )
      free(v82);
    if ( v67 <= v9 )
    {
LABEL_41:
      *a1 = 0;
      goto LABEL_5;
    }
    v38 = operator new(0x120u);
    v39 = *(_QWORD *)(v6 + 304);
    *(_OWORD *)v38 = 0;
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    *(_QWORD *)(v38 + 16) = v38 + 32;
    *(_QWORD *)(v38 + 24) = 0x400000000LL;
    *(_QWORD *)(v38 + 64) = v38 + 80;
    *(_QWORD *)(v38 + 152) = v38 + 168;
    *(_QWORD *)(v38 + 192) = v38 + 208;
    *(_QWORD *)(v38 + 232) = v38 + 248;
    *(_QWORD *)(v38 + 72) = 0;
    *(__m128i *)(v38 + 80) = si128;
    *(_QWORD *)(v38 + 96) = v38;
    *(_QWORD *)(v38 + 104) = 0;
    *(_QWORD *)(v38 + 112) = 0;
    *(_DWORD *)(v38 + 120) = 0;
    *(_QWORD *)(v38 + 128) = 0;
    *(_QWORD *)(v38 + 136) = 0;
    *(_DWORD *)(v38 + 144) = 0;
    *(_QWORD *)(v38 + 160) = 0;
    *(_QWORD *)(v38 + 168) = 0;
    *(_QWORD *)(v38 + 176) = 0;
    *(_DWORD *)(v38 + 184) = 0;
    *(_QWORD *)(v38 + 200) = 0;
    *(_QWORD *)(v38 + 208) = 0;
    *(_QWORD *)(v38 + 216) = 0;
    *(_DWORD *)(v38 + 224) = 0;
    *(_QWORD *)(v38 + 240) = 0;
    *(_QWORD *)(v38 + 248) = 0;
    *(_QWORD *)(v38 + 256) = 0;
    *(_DWORD *)(v38 + 264) = 0;
    *(_QWORD *)(v38 + 272) = v38 + 288;
    *(_QWORD *)(v38 + 280) = 0;
    *(_QWORD *)(v6 + 304) = v38;
    if ( v39 )
    {
      v41 = *(void **)(v39 + 272);
      if ( v41 != (void *)(v39 + 288) )
        free(v41);
      operator delete(*(_QWORD *)(v39 + 248), 16LL * *(unsigned int *)(v39 + 264), 8);
      v42 = *(void **)(v39 + 232);
      if ( (void *)(v39 + 248) != v42 )
        free(v42);
      operator delete(*(_QWORD *)(v39 + 208), 8LL * *(unsigned int *)(v39 + 224), 8);
      v43 = *(void **)(v39 + 192);
      v68 = (unsigned __int64 **)(v39 + 168);
      if ( (void *)(v39 + 208) != v43 )
        free(v43);
      operator delete(*(_QWORD *)(v39 + 168), 24LL * *(unsigned int *)(v39 + 184), 8);
      v44 = *(unsigned __int64 ***)(v39 + 152);
      v45 = &v44[8 * (unsigned __int64)*(unsigned int *)(v39 + 160)];
      if ( v44 != v45 )
      {
        do
        {
          while ( 1 )
          {
            v45 -= 8;
            v46 = (unsigned __int64 **)v45[6];
            if ( v46 == v45 + 8 )
              break;
            free(v46);
            if ( v44 == v45 )
              goto LABEL_56;
          }
        }
        while ( v44 != v45 );
LABEL_56:
        v45 = *(unsigned __int64 ***)(v39 + 152);
      }
      if ( v45 != v68 )
        free(v45);
      v47 = *(_QWORD *)(v39 + 128);
      v48 = *(unsigned int *)(v39 + 144);
      v49 = 32 * v48;
      if ( (_DWORD)v48 )
      {
        v70 = v6;
        v50 = 0;
        v69 = &v75;
        v51 = v47;
        v71 = v11;
        v77[0] = (unsigned __int64 *)-1LL;
        v77[1] = nullptr;
        v78 = 0;
        v81 = (void *)-2LL;
        v82 = nullptr;
        LOBYTE(v83) = 0;
        v68 = v77;
        while ( 1 )
        {
          v52 = *(unsigned __int8 *)(v51 + 16);
          if ( (_BYTE)v52 == 0xFF )
            break;
          if ( (_BYTE)v50 == 0xFF || (_BYTE)v52 != (_BYTE)v50 )
            goto LABEL_61;
          v53 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v50])((__int64)&v76, v51);
          v74 = &v73;
          v73 = v53;
          if ( v78 == 0xFF )
LABEL_95:
            abort();
          if ( !((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v78])((_QWORD ***)&v74, v68) )
          {
            v52 = *(unsigned __int8 *)(v51 + 16);
LABEL_61:
            if ( (_BYTE)v52 != 0xFF && (_BYTE)v83 != 0xFF && (_BYTE)v52 == (_BYTE)v83 )
            {
              v75 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v52])((__int64)&v76, v51);
              v76 = v69;
              if ( (_BYTE)v83 == 0xFF )
                goto LABEL_95;
              ((void (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[(unsigned __int8)v83])((_QWORD ***)&v76, &v81);
            }
          }
LABEL_66:
          v51 += 32;
          if ( v47 + v49 == v51 )
          {
            v6 = v70;
            v11 = v71;
            v47 = *(_QWORD *)(v39 + 128);
            v49 = 32LL * *(unsigned int *)(v39 + 144);
            goto LABEL_75;
          }
          v50 = v78;
        }
        if ( (_BYTE)v50 == 0xFF )
          goto LABEL_66;
        goto LABEL_61;
      }
LABEL_75:
      operator delete(v47, v49, 8);
      operator delete(*(_QWORD *)(v39 + 104), 16LL * *(unsigned int *)(v39 + 120), 8);
      v54 = *(__int64 **)(v39 + 16);
      v55 = &v54[*(unsigned int *)(v39 + 24)];
      if ( v54 != v55 )
      {
        for ( i = *(_QWORD *)(v39 + 16); ; i = *(_QWORD *)(v39 + 16) )
        {
          v57 = 0x40000000000LL;
          v58 = (unsigned int)(((__int64)v54 - i) >> 3) >> 7;
          if ( v58 <= 0x1D )
            v57 = 4096LL << v58;
          v59 = *v54++;
          operator delete(v59, v57, 16);
          if ( v55 == v54 )
            break;
        }
      }
      v60 = *(__int64 **)(v39 + 64);
      v61 = &v60[2 * *(unsigned int *)(v39 + 72)];
      if ( v60 != v61 )
      {
        do
        {
          v62 = v60[1];
          v63 = *v60;
          v60 += 2;
          operator delete(v63, v62, 16);
        }
        while ( v61 != v60 );
        v61 = *(__int64 **)(v39 + 64);
      }
      if ( v61 != (__int64 *)(v39 + 80) )
        free(v61);
      v64 = *(void **)(v39 + 16);
      if ( v64 != (void *)(v39 + 32) )
        free(v64);
      operator delete((void *)v39, 0x120u);
      v38 = *(_QWORD *)(v6 + 304);
    }
    v77[0] = (unsigned __int64 *)(v67 + v66);
    sub_21C2F10(&v81, v38, v77);
    if ( v81 )
    {
      *a1 = v81;
      goto LABEL_5;
    }
    goto LABEL_41;
  }
  v12 = v79[0];
  v79[0] = nullptr;
  *a1 = v12;
LABEL_5:
  sub_21C3860((__int64)v11);
  return a1;
}

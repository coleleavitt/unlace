__int64 __fastcall sub_9F6300(__int64 a1, __int64 *a2, unsigned __int8 *a3, size_t a4, __int64 a5, int a6)
{
  __int64 v6; // r12
  char *v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int64 v11; // rax
  char v12; // dl
  int v14; // ebp
  __int64 v15; // r14
  unsigned int v16; // r13d
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _WORD *v19; // rcx
  _WORD *v20; // rdx
  int v21; // edi
  _WORD *v22; // rsi
  __int64 v23; // r9
  unsigned __int16 *v24; // rsi
  int v25; // ecx
  int v26; // r13d
  int v27; // eax
  unsigned __int16 *v28; // rsi
  int v29; // eax
  unsigned __int16 *v30; // rsi
  int v31; // eax
  unsigned __int16 *v32; // rsi
  int v33; // eax
  unsigned __int16 *v34; // rsi
  __m128i v35; // xmm0
  __int64 *v36; // r15
  void **v37; // rdx
  unsigned __int64 v38; // rsi
  __int64 *v39; // rdi
  __int64 v40; // rdi
  __m128i v41; // rax
  unsigned __int16 *v42; // rsi
  char v43; // dl
  int v44; // eax
  int v45; // eax
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // dl
  int v48; // eax
  unsigned __int16 *v49; // rsi
  __int64 v50; // r15
  __int64 v51; // r15
  __int64 v52; // r15
  __int64 v53; // r15
  __int64 v54; // r15
  char *v55; // rbp
  __m128i v56; // xmm2
  __int64 *v57; // rbp
  __int64 *v58; // rbx
  bool v59; // cc
  __int64 *v60; // rdi
  __int32 v61; // eax
  int v62; // r14d
  __int64 v63; // r13
  int v64; // r15d
  __m128i v65; // [rsp+0h] [rbp-518h] BYREF
  char *v66; // [rsp+18h] [rbp-500h]
  int v67; // [rsp+24h] [rbp-4F4h]
  __int64 *v68; // [rsp+28h] [rbp-4F0h]
  __int64 v69; // [rsp+30h] [rbp-4E8h]
  __int64 v70; // [rsp+38h] [rbp-4E0h]
  __int64 v71; // [rsp+40h] [rbp-4D8h]
  int v72; // [rsp+48h] [rbp-4D0h]
  unsigned __int16 *v73; // [rsp+58h] [rbp-4C0h] BYREF
  char *v74; // [rsp+60h] [rbp-4B8h] BYREF
  __int64 v75; // [rsp+68h] [rbp-4B0h]
  char v76; // [rsp+70h] [rbp-4A8h] BYREF
  char v77; // [rsp+80h] [rbp-498h]
  char *v78; // [rsp+88h] [rbp-490h]
  __int64 v79; // [rsp+90h] [rbp-488h]
  char v80; // [rsp+98h] [rbp-480h] BYREF
  _BYTE *v81; // [rsp+A8h] [rbp-470h]
  __int64 v82; // [rsp+B0h] [rbp-468h]
  char v83; // [rsp+C8h] [rbp-450h]
  _BYTE *v84; // [rsp+D0h] [rbp-448h]
  __int64 v85; // [rsp+D8h] [rbp-440h]
  char v86; // [rsp+F0h] [rbp-428h]
  char v87; // [rsp+F8h] [rbp-420h]
  __m128i *v88; // [rsp+100h] [rbp-418h] BYREF
  void *v89; // [rsp+108h] [rbp-410h]
  __m128i v90; // [rsp+110h] [rbp-408h] BYREF
  char v91; // [rsp+120h] [rbp-3F8h]
  __m128i *v92; // [rsp+128h] [rbp-3F0h] BYREF
  void *v93; // [rsp+130h] [rbp-3E8h]
  __m128i v94; // [rsp+138h] [rbp-3E0h] BYREF
  char v95; // [rsp+148h] [rbp-3D0h]
  __m128i *v96; // [rsp+150h] [rbp-3C8h] BYREF
  void *v97; // [rsp+158h] [rbp-3C0h]
  __m128i v98; // [rsp+160h] [rbp-3B8h] BYREF
  char v99; // [rsp+170h] [rbp-3A8h]
  __m128i *v100; // [rsp+178h] [rbp-3A0h] BYREF
  void *v101; // [rsp+180h] [rbp-398h]
  __m128i v102; // [rsp+188h] [rbp-390h] BYREF
  char v103; // [rsp+198h] [rbp-380h]
  __m128i *v104; // [rsp+1A0h] [rbp-378h] BYREF
  void *v105; // [rsp+1A8h] [rbp-370h]
  __m128i v106; // [rsp+1B0h] [rbp-368h] BYREF
  char v107; // [rsp+1C0h] [rbp-358h]
  __int64 v108; // [rsp+1C8h] [rbp-350h]
  void *v109[2]; // [rsp+1D0h] [rbp-348h] BYREF
  __m128i v110; // [rsp+1E0h] [rbp-338h] BYREF
  __int64 v111; // [rsp+1F0h] [rbp-328h] BYREF
  char v112; // [rsp+200h] [rbp-318h]
  __int64 *v113; // [rsp+208h] [rbp-310h] BYREF
  __int64 v114; // [rsp+218h] [rbp-300h] BYREF
  __int64 *v115; // [rsp+228h] [rbp-2F0h] BYREF
  __int64 v116; // [rsp+238h] [rbp-2E0h] BYREF
  char v117; // [rsp+248h] [rbp-2D0h]
  __int64 *v118; // [rsp+250h] [rbp-2C8h] BYREF
  __int64 v119; // [rsp+260h] [rbp-2B8h] BYREF
  char v120; // [rsp+270h] [rbp-2A8h]
  char v121; // [rsp+278h] [rbp-2A0h]
  __int64 *v122; // [rsp+280h] [rbp-298h] BYREF
  __int64 v123; // [rsp+290h] [rbp-288h] BYREF
  char v124; // [rsp+2A0h] [rbp-278h]
  __int64 *v125; // [rsp+2A8h] [rbp-270h] BYREF
  __int64 v126; // [rsp+2B8h] [rbp-260h] BYREF
  char v127; // [rsp+2C8h] [rbp-250h]
  __int64 *v128; // [rsp+2D0h] [rbp-248h] BYREF
  __int64 v129; // [rsp+2E0h] [rbp-238h] BYREF
  char v130; // [rsp+2F0h] [rbp-228h]
  __int64 *v131; // [rsp+2F8h] [rbp-220h] BYREF
  __int64 v132; // [rsp+308h] [rbp-210h] BYREF
  char v133; // [rsp+318h] [rbp-200h]
  __int64 *v134; // [rsp+320h] [rbp-1F8h] BYREF
  __int64 v135; // [rsp+330h] [rbp-1E8h] BYREF
  char v136; // [rsp+340h] [rbp-1D8h]
  __int64 v137; // [rsp+348h] [rbp-1D0h]
  __int64 *v138; // [rsp+350h] [rbp-1C8h] BYREF
  __int64 v139; // [rsp+358h] [rbp-1C0h]

  v6 = a1;
  v7 = (char *)(a1 + 16);
  v8 = *a2;
  v71 = a5;
  v9 = *(_QWORD *)(v8 + 168) == 0;
  v72 = a6;
  v66 = v7;
  if ( v9 )
    goto LABEL_4;
  v11 = sub_9E6AE0(v8, a3, a4);
  if ( !v12 )
    goto LABEL_3;
  v14 = -1;
  if ( (_BYTE)v72 )
    v14 = v71;
  v15 = *(_QWORD *)(*a2 + 168);
  v16 = v11 >> 33;
  v138 = (__int64 *)__PAIR64__(v16, v14);
  v68 = (__int64 *)&v138;
  v17 = sub_9EA1B0(v14, (int *)&v138 + 1);
  v18 = *(unsigned int *)(*(_QWORD *)(v15 + 8) + 4LL * ((unsigned int)v17 & (*(_DWORD *)v15 - 1)));
  if ( !(_DWORD)v18 )
    goto LABEL_3;
  v19 = (_WORD *)(v18 + *(_QWORD *)(v15 + 16));
  v20 = v19 + 1;
  if ( !*v19 )
    goto LABEL_3;
  v21 = 0;
  while ( 1 )
  {
    v22 = v20 + 6;
    v23 = (unsigned __int16)v20[4];
    if ( v17 == *(_QWORD *)v20 && v16 == *((_QWORD *)v20 + 2) >> 33 && *((_DWORD *)v20 + 3) == v14 )
      break;
    ++v21;
    v20 = (_WORD *)((char *)v22 + (unsigned int)v23 + (unsigned __int16)v20[5]);
    if ( (unsigned __int16)*v19 == v21 )
      goto LABEL_3;
  }
  v69 = *a2;
  v24 = (_WORD *)((char *)v22 + v23);
  if ( !v24 )
  {
LABEL_3:
    v7 = v66;
LABEL_4:
    *(_QWORD *)v6 = v7;
    *(_QWORD *)(v6 + 8) = 0x100000000LL;
    *(_BYTE *)(v6 + 404) = 0;
    return v6;
  }
  v73 = v24;
  v25 = *v24;
  v73 = v24 + 1;
  v67 = v25;
  v138 = v68 + 2;
  v139 = 0x100000000LL;
  if ( (unsigned __int16)v25 > 1uLL )
    sub_9F56E0(v68, (unsigned __int16)v25);
  if ( v67 )
  {
    v70 = v6;
    v26 = 0;
    while ( 1 )
    {
      v41.m128i_i64[0] = sub_9E5B00((__int64 *)&v73);
      v42 = v73;
      v75 = 0;
      v65 = v41;
      v74 = &v76;
      v78 = &v80;
      v43 = v87 & 0xC0;
      v76 = 0;
      v77 &= 0xF0u;
      v79 = 0;
      v80 = 0;
      v83 = 0;
      v86 = 0;
      v87 &= 0xC0u;
      v91 = 0;
      v95 = 0;
      v99 = 0;
      v103 = 0;
      v107 = 0;
      BYTE4(v108) = 0;
      v73 = (unsigned __int16 *)((char *)v73 + 1);
      v44 = *(unsigned __int8 *)v42;
      if ( (v44 & 1) != 0 )
        v87 = *(_BYTE *)v42 & 2 | v43 | 1;
      v45 = v44 >> 2;
      if ( v45 )
      {
        BYTE4(v108) = 1;
        LODWORD(v108) = (v45 & 3) - 1;
      }
      v46 = *((_BYTE *)v42 + 1);
      v73 = v42 + 1;
      if ( (unsigned __int8)(v46 - 1) <= 1u )
        v87 = (8 * (v46 == 1)) | v87 & 0xF3 | 4;
      v47 = *((_BYTE *)v42 + 2);
      v73 = (unsigned __int16 *)((char *)v42 + 3);
      if ( (unsigned __int8)(v47 - 1) <= 1u )
        v87 = (32 * (v47 == 1)) | v87 & 0xCF | 0x10;
      v48 = *(unsigned __int16 *)((char *)v42 + 3);
      v49 = (unsigned __int16 *)((char *)v42 + 5);
      v73 = v49;
      if ( v48 )
      {
        v50 = (unsigned int)(v48 - 1);
        v109[0] = &v110;
        sub_9E5D00(v109, v49, (__int64)v49 + v50);
        if ( v91 )
        {
          sub_9E6D90((__int64)&v88, v109);
          if ( v109[0] != &v110 )
            operator delete(v109[0]);
        }
        else
        {
          v88 = &v90;
          if ( v109[0] == &v110 )
          {
            v90 = _mm_load_si128(&v110);
          }
          else
          {
            v88 = (__m128i *)v109[0];
            v90.m128i_i64[0] = v110.m128i_i64[0];
          }
          v91 = 1;
          v89 = v109[1];
        }
        v73 = (unsigned __int16 *)((char *)v73 + v50);
        v27 = *v73;
        v28 = ++v73;
        if ( !v27 )
        {
LABEL_21:
          v29 = *v28;
          v30 = v28 + 1;
          v73 = v30;
          if ( !v29 )
            goto LABEL_22;
          goto LABEL_59;
        }
      }
      else
      {
        v27 = *v49;
        v28 = v49 + 1;
        v73 = v28;
        if ( !v27 )
          goto LABEL_21;
      }
      v51 = (unsigned int)(v27 - 1);
      v109[0] = &v110;
      sub_9E5D00(v109, v28, (__int64)v28 + v51);
      if ( v95 )
      {
        sub_9E6D90((__int64)&v92, v109);
        if ( v109[0] != &v110 )
          operator delete(v109[0]);
      }
      else
      {
        v92 = &v94;
        if ( v109[0] == &v110 )
        {
          v94 = _mm_load_si128(&v110);
        }
        else
        {
          v92 = (__m128i *)v109[0];
          v94.m128i_i64[0] = v110.m128i_i64[0];
        }
        v95 = 1;
        v93 = v109[1];
      }
      v73 = (unsigned __int16 *)((char *)v73 + v51);
      v29 = *v73;
      v30 = ++v73;
      if ( !v29 )
      {
LABEL_22:
        v31 = *v30;
        v32 = v30 + 1;
        v73 = v32;
        if ( !v31 )
          goto LABEL_23;
        goto LABEL_64;
      }
LABEL_59:
      v52 = (unsigned int)(v29 - 1);
      v109[0] = &v110;
      sub_9E5D00(v109, v30, (__int64)v30 + v52);
      if ( v99 )
      {
        sub_9E6D90((__int64)&v96, v109);
        if ( v109[0] != &v110 )
          operator delete(v109[0]);
      }
      else
      {
        v96 = &v98;
        if ( v109[0] == &v110 )
        {
          v98 = _mm_load_si128(&v110);
        }
        else
        {
          v96 = (__m128i *)v109[0];
          v98.m128i_i64[0] = v110.m128i_i64[0];
        }
        v99 = 1;
        v97 = v109[1];
      }
      v73 = (unsigned __int16 *)((char *)v73 + v52);
      v31 = *v73;
      v32 = ++v73;
      if ( !v31 )
      {
LABEL_23:
        v33 = *v32;
        v34 = v32 + 1;
        v73 = v34;
        if ( !v33 )
          goto LABEL_24;
LABEL_69:
        v54 = (unsigned int)(v33 - 1);
        v109[0] = &v110;
        sub_9E5D00(v109, v34, (__int64)v34 + v54);
        if ( v107 )
        {
          sub_9E6D90((__int64)&v104, v109);
          if ( v109[0] != &v110 )
            operator delete(v109[0]);
        }
        else
        {
          v104 = &v106;
          if ( v109[0] == &v110 )
          {
            v106 = _mm_load_si128(&v110);
          }
          else
          {
            v104 = (__m128i *)v109[0];
            v106.m128i_i64[0] = v110.m128i_i64[0];
          }
          v107 = 1;
          v105 = v109[1];
        }
        v73 = (unsigned __int16 *)((char *)v73 + v54);
        goto LABEL_24;
      }
LABEL_64:
      v53 = (unsigned int)(v31 - 1);
      v109[0] = &v110;
      sub_9E5D00(v109, v32, (__int64)v32 + v53);
      if ( v103 )
      {
        sub_9E6D90((__int64)&v100, v109);
        if ( v109[0] != &v110 )
          operator delete(v109[0]);
      }
      else
      {
        v100 = &v102;
        if ( v109[0] == &v110 )
        {
          v102 = _mm_load_si128(&v110);
        }
        else
        {
          v100 = (__m128i *)v109[0];
          v102.m128i_i64[0] = v110.m128i_i64[0];
        }
        v103 = 1;
        v101 = v109[1];
      }
      v73 = (unsigned __int16 *)((char *)v73 + v53);
      v33 = *v73;
      v34 = ++v73;
      if ( v33 )
        goto LABEL_69;
LABEL_24:
      sub_9E8510(&v73, (__int64)&v74);
      v35 = _mm_load_si128(&v65);
      v110.m128i_i64[0] = (__int64)&v111;
      *(__m128i *)v109 = v35;
      sub_9E5DA0(&v110, v74, (__int64)&v74[v75]);
      v112 = v77 & 0xF | v112 & 0xF0;
      v113 = &v114;
      sub_9E5DA0(&v113, v78, (__int64)&v78[v79]);
      v117 = 0;
      if ( v83 )
      {
        v115 = &v116;
        sub_9E5DA0(&v115, v81, (__int64)&v81[v82]);
        v117 = 1;
      }
      v120 = 0;
      if ( v86 )
      {
        v118 = &v119;
        sub_9E5DA0(&v118, v84, (__int64)&v84[v85]);
        v120 = 1;
      }
      v124 = 0;
      v121 = v87 & 0x3F | v121 & 0xC0;
      if ( v91 )
      {
        v122 = &v123;
        sub_9E5DA0(&v122, v88, (__int64)v89 + (_QWORD)v88);
        v124 = 1;
      }
      v127 = 0;
      if ( v95 )
      {
        v125 = &v126;
        sub_9E5DA0(&v125, v92, (__int64)v93 + (_QWORD)v92);
        v127 = 1;
      }
      v130 = 0;
      if ( v99 )
      {
        v128 = &v129;
        sub_9E5DA0(&v128, v96, (__int64)v97 + (_QWORD)v96);
        v130 = 1;
      }
      v133 = 0;
      if ( v103 )
      {
        v131 = &v132;
        sub_9E5DA0(&v131, v100, (__int64)v101 + (_QWORD)v100);
        v133 = 1;
      }
      v136 = 0;
      if ( v107 )
      {
        v134 = &v135;
        sub_9E5DA0(&v134, v104, (__int64)v105 + (_QWORD)v104);
        v136 = 1;
      }
      v36 = v138;
      v37 = v109;
      v137 = v108;
      v38 = (unsigned int)v139 + 1LL;
      v39 = &v138[48 * (unsigned int)v139];
      if ( v38 <= HIDWORD(v139) )
        goto LABEL_39;
      if ( v138 > (__int64 *)v109 )
      {
        v60 = v68;
LABEL_101:
        sub_9F56E0(v60, v38);
        v37 = v109;
        v39 = &v138[48 * (unsigned int)v139];
        goto LABEL_39;
      }
      v59 = v39 <= (__int64 *)v109;
      v60 = v68;
      if ( v59 )
        goto LABEL_101;
      sub_9F56E0(v68, v38);
      v37 = (void **)((char *)v138 + (char *)v109 - (char *)v36);
      v39 = &v138[48 * (unsigned int)v139];
LABEL_39:
      v40 = (__int64)(v39 + 2);
      ++v26;
      *(__m128i *)(v40 - 16) = _mm_loadu_si128((const __m128i *)v37);
      sub_9E6760(v40, (__int64)(v37 + 2));
      LODWORD(v139) = v139 + 1;
      sub_9E66A0((__int64)&v110);
      sub_9E66A0((__int64)&v74);
      if ( v67 == v26 )
      {
        v6 = v70;
        break;
      }
    }
  }
  v55 = v66;
  v56 = _mm_loadu_si128((const __m128i *)(v69 + 8));
  *(_QWORD *)v6 = v66;
  *(_QWORD *)(v6 + 8) = 0x100000000LL;
  *(__m128i *)v109 = v56;
  v65.m128i_i32[0] = v139;
  if ( (_DWORD)v139 )
  {
    sub_9F5D40((char **)v6, (char **)v68);
    v61 = v139;
    v62 = *(_DWORD *)(v6 + 8);
    *(_BYTE *)(v6 + 404) = 0;
    v65.m128i_i32[0] = v61;
    if ( v62 )
    {
      v55 = *(char **)v6;
      if ( (LODWORD(v109[1]) | HIDWORD(v109[0])) & 0x7FFFFFFF | LODWORD(v109[0]) | HIDWORD(v109[1]) & 0x7FFFFFFF )
      {
        v63 = 0;
        v64 = 0;
        while ( (unsigned __int8)sub_9E60E0((unsigned int *)&v55[v63], (unsigned int *)v109) )
        {
          ++v64;
          v63 += 384;
          if ( v62 == v64 )
            goto LABEL_87;
        }
        *(_DWORD *)(v6 + 400) = v64;
        *(_BYTE *)(v6 + 404) = 1;
        goto LABEL_92;
      }
    }
    else
    {
      v55 = *(char **)v6;
    }
  }
  else
  {
    *(_BYTE *)(v6 + 404) = 0;
  }
LABEL_87:
  if ( !*(_DWORD *)v55
    && (*((_DWORD *)v55 + 1) & 0x7FFFFFFF) == 0
    && (*((_DWORD *)v55 + 2) & 0x7FFFFFFF) == 0
    && (*((_DWORD *)v55 + 3) & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(v6 + 400) = 0;
    *(_BYTE *)(v6 + 404) = 1;
  }
LABEL_92:
  v57 = v138;
  v58 = &v138[48 * v65.m128i_u32[0]];
  if ( v138 != v58 )
  {
    do
    {
      v58 -= 48;
      sub_9E66A0((__int64)(v58 + 2));
    }
    while ( v57 != v58 );
    v58 = v138;
  }
  if ( v58 != v68 + 2 )
    free(v58);
  return v6;
}


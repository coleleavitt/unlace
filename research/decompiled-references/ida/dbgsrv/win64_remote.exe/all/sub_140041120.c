/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140041120
// Address: 0x0000000140041120

//----- (0000000140041120) ----------------------------------------------------
__int64 __fastcall sub_140041120(
        __int64 a1,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10)
{
  __int64 v12; // r13
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 i; // rcx
  _DWORD *v17; // rax
  __int64 *v18; // rsi
  _QWORD *v19; // rax
  int v20; // r14d
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  unsigned __int64 v27; // rcx
  _QWORD *v28; // r13
  size_t v29; // rsi
  const void *v30; // r12
  size_t v31; // rbx
  unsigned __int64 v32; // rdx
  size_t v33; // rbx
  size_t v34; // rax
  char *v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 *v37; // r14
  int v38; // eax
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // r15
  _QWORD *v44; // r12
  __int64 v45; // r14
  int *v46; // rbx
  signed int v47; // esi
  __int64 v48; // rax
  unsigned int v49; // ecx
  int v50; // edx
  __int64 v51; // rdx
  void *v52; // rbx
  __int64 v53; // rax
  __int64 j; // rcx
  _DWORD *v55; // rax
  _QWORD *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rbx
  _DWORD *v59; // rax
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rbx
  _DWORD *v64; // rax
  __int64 v65; // rbx
  int v66; // eax
  _QWORD *v67; // rcx
  void *v68; // rcx
  _QWORD *v69; // rbx
  __int64 **v70; // rcx
  __int64 k; // rax
  __int64 *m; // rcx
  _DWORD *v73; // rbx
  unsigned __int64 v74; // r15
  int v75; // r14d
  __int64 v76; // rsi
  int v77; // r13d
  int v78; // eax
  int v79; // eax
  __int64 v80; // rbx
  _QWORD *v81; // r14
  __int64 v82; // rax
  unsigned int v83; // r15d
  void *v84; // rcx
  char *v85; // rsi
  __int64 v86; // rbx
  unsigned __int64 v87; // rdi
  __int64 v88; // rsi
  int *v89; // rbx
  __int64 v90; // rcx
  _QWORD *v91; // rdx
  __int64 v92; // r14
  _QWORD *v93; // rdi
  void *v94; // rsi
  _QWORD *v95; // rbx
  void *v96; // rcx
  char *v98; // rbx
  size_t v99; // rax
  int v101; // [rsp+34h] [rbp-CCh]
  void *v102; // [rsp+38h] [rbp-C8h] BYREF
  size_t v103; // [rsp+40h] [rbp-C0h]
  size_t v104; // [rsp+48h] [rbp-B8h]
  void *v105; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v106; // [rsp+58h] [rbp-A8h]
  int v107; // [rsp+60h] [rbp-A0h] BYREF
  void *v108[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v109; // [rsp+78h] [rbp-88h]
  __int64 v110; // [rsp+80h] [rbp-80h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  void *v112[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  __int128 v115; // [rsp+B0h] [rbp-50h]
  __int64 *v116; // [rsp+C8h] [rbp-38h]
  int v117; // [rsp+D0h] [rbp-30h]
  int v118; // [rsp+D8h] [rbp-28h] BYREF
  void *v119[2]; // [rsp+E0h] [rbp-20h]
  __int64 v120; // [rsp+F0h] [rbp-10h]
  int v121; // [rsp+F8h] [rbp-8h] BYREF
  void *Block[2]; // [rsp+100h] [rbp+0h]
  __int64 v123; // [rsp+110h] [rbp+10h]
  void *v124; // [rsp+120h] [rbp+20h]
  __int64 v125; // [rsp+128h] [rbp+28h]
  _QWORD *v126; // [rsp+130h] [rbp+30h]
  __int64 v127; // [rsp+138h] [rbp+38h]
  __int64 v128; // [rsp+140h] [rbp+40h]
  __int64 v129; // [rsp+148h] [rbp+48h]
  _QWORD *v130; // [rsp+150h] [rbp+50h]
  __int64 v131; // [rsp+158h] [rbp+58h]
  void **v132; // [rsp+160h] [rbp+60h]
  __int64 v133; // [rsp+168h] [rbp+68h]
  void **v134; // [rsp+170h] [rbp+70h]
  __int64 v135; // [rsp+178h] [rbp+78h]
  __int128 v136; // [rsp+180h] [rbp+80h] BYREF
  __int128 v137; // [rsp+190h] [rbp+90h] BYREF
  __int128 v138; // [rsp+1A0h] [rbp+A0h] BYREF
  void **v139; // [rsp+1B0h] [rbp+B0h]
  __int64 v140; // [rsp+1B8h] [rbp+B8h]
  __int128 v141; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v142[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v143; // [rsp+1D8h] [rbp+D8h]
  char v144; // [rsp+1E0h] [rbp+E0h]
  int v145; // [rsp+1E4h] [rbp+E4h]
  __int128 v146; // [rsp+1E8h] [rbp+E8h]
  __int128 v147; // [rsp+1F8h] [rbp+F8h]
  __int128 v148; // [rsp+208h] [rbp+108h]

  v117 = a4;
  v124 = a2;
  v127 = a7;
  v114 = a5;
  v126 = a6;
  v12 = a8;
  v110 = a8;
  v125 = a9;
  v107 = -2;
  v108[1] = nullptr;
  v109 = 0;
  v108[0] = (void *)-1LL;
  v101 = 0;
  v13 = (_QWORD *)(a1 + 296);
  v14 = *(_QWORD *)(a1 + 296);
  v15 = *(_QWORD **)(v14 + 8);
  v112[0] = v15;
  LODWORD(v112[1]) = 0;
  for ( i = v14; !*((_BYTE *)v15 + 25); v15 = (_QWORD *)*v15 )
  {
    v112[0] = v15;
    if ( *((_DWORD *)v15 + 8) >= (signed int)a3 )
    {
      LODWORD(v112[1]) = 1;
      i = (__int64)v15;
    }
    else
    {
      LODWORD(v112[1]) = 0;
      v15 += 2;
    }
  }
  if ( *(_BYTE *)(i + 25) || (signed int)a3 < *(_DWORD *)(i + 32) )
  {
    if ( v13[1] == 0x3FFFFFFFFFFFFFFLL )
      unknown_libname_1(i, a2);
    v130 = v13;
    v17 = operator new(0x40u);
    v17[8] = a3;
    *((_QWORD *)v17 + 5) = 0;
    *((_QWORD *)v17 + 6) = 0;
    *((_QWORD *)v17 + 7) = 0;
    *(_QWORD *)v17 = v14;
    *((_QWORD *)v17 + 1) = v14;
    *((_QWORD *)v17 + 2) = v14;
    *((_WORD *)v17 + 12) = 0;
    v131 = 0;
    v136 = *(_OWORD *)v112;
    i = sub_140003FC0(v13, (__int64)&v136, (__int64)v17);
  }
  v18 = (__int64 *)sub_1400440B0(i + 40);
  v116 = v18;
  v106 = 0;
  v19 = operator new(0x48u);
  *v19 = v19;
  v19[1] = v19;
  v19[2] = v19;
  *((_WORD *)v19 + 12) = 257;
  v105 = v19;
  if ( (*(_DWORD *)(a1 + 180) & 0xFFFFFFF) == 7 )
  {
    v20 = 11;
    goto LABEL_238;
  }
  v21 = *(_QWORD *)(a1 + 512);
  if ( !v21 )
    LODWORD(v21) = *(_DWORD *)(a1 + 608);
  v22 = v18[1];
  v23 = (int)v21;
  if ( (int)v21 != v22 )
  {
    v118 = -2;
    v119[1] = nullptr;
    v120 = 0;
    v119[0] = (void *)-1LL;
    if ( (int)v21 >= v22 )
    {
      if ( (int)v21 > v22 )
      {
        if ( (unsigned __int64)&v118 < *v18 || (unsigned __int64)&v118 >= *v18 + 32 * v18[2] )
        {
          sub_140044480((__int64)v18, (int)v21, (__int64)&v118);
        }
        else
        {
          v121 = -2;
          *(_OWORD *)Block = 0;
          v123 = 0;
          sub_140040CA0((__int64)&v121, (__int64)&v118);
          sub_140044480((__int64)v18, v23, (__int64)&v121);
          if ( v121 >= -1 )
          {
            if ( Block[0] )
            {
              Block[1] = nullptr;
              j_free(Block[0]);
              Block[0] = nullptr;
              v123 = 0;
            }
            v121 = -2;
          }
        }
      }
    }
    else
    {
      sub_14001A5B0(v18, (int)v21);
    }
    if ( v118 >= -1 )
    {
      if ( v119[0] )
      {
        v119[1] = nullptr;
        j_free(v119[0]);
        v119[0] = nullptr;
        v120 = 0;
      }
      v118 = -2;
    }
  }
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 216LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         *v18,
         0) != 1 )
  {
    v20 = 1;
    goto LABEL_238;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 448LL))(a1, v18);
  v25 = v24;
  if ( v24 == -1 )
  {
    v20 = 2;
    goto LABEL_238;
  }
  v102 = nullptr;
  v103 = 0;
  v104 = 0;
  v26 = ~(*(_DWORD *)(a1 + 236) - 1) & (a6[1] + *(_DWORD *)(a1 + 236) - 1);
  v27 = (v24 - *(int *)(a1 + 236) - v26) & 0xFFFFFFFFFFFFFFF0uLL;
  v111 = v27;
  v28 = v18 + 4;
  v18[4] = v26 + v27;
  if ( !sub_140069100(a6, v27, 0) )
  {
    v20 = 4;
    if ( v102 )
    {
      v103 = 0;
      j_free(v102);
    }
    goto LABEL_237;
  }
  sub_1400017A0(&v102, v18 + 4, *(int *)(a1 + 236));
  v29 = a6[1];
  v30 = (const void *)*a6;
  if ( v29 )
  {
    v31 = v103;
    v32 = v103 + v29;
    if ( v103 + v29 < v103 )
      v32 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)&v102, v32);
    memcpy((char *)v102 + v31, v30, v29);
  }
  v33 = v26 + *(int *)(a1 + 236);
  v34 = v103;
  if ( v33 <= v103 )
  {
    if ( v33 != v103 )
    {
      if ( v33 < v103 )
        v34 = v26 + *(int *)(a1 + 236);
      v103 = v34;
    }
  }
  else
  {
    if ( v33 <= v104 )
    {
      v35 = (char *)v102;
    }
    else
    {
      v35 = (char *)sub_14005ABE0((__int64)&v102, v102, v26 + *(int *)(a1 + 236), 1u);
      v102 = v35;
      v34 = v103;
    }
    memset(&v35[v34], 0, v33 - v34);
    v103 = v33;
  }
  v36 = v111 - *(int *)(a1 + 236);
  v116[3] = v36;
  if ( v36 >= v25 )
  {
    v20 = 2;
    if ( v102 )
    {
      v103 = 0;
      j_free(v102);
    }
    goto LABEL_237;
  }
  v37 = v116;
  v38 = (*(__int64 (__fastcall **)(__int64, __int64 *, void **, void **))(*(_QWORD *)a1 + 440LL))(
          a1,
          v116,
          &v105,
          &v102);
  v40 = v38 + v37[3];
  v37[3] = v40;
  if ( (int)v103 - v38 > 0
    && (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
         a1,
         v40,
         (char *)v102 + v38,
         (int)v103 - v38,
         0) != v39 )
  {
    v20 = 5;
    if ( v102 )
    {
      v103 = 0;
      j_free(v102);
    }
    goto LABEL_237;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(*(_QWORD *)a1 + 304LL))(a1, 0, 4, *v28, -1);
  v43 = 0;
  v44 = (_QWORD *)v114;
  if ( *(_QWORD *)(v114 + 8) )
  {
    v45 = 0;
    while ( 1 )
    {
      v46 = (int *)(v45 + *v44);
      v47 = *v46;
      if ( *v46 == *(_DWORD *)(a1 + 612) || v47 == *(_DWORD *)(a1 + 616) )
      {
        v20 = 3;
        if ( v102 )
        {
          v103 = 0;
          j_free(v102);
        }
        goto LABEL_237;
      }
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 600LL))(a1, (unsigned int)v47);
      v49 = *(unsigned __int8 *)(v48 + 13);
      if ( (_BYTE)v49 == 3 || (unsigned __int8)v49 <= 0x12u && (v50 = 294960, _bittest(&v50, v49)) )
      {
        if ( v107 >= -1 )
          sub_14000BC80(v108, 0);
        v107 = -1;
      }
      else
      {
        if ( *((_QWORD *)v46 + 2) <= 8u && (*(_DWORD *)(v48 + 8) & 0x100) == 0 )
        {
          if ( v107 >= -1 )
          {
            sub_14000BC80(v108, 0);
            v107 = -2;
          }
          memcpy(v108, *((const void **)v46 + 1), *((_QWORD *)v46 + 2));
          if ( v46[1] )
            v108[0] = (char *)v108[0] + v111;
          goto LABEL_79;
        }
        if ( v107 >= -1 )
          sub_14000BC80(v108, 0);
        v107 = 0;
      }
      v108[0] = nullptr;
      v108[1] = nullptr;
      v109 = 0;
      sub_140002EF0((__int64)v108, *((_QWORD *)v46 + 2));
      memcpy(v108[0], *((const void **)v46 + 1), *((_QWORD *)v46 + 2));
LABEL_79:
      v52 = v105;
      v53 = *((_QWORD *)v105 + 1);
      *(_QWORD *)&v115 = v53;
      DWORD2(v115) = 0;
      for ( j = (__int64)v105; !*(_BYTE *)(v53 + 25); v53 = *(_QWORD *)v53 )
      {
        *(_QWORD *)&v115 = v53;
        if ( *(_DWORD *)(v53 + 32) >= v47 )
        {
          DWORD2(v115) = 1;
          j = v53;
        }
        else
        {
          DWORD2(v115) = 0;
          v53 += 16;
        }
      }
      if ( *(_BYTE *)(j + 25) || v47 < *(_DWORD *)(j + 32) )
      {
        if ( v106 == 0x38E38E38E38E38ELL )
          unknown_libname_1(j, v51);
        v132 = &v105;
        v133 = 0;
        v55 = operator new(0x48u);
        v55[8] = v47;
        v55[10] = -2;
        *((_QWORD *)v55 + 7) = 0;
        *((_QWORD *)v55 + 8) = 0;
        *((_QWORD *)v55 + 6) = -1;
        *(_QWORD *)v55 = v52;
        *((_QWORD *)v55 + 1) = v52;
        *((_QWORD *)v55 + 2) = v52;
        *((_WORD *)v55 + 12) = 0;
        v133 = 0;
        v137 = v115;
        j = sub_140003FC0(&v105, (__int64)&v137, (__int64)v55);
      }
      sub_140040CA0(j + 40, (__int64)&v107);
      ++v43;
      v45 += 32;
      if ( v43 >= v44[1] )
      {
        v37 = v116;
        break;
      }
    }
  }
  if ( v107 >= -1 )
  {
    v42 = (__int64)v108[0];
    if ( v108[0] )
    {
      v108[1] = nullptr;
      j_free(v108[0]);
      v108[0] = nullptr;
      v109 = 0;
    }
    v107 = -2;
  }
  v108[0] = (void *)v37[3];
  v56 = v105;
  v57 = *((_QWORD *)v105 + 1);
  *(_QWORD *)&v115 = v57;
  DWORD2(v115) = 0;
  v58 = (__int64)v105;
  if ( !*(_BYTE *)(v57 + 25) )
  {
    v42 = *(unsigned int *)(a1 + 612);
    do
    {
      *(_QWORD *)&v115 = v57;
      if ( *(_DWORD *)(v57 + 32) >= (int)v42 )
      {
        DWORD2(v115) = 1;
        v58 = v57;
      }
      else
      {
        DWORD2(v115) = 0;
        v57 += 16;
      }
      v57 = *(_QWORD *)v57;
    }
    while ( !*(_BYTE *)(v57 + 25) );
  }
  if ( *(_BYTE *)(v58 + 25) || *(_DWORD *)(a1 + 612) < *(_DWORD *)(v58 + 32) )
  {
    if ( v106 == 0x38E38E38E38E38ELL )
      goto LABEL_248;
    v134 = &v105;
    v135 = 0;
    v59 = operator new(0x48u);
    v59[8] = *(_DWORD *)(a1 + 612);
    v59[10] = -2;
    *((_QWORD *)v59 + 7) = 0;
    *((_QWORD *)v59 + 8) = 0;
    *((_QWORD *)v59 + 6) = -1;
    *(_QWORD *)v59 = v56;
    *((_QWORD *)v59 + 1) = v56;
    *((_QWORD *)v59 + 2) = v56;
    *((_WORD *)v59 + 12) = 0;
    v135 = 0;
    v138 = v115;
    v58 = sub_140003FC0(&v105, (__int64)&v138, (__int64)v59);
    v56 = v105;
  }
  v60 = v58 + 40;
  if ( (int *)v60 != &v107 )
  {
    v61 = *(_DWORD *)v60;
    if ( v107 < -1 )
    {
      if ( v61 >= -1 )
      {
        v42 = *(_QWORD *)(v60 + 8);
        if ( v42 )
        {
          *(_QWORD *)(v60 + 16) = 0;
          j_free((void *)v42);
          *(_QWORD *)(v60 + 8) = 0;
          *(_QWORD *)(v60 + 24) = 0;
        }
      }
      *(void **)(v60 + 8) = v108[0];
    }
    else
    {
      v42 = v60 + 8;
      if ( v61 < -1 )
      {
        v128 = v60 + 8;
        v129 = v60 + 8;
        if ( v60 != -8 )
          sub_140003130((_QWORD *)v42, (__int64)v108);
      }
      else
      {
        sub_140040C10(v42, (__int64)v108);
      }
    }
    *(_DWORD *)v60 = v107;
    v56 = v105;
  }
  v108[0] = v124;
  v62 = v56[1];
  *(_QWORD *)&v115 = v62;
  DWORD2(v115) = 0;
  v63 = (__int64)v56;
  if ( !*(_BYTE *)(v62 + 25) )
  {
    v42 = *(unsigned int *)(a1 + 616);
    do
    {
      *(_QWORD *)&v115 = v62;
      if ( *(_DWORD *)(v62 + 32) >= (int)v42 )
      {
        DWORD2(v115) = 1;
        v63 = v62;
      }
      else
      {
        DWORD2(v115) = 0;
        v62 += 16;
      }
      v62 = *(_QWORD *)v62;
    }
    while ( !*(_BYTE *)(v62 + 25) );
  }
  if ( !*(_BYTE *)(v63 + 25) && *(_DWORD *)(a1 + 616) >= *(_DWORD *)(v63 + 32) )
    goto LABEL_129;
  if ( v106 == 0x38E38E38E38E38ELL )
LABEL_248:
    unknown_libname_1(v42, v41);
  v139 = &v105;
  v140 = 0;
  v64 = operator new(0x48u);
  v64[8] = *(_DWORD *)(a1 + 616);
  v64[10] = -2;
  *((_QWORD *)v64 + 7) = 0;
  *((_QWORD *)v64 + 8) = 0;
  *((_QWORD *)v64 + 6) = -1;
  *(_QWORD *)v64 = v56;
  *((_QWORD *)v64 + 1) = v56;
  *((_QWORD *)v64 + 2) = v56;
  *((_WORD *)v64 + 12) = 0;
  v141 = v115;
  v63 = sub_140003FC0(&v105, (__int64)&v141, (__int64)v64);
  v56 = v105;
LABEL_129:
  v65 = v63 + 40;
  if ( (int *)v65 != &v107 )
  {
    v66 = *(_DWORD *)v65;
    if ( v107 < -1 )
    {
      if ( v66 >= -1 )
      {
        v68 = *(void **)(v65 + 8);
        if ( v68 )
        {
          *(_QWORD *)(v65 + 16) = 0;
          j_free(v68);
          *(_QWORD *)(v65 + 8) = 0;
          *(_QWORD *)(v65 + 24) = 0;
        }
      }
      *(void **)(v65 + 8) = v108[0];
    }
    else
    {
      v67 = (_QWORD *)(v65 + 8);
      if ( v66 < -1 )
      {
        v129 = v65 + 8;
        v128 = v65 + 8;
        if ( v65 != -8 )
          sub_140003130(v67, (__int64)v108);
      }
      else
      {
        sub_140040C10((__int64)v67, (__int64)v108);
      }
    }
    *(_DWORD *)v65 = v107;
    v56 = v105;
  }
  v69 = (_QWORD *)*v56;
  if ( (_QWORD *)*v56 != v56 )
  {
    while ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)a1 + 224LL))(
              a1,
              a3,
              *((unsigned int *)v69 + 8),
              v69 + 5,
              0) == 1 )
    {
      *((_BYTE *)v37 + 40) = 1;
      v70 = (__int64 **)v69[2];
      if ( *((_BYTE *)v70 + 25) )
      {
        for ( k = v69[1]; !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
        {
          if ( v69 != *(_QWORD **)(k + 16) )
            break;
          v69 = (_QWORD *)k;
        }
        v69 = (_QWORD *)k;
      }
      else
      {
        v69 = (_QWORD *)v69[2];
        for ( m = *v70; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          v69 = m;
      }
      v56 = v105;
      if ( v69 == v105 )
        goto LABEL_151;
    }
    v20 = 6;
    if ( v102 )
    {
      v103 = 0;
      j_free(v102);
    }
LABEL_237:
    v12 = v110;
LABEL_238:
    v83 = a3;
    goto LABEL_239;
  }
LABEL_151:
  if ( (a10 & 1) != 0 )
  {
    if ( v102 )
    {
      v103 = 0;
      j_free(v102);
      v56 = v105;
    }
LABEL_219:
    v92 = v111;
    goto LABEL_220;
  }
  *(_BYTE *)(a1 + 176) = 1;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, a1 + 160) != 1 )
  {
    v20 = 9;
    if ( v102 )
    {
      v103 = 0;
      j_free(v102);
    }
    goto LABEL_237;
  }
  v142[0] = -1;
  v142[1] = 0;
  v143 = -1;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 0;
  v73 = v142;
  if ( v125 )
    v73 = (_DWORD *)v125;
  v74 = 0;
  v75 = 0;
  LODWORD(v76) = 40;
  if ( (a10 & 4) != 0 )
  {
    LODWORD(v76) = HIWORD(a10);
    if ( HIWORD(a10) )
      v74 = sub_14005A400() + 1000000LL * (unsigned int)v76;
    v75 = 1;
  }
  while ( 1 )
  {
    do
    {
      if ( !v75 )
        goto LABEL_171;
      if ( v75 != 2 )
      {
        v75 = 2;
LABEL_171:
        v77 = v101;
        goto LABEL_172;
      }
      if ( (int)v76 > 0 )
      {
        v76 = (__int64)(v74 - sub_14005A400()) / 1000000;
        if ( (int)v76 > 0 )
          goto LABEL_171;
      }
      v77 = 12;
      v101 = 12;
      if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, 0) <= 0 )
      {
        v20 = 12;
        goto LABEL_233;
      }
LABEL_172:
      v78 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, v73, (unsigned int)v76);
    }
    while ( !v78 );
    if ( v78 == -1 )
    {
      v20 = 8;
      goto LABEL_233;
    }
    v79 = v73[5] & 0xFFFFFFF;
    if ( v79 == 2 || v79 == 4 && v73[1] == a3 )
    {
      sub_14004EE50(a1, (__int64)v73, 8u);
      v111 = -1;
LABEL_232:
      v20 = v101;
LABEL_233:
      sub_140062880((__int64)v142);
      if ( v102 )
      {
        v103 = 0;
        j_free(v102);
      }
      if ( v20 )
      {
        if ( v20 != 10 )
          goto LABEL_237;
        v83 = a3;
        goto LABEL_246;
      }
LABEL_218:
      v56 = v105;
      goto LABEL_219;
    }
    if ( v77 == 12 )
    {
      sub_14004EE50(a1, (__int64)v73, 0xAu);
      sub_140063190((__int64)v73, 0);
      sub_140063190(a1 + 160, 0);
      goto LABEL_232;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)a1 + 456LL))(
           a1,
           a3,
           v73,
           v116[4]) )
    {
      break;
    }
    if ( (v73[5] & 0xFFFFFFF) == 7 )
    {
      if ( (a10 & 2) == 0 )
        sub_140003700(v110, (__int64)(v73 + 10));
      v20 = 10;
      sub_140063190(a1 + 160, 0);
      *(_BYTE *)(a1 + 176) = 1;
      goto LABEL_233;
    }
    if ( (unsigned int)sub_14004EE50(a1, (__int64)v73, 0xAu) )
    {
      v20 = 7;
      goto LABEL_233;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 160LL))(a1, v73);
    sub_140063190((__int64)v73, 0);
  }
  sub_140063190(a1 + 160, 0);
  if ( v117 > 0 )
  {
    v80 = v117;
    if ( (unsigned __int64)v117 > v126[1]
      || (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v111,
           *v126,
           v117,
           0) != v80 )
    {
      v20 = 5;
      sub_140062880((__int64)v142);
      if ( v102 )
      {
        v103 = 0;
        j_free(v102);
      }
      goto LABEL_237;
    }
  }
  v81 = (_QWORD *)v127;
  if ( !v127 || !*(_QWORD *)(v127 + 8) )
    goto LABEL_216;
  v112[0] = nullptr;
  v112[1] = nullptr;
  v113 = 0;
  v82 = *(_QWORD *)(a1 + 512);
  if ( !v82 )
    LODWORD(v82) = *(_DWORD *)(a1 + 608);
  sub_140044370((__int64 *)v112, (int)v82);
  v83 = a3;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, void *, _QWORD))(*(_QWORD *)a1 + 216LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         v112[0],
         0) > 0 )
  {
    v87 = 0;
    if ( v81[1] )
    {
      v88 = 0;
      do
      {
        v89 = (int *)(v88 + *v81);
        v90 = 32LL * *v89;
        v91 = (char *)v112[0] + v90 + 8;
        if ( *(int *)((char *)v112[0] + v90) >= -1 )
          v91 = (_QWORD *)*v91;
        memcpy(*((void **)v89 + 1), v91, *((_QWORD *)v89 + 2));
        v89[1] = 0;
        ++v87;
        v88 += 32;
      }
      while ( v87 < v81[1] );
    }
    if ( v112[0] )
    {
      sub_14001A5B0((__int64 *)v112, 0);
      j_free(v112[0]);
    }
LABEL_216:
    sub_140062880((__int64)v142);
    if ( v102 )
    {
      v103 = 0;
      j_free(v102);
    }
    goto LABEL_218;
  }
  v20 = 1;
  v84 = v112[0];
  if ( v112[0] )
  {
    v85 = (char *)v112[1];
    if ( v112[1] )
    {
      v86 = 0;
      do
      {
        sub_14000B980((__int64)v84 + v86);
        v86 += 32;
        --v85;
        v84 = v112[0];
      }
      while ( v85 );
    }
    v112[1] = nullptr;
    j_free(v84);
    v112[0] = nullptr;
    v113 = 0;
  }
  sub_140062880((__int64)v142);
  if ( v102 )
  {
    v103 = 0;
    j_free(v102);
  }
  v12 = v110;
LABEL_239:
  v98 = off_140096B20[v20];
  if ( v98 && (v99 = strlen(off_140096B20[v20])) != 0 )
    sub_140001810(v12, v98, v99);
  else
    *(_QWORD *)(v12 + 8) = 0;
LABEL_246:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 424LL))(a1, v83);
  v92 = -1;
  v56 = v105;
LABEL_220:
  v93 = (_QWORD *)v56[1];
  if ( !*((_BYTE *)v93 + 25) )
  {
    do
    {
      sub_140040460((__int64)&v105, (__int64)&v105, v93[2]);
      v94 = v93;
      v95 = v93;
      v93 = (_QWORD *)*v93;
      if ( *((int *)v95 + 10) >= -1 )
      {
        v96 = (void *)v95[6];
        if ( v96 )
        {
          v95[7] = 0;
          j_free(v96);
          v95[6] = 0;
          v95[8] = 0;
        }
        *((_DWORD *)v95 + 10) = -2;
      }
      j_j_free(v94);
    }
    while ( !*((_BYTE *)v93 + 25) );
    v56 = v105;
  }
  j_j_free(v56);
  if ( v107 >= -1 && v108[0] )
  {
    v108[1] = nullptr;
    j_free(v108[0]);
  }
  return v92;
}
// 140041E99: conditional instruction was optimized away because r13d.4==0
// 1400415DE: variable 'v39' is possibly undefined
// 140042222: variable 'v51' is possibly undefined
// 140042228: variable 'v42' is possibly undefined
// 140042228: variable 'v41' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
// 140096B20: using guessed type char *off_140096B20[13];

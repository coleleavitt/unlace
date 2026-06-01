unsigned __int64 __fastcall sub_1D76480(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v11; // r13
  bool v12; // dl
  bool v13; // cl
  char v14; // al
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rbx
  _DWORD *v21; // rdi
  __int64 v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  unsigned __int8 v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _DWORD *v30; // rax
  int v31; // eax
  _QWORD *v32; // r12
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rbx
  _QWORD *v36; // r14
  _QWORD *v37; // rdi
  void *v38; // rdi
  void **v39; // r14
  void **v40; // rbx
  unsigned __int64 v41; // r12
  _BYTE *v42; // rcx
  int v43; // eax
  int v44; // ebx
  char *v45; // rax
  unsigned int v46; // ebx
  char *i; // rdx
  int v48; // eax
  _QWORD *v49; // rbp
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rbx
  _QWORD *v53; // r14
  _QWORD *v54; // rdi
  void *v55; // rdi
  void **v56; // r14
  void **v57; // rbx
  __int64 v58; // rbp
  _QWORD *v60; // r14
  _QWORD *v61; // rbp
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // rax
  _QWORD *v64; // rbx
  _QWORD *v65; // r12
  _QWORD *v66; // rdi
  void *v67; // rdi
  void **v68; // r12
  void **v69; // rbx
  __int64 v70; // rdx
  _QWORD *v71; // r15
  _QWORD *v72; // rbp
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rax
  _QWORD *v75; // rbx
  _QWORD *v76; // r14
  _QWORD *v77; // rdi
  void *v78; // rdi
  void **v79; // rbx
  void **v80; // r14
  __int64 v81; // rdx
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // rdi
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r15
  __int16 v88; // r12
  __int64 v89; // rax
  __int64 v90; // rdx
  _QWORD *v91; // [rsp+8h] [rbp-4E0h]
  _QWORD *v93; // [rsp+18h] [rbp-4D0h]
  _QWORD *v94; // [rsp+18h] [rbp-4D0h]
  __int64 v95; // [rsp+30h] [rbp-4B8h]
  _DWORD *v96; // [rsp+38h] [rbp-4B0h]
  unsigned int v99; // [rsp+60h] [rbp-488h]
  unsigned __int64 v101; // [rsp+68h] [rbp-480h]
  __int64 v102; // [rsp+70h] [rbp-478h] BYREF
  char v103; // [rsp+78h] [rbp-470h]
  bool v104; // [rsp+79h] [rbp-46Fh]
  bool v105; // [rsp+7Ah] [rbp-46Eh]
  void *v106; // [rsp+80h] [rbp-468h] BYREF
  __int64 v107; // [rsp+88h] [rbp-460h]
  _BYTE v108[256]; // [rsp+90h] [rbp-458h] BYREF
  void *v109[2]; // [rsp+190h] [rbp-358h] BYREF
  _BYTE v110[256]; // [rsp+1A0h] [rbp-348h] BYREF
  __int64 v111; // [rsp+2A0h] [rbp-248h]
  __int128 v112; // [rsp+2B0h] [rbp-238h] BYREF
  int v113; // [rsp+2C0h] [rbp-228h]
  __int16 v114; // [rsp+2C4h] [rbp-224h]
  __int64 v115; // [rsp+2C8h] [rbp-220h]
  _BYTE *v116; // [rsp+2D0h] [rbp-218h]
  __int64 v117; // [rsp+2D8h] [rbp-210h]
  _BYTE v118[128]; // [rsp+2E0h] [rbp-208h] BYREF
  __int64 v119; // [rsp+360h] [rbp-188h]
  __int64 v120; // [rsp+368h] [rbp-180h]
  __int64 v121; // [rsp+370h] [rbp-178h]
  __int64 v122; // [rsp+380h] [rbp-168h]
  __int64 v123; // [rsp+388h] [rbp-160h]
  int v124; // [rsp+398h] [rbp-150h]
  char v125; // [rsp+39Ch] [rbp-14Ch]
  void *v126; // [rsp+3A0h] [rbp-148h]
  __int64 v127; // [rsp+3A8h] [rbp-140h]
  _BYTE v128[64]; // [rsp+3B0h] [rbp-138h] BYREF
  __int64 v129; // [rsp+3F0h] [rbp-F8h]
  __int64 v130; // [rsp+3F8h] [rbp-F0h]
  void *v131; // [rsp+400h] [rbp-E8h]
  __int64 v132; // [rsp+408h] [rbp-E0h]
  _BYTE v133[96]; // [rsp+410h] [rbp-D8h] BYREF
  __int16 v134; // [rsp+470h] [rbp-78h]
  void *ptr; // [rsp+478h] [rbp-70h]
  __int64 v136; // [rsp+480h] [rbp-68h]
  _BYTE v137[96]; // [rsp+488h] [rbp-60h] BYREF

  v11 = sub_BFB9F0((__int64)a3);
  if ( (*(_WORD *)v11 & 0x1FF) == 4 )
  {
    v87 = *(_QWORD *)(v11 + 16);
    v88 = *a3 & 0x1FF;
    v89 = sub_BFB9F0(v87);
    v12 = 0;
    v11 = v89;
    if ( v87 == v89 )
      v12 = *(_QWORD *)(v89 + 40) != 0;
    v14 = 1;
    v13 = v88 == 20;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
  }
  v103 = v14;
  v105 = v12;
  v15 = a5;
  v104 = v13;
  if ( v14 )
    v15 = a5 | 2;
  v102 = v11;
  v101 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  v16 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v99 = v15;
  v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v17 - 25) <= 1 )
    goto LABEL_6;
  v82 = *(unsigned __int8 *)(v16 + 16);
  if ( (_BYTE)v82 == 42 )
    goto LABEL_179;
  if ( (_BYTE)v17 == 42 )
  {
    v16 = sub_F63050(v16, a5, v82, v17);
    if ( !v16 )
    {
LABEL_180:
      v16 = *(_QWORD *)v101;
      v82 = *(unsigned __int8 *)(*(_QWORD *)v101 + 16LL);
      goto LABEL_181;
    }
LABEL_179:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
      goto LABEL_6;
    goto LABEL_180;
  }
LABEL_181:
  if ( (_BYTE)v82 != 33
    && ((v90 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v90 + 16) != 33)
     || (v16 = sub_F63050(v16, a5, v90, v17)) == 0)
    || (v83 = *(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL, v84 = *(_QWORD *)v83,
                                                            *(_BYTE *)(*(_QWORD *)v83 + 16LL) != 26)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v84 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26
     || !sub_F63050(v84, a5, v82, v17)) )
  {
    if ( sub_18C0AE0(v11) )
    {
      v85 = sub_1BE70F0(a1, v11, 0, nullptr, a6, 1, a7, a8);
      if ( v85 )
        return sub_1D3F170(a1, (unsigned __int64 *)&v102, v85, v86);
    }
    v58 = 0;
    v85 = sub_1BE0150(a1, (__int64)a3, &v112);
    if ( v85 )
      return sub_1D3F170(a1, (unsigned __int64 *)&v102, v85, v86);
    return v58;
  }
LABEL_6:
  v111 = 0;
  v109[0] = v110;
  v109[1] = (void *)0x800000000LL;
  v18 = *(_QWORD *)v11;
  v19 = *(_QWORD *)v11 >> 16;
  if ( (*(_QWORD *)v11 & 0x80000LL) == 0 )
    goto LABEL_12;
  v20 = 8LL * *(unsigned int *)(v11 + 4);
  if ( (*(_WORD *)v11 & 0x1FF) == 0x18 )
  {
    v96 = (_DWORD *)(v11 + v20 + 64);
    if ( *v96 )
    {
      v21 = (_DWORD *)(v11 + v20 + 64);
      if ( sub_18C0AE0(v11) )
      {
        v22 = v11 + v20 + ((v18 >> 15) & 0x10) + 64;
LABEL_11:
        sub_F1EA70(v21, v22, (__int64)v109);
LABEL_12:
        v23 = (_QWORD *)(v11 + 64);
        v24 = 8LL * *(unsigned int *)(v11 + 4);
        v96 = (_DWORD *)(v11 + v24 + 64);
        if ( (*(_WORD *)v11 & 0x1FF) != 0x18 )
        {
          v23 = (_QWORD *)(v11 + 80);
          v96 = (_DWORD *)(v11 + v24 + 80);
        }
        goto LABEL_14;
      }
      goto LABEL_206;
    }
    v23 = (_QWORD *)(v11 + 64);
  }
  else
  {
    v96 = (_DWORD *)(v11 + v20 + 80);
    if ( *v96 )
    {
      v21 = (_DWORD *)(v11 + v20 + 80);
      if ( sub_18C0AE0(v11) )
      {
        v22 = v11 + v20 + 16LL * ((v19 & 8) != 0) + 80;
        goto LABEL_11;
      }
LABEL_206:
      v22 = 0;
      goto LABEL_11;
    }
    v23 = (_QWORD *)(v11 + 80);
  }
LABEL_14:
  if ( v23 != (_QWORD *)v96 )
  {
    v91 = v23;
    v95 = 0;
    while ( 1 )
    {
      v25 = *v91 & 0xFFFFFFFFFFFFFFF8LL;
      v26 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( ((v26 + 52) & 0x7Fu) <= 1 || (unsigned int)v26 - 53 <= 1 )
      {
        v25 = sub_B72ED0(*v91 & 0xFFFFFFFFFFFFFFF8LL);
        v26 = *(_BYTE *)(v25 + 28) & 0x7F;
      }
      if ( v26 == 71 )
      {
        if ( (*(_QWORD *)v11 & 0x80000LL) == 0 )
          goto LABEL_94;
        v27 = 8LL * *(unsigned int *)(v11 + 4);
        v28 = v11 + v27 + 64;
        v29 = v11 + v27 + 80;
        v30 = (_DWORD *)v28;
        if ( (*(_WORD *)v11 & 0x1FF) != 0x18 )
          v30 = (_DWORD *)v29;
        if ( !*v30 )
        {
LABEL_94:
          v58 = 0;
          goto LABEL_95;
        }
        v31 = *(_DWORD *)(v11 + 24);
        v106 = nullptr;
        v113 = v31;
        v116 = v118;
        v120 &= 0xFFFFFFFE00000000LL;
        v122 &= 0xFFFFFFFE00000000LL;
        v126 = v128;
        v127 = 0x800000000LL;
        v117 = 0x400000000LL;
        v132 = 0x400000000LL;
        v136 = 0x400000000LL;
        v112 = 0;
        v114 = 0;
        v115 = 0;
        v119 = 0;
        v121 = 0;
        v123 = 0;
        v124 = 0;
        v125 = 0;
        v129 = 0;
        v130 = 0;
        v131 = v133;
        v134 = 0;
        ptr = v137;
        if ( (unsigned int)sub_1D75BD0(a1, v25, (__int64)v109, 0, (__int64 *)&v106, (__int64)&v112, (__m128)0LL, a8, 0) )
        {
          if ( ptr != v137 )
            free(ptr);
          if ( v131 != v133 )
            free(v131);
          if ( v126 != v128 )
            free(v126);
          v60 = v116;
          v61 = &v116[32 * (unsigned int)v117];
          if ( v116 != (_BYTE *)v61 )
          {
            do
            {
              v61 -= 4;
              v62 = v61[1];
              if ( v62 )
              {
                v63 = v61[2];
                if ( v63 )
                {
                  if ( v62 < v63 || v62 > v63 + 14848 )
                  {
                    v64 = *(_QWORD **)(v62 + 528);
                    v65 = &v64[8 * (unsigned __int64)*(unsigned int *)(v62 + 536)];
                    if ( v64 != v65 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v65 -= 8;
                          v66 = (_QWORD *)v65[3];
                          if ( v66 == v65 + 5 )
                            break;
                          operator delete(v66);
                          if ( v64 == v65 )
                            goto LABEL_123;
                        }
                      }
                      while ( v64 != v65 );
LABEL_123:
                      v65 = *(_QWORD **)(v62 + 528);
                    }
                    if ( v65 != (_QWORD *)(v62 + 544) )
                      free(v65);
                    v67 = *(void **)(v62 + 416);
                    if ( v67 != (void *)(v62 + 432) )
                      free(v67);
                    v68 = (void **)(v62 + 384);
                    v69 = (void **)(v62 + 64);
                    do
                    {
                      while ( *v68 != v68 + 2 )
                      {
                        operator delete(*v68);
                        v68 -= 4;
                        if ( v68 == v69 )
                          goto LABEL_131;
                      }
                      v68 -= 4;
                    }
                    while ( v69 != v68 );
LABEL_131:
                    operator delete((void *)v62, 0x3A0u);
                  }
                  else
                  {
                    v70 = *(unsigned int *)(v63 + 14976);
                    v17 = (unsigned int)(v70 + 1);
                    *(_DWORD *)(v63 + 14976) = v17;
                    *(_QWORD *)(v63 + 8 * v70 + 14848) = v62;
                  }
                }
              }
            }
            while ( v60 != v61 );
            v61 = v116;
          }
          if ( v61 != (_QWORD *)v118 )
            free(v61);
          goto LABEL_92;
        }
        v25 = (unsigned __int64)v106;
        if ( ptr != v137 )
          free(ptr);
        if ( v131 != v133 )
          free(v131);
        if ( v126 != v128 )
          free(v126);
        v93 = v116;
        v32 = &v116[32 * (unsigned int)v117];
        if ( v116 != (_BYTE *)v32 )
        {
          do
          {
            v32 -= 4;
            v33 = v32[1];
            if ( v33 )
            {
              v34 = v32[2];
              if ( v34 )
              {
                if ( v33 < v34 || v33 > v34 + 14848 )
                {
                  v35 = *(_QWORD **)(v33 + 528);
                  v36 = &v35[8 * (unsigned __int64)*(unsigned int *)(v33 + 536)];
                  if ( v35 != v36 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v36 -= 8;
                        v37 = (_QWORD *)v36[3];
                        if ( v37 == v36 + 5 )
                          break;
                        operator delete(v37);
                        if ( v35 == v36 )
                          goto LABEL_38;
                      }
                    }
                    while ( v35 != v36 );
LABEL_38:
                    v36 = *(_QWORD **)(v33 + 528);
                  }
                  if ( v36 != (_QWORD *)(v33 + 544) )
                    free(v36);
                  v38 = *(void **)(v33 + 416);
                  if ( v38 != (void *)(v33 + 432) )
                    free(v38);
                  v39 = (void **)(v33 + 384);
                  v40 = (void **)(v33 + 64);
                  do
                  {
                    while ( *v39 != v39 + 2 )
                    {
                      operator delete(*v39);
                      v39 -= 4;
                      if ( v39 == v40 )
                        goto LABEL_46;
                    }
                    v39 -= 4;
                  }
                  while ( v40 != v39 );
LABEL_46:
                  operator delete((void *)v33, 0x3A0u);
                }
                else
                {
                  v17 = *(unsigned int *)(v34 + 14976);
                  *(_DWORD *)(v34 + 14976) = v17 + 1;
                  *(_QWORD *)(v34 + 8 * v17 + 14848) = v33;
                }
              }
            }
          }
          while ( v93 != v32 );
          v32 = v116;
        }
        if ( v32 != (_QWORD *)v118 )
          free(v32);
      }
      v41 = sub_1D3F170(a1, (unsigned __int64 *)&v102, v25, v17);
      if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !a5
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v101 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
          v41 = sub_A70010(*(_QWORD *)(a1 + 248), v41);
        }
        v42 = v108;
        v107 = 0x800000000LL;
        v43 = *(_DWORD *)(a2 + 20);
        v106 = v108;
        v44 = v43;
        v45 = v108;
        v46 = v44 & 0x1FFFFFFF;
        if ( v46 )
        {
          if ( v46 > 8uLL )
          {
            sub_2237220(&v106, v108, v46, 32);
            v42 = v106;
            v45 = (char *)v106 + 32 * (unsigned int)v107;
          }
          for ( i = &v42[32 * v46]; i != v45; *((_QWORD *)v45 - 3) = 0 )
          {
            v45[24] = 0;
            *(_QWORD *)v45 &= 0xFFFFFFFE00000000LL;
            v45 += 32;
          }
          LODWORD(v107) = v46;
        }
        v48 = *(_DWORD *)(v11 + 24);
        v114 = 0;
        v113 = v48;
        v116 = v118;
        v120 &= 0xFFFFFFFE00000000LL;
        v122 &= 0xFFFFFFFE00000000LL;
        v126 = v128;
        v127 = 0x800000000LL;
        v112 = 0;
        v117 = 0x400000000LL;
        v131 = v133;
        v132 = 0x400000000LL;
        v136 = 0x400000000LL;
        v115 = 0;
        v119 = 0;
        v121 = 0;
        v123 = 0;
        v124 = 0;
        v125 = 0;
        v129 = 0;
        v130 = 0;
        v134 = 0;
        ptr = v137;
        if ( (unsigned int)sub_1D6C080(a1, a2, a4, v41, (__int64)&v112, (__int64 *)&v106, v99, 0, 0, nullptr) )
        {
          if ( ptr != v137 )
            free(ptr);
          if ( v131 != v133 )
            free(v131);
          if ( v126 != v128 )
            free(v126);
          v71 = v116;
          v72 = &v116[32 * (unsigned int)v117];
          if ( v116 != (_BYTE *)v72 )
          {
            do
            {
              v72 -= 4;
              v73 = v72[1];
              if ( v73 )
              {
                v74 = v72[2];
                if ( v74 )
                {
                  if ( v73 < v74 || v73 > v74 + 14848 )
                  {
                    v75 = *(_QWORD **)(v73 + 528);
                    v76 = &v75[8 * (unsigned __int64)*(unsigned int *)(v73 + 536)];
                    if ( v75 != v76 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v76 -= 8;
                          v77 = (_QWORD *)v76[3];
                          if ( v77 == v76 + 5 )
                            break;
                          operator delete(v77);
                          if ( v75 == v76 )
                            goto LABEL_155;
                        }
                      }
                      while ( v75 != v76 );
LABEL_155:
                      v76 = *(_QWORD **)(v73 + 528);
                    }
                    if ( v76 != (_QWORD *)(v73 + 544) )
                      free(v76);
                    v78 = *(void **)(v73 + 416);
                    if ( v78 != (void *)(v73 + 432) )
                      free(v78);
                    v79 = (void **)(v73 + 384);
                    v80 = (void **)(v73 + 64);
                    do
                    {
                      while ( *v79 != v79 + 2 )
                      {
                        operator delete(*v79);
                        v79 -= 4;
                        if ( v79 == v80 )
                          goto LABEL_163;
                      }
                      v79 -= 4;
                    }
                    while ( v79 != v80 );
LABEL_163:
                    operator delete((void *)v73, 0x3A0u);
                  }
                  else
                  {
                    v81 = *(unsigned int *)(v74 + 14976);
                    v17 = (unsigned int)(v81 + 1);
                    *(_DWORD *)(v74 + 14976) = v17;
                    *(_QWORD *)(v74 + 8 * v81 + 14848) = v73;
                  }
                }
              }
            }
            while ( v71 != v72 );
            v72 = v116;
          }
          if ( v72 != (_QWORD *)v118 )
            free(v72);
          if ( v106 != v108 )
            free(v106);
        }
        else
        {
          if ( (v95 & 0xFFFFFFFFFFFFFFF0LL) != 0 && !sub_1D3A950(a1, v95, v41, v17) )
          {
            v58 = 0;
            sub_19A2E00((__int64)&v112);
            if ( v106 != v108 )
              free(v106);
            goto LABEL_95;
          }
          if ( ptr != v137 )
            free(ptr);
          if ( v131 != v133 )
            free(v131);
          if ( v126 != v128 )
            free(v126);
          v94 = v116;
          v49 = &v116[32 * (unsigned int)v117];
          if ( v116 != (_BYTE *)v49 )
          {
            do
            {
              v49 -= 4;
              v50 = v49[1];
              if ( v50 )
              {
                v51 = v49[2];
                if ( v51 )
                {
                  if ( v50 < v51 || v50 > v51 + 14848 )
                  {
                    v52 = *(_QWORD **)(v50 + 528);
                    v53 = &v52[8 * (unsigned __int64)*(unsigned int *)(v50 + 536)];
                    if ( v52 != v53 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v53 -= 8;
                          v54 = (_QWORD *)v53[3];
                          if ( v54 == v53 + 5 )
                            break;
                          operator delete(v54);
                          if ( v52 == v53 )
                            goto LABEL_76;
                        }
                      }
                      while ( v52 != v53 );
LABEL_76:
                      v53 = *(_QWORD **)(v50 + 528);
                    }
                    if ( v53 != (_QWORD *)(v50 + 544) )
                      free(v53);
                    v55 = *(void **)(v50 + 416);
                    v56 = (void **)(v50 + 416);
                    if ( v55 != (void *)(v50 + 432) )
                      free(v55);
                    v57 = (void **)(v50 + 96);
                    do
                    {
                      while ( 1 )
                      {
                        v56 -= 4;
                        if ( *v56 == v56 + 2 )
                          break;
                        operator delete(*v56);
                        if ( v56 == v57 )
                          goto LABEL_84;
                      }
                    }
                    while ( v56 != v57 );
LABEL_84:
                    operator delete((void *)v50, 0x3A0u);
                  }
                  else
                  {
                    v17 = *(unsigned int *)(v51 + 14976);
                    *(_DWORD *)(v51 + 14976) = v17 + 1;
                    *(_QWORD *)(v51 + 8 * v17 + 14848) = v50;
                  }
                }
              }
            }
            while ( v94 != v49 );
            v49 = v116;
          }
          if ( v49 != (_QWORD *)v118 )
            free(v49);
          if ( v106 != v108 )
            free(v106);
          v95 = v41;
        }
      }
LABEL_92:
      if ( v96 == (_DWORD *)++v91 )
        goto LABEL_93;
    }
  }
  v95 = 0;
LABEL_93:
  v58 = v95;
LABEL_95:
  if ( v109[0] != v110 )
    free(v109[0]);
  return v58;
}

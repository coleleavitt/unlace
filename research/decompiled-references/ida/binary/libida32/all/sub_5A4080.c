unsigned __int64 __fastcall sub_5A4080(_QWORD *a1, _QWORD *a2, char a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // rcx
  __int64 v28; // rdx
  char *v29; // rcx
  bool v30; // zf
  _QWORD *v31; // r15
  unsigned __int64 v32; // rbp
  _QWORD *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  char *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r10
  char *v53; // rax
  int v54; // r11d
  int v55; // r11d
  _QWORD *v56; // rsi
  _QWORD *v57; // r12
  __int64 *v58; // r15
  _QWORD *v59; // r14
  unsigned __int64 v60; // rbp
  __int64 v61; // rcx
  unsigned __int64 v62; // rdi
  __int64 *v63; // rax
  __int64 v64; // r13
  int v65; // r11d
  int v66; // r11d
  __int64 v67; // rax
  __int64 *v68; // r10
  __int64 *v69; // rax
  __int64 v70; // r11
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r10
  int v74; // r11d
  int v75; // r11d
  __int64 v76; // rax
  __int64 v77; // r10
  __int64 v78; // r11
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  unsigned __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r10
  __int64 v87; // r11
  __int64 v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // rsi
  __int64 v91; // rax
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned __int64 v96; // rsi
  unsigned __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r10
  __int64 v103; // r11
  __int64 v104; // rdi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r10
  __int64 v108; // r11
  __int64 v109; // rdi
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // r10
  __int64 v114; // r11
  __int64 v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v119; // [rsp+8h] [rbp-90h]
  _QWORD *v120; // [rsp+10h] [rbp-88h]
  unsigned __int64 v121; // [rsp+10h] [rbp-88h]
  unsigned __int64 v122; // [rsp+10h] [rbp-88h]
  _QWORD *v123; // [rsp+18h] [rbp-80h]
  _QWORD *v124; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v126; // [rsp+28h] [rbp-70h]
  __int64 v127; // [rsp+40h] [rbp-58h] BYREF
  __int64 v128; // [rsp+48h] [rbp-50h]
  __int64 v129; // [rsp+50h] [rbp-48h]
  unsigned __int64 v130; // [rsp+58h] [rbp-40h]

  v5 = a1[14];
  v130 = __readfsqword(0x28u);
  v6 = a1[12];
  if ( v5 )
  {
    ptr = nullptr;
    v126 = 0;
    if ( v6 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, v6, 24);
      if ( (unsigned __int64)v126 < v6 )
      {
        v25 = v126 + 1;
        v26 = 24 * v126;
        v27 = (char *)ptr + 24 * v126;
        *(_QWORD *)v27 = 0;
        *((_QWORD *)v27 + 1) = 0xFFFFFFFFLL;
        v27[16] = 0;
        if ( v25 < v6 )
        {
          v28 = v26 + 24;
          do
          {
            ++v25;
            v29 = (char *)ptr + v28;
            v28 += 24;
            *(_QWORD *)v29 = 0;
            *((_QWORD *)v29 + 1) = 0xFFFFFFFFLL;
            v29[16] = 0;
          }
          while ( v6 != v25 );
        }
      }
      v30 = a1[1] == 0;
      *(_QWORD *)&v126 = v6;
      if ( v30 )
        goto LABEL_49;
    }
    else if ( !a1[1] )
    {
      goto LABEL_51;
    }
    v31 = a1 + 2;
    v32 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v32] + 8LL));
      v33 = (_QWORD *)*v31;
      v34 = *v31 + 32LL * v31[1];
      if ( v34 != *v31 )
      {
        do
        {
          v35 = v33[3];
          v36 = *v33;
          v33 += 4;
          v37 = (char *)ptr + 24 * v35;
          v38 = *(_QWORD *)v37;
          *(_QWORD *)v37 = v36;
          LODWORD(v36) = *((_DWORD *)v33 - 6);
          *(v33 - 4) = v38;
          LODWORD(v38) = *((_DWORD *)v37 + 2);
          *((_DWORD *)v37 + 2) = v36;
          LODWORD(v36) = *((_DWORD *)v33 - 5);
          *((_DWORD *)v33 - 6) = v38;
          LODWORD(v38) = *((_DWORD *)v37 + 3);
          *((_DWORD *)v37 + 3) = v36;
          LOBYTE(v36) = *((_BYTE *)v33 - 16);
          *((_DWORD *)v33 - 5) = v38;
          LOBYTE(v38) = v37[16];
          v37[16] = v36;
          *((_BYTE *)v33 - 16) = v38;
        }
        while ( (_QWORD *)v34 != v33 );
        v33 = (_QWORD *)*v31;
      }
      if ( v33 )
      {
        v31[1] = 0;
        qfree(v33);
        *v31 = 0;
        v31[2] = 0;
      }
      v39 = (_QWORD *)a2[v32];
      v40 = v6 - a1[14];
      v41 = v39[6];
      if ( v40 != v41 )
      {
        LOBYTE(v129) = 0;
        v127 = 0;
        v128 = 0xFFFFFFFFLL;
        if ( v40 >= v41 )
        {
          v42 = v39[5];
          v43 = v39[7];
          v44 = v39 + 5;
          if ( (unsigned __int64)&v127 < v42 || (unsigned __int64)&v127 >= v42 + 24 * v43 )
          {
            if ( v43 < v40 )
            {
              v123 = v39;
              v121 = v40;
              v91 = qvector_reserve(v44, v42, v40, 24);
              v39 = v123;
              v40 = v121;
              v123[5] = v91;
              v41 = v123[6];
            }
            if ( v41 < v40 )
            {
              v86 = v127;
              v87 = v128;
              v88 = v129;
              v89 = 24 * v41;
              do
              {
                v90 = v39[5];
                ++v41;
                *(_QWORD *)(v90 + v89) = v86;
                *(_QWORD *)(v90 + v89 + 8) = v87;
                *(_QWORD *)(v90 + v89 + 16) = v88;
                v89 += 24;
              }
              while ( v40 != v41 );
            }
          }
          else
          {
            if ( v43 < v40 )
            {
              v124 = v39;
              v122 = v40;
              v112 = qvector_reserve(v44, v42, v40, 24);
              v39 = v124;
              v40 = v122;
              v124[5] = v112;
              v41 = v124[6];
            }
            v45 = 24 * v41;
            if ( v41 < v40 )
            {
              do
              {
                ++v41;
                v46 = v45 + v39[5];
                v45 += 24;
                *(_QWORD *)v46 = 0;
                *(_QWORD *)(v46 + 8) = 0xFFFFFFFFLL;
                *(_BYTE *)(v46 + 16) = 0;
              }
              while ( v40 != v41 );
            }
          }
        }
        v39[6] = v40;
      }
      if ( v6 )
      {
        v47 = 0;
        v48 = 0;
        v49 = 0;
        do
        {
          if ( *(_DWORD *)(a1[11] + 4 * v48) )
          {
            v50 = 3 * v49++;
            v51 = v39[5] + 8 * v50;
            v52 = *(_QWORD *)v51;
            v53 = (char *)ptr + v47;
            *(_QWORD *)v51 = *(_QWORD *)((char *)ptr + v47);
            v54 = *((_DWORD *)v53 + 2);
            *(_QWORD *)v53 = v52;
            LODWORD(v52) = *(_DWORD *)(v51 + 8);
            *(_DWORD *)(v51 + 8) = v54;
            v55 = *((_DWORD *)v53 + 3);
            *((_DWORD *)v53 + 2) = v52;
            LODWORD(v52) = *(_DWORD *)(v51 + 12);
            *(_DWORD *)(v51 + 12) = v55;
            LOBYTE(v55) = v53[16];
            *((_DWORD *)v53 + 3) = v52;
            LOBYTE(v52) = *(_BYTE *)(v51 + 16);
            *(_BYTE *)(v51 + 16) = v55;
            v53[16] = v52;
          }
          ++v48;
          v47 += 24;
        }
        while ( v48 != v6 );
      }
      else
      {
        v49 = 0;
      }
      if ( v39[6] != v49 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++v32;
      v31 += 3;
    }
    while ( v32 < a1[1] );
LABEL_49:
    if ( ptr )
    {
      *(_QWORD *)&v126 = 0;
      qfree(ptr);
    }
LABEL_51:
    if ( !a3 )
      return v130 - __readfsqword(0x28u);
    goto LABEL_52;
  }
  if ( !a1[1] )
  {
    if ( !a3 )
      return v130 - __readfsqword(0x28u);
    v56 = (_QWORD *)*a2;
    v57 = (_QWORD *)a2[1];
    v58 = nullptr;
    v59 = (_QWORD *)*a2;
    v119 = *a2 + 40LL;
    v120 = v57 + 5;
    goto LABEL_54;
  }
  v7 = a1 + 2;
  do
  {
    switch_dbctx(*(int *)(a2[v5] + 8LL));
    v8 = (_QWORD *)a2[v5];
    v9 = v8[6];
    if ( v6 != v9 )
    {
      LOBYTE(v129) = 0;
      v127 = 0;
      v128 = 0xFFFFFFFFLL;
      if ( v6 >= v9 )
      {
        v10 = v8[5];
        v11 = v8[7];
        v12 = v8 + 5;
        if ( (unsigned __int64)&v127 < v10 || (unsigned __int64)&v127 >= v10 + 24 * v11 )
        {
          if ( v11 < v6 )
          {
            v8[5] = qvector_reserve(v12, v10, v6, 24);
            v9 = v8[6];
          }
          if ( v9 < v6 )
          {
            v13 = v127;
            v14 = v128;
            v15 = v129;
            v16 = 24 * v9;
            do
            {
              v17 = v8[5];
              ++v9;
              *(_QWORD *)(v17 + v16) = v13;
              *(_QWORD *)(v17 + v16 + 8) = v14;
              *(_QWORD *)(v17 + v16 + 16) = v15;
              v16 += 24;
            }
            while ( v6 != v9 );
          }
        }
        else
        {
          if ( v11 < v6 )
          {
            v8[5] = qvector_reserve(v12, v10, v6, 24);
            v9 = v8[6];
          }
          v100 = 24 * v9;
          if ( v9 < v6 )
          {
            do
            {
              ++v9;
              v101 = v100 + v8[5];
              v100 += 24;
              *(_QWORD *)v101 = 0;
              *(_QWORD *)(v101 + 8) = 0xFFFFFFFFLL;
              *(_BYTE *)(v101 + 16) = 0;
            }
            while ( v6 != v9 );
          }
        }
      }
      v8[6] = v6;
    }
    v18 = (_QWORD *)*v7;
    v19 = (_QWORD *)(*v7 + 32LL * v7[1]);
    if ( (_QWORD *)*v7 != v19 )
    {
      do
      {
        v20 = v18[3];
        v21 = *v18;
        v18 += 4;
        v22 = v8[5] + 24 * v20;
        v23 = *(_QWORD *)v22;
        *(_QWORD *)v22 = v21;
        LODWORD(v21) = *((_DWORD *)v18 - 6);
        *(v18 - 4) = v23;
        LODWORD(v23) = *(_DWORD *)(v22 + 8);
        *(_DWORD *)(v22 + 8) = v21;
        LODWORD(v21) = *((_DWORD *)v18 - 5);
        *((_DWORD *)v18 - 6) = v23;
        LODWORD(v23) = *(_DWORD *)(v22 + 12);
        *(_DWORD *)(v22 + 12) = v21;
        LOBYTE(v21) = *((_BYTE *)v18 - 16);
        *((_DWORD *)v18 - 5) = v23;
        LOBYTE(v23) = *(_BYTE *)(v22 + 16);
        *(_BYTE *)(v22 + 16) = v21;
        *((_BYTE *)v18 - 16) = v23;
      }
      while ( v19 != v18 );
      v19 = (_QWORD *)*v7;
    }
    if ( v19 )
    {
      v7[1] = 0;
      qfree(v19);
      *v7 = 0;
      v7[2] = 0;
    }
    ++v5;
    v7 += 3;
  }
  while ( v5 < a1[1] );
  if ( !a3 )
    return v130 - __readfsqword(0x28u);
LABEL_52:
  v56 = (_QWORD *)*a2;
  v57 = (_QWORD *)a2[1];
  v58 = nullptr;
  v59 = (_QWORD *)*a2;
  v119 = *a2 + 40LL;
  v120 = v57 + 5;
  if ( a1[1] > 2u )
    v58 = (__int64 *)(a2[2] + 40LL);
LABEL_54:
  v60 = v56[6];
  if ( v60 )
  {
    v61 = 0;
    v62 = 0;
    v60 = 0;
    do
    {
      while ( 1 )
      {
        v76 = v56[5];
        v77 = v76 + v61;
        v78 = *(_QWORD *)(v76 + v61);
        if ( v78 || *(_QWORD *)(v57[5] + v61) )
          break;
        ++v62;
        v61 += 24;
        if ( v62 >= v56[6] )
          goto LABEL_63;
      }
      if ( v60 < v62 )
      {
        v63 = (__int64 *)(24 * v60 + v76);
        v64 = *v63;
        *v63 = v78;
        *(_QWORD *)v77 = v64;
        v65 = *((_DWORD *)v63 + 2);
        *((_DWORD *)v63 + 2) = *(_DWORD *)(v77 + 8);
        LODWORD(v64) = *(_DWORD *)(v77 + 12);
        *(_DWORD *)(v77 + 8) = v65;
        v66 = *((_DWORD *)v63 + 3);
        *((_DWORD *)v63 + 3) = v64;
        LOBYTE(v64) = *(_BYTE *)(v77 + 16);
        *(_DWORD *)(v77 + 12) = v66;
        LOBYTE(v66) = *((_BYTE *)v63 + 16);
        *((_BYTE *)v63 + 16) = v64;
        *(_BYTE *)(v77 + 16) = v66;
        v67 = v57[5];
        v68 = (__int64 *)(v67 + 24 * v60);
        v69 = (__int64 *)(v61 + v67);
        v70 = *v68;
        *v68 = *v69;
        LODWORD(v64) = *((_DWORD *)v69 + 2);
        *v69 = v70;
        LODWORD(v70) = *((_DWORD *)v68 + 2);
        *((_DWORD *)v68 + 2) = v64;
        LODWORD(v64) = *((_DWORD *)v69 + 3);
        *((_DWORD *)v69 + 2) = v70;
        LODWORD(v70) = *((_DWORD *)v68 + 3);
        *((_DWORD *)v68 + 3) = v64;
        LOBYTE(v64) = *((_BYTE *)v69 + 16);
        *((_DWORD *)v69 + 3) = v70;
        LOBYTE(v70) = *((_BYTE *)v68 + 16);
        *((_BYTE *)v68 + 16) = v64;
        *((_BYTE *)v69 + 16) = v70;
        if ( v58 )
        {
          v71 = *v58 + 24 * v60;
          v72 = v61 + *v58;
          v73 = *(_QWORD *)v71;
          *(_QWORD *)v71 = *(_QWORD *)v72;
          v74 = *(_DWORD *)(v72 + 8);
          *(_QWORD *)v72 = v73;
          LODWORD(v73) = *(_DWORD *)(v71 + 8);
          *(_DWORD *)(v71 + 8) = v74;
          v75 = *(_DWORD *)(v72 + 12);
          *(_DWORD *)(v72 + 8) = v73;
          LODWORD(v73) = *(_DWORD *)(v71 + 12);
          *(_DWORD *)(v71 + 12) = v75;
          LOBYTE(v75) = *(_BYTE *)(v72 + 16);
          *(_DWORD *)(v72 + 12) = v73;
          LOBYTE(v73) = *(_BYTE *)(v71 + 16);
          *(_BYTE *)(v71 + 16) = v75;
          *(_BYTE *)(v72 + 16) = v73;
        }
      }
      ++v60;
      ++v62;
      v61 += 24;
    }
    while ( v62 < v56[6] );
LABEL_63:
    v56 = (_QWORD *)*a2;
  }
  switch_dbctx(*((int *)v56 + 2));
  v79 = v59[6];
  if ( v79 != v60 )
  {
    LOBYTE(v129) = 0;
    v127 = 0;
    v128 = 0xFFFFFFFFLL;
    if ( v60 >= v79 )
    {
      v96 = v59[5];
      v97 = v59[7];
      if ( (unsigned __int64)&v127 < v96 || (unsigned __int64)&v127 >= v96 + 24 * v97 )
      {
        if ( v97 < v60 )
        {
          v59[5] = qvector_reserve(v119, v96, v60, 24);
          v79 = v59[6];
        }
        if ( v79 < v60 )
        {
          v102 = v127;
          v103 = v128;
          v104 = v129;
          v105 = 24 * v79;
          do
          {
            v106 = v59[5];
            ++v79;
            *(_QWORD *)(v106 + v105) = v102;
            *(_QWORD *)(v106 + v105 + 8) = v103;
            *(_QWORD *)(v106 + v105 + 16) = v104;
            v105 += 24;
          }
          while ( v60 != v79 );
        }
      }
      else
      {
        if ( v97 < v60 )
        {
          v59[5] = qvector_reserve(v119, v96, v60, 24);
          v79 = v59[6];
        }
        v98 = 24 * v79;
        if ( v79 < v60 )
        {
          do
          {
            ++v79;
            v99 = v98 + v59[5];
            v98 += 24;
            *(_QWORD *)v99 = 0;
            *(_QWORD *)(v99 + 8) = 0xFFFFFFFFLL;
            *(_BYTE *)(v99 + 16) = 0;
          }
          while ( v60 != v79 );
        }
      }
    }
    v59[6] = v60;
  }
  switch_dbctx(*(int *)(a2[1] + 8LL));
  v80 = v57[6];
  if ( v80 != v60 )
  {
    LOBYTE(v129) = 0;
    v127 = 0;
    v128 = 0xFFFFFFFFLL;
    if ( v60 >= v80 )
    {
      v92 = v57[5];
      v93 = v57[7];
      if ( (unsigned __int64)&v127 < v92 || (unsigned __int64)&v127 >= v92 + 24 * v93 )
      {
        if ( v93 < v60 )
        {
          v57[5] = qvector_reserve(v120, v92, v60, 24);
          v80 = v57[6];
        }
        if ( v80 < v60 )
        {
          v107 = v127;
          v108 = v128;
          v109 = v129;
          v110 = 24 * v80;
          do
          {
            v111 = v57[5];
            ++v80;
            *(_QWORD *)(v111 + v110) = v107;
            *(_QWORD *)(v111 + v110 + 8) = v108;
            *(_QWORD *)(v111 + v110 + 16) = v109;
            v110 += 24;
          }
          while ( v60 != v80 );
        }
      }
      else
      {
        if ( v93 < v60 )
        {
          v57[5] = qvector_reserve(v120, v92, v60, 24);
          v80 = v57[6];
        }
        v94 = 24 * v80;
        if ( v80 < v60 )
        {
          do
          {
            ++v80;
            v95 = v94 + v57[5];
            v94 += 24;
            *(_QWORD *)v95 = 0;
            *(_QWORD *)(v95 + 8) = 0xFFFFFFFFLL;
            *(_BYTE *)(v95 + 16) = 0;
          }
          while ( v60 != v80 );
        }
      }
    }
    v57[6] = v60;
  }
  if ( v58 )
  {
    switch_dbctx(*(int *)(a2[2] + 8LL));
    v81 = v58[1];
    if ( v81 != v60 )
    {
      LOBYTE(v129) = 0;
      v127 = 0;
      v128 = 0xFFFFFFFFLL;
      if ( v60 >= v81 )
      {
        v82 = *v58;
        v83 = v58[2];
        if ( (unsigned __int64)&v127 < *v58 || (unsigned __int64)&v127 >= v82 + 24 * v83 )
        {
          if ( v83 < v60 )
          {
            *v58 = qvector_reserve(v58, v82, v60, 24);
            v81 = v58[1];
          }
          if ( v81 < v60 )
          {
            v113 = v127;
            v114 = v128;
            v115 = v129;
            v116 = 24 * v81;
            do
            {
              v117 = *v58;
              ++v81;
              *(_QWORD *)(v117 + v116) = v113;
              *(_QWORD *)(v117 + v116 + 8) = v114;
              *(_QWORD *)(v117 + v116 + 16) = v115;
              v116 += 24;
            }
            while ( v60 != v81 );
          }
        }
        else
        {
          if ( v83 < v60 )
          {
            *v58 = qvector_reserve(v58, v82, v60, 24);
            v81 = v58[1];
          }
          v84 = 24 * v81;
          if ( v81 < v60 )
          {
            do
            {
              ++v81;
              v85 = v84 + *v58;
              v84 += 24;
              *(_QWORD *)v85 = 0;
              *(_QWORD *)(v85 + 8) = 0xFFFFFFFFLL;
              *(_BYTE *)(v85 + 16) = 0;
            }
            while ( v60 != v81 );
          }
        }
      }
      v58[1] = v60;
    }
  }
  return v130 - __readfsqword(0x28u);
}


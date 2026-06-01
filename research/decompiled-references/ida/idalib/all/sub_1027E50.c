void __fastcall sub_1027E50(__int64 a1, void **a2, __m128i a3, __int64 a4, int a5)
{
  void **v5; // r14
  void **v6; // r12
  int v7; // ebx
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  _BYTE *v12; // r15
  void *v13; // r13
  __int64 *v14; // rbp
  unsigned __int8 *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  char *v20; // r13
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // r15
  int v28; // ebp
  _QWORD *v29; // rbx
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  void **v32; // r15
  __int64 *v33; // r13
  int v34; // r15d
  __int64 *v35; // rbx
  _DWORD *v36; // r14
  int v37; // ebp
  __int64 *v38; // r12
  __int64 *v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // rbx
  unsigned int v45; // ecx
  unsigned int v46; // esi
  size_t v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 *v50; // rbx
  __int64 v51; // r15
  unsigned int v52; // r13d
  unsigned int v53; // ecx
  _BYTE *v54; // rsi
  __int64 v55; // rdx
  _BYTE *v56; // rdi
  void *v57; // rax
  __int64 *v58; // r9
  __int64 v59; // r13
  __int64 *v60; // rsi
  _BYTE *v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 *v63; // r13
  void *v64; // rax
  _BYTE *v65; // rsi
  __int64 *v66; // r8
  void **v67; // rbp
  size_t v68; // rax
  void **v69; // r12
  void **v70; // rbx
  void **v71; // rdi
  void **v72; // rdi
  void **v73; // rbx
  void **v74; // r12
  void *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r15
  __int64 v80; // rbx
  unsigned int v81; // r14d
  void *v82; // rdi
  size_t v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  size_t v86; // rdx
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // r13
  __int64 *v91; // r15
  __int64 *v92; // rbp
  __int64 *v93; // rbx
  __int64 *v94; // rdi
  __int64 v95; // rax
  int v96; // edx
  __int64 *v97; // rax
  void *v98; // rdi
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // r13
  int v102; // eax
  __int64 *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rdx
  unsigned __int8 *v108; // r14
  int v109; // r12d
  __int64 v110; // rbx
  void *v111; // rdi
  __int64 *v112; // [rsp+0h] [rbp-138h]
  void **v113; // [rsp+8h] [rbp-130h]
  void **v114; // [rsp+10h] [rbp-128h]
  __int64 *v115; // [rsp+18h] [rbp-120h] BYREF
  __int64 *v116; // [rsp+20h] [rbp-118h]
  __int64 *v117; // [rsp+28h] [rbp-110h]
  void *v118; // [rsp+30h] [rbp-108h]
  __int64 *v119; // [rsp+38h] [rbp-100h]
  void *v120; // [rsp+40h] [rbp-F8h] BYREF
  size_t n; // [rsp+48h] [rbp-F0h]
  _QWORD src[2]; // [rsp+50h] [rbp-E8h] BYREF
  void *v123; // [rsp+60h] [rbp-D8h] BYREF
  size_t v124; // [rsp+68h] [rbp-D0h]
  __int64 v125[2]; // [rsp+70h] [rbp-C8h] BYREF
  void *v126; // [rsp+80h] [rbp-B8h]
  __int16 v127; // [rsp+A0h] [rbp-98h]
  void *v128; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v129; // [rsp+B8h] [rbp-80h]
  void *dest; // [rsp+C8h] [rbp-70h]
  void *v131[2]; // [rsp+D0h] [rbp-68h]
  char v132; // [rsp+E8h] [rbp-50h]
  __int16 v133; // [rsp+F0h] [rbp-48h]

  v5 = (void **)a1;
  v6 = a2;
  v7 = 0;
  v8 = *a2;
  if ( v8 )
  {
    v9 = (__int64)v6[1];
    LODWORD(v112) = a5;
    v10 = sub_1027350(a1, v8, v9, a3);
    a5 = (int)v112;
    v7 = v10;
  }
  v11 = *((_DWORD *)v6 + 14);
  v12 = v6[8];
  v13 = v6[9];
  if ( v11 == 1 )
  {
    a5 = *(_DWORD *)(a1 + 20);
  }
  else if ( v11 )
  {
    if ( v11 == 3 )
      a5 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    a5 = *(_DWORD *)(a1 + 16);
  }
  v14 = (__int64 *)&v128;
  sub_FC70B0((__int64)&v128, *(_QWORD *)(a1 + 8), v7, a5);
  v15 = (unsigned __int8 *)v128;
  if ( !v128 )
  {
    v99 = v129;
    v100 = *(_DWORD *)(v129 + 14976);
    if ( v100 )
    {
      v104 = (unsigned int)(v100 - 1);
      *(_DWORD *)(v129 + 14976) = v104;
      v15 = *(unsigned __int8 **)(v99 + 8 * v104 + 14848);
      v105 = *((unsigned int *)v15 + 134);
      *v15 = 0;
      v106 = *((_QWORD *)v15 + 66);
      *((_DWORD *)v15 + 106) = 0;
      v107 = v106 + (v105 << 6);
      if ( v106 != v107 )
      {
        v112 = (__int64 *)a1;
        v108 = v15;
        v113 = v6;
        v109 = v7;
        v110 = v107;
        v114 = &v128;
        do
        {
          while ( 1 )
          {
            v110 -= 64;
            v111 = *(void **)(v110 + 24);
            if ( v111 == (void *)(v110 + 40) )
              break;
            operator delete(v111);
            if ( v106 == v110 )
              goto LABEL_159;
          }
        }
        while ( v106 != v110 );
LABEL_159:
        v7 = v109;
        v15 = v108;
        v6 = v113;
        v5 = (void **)v112;
        v14 = (__int64 *)v114;
      }
      *((_DWORD *)v15 + 134) = 0;
    }
    else
    {
      v15 = (unsigned __int8 *)operator new(0x3A0u);
      *v15 = 0;
      *((_QWORD *)v15 + 12) = v15 + 112;
      *((_QWORD *)v15 + 16) = v15 + 144;
      *((_QWORD *)v15 + 20) = v15 + 176;
      *((_QWORD *)v15 + 24) = v15 + 208;
      *((_QWORD *)v15 + 28) = v15 + 240;
      *((_QWORD *)v15 + 32) = v15 + 272;
      *((_QWORD *)v15 + 36) = v15 + 304;
      *((_QWORD *)v15 + 40) = v15 + 336;
      *((_QWORD *)v15 + 44) = v15 + 368;
      *((_QWORD *)v15 + 48) = v15 + 400;
      *((_QWORD *)v15 + 52) = v15 + 432;
      *((_QWORD *)v15 + 13) = 0;
      v15[112] = 0;
      *((_QWORD *)v15 + 17) = 0;
      v15[144] = 0;
      *((_QWORD *)v15 + 21) = 0;
      v15[176] = 0;
      *((_QWORD *)v15 + 25) = 0;
      v15[208] = 0;
      *((_QWORD *)v15 + 29) = 0;
      v15[240] = 0;
      *((_QWORD *)v15 + 33) = 0;
      v15[272] = 0;
      *((_QWORD *)v15 + 37) = 0;
      v15[304] = 0;
      *((_QWORD *)v15 + 41) = 0;
      v15[336] = 0;
      *((_QWORD *)v15 + 45) = 0;
      v15[368] = 0;
      *((_QWORD *)v15 + 49) = 0;
      v15[400] = 0;
      *((_QWORD *)v15 + 53) = 0x800000000LL;
      *((_QWORD *)v15 + 66) = v15 + 544;
      *((_QWORD *)v15 + 67) = 0x600000000LL;
    }
    v128 = v15;
  }
  v16 = *v15;
  v116 = (__int64 *)&v123;
  v15[v16 + 1] = 0;
  v123 = v125;
  v112 = v125;
  sub_1027220(&v123, v12, (__int64)v13 + (_QWORD)v12);
  v17 = v128;
  v18 = *(unsigned __int8 *)v128;
  *(_BYTE *)v128 = v18 + 1;
  v19 = 4 * (v18 + 3);
  v20 = (char *)&v17[v19];
  v21 = (__int64 *)v17[v19];
  if ( v123 == v125 )
  {
    v83 = v124;
    if ( v124 )
    {
      if ( v124 == 1 )
        *(_BYTE *)v21 = v125[0];
      else
        memcpy(v21, v123, v124);
      v83 = v124;
      v21 = *(__int64 **)v20;
    }
    *((_QWORD *)v20 + 1) = v83;
    *((_BYTE *)v21 + v83) = 0;
    v21 = (__int64 *)v123;
  }
  else
  {
    if ( v21 == &v17[v19 + 2] )
    {
      *(_QWORD *)v20 = v123;
      *((_QWORD *)v20 + 1) = v124;
      *((_QWORD *)v20 + 2) = v125[0];
    }
    else
    {
      v22 = v17[4 * (int)v18 + 14];
      *(_QWORD *)v20 = v123;
      *((_QWORD *)v20 + 1) = v124;
      *((_QWORD *)v20 + 2) = v125[0];
      if ( v21 )
      {
        v123 = v21;
        v125[0] = v22;
        goto LABEL_12;
      }
    }
    v21 = v116 + 2;
    v123 = v116 + 2;
  }
LABEL_12:
  v124 = 0;
  v23 = v116;
  *(_BYTE *)v21 = 0;
  if ( v123 != v23 + 2 )
    operator delete(v123);
  sub_FC70F0((__int64)v116, (__int64)v14);
  if ( (_BYTE)v133 )
  {
    sub_FC7790(*((__int64 *)&v129 + 1), v14, SHIBYTE(v133));
    *((_QWORD *)&v129 + 1) = 0;
    v133 = 0;
  }
  if ( v131[0] != v14 + 6 )
    operator delete(v131[0]);
  v24 = v128;
  if ( v128 )
  {
    v25 = v129;
    if ( (_QWORD)v129 )
    {
      if ( (unsigned __int64)v128 < (unsigned __int64)v129 || (unsigned __int64)v128 > (__int64)v129 + 14848 )
      {
        v26 = *((_QWORD **)v128 + 66);
        v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v128 + 134)];
        if ( v26 != v27 )
        {
          v112 = v14;
          v28 = v7;
          v29 = v26;
          do
          {
            while ( 1 )
            {
              v27 -= 8;
              v30 = (_QWORD *)v27[3];
              if ( v30 == v27 + 5 )
                break;
              operator delete(v30);
              if ( v29 == v27 )
                goto LABEL_25;
            }
          }
          while ( v29 != v27 );
LABEL_25:
          v7 = v28;
          v27 = (_QWORD *)v24[66];
          v14 = v112;
        }
        if ( v27 != v24 + 68 )
          free(v27);
        v31 = (_QWORD *)v24[52];
        v32 = (void **)(v24 + 52);
        if ( v31 != v24 + 54 )
          free(v31);
        v112 = v24 + 12;
        do
        {
          while ( 1 )
          {
            v32 -= 4;
            if ( *v32 == v32 + 2 )
              break;
            operator delete(*v32);
            if ( v32 == (void **)v112 )
              goto LABEL_33;
          }
        }
        while ( v32 != (void **)v112 );
LABEL_33:
        operator delete(v24, 0x3A0u);
      }
      else
      {
        v84 = *(unsigned int *)(v129 + 14976);
        *(_DWORD *)(v129 + 14976) = v84 + 1;
        *(_QWORD *)(v25 + 8 * v84 + 14848) = v24;
      }
    }
  }
  v112 = (__int64 *)*v6;
  if ( v112 )
  {
    v33 = (__int64 *)v6[17];
    v34 = v7 - *((_DWORD *)v6 + 13);
    v35 = (__int64 *)v6[16];
    if ( v35 != v33 )
    {
      v113 = v5;
      v36 = v14;
      v37 = v34;
      v114 = v6;
      v38 = v33;
      v39 = v35;
      do
      {
        v44 = (__int64 *)v123;
        v45 = v37 + *((_DWORD *)v39 + 1);
        v46 = v37 + *(_DWORD *)v39;
        if ( v123 )
        {
          v40 = *((unsigned int *)v123 + 106);
          v41 = *((unsigned int *)v123 + 107);
          v42 = v40 + 1;
        }
        else
        {
          v47 = v124;
          v48 = *(_DWORD *)(v124 + 14976);
          if ( v48 )
          {
            v76 = (unsigned int)(v48 - 1);
            *(_DWORD *)(v124 + 14976) = v76;
            v44 = *(__int64 **)(v47 + 8 * v76 + 14848);
            v77 = *((unsigned int *)v44 + 134);
            *(_BYTE *)v44 = 0;
            v78 = v44[66];
            *((_DWORD *)v44 + 106) = 0;
            v77 <<= 6;
            v79 = v78 + v77;
            if ( v78 == v78 + v77 )
            {
              v42 = 1;
              v40 = 0;
            }
            else
            {
              v115 = v44;
              v80 = v78;
              v117 = v39;
              v118 = v36;
              v81 = v45;
              do
              {
                while ( 1 )
                {
                  v79 -= 64;
                  v82 = *(void **)(v79 + 24);
                  if ( v82 == (void *)(v79 + 40) )
                    break;
                  operator delete(v82);
                  if ( v80 == v79 )
                    goto LABEL_112;
                }
              }
              while ( v80 != v79 );
LABEL_112:
              v44 = v115;
              v45 = v81;
              v39 = v117;
              v36 = v118;
              v40 = *((unsigned int *)v115 + 106);
              v42 = v40 + 1;
            }
            *((_DWORD *)v44 + 134) = 0;
            v41 = *((unsigned int *)v44 + 107);
          }
          else
          {
            LODWORD(v117) = v37 + *((_DWORD *)v39 + 1);
            LODWORD(v115) = v46;
            v49 = operator new(0x3A0u);
            v41 = 8;
            v42 = 1;
            v44 = (__int64 *)v49;
            *(_BYTE *)v49 = 0;
            *(_QWORD *)(v49 + 96) = v49 + 112;
            *(_QWORD *)(v49 + 128) = v49 + 144;
            *(_QWORD *)(v49 + 160) = v49 + 176;
            *(_QWORD *)(v49 + 192) = v49 + 208;
            *(_QWORD *)(v49 + 224) = v49 + 240;
            *(_QWORD *)(v49 + 256) = v49 + 272;
            *(_QWORD *)(v49 + 288) = v49 + 304;
            *(_QWORD *)(v49 + 320) = v49 + 336;
            *(_QWORD *)(v49 + 352) = v49 + 368;
            *(_QWORD *)(v49 + 384) = v49 + 400;
            *(_QWORD *)(v49 + 416) = v49 + 432;
            *(_QWORD *)(v49 + 104) = 0;
            *(_BYTE *)(v49 + 112) = 0;
            *(_QWORD *)(v49 + 136) = 0;
            *(_BYTE *)(v49 + 144) = 0;
            *(_QWORD *)(v49 + 168) = 0;
            *(_BYTE *)(v49 + 176) = 0;
            *(_QWORD *)(v49 + 200) = 0;
            *(_BYTE *)(v49 + 208) = 0;
            *(_QWORD *)(v49 + 232) = 0;
            *(_BYTE *)(v49 + 240) = 0;
            *(_QWORD *)(v49 + 264) = 0;
            *(_BYTE *)(v49 + 272) = 0;
            *(_QWORD *)(v49 + 296) = 0;
            *(_BYTE *)(v49 + 304) = 0;
            *(_QWORD *)(v49 + 328) = 0;
            *(_BYTE *)(v49 + 336) = 0;
            *(_QWORD *)(v49 + 360) = 0;
            *(_BYTE *)(v49 + 368) = 0;
            *(_QWORD *)(v49 + 392) = 0;
            *(_BYTE *)(v49 + 400) = 0;
            *(_QWORD *)(v49 + 424) = 0x800000000LL;
            v46 = (unsigned int)v115;
            *(_QWORD *)(v49 + 528) = v49 + 544;
            v45 = (unsigned int)v117;
            *(_QWORD *)(v49 + 536) = 0x600000000LL;
            v40 = 0;
          }
          v123 = v44;
        }
        v128 = (void *)__PAIR64__(v45, v46);
        LOBYTE(v129) = 1;
        if ( v42 > v41 )
        {
          sub_2237220(v44 + 52, v44 + 54, v42, 12);
          v40 = *((unsigned int *)v44 + 106);
        }
        ++v39;
        v43 = v44[52] + 12 * v40;
        *(_QWORD *)v43 = *(_QWORD *)v36;
        *(_DWORD *)(v43 + 8) = v36[2];
        ++*((_DWORD *)v44 + 106);
      }
      while ( v38 != v39 );
      v14 = (__int64 *)v36;
      v6 = v114;
      v5 = v113;
    }
    v50 = (__int64 *)v6[19];
    v114 = (void **)&v50[6 * *((unsigned int *)v6 + 40)];
    if ( v114 != (void **)v50 )
    {
      v113 = &v120;
      while ( 1 )
      {
        v51 = v50[1];
        if ( *v50 )
        {
          v52 = sub_1027350((__int64)v5, v112, *v50, a3);
          v53 = sub_1027350((__int64)v5, v112, v51, a3);
        }
        else
        {
          v53 = 0;
          v52 = 0;
        }
        v54 = (_BYTE *)v50[2];
        v55 = v50[3];
        *(_QWORD *)((char *)&v129 + 4) = 0;
        BYTE12(v129) = 0;
        dest = v14 + 5;
        v131[0] = nullptr;
        LOBYTE(v131[1]) = 0;
        v132 = 0;
        v128 = (void *)__PAIR64__(v53, v52);
        LOBYTE(v129) = 0;
        v120 = src;
        sub_1027220(v113, v54, (__int64)&v54[v55]);
        v56 = dest;
        if ( v120 == src )
        {
          v75 = (void *)n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = src[0];
            else
              memcpy(dest, src, n);
            v75 = (void *)n;
            v56 = dest;
          }
          v131[0] = v75;
          *((_BYTE *)v75 + (_QWORD)v56) = 0;
          v56 = v120;
        }
        else
        {
          if ( dest == v14 + 5 )
          {
            v115 = (__int64 *)src[0];
            dest = v120;
            a3 = (__m128i)_mm_loadh_ps((const double *)&v115);
            *(__m128i *)v131 = a3;
          }
          else
          {
            v115 = (__int64 *)src[0];
            v57 = v131[1];
            dest = v120;
            a3 = (__m128i)_mm_loadh_ps((const double *)&v115);
            *(__m128i *)v131 = a3;
            if ( v56 )
            {
              v120 = v56;
              src[0] = v57;
              goto LABEL_58;
            }
          }
          v120 = src;
          v56 = src;
        }
LABEL_58:
        n = 0;
        *v56 = 0;
        if ( v120 != src )
          operator delete(v120);
        if ( !(_DWORD)v128 || !HIDWORD(v128) )
          goto LABEL_70;
        v58 = (__int64 *)v123;
        if ( v123 )
        {
          v59 = *((unsigned int *)v123 + 134);
          v60 = *((__int64 **)v123 + 66);
          v61 = v14;
          v62 = v59 + 1;
          v63 = &v60[8 * v59];
          if ( v62 <= *((unsigned int *)v123 + 135) )
            goto LABEL_64;
LABEL_142:
          if ( v60 > v14 || v63 <= v14 )
          {
            v118 = v58;
            v117 = v58 + 68;
            v115 = v58 + 66;
            v101 = sub_2237400(v58 + 66, v58 + 68, v62, 64, v113);
            sub_9EF810(v115, v101);
            v58 = (__int64 *)v118;
            v102 = (int)v120;
            v103 = *((__int64 **)v118 + 66);
            if ( v103 == v117 )
            {
              *((_QWORD *)v118 + 66) = v101;
            }
            else
            {
              v117 = (__int64 *)v120;
              v115 = (__int64 *)v118;
              free(v103);
              v58 = v115;
              v102 = (int)v117;
              v115[66] = v101;
            }
            *((_DWORD *)v58 + 135) = v102;
            v61 = v14;
            v63 = (__int64 *)(((unsigned __int64)*((unsigned int *)v58 + 134) << 6) + v101);
          }
          else
          {
            v119 = v58;
            v118 = v58 + 68;
            v117 = v58 + 66;
            v115 = (__int64 *)sub_2237400(v58 + 66, v58 + 68, v62, 64, v113);
            sub_9EF810(v117, (__int64)v115);
            v58 = v119;
            v96 = (int)v120;
            v97 = v115;
            v98 = (void *)v119[66];
            if ( v98 == v118 )
            {
              v119[66] = (__int64)v115;
            }
            else
            {
              v118 = v120;
              v117 = v115;
              v115 = v119;
              free(v98);
              v58 = v115;
              v97 = v117;
              v96 = (int)v118;
              v115[66] = (__int64)v117;
            }
            *((_DWORD *)v58 + 135) = v96;
            v61 = (char *)v97 + (char *)v14 - (char *)v60;
            v63 = &v97[8 * (unsigned __int64)*((unsigned int *)v58 + 134)];
          }
          goto LABEL_64;
        }
        v86 = v124;
        v87 = *(_DWORD *)(v124 + 14976);
        if ( v87 )
        {
          v88 = (unsigned int)(v87 - 1);
          *(_DWORD *)(v124 + 14976) = v88;
          v58 = *(__int64 **)(v86 + 8 * v88 + 14848);
          v89 = *((unsigned int *)v58 + 134);
          *(_BYTE *)v58 = 0;
          v90 = v58[66];
          *((_DWORD *)v58 + 106) = 0;
          v60 = (__int64 *)(v90 + (v89 << 6));
          if ( (__int64 *)v90 != v60 )
          {
            v115 = v14;
            v91 = v60;
            v92 = v50;
            v93 = v58;
            do
            {
              while ( 1 )
              {
                v91 -= 8;
                v94 = (__int64 *)v91[3];
                if ( v94 == v91 + 5 )
                  break;
                operator delete(v94);
                if ( (__int64 *)v90 == v91 )
                  goto LABEL_138;
              }
            }
            while ( (__int64 *)v90 != v91 );
LABEL_138:
            v58 = v93;
            v50 = v92;
            v14 = v115;
            v60 = (__int64 *)v58[66];
          }
          *((_DWORD *)v58 + 134) = 0;
          v95 = *((unsigned int *)v58 + 135);
        }
        else
        {
          v58 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v58 = 0;
          v58[12] = (__int64)(v58 + 14);
          v60 = v58 + 68;
          v58[16] = (__int64)(v58 + 18);
          v58[20] = (__int64)(v58 + 22);
          v58[24] = (__int64)(v58 + 26);
          v58[28] = (__int64)(v58 + 30);
          v58[32] = (__int64)(v58 + 34);
          v58[36] = (__int64)(v58 + 38);
          v58[40] = (__int64)(v58 + 42);
          v58[44] = (__int64)(v58 + 46);
          v58[48] = (__int64)(v58 + 50);
          v58[52] = (__int64)(v58 + 54);
          v58[13] = 0;
          *((_BYTE *)v58 + 112) = 0;
          v58[17] = 0;
          *((_BYTE *)v58 + 144) = 0;
          v58[21] = 0;
          *((_BYTE *)v58 + 176) = 0;
          v58[25] = 0;
          *((_BYTE *)v58 + 208) = 0;
          v58[29] = 0;
          *((_BYTE *)v58 + 240) = 0;
          v58[33] = 0;
          *((_BYTE *)v58 + 272) = 0;
          v58[37] = 0;
          *((_BYTE *)v58 + 304) = 0;
          v58[41] = 0;
          *((_BYTE *)v58 + 336) = 0;
          v58[45] = 0;
          *((_BYTE *)v58 + 368) = 0;
          v58[49] = 0;
          *((_BYTE *)v58 + 400) = 0;
          v58[53] = 0x800000000LL;
          v58[66] = (__int64)(v58 + 68);
          v58[67] = 0x600000000LL;
          v95 = 6;
        }
        v62 = 1;
        v123 = v58;
        v63 = v60;
        v61 = v14;
        if ( !v95 )
          goto LABEL_142;
LABEL_64:
        *v63 = *(_QWORD *)v61;
        *((_DWORD *)v63 + 2) = *((_DWORD *)v61 + 2);
        *(__int64 *)((char *)v63 + 12) = *(_QWORD *)(v61 + 12);
        *((_DWORD *)v63 + 5) = *((_DWORD *)v61 + 5);
        v64 = v63 + 5;
        v63[3] = (__int64)(v63 + 5);
        v65 = *((_BYTE **)v61 + 3);
        v66 = *((__int64 **)v61 + 4);
        if ( &v65[(_QWORD)v66] && !v65 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v66 > 0xF )
        {
          if ( (__int64)v66 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v119 = (__int64 *)v61;
          v118 = v65;
          v117 = v58;
          v115 = v66;
          v64 = (void *)operator new((unsigned __int64)v66 + 1);
          v66 = v115;
          v58 = v117;
          v65 = v118;
          v61 = v119;
          v63[3] = (__int64)v64;
          v63[5] = (__int64)v66;
LABEL_120:
          v118 = v61;
          v117 = v58;
          v115 = v66;
          memcpy(v64, v65, (size_t)v66);
          v64 = (void *)v63[3];
          v61 = v118;
          v58 = v117;
          v66 = v115;
          goto LABEL_69;
        }
        if ( v66 == (__int64 *)((char *)&dword_0 + 1) )
        {
          *((_BYTE *)v63 + 40) = *v65;
        }
        else if ( v66 )
        {
          goto LABEL_120;
        }
LABEL_69:
        v63[4] = (__int64)v66;
        *((_BYTE *)v66 + (_QWORD)v64) = 0;
        *((_BYTE *)v63 + 56) = v61[56];
        ++*((_DWORD *)v58 + 134);
LABEL_70:
        if ( dest == v14 + 5 )
        {
          v50 += 6;
          if ( v114 == (void **)v50 )
            break;
        }
        else
        {
          operator delete(dest);
          v50 += 6;
          if ( v114 == (void **)v50 )
            break;
        }
      }
    }
  }
  if ( (_BYTE)v127 )
  {
    sub_FC7790(v125[0], v116, SHIBYTE(v127));
    v125[0] = 0;
    v127 = 0;
  }
  if ( v126 != v116 + 6 )
    operator delete(v126);
  v67 = (void **)v123;
  if ( v123 )
  {
    v68 = v124;
    if ( v124 )
    {
      if ( (unsigned __int64)v123 < v124 || (unsigned __int64)v123 > v124 + 14848 )
      {
        v69 = *((void ***)v123 + 66);
        v70 = &v69[8 * (unsigned __int64)*((unsigned int *)v123 + 134)];
        if ( v69 != v70 )
        {
          do
          {
            while ( 1 )
            {
              v70 -= 8;
              v71 = (void **)v70[3];
              if ( v71 == v70 + 5 )
                break;
              operator delete(v71);
              if ( v69 == v70 )
                goto LABEL_82;
            }
          }
          while ( v69 != v70 );
LABEL_82:
          v70 = (void **)v67[66];
        }
        if ( v70 != v67 + 68 )
          free(v70);
        v72 = (void **)v67[52];
        v73 = v67 + 52;
        if ( v72 != v67 + 54 )
          free(v72);
        v74 = v67 + 12;
        do
        {
          while ( 1 )
          {
            v73 -= 4;
            if ( *v73 == v73 + 2 )
              break;
            operator delete(*v73);
            if ( v73 == v74 )
              goto LABEL_90;
          }
        }
        while ( v73 != v74 );
LABEL_90:
        operator delete(v67, 0x3A0u);
      }
      else
      {
        v85 = *(unsigned int *)(v124 + 14976);
        *(_DWORD *)(v124 + 14976) = v85 + 1;
        *(_QWORD *)(v68 + 8 * v85 + 14848) = v67;
      }
    }
  }
}

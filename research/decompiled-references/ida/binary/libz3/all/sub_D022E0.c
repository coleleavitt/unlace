__int64 __fastcall sub_D022E0(char *a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // rdx
  char v6; // r13
  __m128i si128; // xmm0
  char *v8; // rdi
  int v9; // ecx
  char *v10; // rdx
  unsigned int v11; // esi
  char *v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // r14
  void *v15; // rcx
  __int64 *v16; // rsi
  __int64 *v17; // r12
  unsigned int v18; // edx
  unsigned int v19; // ebx
  __int64 v20; // rbp
  _BYTE *v21; // rdi
  char *v22; // rcx
  char *v23; // rax
  __int64 v24; // rdx
  _BYTE *v25; // rdi
  char *v26; // rcx
  char *v27; // rax
  __int64 v28; // rdx
  void (__fastcall ***v30)(void *); // r14
  char v31; // bp
  bool v32; // zf
  __int64 v33; // rbp
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rax
  __m128 v38; // xmm0
  __int64 v39; // rax
  _OWORD *v40; // rax
  _QWORD *v41; // rdi
  __int64 v42; // rdx
  char i; // al
  __int64 v44; // rbp
  __int64 v45; // r14
  unsigned int v46; // r15d
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rdi
  int v53; // ecx
  _QWORD *v54; // rdx
  unsigned int v55; // esi
  _QWORD *v56; // rax
  unsigned int v57; // r13d
  __int64 v58; // r15
  void *v59; // rcx
  __int64 *v60; // rsi
  _BYTE *v61; // rdi
  char *v62; // rcx
  char *v63; // rax
  __int64 v64; // rdx
  char *v65; // rdi
  char *v66; // rcx
  char *k; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  int v70; // eax
  __int64 *v71; // r15
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // r13
  void (***v75)(void); // rdi
  void (__fastcall ***v76)(void *); // r13
  _QWORD *v77; // rdi
  __int64 *v78; // r15
  unsigned int v79; // edx
  unsigned int v80; // ebx
  __int64 v81; // r13
  __int64 *v82; // rcx
  __int64 v83; // rbx
  _QWORD *v84; // rdi
  __int64 v85; // rax
  __int64 *v86; // r13
  __int64 v87; // rdi
  __int64 v88; // r13
  __int64 v89; // rdi
  __int64 *v90; // r13
  __int64 v91; // rax
  int v92; // edx
  __int64 v93; // rbp
  __int64 v94; // rax
  void (__fastcall ***v95)(void *); // r14
  unsigned int v96; // esi
  __int64 v97; // rax
  int v98; // ecx
  __int64 *v99; // rax
  __int64 *v100; // r13
  __int64 v101; // rsi
  __int64 v102; // rdx
  char m; // al
  unsigned int v104; // eax
  int v105; // eax
  __int64 *v106; // rsi
  __int64 v107; // rax
  __int64 v108; // r13
  unsigned int v109; // esi
  __int64 v110; // rbx
  _QWORD *v111; // rdi
  __int64 v112; // rax
  __int64 n; // rax
  __int64 j; // rax
  unsigned int v115; // [rsp+0h] [rbp-368h]
  int v116; // [rsp+8h] [rbp-360h]
  __int64 v117; // [rsp+10h] [rbp-358h]
  char *v119; // [rsp+20h] [rbp-348h]
  __int64 v120; // [rsp+28h] [rbp-340h]
  __int64 v121; // [rsp+38h] [rbp-330h]
  int v122; // [rsp+60h] [rbp-308h]
  char v123; // [rsp+66h] [rbp-302h]
  unsigned __int8 v124; // [rsp+67h] [rbp-301h]
  char v125[8]; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 v126; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v127; // [rsp+88h] [rbp-2E0h]
  __int64 v128; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v129; // [rsp+98h] [rbp-2D0h]
  __int64 v130; // [rsp+A0h] [rbp-2C8h] BYREF
  __m128i v131; // [rsp+A8h] [rbp-2C0h]
  __int64 (__fastcall *v132)(_QWORD *, _QWORD *, int); // [rsp+B8h] [rbp-2B0h]
  __int64 (__fastcall *v133)(__int64, __int64); // [rsp+C0h] [rbp-2A8h]
  void *v134; // [rsp+D0h] [rbp-298h] BYREF
  __int64 v135; // [rsp+D8h] [rbp-290h]
  _BYTE v136[128]; // [rsp+E0h] [rbp-288h] BYREF
  void *ptr; // [rsp+160h] [rbp-208h]
  __int64 v138; // [rsp+168h] [rbp-200h]
  _BYTE v139[128]; // [rsp+170h] [rbp-1F8h] BYREF
  __int128 v140; // [rsp+1F0h] [rbp-178h]
  char *v141; // [rsp+200h] [rbp-168h] BYREF
  _OWORD v142[8]; // [rsp+208h] [rbp-160h] BYREF
  void *v143; // [rsp+290h] [rbp-D8h]
  __int64 v144; // [rsp+298h] [rbp-D0h]
  _BYTE v145[128]; // [rsp+2A0h] [rbp-C8h] BYREF
  __int128 v146; // [rsp+320h] [rbp-48h]

  v5 = *a2;
  v133 = sub_CF6E00;
  v6 = *((_BYTE *)v5 + 123);
  v141 = a1;
  v142[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&v141);
  v130 = 0;
  v132 = sub_CF71A0;
  v131 = si128;
  sub_EE4940(v125, "elim-uncnstr", v5);
  if ( *((_DWORD *)a1 + 11) || *((_DWORD *)a1 + 12) )
  {
    v8 = *((char **)a1 + 4);
    v9 = 0;
    v10 = &v8[8 * *((unsigned int *)a1 + 10)];
    v11 = *((_DWORD *)a1 + 10);
    v12 = *((char **)a1 + 4);
    if ( v8 == v10 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v12 )
      {
        *(_QWORD *)v12 = 0;
        v12 += 8;
        if ( v10 == v12 )
          goto LABEL_8;
      }
      v12 += 8;
      ++v9;
    }
    while ( v10 != v12 );
LABEL_8:
    if ( v11 <= 0x10 || 3 * v11 >= 4 * v9 )
      goto LABEL_14;
    if ( v8 )
    {
      sub_186B220(v8);
      v13 = *((_DWORD *)a1 + 10);
      *((_QWORD *)a1 + 4) = 0;
      v13 >>= 1;
      *((_DWORD *)a1 + 10) = v13;
      v14 = v13;
      v15 = (void *)sub_186B270(8LL * v13);
      if ( !v13 )
      {
LABEL_13:
        *((_QWORD *)a1 + 4) = v15;
LABEL_14:
        *(_QWORD *)(a1 + 44) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      v96 = v11 >> 1;
      *((_QWORD *)a1 + 4) = 0;
      v14 = v96;
      *((_DWORD *)a1 + 10) = v96;
      v15 = (void *)sub_186B270(8LL * v96);
    }
    v15 = memset(v15, 0, 8 * v14);
    goto LABEL_13;
  }
LABEL_15:
  v16 = *a2;
  v134 = v136;
  v135 = 0x1000000000LL;
  ptr = v139;
  v140 = 0;
  v138 = 0x1000000000LL;
  v119 = a1 + 32;
  sub_D46DC0(&v134, v16, a1 + 32);
  if ( *((_DWORD *)a1 + 11) )
  {
    sub_162A710(&v141, *((_QWORD *)a1 + 2));
    if ( !*(_BYTE *)(*((_QWORD *)&v142[0] + 1) + 80LL) )
    {
      v30 = *((void (__fastcall ****)(void *))a1 + 3);
      v31 = *((_BYTE *)*a2 + 123) & 4;
      if ( v30 )
      {
        v32 = (*((_DWORD *)v30 + 2))-- == 1;
        if ( v32 )
        {
          (**v30)(v30);
          sub_186B220(v30);
        }
      }
      *((_QWORD *)a1 + 3) = 0;
      if ( v31 )
      {
        v93 = sub_186B270(0x50u);
        v94 = *((_QWORD *)a1 + 2);
        *(_DWORD *)(v93 + 8) = 0;
        *(_QWORD *)(v93 + 16) = 0;
        *(_BYTE *)(v93 + 24) = 1;
        *(_QWORD *)v93 = &off_1C60CE8;
        *(_QWORD *)(v93 + 32) = v94;
        sub_CF7210((__int64 *)(v93 + 40), "elim_uncstr");
        v95 = *((void (__fastcall ****)(void *))a1 + 3);
        ++*(_DWORD *)(v93 + 8);
        *(_QWORD *)(v93 + 72) = 0;
        if ( v95 )
        {
          v32 = (*((_DWORD *)v95 + 2))-- == 1;
          if ( v32 )
          {
            (**v95)(v95);
            sub_186B220(v95);
          }
        }
        *((_QWORD *)a1 + 3) = v93;
      }
      v33 = sub_186B270(0x358u);
      v34 = *((_QWORD *)a1 + 3);
      v124 = v6 & 8;
      v35 = *((_QWORD *)a1 + 2);
      v116 = *((_DWORD *)a1 + 26);
      v117 = *((_QWORD *)a1 + 12);
      sub_1584DD0(v33, v35, v124 >> 3);
      *(_QWORD *)(v33 + 144) = v33 + 536;
      *(_QWORD *)v33 = &off_1C59E88;
      *(_DWORD *)(v33 + 152) = 0;
      *(_QWORD *)(v33 + 160) = 0;
      sub_1584DD0(v33 + 168, v35, 0);
      *(_QWORD *)(v33 + 312) = 0;
      *(_DWORD *)(v33 + 320) = 0;
      *(_QWORD *)(v33 + 168) = &off_1C61DB8;
      sub_1584DD0(v33 + 328, v35, 0);
      *(_QWORD *)(v33 + 488) = v35;
      *(_DWORD *)(v33 + 472) = 0;
      *(_QWORD *)(v33 + 504) = v35;
      *(_QWORD *)(v33 + 328) = &off_1C61DE0;
      *(_QWORD *)v33 = &off_1C59EA8;
      *(_QWORD *)(v33 + 480) = 0;
      *(_BYTE *)(v33 + 536) = v124 >> 3;
      *(_QWORD *)(v33 + 496) = 0;
      *(_QWORD *)(v33 + 544) = v119;
      *(_QWORD *)(v33 + 512) = 0;
      *(_QWORD *)(v33 + 520) = v35;
      *(_QWORD *)(v33 + 528) = 0;
      *(_QWORD *)(v33 + 552) = a1 + 56;
      *(_QWORD *)(v33 + 560) = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      sub_16669D0(v33 + 568, v35);
      sub_16744A0(v33 + 584, v35);
      sub_1684300(v33 + 608, v35);
      sub_15F01E0(v33 + 624, v35);
      *(_QWORD *)(v33 + 648) = v35;
      sub_180C5A0(&v141, "seq");
      v36 = (unsigned int)sub_15DA4C0(v35 + 560, &v141);
      v37 = sub_15D2690(v35, v36);
      *(__m128 *)(v33 + 656) = _mm_loadh_ps((const double *)(v37 + 88));
      LODWORD(v37) = *(_DWORD *)(v37 + 16);
      *(_QWORD *)(v33 + 728) = 0;
      v38 = _mm_loadh_ps((const double *)(v33 + 648));
      *(_DWORD *)(v33 + 672) = v37;
      *(_DWORD *)(v33 + 696) = v37;
      *(_DWORD *)(v33 + 720) = v37;
      v39 = *(_QWORD *)(v33 + 648);
      *(_QWORD *)(v33 + 744) = 0;
      *(_QWORD *)(v33 + 736) = v39;
      *(_QWORD *)(v33 + 752) = 0;
      *(_QWORD *)(v33 + 760) = 0;
      *(_QWORD *)(v33 + 768) = 0xFFFFFFFFLL;
      *(_QWORD *)(v33 + 776) = 0;
      *(_QWORD *)(v33 + 784) = v35;
      *(_QWORD *)(v33 + 792) = 0;
      *(__m128 *)(v33 + 680) = v38;
      *(__m128 *)(v33 + 704) = v38;
      v40 = (_OWORD *)sub_186B270(0x80u);
      v41 = *((_QWORD **)a1 + 10);
      *(_QWORD *)(v33 + 800) = v40;
      *v40 = 0;
      v40[1] = 0;
      v40[2] = 0;
      v40[3] = 0;
      v40[4] = 0;
      v40[5] = 0;
      v40[6] = 0;
      v40[7] = 0;
      *(_QWORD *)(v33 + 808) = 8;
      *(_QWORD *)(v33 + 840) = v117;
      *(_DWORD *)(v33 + 816) = 0;
      *(_QWORD *)(v33 + 824) = v35;
      *(_QWORD *)(v33 + 832) = 0;
      *(_DWORD *)(v33 + 848) = v116;
      if ( (_QWORD *)v33 != v41 )
      {
        if ( v41 )
          sub_CF7980(v41);
        *((_QWORD *)a1 + 10) = v33;
      }
      v120 = *((_QWORD *)a1 + 2);
      v42 = (*a2)[9];
      if ( v42 )
      {
        for ( i = *(_BYTE *)(v42 + 3) >> 6; !i; i = *(_BYTE *)(v42 + 3) >> 6 )
          v42 = *(_QWORD *)(v42 + 16);
        if ( i == 1 )
        {
          v115 = *(_DWORD *)(v42 + 4) + 1;
        }
        else if ( i == 2 )
        {
          v115 = *(_DWORD *)(v42 + 4) - 1;
        }
        else
        {
          v115 = *(_DWORD *)(v42 + 4);
        }
      }
      else
      {
        v115 = 0;
      }
      v123 = 1;
      v44 = 0;
      v45 = 0;
      v122 = 0;
      v46 = 0;
      v121 = *((_QWORD *)a1 + 2);
      while ( 1 )
      {
        if ( v46 < v115 )
          goto LABEL_130;
        if ( !v123 )
        {
LABEL_93:
          if ( v122 )
          {
            v69 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 144LL) + 256LL);
            if ( v69 )
              v70 = *(_DWORD *)(v69 - 4);
            else
              v70 = 0;
            v71 = *a2;
            v72 = *((_QWORD *)a1 + 3);
            *((_DWORD *)a1 + 22) = v70;
            v73 = sub_1336AB0(v71[1], v72);
            v74 = v73;
            if ( v73 )
              ++*(_DWORD *)(v73 + 8);
            v75 = (void (***)(void))v71[1];
            if ( v75 )
            {
              v32 = (*((_DWORD *)v75 + 2))-- == 1;
              if ( v32 )
              {
                (**v75)();
                sub_186B220(v75);
              }
            }
            v71[1] = v74;
          }
          v76 = *((void (__fastcall ****)(void *))a1 + 3);
          if ( v76 )
          {
            v32 = (*((_DWORD *)v76 + 2))-- == 1;
            if ( v32 )
            {
              (**v76)(v76);
              sub_186B220(v76);
            }
          }
          v77 = *((_QWORD **)a1 + 10);
          *((_QWORD *)a1 + 3) = 0;
          if ( v77 )
          {
            sub_CF7980(v77);
            *((_QWORD *)a1 + 10) = 0;
          }
          v78 = *a2;
          if ( *a2 )
            ++*((_DWORD *)v78 + 8);
          v79 = *(_DWORD *)(a3 + 8);
          v80 = *(_DWORD *)(a3 + 12);
          if ( v79 >= v80 )
          {
            v110 = 2 * v80;
            v81 = sub_186B270(8 * v110);
            v79 = *(_DWORD *)(a3 + 8);
            v111 = *(_QWORD **)a3;
            if ( v79 )
            {
              if ( v79 - 1 <= 2 || (_QWORD *)v81 == v111 + 1 )
              {
                for ( j = 0; j != v79; ++j )
                  *(_QWORD *)(v81 + j * 8) = v111[j];
              }
              else
              {
                v112 = 0;
                do
                {
                  *(__m128i *)(v81 + v112 * 8) = _mm_loadu_si128((const __m128i *)&v111[v112]);
                  v112 += 2;
                }
                while ( v112 != 2LL * (v79 >> 1) );
                if ( (v79 & 1) != 0 )
                  *(_QWORD *)(v81 + 8LL * (v79 & 0xFFFFFFFE)) = v111[v79 & 0xFFFFFFFE];
              }
            }
            if ( v111 != (_QWORD *)(a3 + 16) && v111 )
            {
              sub_186B220(v111);
              v79 = *(_DWORD *)(a3 + 8);
            }
            *(_QWORD *)a3 = v81;
            *(_DWORD *)(a3 + 12) = v110;
          }
          else
          {
            v81 = *(_QWORD *)a3;
          }
          *(_QWORD *)(v81 + 8LL * v79) = v78;
          v82 = *a2;
          *(_DWORD *)(a3 + 8) = v79 + 1;
          *((_DWORD *)v82 + 30) = (*((_DWORD *)v82 + 30) + 1) & 0x3FFFFFF | v82[15] & 0xFC000000;
          if ( v44 )
          {
            v32 = (*(_DWORD *)(v44 + 8))-- == 1;
            if ( v32 )
              sub_15D7BC0(v121, v44);
          }
          if ( v45 )
          {
            v32 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v32 )
              sub_15D7BC0(v120, v45);
          }
          goto LABEL_21;
        }
LABEL_55:
        ++v122;
        v47 = (*a2)[9];
        if ( v47 )
        {
          v48 = *(_BYTE *)(v47 + 3) >> 6;
          if ( v48 )
          {
            if ( v48 == 1 )
              goto LABEL_143;
          }
          else
          {
            do
            {
              v47 = *(_QWORD *)(v47 + 16);
              v48 = *(_BYTE *)(v47 + 3) >> 6;
            }
            while ( !v48 );
            if ( v48 == 1 )
            {
LABEL_143:
              v115 = *(_DWORD *)(v47 + 4) + 1;
              goto LABEL_60;
            }
          }
          if ( v48 == 2 )
            v115 = *(_DWORD *)(v47 + 4) - 1;
          else
            v115 = *(_DWORD *)(v47 + 4);
        }
        else
        {
          v115 = 0;
        }
LABEL_60:
        v49 = *((_QWORD *)a1 + 10);
        sub_1584740(v49);
        v50 = *(_QWORD *)(v49 + 160);
        if ( v50 )
          *(_DWORD *)(v50 - 4) = 0;
        v51 = *(_QWORD *)(v49 + 528);
        if ( v51 )
          *(_DWORD *)(v51 - 4) = 0;
        sub_1584740(v49 + 168);
        sub_1584740(v49 + 328);
        if ( *((_DWORD *)a1 + 11) || *((_DWORD *)a1 + 12) )
        {
          v52 = *((_QWORD **)a1 + 4);
          v53 = 0;
          v54 = &v52[*((unsigned int *)a1 + 10)];
          v55 = *((_DWORD *)a1 + 10);
          v56 = v52;
          if ( v52 != v54 )
          {
            do
            {
              while ( *v56 )
              {
                *v56++ = 0;
                if ( v54 == v56 )
                  goto LABEL_71;
              }
              ++v56;
              ++v53;
            }
            while ( v54 != v56 );
LABEL_71:
            if ( v55 > 0x10 && 3 * v55 < 4 * v53 )
            {
              if ( v52 )
              {
                sub_186B220(v52);
                v57 = *((_DWORD *)a1 + 10);
                *((_QWORD *)a1 + 4) = 0;
                v57 >>= 1;
                *((_DWORD *)a1 + 10) = v57;
                v58 = v57;
                v59 = (void *)sub_186B270(8LL * v57);
                if ( v57 )
                  goto LABEL_75;
              }
              else
              {
                v109 = v55 >> 1;
                *((_QWORD *)a1 + 4) = 0;
                v58 = v109;
                *((_DWORD *)a1 + 10) = v109;
                v59 = (void *)sub_186B270(8LL * v109);
LABEL_75:
                v59 = memset(v59, 0, 8 * v58);
              }
              *((_QWORD *)a1 + 4) = v59;
            }
          }
          *(_QWORD *)(a1 + 44) = 0;
        }
        v60 = *a2;
        v146 = 0;
        v141 = (char *)v142 + 8;
        *(_QWORD *)&v142[0] = 0x1000000000LL;
        v143 = v145;
        v144 = 0x1000000000LL;
        sub_D46DC0(&v141, v60, v119);
        if ( *((_QWORD *)&v146 + 1) )
          sub_186B220((void *)(*((_QWORD *)&v146 + 1) - 8LL));
        if ( (_QWORD)v146 )
          sub_186B220((void *)(v146 - 8));
        v61 = v143;
        v62 = (char *)v143 + 8 * (unsigned int)v144;
        v63 = (char *)v143;
        if ( v143 != v62 )
        {
          do
          {
            v64 = *(_QWORD *)v63;
            v63 += 8;
            *(_BYTE *)(v64 + 6) &= ~2u;
          }
          while ( v62 != v63 );
        }
        LODWORD(v144) = 0;
        if ( v61 != v145 && v61 )
          sub_186B220(v61);
        v65 = v141;
        v66 = &v141[8 * LODWORD(v142[0])];
        for ( k = v141; k != v66; *(_BYTE *)(v68 + 6) &= ~1u )
        {
          v68 = *(_QWORD *)k;
          k += 8;
        }
        LODWORD(v142[0]) = 0;
        if ( v65 != (char *)v142 + 8 && v65 )
          sub_186B220(v65);
        if ( !*((_DWORD *)a1 + 11) )
          goto LABEL_93;
        v46 = 0;
        if ( !v115 )
          goto LABEL_93;
        v123 = 0;
        while ( 1 )
        {
LABEL_130:
          v86 = *a2;
          v87 = **a2;
          if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
          {
            v88 = *(_QWORD *)(v87 + 864);
          }
          else
          {
            v97 = v86[9];
            v98 = 18;
            while ( --v98 )
            {
              if ( *(char *)(v97 + 3) >= 0 )
              {
                if ( *(_DWORD *)(v97 + 4) == v46 )
                {
                  v99 = (__int64 *)(v97 + 8);
                  goto LABEL_160;
                }
              }
              else if ( *(_BYTE *)(v97 + 3) >> 6 != 2 )
              {
                v99 = (__int64 *)(*(_QWORD *)(v97 + 16) + 8LL * v46);
                goto LABEL_160;
              }
              v97 = *(_QWORD *)(v97 + 16);
            }
            sub_233F80((__int64 *)(v87 + 616), (_DWORD *)v86 + 18);
            v99 = (__int64 *)(*(_QWORD *)(v86[9] + 16) + 8LL * v46);
LABEL_160:
            v88 = *v99;
          }
          v89 = *((_QWORD *)a1 + 10);
          v126 = v45;
          v127 = v120;
          v128 = v44;
          v129 = v121;
          sub_CFFC20(v89, v88, &v126, &v128);
          v45 = v126;
          v44 = v128;
          v121 = v129;
          v120 = v127;
          if ( v88 == v126 )
            break;
          if ( v124 )
          {
            v100 = *a2;
            v101 = (*a2)[11];
            if ( v101 )
            {
              v102 = (*a2)[11];
              for ( m = *(_BYTE *)(v101 + 3) >> 6; !m; m = *(_BYTE *)(v102 + 3) >> 6 )
                v102 = *(_QWORD *)(v102 + 16);
              if ( m == 1 )
              {
                v104 = *(_DWORD *)(v102 + 4) + 1;
              }
              else if ( m == 2 )
              {
                v104 = *(_DWORD *)(v102 + 4) - 1;
              }
              else
              {
                v104 = *(_DWORD *)(v102 + 4);
              }
              if ( v46 >= v104 )
              {
                v101 = 0;
              }
              else
              {
                v105 = 18;
                while ( --v105 )
                {
                  if ( *(char *)(v101 + 3) >= 0 )
                  {
                    if ( *(_DWORD *)(v101 + 4) == v46 )
                    {
                      v106 = (__int64 *)(v101 + 8);
                      goto LABEL_175;
                    }
                  }
                  else if ( *(_BYTE *)(v101 + 3) >> 6 != 2 )
                  {
                    v106 = (__int64 *)(*(_QWORD *)(v101 + 16) + 8LL * v46);
                    goto LABEL_175;
                  }
                  v101 = *(_QWORD *)(v101 + 16);
                }
                sub_233F80((__int64 *)(*v100 + 616), (_DWORD *)v100 + 22);
                v106 = (__int64 *)(*(_QWORD *)(v100[11] + 16) + 8LL * v46);
LABEL_175:
                v101 = *v106;
              }
            }
            v107 = sub_15DE0E0(*((_QWORD *)a1 + 2), v101, v44);
            v108 = v107;
            if ( v107 )
              ++*(_DWORD *)(v107 + 8);
            if ( v44 )
            {
              v32 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v32 )
                sub_15D7BC0(v121, v44);
            }
            v44 = v108;
          }
          v90 = *a2;
          if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
          {
            v91 = v90[13];
            v92 = 18;
            while ( --v92 )
            {
              if ( *(char *)(v91 + 3) >= 0 )
              {
                if ( *(_DWORD *)(v91 + 4) == v46 )
                  goto LABEL_139;
              }
              else if ( *(_BYTE *)(v91 + 3) >> 6 != 2 )
              {
                goto LABEL_139;
              }
              v91 = *(_QWORD *)(v91 + 16);
            }
            sub_236900((_QWORD *)(*v90 + 672), v90 + 13);
          }
LABEL_139:
          sub_EDBFA0((int)v90);
          ++v46;
          v123 = 1;
          if ( v46 >= v115 )
            goto LABEL_55;
        }
        ++v46;
      }
    }
  }
  v17 = *a2;
  if ( v17 )
    ++*((_DWORD *)v17 + 8);
  v18 = *(_DWORD *)(a3 + 8);
  v19 = *(_DWORD *)(a3 + 12);
  if ( v18 >= v19 )
  {
    v83 = 2 * v19;
    v20 = sub_186B270(8 * v83);
    v18 = *(_DWORD *)(a3 + 8);
    v84 = *(_QWORD **)a3;
    if ( v18 )
    {
      if ( v18 - 1 <= 2 || (_QWORD *)v20 == v84 + 1 )
      {
        for ( n = 0; n != v18; ++n )
          *(_QWORD *)(v20 + n * 8) = v84[n];
      }
      else
      {
        v85 = 0;
        do
        {
          *(__m128i *)(v20 + v85 * 8) = _mm_loadu_si128((const __m128i *)&v84[v85]);
          v85 += 2;
        }
        while ( 2LL * (v18 >> 1) != v85 );
        if ( (v18 & 1) != 0 )
          *(_QWORD *)(v20 + 8LL * (v18 & 0xFFFFFFFE)) = v84[v18 & 0xFFFFFFFE];
      }
    }
    if ( v84 != (_QWORD *)(a3 + 16) && v84 )
    {
      sub_186B220(v84);
      v18 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v20;
    *(_DWORD *)(a3 + 12) = v83;
  }
  else
  {
    v20 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v20 + 8LL * v18) = v17;
  *(_DWORD *)(a3 + 8) = v18 + 1;
LABEL_21:
  if ( *((_QWORD *)&v140 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v140 + 1) - 8LL));
  if ( (_QWORD)v140 )
    sub_186B220((void *)(v140 - 8));
  v21 = ptr;
  v22 = (char *)ptr + 8 * (unsigned int)v138;
  v23 = (char *)ptr;
  if ( ptr != v22 )
  {
    do
    {
      v24 = *(_QWORD *)v23;
      v23 += 8;
      *(_BYTE *)(v24 + 6) &= ~2u;
    }
    while ( v23 != v22 );
  }
  LODWORD(v138) = 0;
  if ( v21 != v139 && v21 )
    sub_186B220(v21);
  v25 = v134;
  v26 = (char *)v134 + 8 * (unsigned int)v135;
  v27 = (char *)v134;
  if ( v134 != v26 )
  {
    do
    {
      v28 = *(_QWORD *)v27;
      v27 += 8;
      *(_BYTE *)(v28 + 6) &= ~1u;
    }
    while ( v27 != v26 );
  }
  LODWORD(v135) = 0;
  if ( v25 != v136 && v25 )
    sub_186B220(v25);
  sub_EE4A00(v125);
  return sub_EE4B70(&v130);
}


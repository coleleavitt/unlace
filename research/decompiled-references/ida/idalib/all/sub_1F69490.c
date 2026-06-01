void __fastcall sub_1F69490(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  _QWORD *v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdx
  __int64 v29; // rdx
  size_t v30; // rdx
  int v31; // r15d
  bool v32; // zf
  __int64 *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // r9
  _QWORD *v49; // r13
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  size_t v53; // rbp
  const void *v54; // r14
  char *v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // rax
  char v63; // dl
  char v64; // cl
  char v65; // dl
  _BYTE *v66; // rdi
  __int64 v67; // rbx
  unsigned __int64 v68; // r8
  __int64 v69; // rdi
  int v70; // r11d
  __int64 v71; // r9
  unsigned __int64 v72; // r13
  _QWORD *v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rcx
  unsigned __int64 v76; // r10
  unsigned __int64 v77; // rsi
  bool v78; // al
  __int64 v79; // rdi
  __int64 v80; // r8
  __int64 v81; // rdi
  __int64 v82; // r8
  unsigned int *v83; // rbx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  unsigned __int64 v87; // r10
  unsigned __int64 v88; // rax
  unsigned int v89; // edx
  int v90; // ecx
  int v91; // eax
  _BYTE *v92; // rdi
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rbx
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // r10
  unsigned __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rax
  unsigned __int64 v106; // r10
  unsigned __int64 v107; // rbp
  unsigned int v108; // eax
  char v109; // dl
  __int64 v110; // rdx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // r9
  int v116; // r11d
  __int64 v117; // r13
  unsigned __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rax
  int v121; // [rsp+4h] [rbp-194h]
  __int64 v122; // [rsp+8h] [rbp-190h]
  __int64 v124; // [rsp+28h] [rbp-170h]
  unsigned __int64 v125; // [rsp+28h] [rbp-170h]
  int v126; // [rsp+28h] [rbp-170h]
  int v127; // [rsp+28h] [rbp-170h]
  int v128; // [rsp+28h] [rbp-170h]
  int v129; // [rsp+28h] [rbp-170h]
  int v130; // [rsp+28h] [rbp-170h]
  _QWORD *v131; // [rsp+30h] [rbp-168h]
  unsigned __int64 v132; // [rsp+30h] [rbp-168h]
  __int64 v133; // [rsp+30h] [rbp-168h]
  unsigned __int64 v134; // [rsp+30h] [rbp-168h]
  __int64 v135; // [rsp+30h] [rbp-168h]
  __int64 v136; // [rsp+30h] [rbp-168h]
  unsigned __int64 v137; // [rsp+38h] [rbp-160h]
  __int64 v138; // [rsp+38h] [rbp-160h]
  void *src; // [rsp+40h] [rbp-158h] BYREF
  __int64 v140; // [rsp+48h] [rbp-150h]
  _BYTE v141[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v142; // [rsp+70h] [rbp-128h] BYREF
  __int64 v143; // [rsp+78h] [rbp-120h]
  _BYTE v144[32]; // [rsp+80h] [rbp-118h] BYREF
  size_t n[2]; // [rsp+A0h] [rbp-F8h] BYREF
  void *v146; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v147[104]; // [rsp+C0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+128h] [rbp-70h]
  _BYTE v149[96]; // [rsp+138h] [rbp-60h] BYREF

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = *(_DWORD *)(*a1 + 24);
  v7 = *(_QWORD *)(v5 + 8 * v4);
  *(_DWORD *)(v3 + 24) = v4 + 2;
  v8 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v6 + 1));
  v9 = v7;
  v121 = v8;
  *(_DWORD *)(a2 + 4) = sub_1EE7490(v3);
  v10 = *a1;
  v11 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11) & 1)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v12 = *(_QWORD **)(*a1 + 8);
  v13 = sub_1EE13A0((__int64)v12, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  src = v141;
  *(_QWORD *)(a2 + 24) = sub_1EDB980(v12, v13, v14, v15, v16, v17);
  v18 = 0;
  v140 = 0x400000000LL;
  if ( (_DWORD)v7 )
  {
    do
    {
      v19 = *(_QWORD **)(*a1 + 8);
      v20 = sub_1EE13A0((__int64)v19, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
      v25 = sub_1EDB980(v19, v20, v21, v22, v23, v24);
      v26 = (unsigned int)v140;
      v27 = (unsigned int)v140 + 1LL;
      if ( v27 > HIDWORD(v140) )
      {
        v122 = v25;
        sub_2237220(&src, v141, v27, 8);
        v26 = (unsigned int)v140;
        v28 = src;
        v25 = v122;
      }
      else
      {
        v28 = src;
      }
      v28[v26] = v25;
      ++v18;
      v29 = (unsigned int)(v140 + 1);
      LODWORD(v140) = v140 + 1;
    }
    while ( v9 != v18 );
    v30 = 8 * v29;
    if ( v30 )
      memmove((void *)(a2 + 48), src, v30);
  }
  v31 = 0;
  v142 = v144;
  v143 = 0x400000000LL;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v42 = *a1;
      v43 = *(unsigned int *)(*a1 + 24);
      v44 = *(_QWORD *)(*a1 + 32);
      v45 = *(_QWORD *)(v44 + 8 * v43);
      v46 = (unsigned int)(v43 + 1);
      v47 = *(_DWORD *)(*a1 + 24);
      *(_DWORD *)(*a1 + 24) = v46;
      if ( (int)v45 <= 2 )
      {
        if ( (int)v45 > 0 )
        {
          v67 = *(_QWORD *)(v44 + 8 * v46);
          *(_DWORD *)(v42 + 24) = v47 + 2;
          if ( (_DWORD)v67 == 1 )
            v68 = sub_1F62EC0(v42) & 0xFFFFFFFFFFFFFFFDLL;
          else
            v68 = sub_1F68F80(*(_QWORD *)(v42 + 8), *(_QWORD *)(v42 + 16)) | 2;
          v69 = *a1;
          *(_OWORD *)n = 0;
          if ( (_DWORD)v45 == 1 )
          {
            LOBYTE(n[1]) = 1;
            v70 = 0;
            v71 = 0;
            n[0] = 0;
          }
          else
          {
            v125 = v68;
            v93 = sub_1EE7490(v69);
            v69 = *a1;
            v68 = v125;
            v70 = v93;
            v94 = *(unsigned int *)(*a1 + 24);
            *(_DWORD *)(v69 + 24) = v94 + 1;
            v95 = *(_QWORD *)(*(_QWORD *)(v69 + 32) + 8 * v94);
            if ( v95 == 1 )
            {
              v134 = v125;
              v128 = v70;
              v114 = sub_1EE7800(v69);
              v115 = 0;
              v116 = v128;
              v117 = v114;
              v118 = v134;
              if ( (int)v67 > 3 )
              {
                v119 = sub_1F68F80(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
                v118 = v134;
                v116 = v128;
                v115 = v119;
              }
              if ( LOBYTE(n[1]) )
                LOBYTE(n[1]) = 0;
              v137 = v118;
              v135 = v115;
              v129 = v116;
              sub_A55640(n, v117);
              v69 = *a1;
              v70 = v129;
              LOBYTE(n[1]) = 1;
              v71 = v135;
              v68 = v137;
            }
            else if ( v95 )
            {
              if ( v95 == 2 )
              {
                v132 = v125;
                v126 = v70;
                v112 = sub_1F62EC0(v69);
                LOBYTE(n[1]) = 1;
                v69 = *a1;
                v71 = 0;
                v68 = v132;
                v70 = v126;
                n[0] = v112 & 0xFFFFFFFFFFFFFFF9LL | 4;
              }
              else
              {
                v71 = 0;
              }
            }
            else
            {
              n[0] = 0;
              v71 = 0;
              LOBYTE(n[1]) = 1;
            }
          }
          v72 = v68 & 0xFFFFFFFFFFFFFFFCLL;
          v73 = *(_QWORD **)(*(_QWORD *)(v69 + 8) + 144LL);
          v74 = v73[294];
          v75 = v73[304] + 48LL;
          v76 = (v74 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v77 = v76 + 48;
          v38 = v76;
          v78 = v74 != 0 && v73[295] >= v76 + 48;
          v79 = (__int64)(v73 + 294);
          if ( v68 && (v68 & 2) != 0 && v72 )
          {
            v80 = n[0];
            v73[304] = v75;
            if ( v78 )
            {
              v73[294] = v77;
              v81 = v76;
            }
            else
            {
              v138 = v80;
              v136 = v71;
              v130 = v70;
              v120 = sub_986170(v79, 48, 48, 3, v80, v71);
              v80 = v138;
              v71 = v136;
              v81 = v120;
              v38 = v120;
              v70 = v130;
            }
            sub_A554E0(v81, v72, (_DWORD)v45 == 1, v70, v80, v67, v71);
          }
          else
          {
            v82 = n[0];
            v73[304] = v75;
            if ( v78 )
            {
              v73[294] = v77;
            }
            else
            {
              v133 = v82;
              v127 = v70;
              v113 = sub_986170(v79, 48, 48, 3, v82, v71);
              v82 = v133;
              v70 = v127;
              v38 = v113;
            }
            sub_A555B0(v38, v72, (_DWORD)v45 == 1, v70, v82);
          }
          goto LABEL_16;
        }
        if ( !(_DWORD)v45 )
        {
          v32 = *(_DWORD *)(v44 + 8 * v46) == 1;
          *(_DWORD *)(v42 + 24) = v47 + 2;
          if ( v32 )
          {
            v96 = sub_1F62EC0(v42);
            v99 = *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL);
            v100 = v99[294];
            v99[304] += 24LL;
            v101 = (v100 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v38 = v101;
            if ( v99[295] >= v101 + 24 && v100 )
            {
              v99[294] = v101 + 24;
              v102 = (v100 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v102 = sub_986170((__int64)(v99 + 294), 24, 24, 3, v97, v98);
              v38 = v102;
            }
            *(_DWORD *)v102 = 0;
            *(_BYTE *)(v102 + 4) &= 0xF8u;
            *(_QWORD *)(v102 + 8) = v96 & 0xFFFFFFFFFFFFFFFBLL;
            *(_DWORD *)(v102 + 16) = 1;
          }
          else
          {
            v33 = sub_1F19370(v42);
            v36 = *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL);
            v37 = v36[294];
            v36[304] += 24LL;
            v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v36[295] >= v38 + 24 && v37 )
            {
              v36[294] = v38 + 24;
              v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v39 = sub_986170((__int64)(v36 + 294), 24, 24, 3, v34, v35);
              v38 = v39;
            }
            sub_A556A0(v39, (unsigned __int64)v33);
          }
          goto LABEL_16;
        }
      }
      else if ( (_DWORD)v45 == 3 )
      {
        v48 = *(_QWORD *)(v42 + 8);
        v32 = *(_QWORD *)(v44 + 8 * v46) == 0;
        v49 = *(_QWORD **)(v48 + 144);
        *(_DWORD *)(v42 + 24) = v47 + 2;
        v124 = (__int64)(v49 + 294);
        if ( v32 )
        {
          v83 = (unsigned int *)sub_1F68F80(v48, *(_QWORD *)(v42 + 16));
          if ( (*v83 & 0x8000) == 0 )
          {
            sub_1F68FC0((__int64)n, *a1);
            v105 = v49[294];
            v49[304] += 48LL;
            v106 = (v105 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v38 = v106;
            if ( v49[295] >= v106 + 48 && v105 )
            {
              v49[294] = v106 + 48;
              v107 = (v105 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v107 = sub_986170((__int64)(v49 + 294), 48, 48, 3, v103, v104);
              v38 = v107;
            }
            v108 = *v83;
            v109 = v147[96];
            *(_QWORD *)(v107 + 8) = v83;
            *(_DWORD *)v107 = 3;
            v110 = 4 * (v109 & 1u);
            *(_BYTE *)(v107 + 4) = v110
                                 | (2 * ((v108 & 0x4000) != 0)) & 0xFB
                                 | ((v108 & 0x8000u) != 0)
                                 | *(_BYTE *)(v107 + 4) & 0xF8;
            v111 = sub_A55A00(v49, (__int64)n, v110, 2 * ((v108 >> 14) & 1), v103, v104);
            *(_QWORD *)(v107 + 32) = 0;
            *(_QWORD *)(v107 + 16) = v111;
            v66 = ptr;
            *(_BYTE *)(v107 + 24) = 0;
            *(_QWORD *)(v107 + 40) = 0;
            if ( v66 != v149 )
              goto LABEL_34;
            goto LABEL_35;
          }
          v86 = v49[294];
          v49[304] += 48LL;
          v87 = (v86 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v38 = v87;
          if ( v49[295] >= v87 + 48 && v86 )
          {
            v49[294] = v87 + 48;
            v88 = (v86 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v88 = sub_986170(v124, 48, 48, 3, v84, v85);
            v38 = v88;
          }
          v89 = *v83;
          *(_DWORD *)v88 = 3;
          *(_QWORD *)(v88 + 8) = v83;
          *(_QWORD *)(v88 + 16) = 0;
          *(_BYTE *)(v88 + 24) = 0;
          v90 = 2 * ((v89 >> 14) & 1);
          LOBYTE(v89) = *(_BYTE *)(v88 + 4);
          *(_QWORD *)(v88 + 32) = 0;
          *(_QWORD *)(v88 + 40) = 0;
          *(_BYTE *)(v88 + 4) = v90 | v89 & 0xF8 | 5;
        }
        else
        {
          sub_1EAC540((__m128i **)n, (__int64 *)(v42 + 32), (_DWORD *)(v42 + 24));
          v52 = v49[294];
          v53 = n[1];
          v54 = (const void *)n[0];
          v49[304] += n[1];
          v55 = (char *)((v52 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v49[295] >= (unsigned __int64)&v55[v53] && v52 )
            v49[294] = &v55[v53];
          else
            v55 = (char *)sub_986170((__int64)(v49 + 294), v53, v53, 3, v50, v51);
          if ( v53 )
            memmove(v55, v54, v53);
          if ( (void **)n[0] != &v146 )
            operator delete((void *)n[0]);
          v131 = *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL);
          sub_1F68FC0((__int64)n, *a1);
          v59 = v49[294];
          v49[304] += 48LL;
          v38 = (v59 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v60 = v38 + 48;
          if ( v49[295] >= v38 + 48 && v59 )
          {
            v49[294] = v60;
            v61 = (v59 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v61 = sub_986170(v124, 48, 48, 3, v57, v58);
            v38 = v61;
          }
          v62 = sub_A55A00(v131, (__int64)n, v60, v56, v57, v58);
          v63 = *(_BYTE *)(v62 + 8);
          *(_QWORD *)(v61 + 16) = v62;
          *(_QWORD *)(v61 + 8) = 0;
          *(_QWORD *)(v61 + 32) = v55;
          v64 = 4 * (v63 & 1);
          v65 = *(_BYTE *)(v61 + 4);
          *(_QWORD *)(v61 + 40) = v53;
          v66 = ptr;
          *(_DWORD *)v61 = 3;
          *(_BYTE *)(v61 + 24) = 1;
          *(_BYTE *)(v61 + 4) = v64 | v65 & 0xF8;
          if ( v66 != v149 )
LABEL_34:
            free(v66);
LABEL_35:
          if ( v146 != v147 )
            free(v146);
        }
LABEL_16:
        v40 = (unsigned int)v143;
        v41 = (unsigned int)v143 + 1LL;
        if ( v41 > HIDWORD(v143) )
        {
          sub_2237220(&v142, v144, v41, 8);
          v40 = (unsigned int)v143;
        }
        *((_QWORD *)v142 + v40) = v38;
        LODWORD(v143) = v143 + 1;
      }
      if ( v121 == ++v31 )
      {
        if ( 8LL * (unsigned int)v143 )
          memmove((void *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 48), v142, 8LL * (unsigned int)v143);
        break;
      }
    }
  }
  *(_DWORD *)(a2 + 32) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 36) = sub_1EE7490(*a1);
  v91 = sub_1EE7490(*a1);
  v92 = v142;
  *(_DWORD *)(a2 + 40) = v91;
  if ( v92 != v144 )
    free(v92);
  if ( src != v141 )
    free(src);
}

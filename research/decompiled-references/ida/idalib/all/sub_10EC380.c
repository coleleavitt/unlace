void __fastcall sub_10EC380(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // r13
  const char **v9; // rax
  char *v10; // r14
  size_t v11; // rax
  signed __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r13
  const char **v15; // rax
  char *v16; // r14
  size_t v17; // rax
  signed __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  bool v22; // r13
  __int64 v23; // rax
  unsigned int *v24; // rbx
  int v25; // edx
  unsigned int *v26; // rax
  char v27; // bp
  void **p_ptr; // r14
  __int64 v29; // rax
  char v30; // dl
  __int64 v31; // rax
  int v32; // r8d
  void **v33; // rdi
  unsigned int v34; // r15d
  __int64 v35; // r13
  unsigned int v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int8 *v40; // r9
  __int64 v41; // r9
  unsigned __int8 *v42; // r13
  __int64 v43; // r8
  int *v44; // rbx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int8 *v48; // r13
  _BOOL8 v49; // rcx
  unsigned __int8 *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _DWORD *v54; // rax
  char *v55; // r13
  size_t v56; // rcx
  size_t v57; // rax
  size_t v58; // rdx
  void *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  size_t v78; // rax
  unsigned __int8 *v79; // rax
  size_t v80; // rdx
  size_t v81; // rax
  __int64 v82; // rax
  const char *v83; // rbp
  size_t v84; // rax
  __int64 v85; // rdi
  size_t v86; // r14
  const char *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  const char *v92; // rbp
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  _DWORD *v101; // rax
  __int64 v102; // rax
  const char *v103; // rdi
  size_t v104; // rdx
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rax
  unsigned __int8 *v110; // r15
  unsigned int *v111; // r13
  __int64 v112; // rbx
  _BOOL8 v113; // r14
  void *v114; // rdi
  __int64 v115; // rax
  const char *v116; // rdi
  const char *v117; // rbp
  size_t v118; // rax
  size_t v119; // rdx
  int v120; // [rsp+8h] [rbp-140h]
  __int64 v121; // [rsp+8h] [rbp-140h]
  unsigned int v122; // [rsp+10h] [rbp-138h]
  unsigned __int8 *v123; // [rsp+10h] [rbp-138h]
  __int64 v124; // [rsp+10h] [rbp-138h]
  __int64 v125; // [rsp+10h] [rbp-138h]
  unsigned int v126; // [rsp+10h] [rbp-138h]
  size_t v127; // [rsp+10h] [rbp-138h]
  size_t v128; // [rsp+10h] [rbp-138h]
  _BOOL8 v129; // [rsp+10h] [rbp-138h]
  unsigned int *v130; // [rsp+18h] [rbp-130h]
  bool v131; // [rsp+27h] [rbp-121h]
  unsigned int *v135; // [rsp+50h] [rbp-F8h]
  void **v136; // [rsp+58h] [rbp-F0h]
  _QWORD *v137; // [rsp+68h] [rbp-E0h] BYREF
  void *v138; // [rsp+70h] [rbp-D8h] BYREF
  signed __int64 v139; // [rsp+78h] [rbp-D0h]
  _BYTE v140[16]; // [rsp+80h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h] BYREF
  int v142; // [rsp+98h] [rbp-B0h]
  unsigned __int8 *v143; // [rsp+C0h] [rbp-88h] BYREF
  size_t v144; // [rsp+C8h] [rbp-80h]
  char *v145; // [rsp+D0h] [rbp-78h] BYREF
  __int16 v146; // [rsp+E0h] [rbp-68h]

  v7 = sub_10DCD30(a3, 0x62Cu);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(const char ***)(v7 + 48);
    v10 = (char *)*v9;
    if ( *v9 )
    {
      v11 = j__strlen(*v9);
      v12 = v11;
      if ( *((_DWORD *)a4 + 2) > 1u && v11 && !(unsigned __int8)sub_228ACA0((unsigned int)v10[v11 - 1], 0) )
      {
        sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 456);
        sub_AEC220(&v143, *(_BYTE **)(v8 + 24), *(_QWORD *)(v8 + 32));
        sub_AEC220(&v143, v10, v12);
        sub_AEA040((__int64)&v143);
        sub_21B7DF0(a3, 1580);
      }
    }
  }
  v13 = sub_10DCD30(a3, 0x1C8u);
  v14 = v13;
  if ( v13 )
  {
    v15 = *(const char ***)(v13 + 48);
    v16 = (char *)*v15;
    if ( *v15 )
    {
      v17 = j__strlen(*v15);
      v18 = v17;
      if ( *((_DWORD *)a4 + 2) > 1u && v17 && !(unsigned __int8)sub_228ACA0((unsigned int)v16[v17 - 1], 0) )
      {
        sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 456);
        sub_AEC220(&v143, *(_BYTE **)(v14 + 24), *(_QWORD *)(v14 + 32));
        sub_AEC220(&v143, v16, v18);
        sub_AEA040((__int64)&v143);
        sub_21B7DF0(a3, 456);
      }
    }
  }
  v19 = sub_10DCD30(a3, 0xC2Du);
  if ( v19 && !***(_BYTE ***)(v19 + 48) )
  {
    v121 = v19;
    sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 418);
    sub_AEC220(&v143, *(_BYTE **)(v121 + 24), *(_QWORD *)(v121 + 32));
    sub_AE9DF0(&v143, 1, 2u);
    sub_AEA040((__int64)&v143);
    sub_21B7DF0(a3, 3117);
  }
  v20 = sub_10DCD30(a3, 0xDB8u);
  v21 = sub_10DCD30(a3, 0xDBBu);
  v22 = v20 != 0;
  if ( v20 != 0 && v21 != 0 )
  {
    if ( strcmp(**(const char ***)(v20 + 48), **(const char ***)(v21 + 48)) )
    {
      v22 = 0;
      sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 614);
      sub_AEA040((__int64)&v143);
      sub_21B7DF0(a3, 3512);
      sub_21B7DF0(a3, 3515);
      goto LABEL_19;
    }
  }
  else if ( !v20 )
  {
LABEL_18:
    v22 = 0;
    goto LABEL_19;
  }
  if ( *((_DWORD *)a4 + 2) > 1u )
  {
    sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 613);
    sub_AEA040((__int64)&v143);
    sub_21B7DF0(a3, 3512);
    goto LABEL_18;
  }
LABEL_19:
  v120 = sub_10DE7D0(a1, a3, (__int64 *)&v137);
  if ( v120 == 5 )
  {
    if ( sub_10DF140(a3, 0x848u) )
    {
      v64 = sub_1105E80(a3, 2120, v60, v61, v62, v63);
      v65 = sub_21BB380(v64, 2112);
      v67 = sub_21B9090(a3, 0, v65, v66);
      sub_21B80F0(a3, v67);
      v72 = sub_1105E80(a3, v67, v68, v69, v70, v71);
      v73 = sub_21BB380(v72, 1706);
      v75 = sub_21B9090(a3, 0, v73, v74);
      sub_21B80F0(a3, v75);
    }
    if ( sub_10DCD30(a3, 0x159u) && !sub_10DCD30(a3, 0x840u) )
    {
      sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 352);
      sub_AEA040((__int64)&v143);
    }
    v76 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)(v76 + 60) == 15 )
    {
      v77 = *(_DWORD *)(v76 + 64);
      if ( v77 == 27 || !v77 )
      {
        if ( *(_DWORD *)(a1 + 40) )
        {
          v78 = j__strlen(&byte_22F0C30);
          v79 = (unsigned __int8 *)sub_21B7BC0(a3, 1916, &byte_22F0C30, v78);
          v144 = v80;
          v143 = v79;
          v81 = j__strlen("lld");
          if ( !(unsigned __int8)sub_2246340(&v143, "lld", v81) )
          {
            sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 410);
            sub_AEA040((__int64)&v143);
          }
        }
      }
    }
    if ( !sub_10DCD30(a3, 0x132u) )
    {
      v82 = sub_10DE660(a3, 0xC2Cu, 0xC2Du);
      if ( v82 )
      {
        v83 = **(const char ***)(v82 + 48);
        v84 = 0;
        if ( v83 )
          v84 = j__strlen(v83);
      }
      else
      {
        v117 = sub_10DB460(a1);
        v118 = 0;
        if ( v117 )
          v118 = j__strlen(v117);
        v83 = (const char *)sub_228AAA0(v117, v118, 0);
        v84 = v119;
      }
      v144 = v84;
      v85 = a3;
      v143 = (unsigned __int8 *)v83;
      v86 = 0;
      v146 = 773;
      v145 = "-";
      v87 = (const char *)sub_10DA6C0(a3, (__int64)&v143);
      v92 = v87;
      if ( v87 )
      {
        v85 = (__int64)v87;
        v86 = j__strlen(v87);
      }
      v93 = sub_1105E80(v85, &v143, v88, v89, v90, v91);
      v94 = sub_21BB380(v93, 306);
      v96 = sub_21B9430(a3, 0, v94, v95, v92, v86);
      v97 = *(_QWORD *)(v96 + 16);
      if ( !v97 )
        v97 = v96;
      *(_BYTE *)(v97 + 44) |= 1u;
      sub_21B80F0(a3, v96);
    }
LABEL_88:
    if ( !sub_10DCD30(a3, 0xDB7u) )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( v120 )
    goto LABEL_88;
LABEL_21:
  v22 = 0;
  sub_21B7DF0(a3, 1672);
  sub_21B7DF0(a3, 3512);
  sub_21B7DF0(a3, 3515);
LABEL_22:
  if ( sub_10DCD30(a3, 0x862u) && sub_10DCD30(a3, 0x856u) )
    sub_21B7DF0(a3, 2146);
  v23 = *((unsigned int *)a4 + 2);
  v24 = *a4;
  v25 = v23;
  v26 = &v24[4 * v23];
  v130 = v26;
  if ( v120 == 5 )
  {
    v27 = v25 != 0;
    if ( v24 != v26 )
      goto LABEL_27;
LABEL_53:
    if ( v27 )
    {
      sub_21B7CF0(a3, 2);
      sub_21B7CF0(a3, 21);
    }
  }
  else
  {
    v27 = 0;
    if ( v24 != v26 )
    {
LABEL_27:
      p_ptr = &ptr;
      v131 = v22 && v120 > 1;
      while ( 1 )
      {
        v34 = *v24;
        v35 = *((_QWORD *)v24 + 1);
        sub_12CD4A0(p_ptr, *v24, 6);
        v33 = (void **)ptr;
        v27 &= *(_DWORD *)ptr == 5;
        if ( v27 )
          v27 = v142 == 1;
        v122 = *(_DWORD *)ptr;
        if ( *(_DWORD *)ptr > v120 )
          break;
        if ( !v131 )
          goto LABEL_33;
        v36 = sub_12CD680(v34);
        v123 = (unsigned __int8 *)operator new(0x80u);
        sub_10D1FF0((__int64)v123, v35, v36, nullptr, 0);
        v143 = v123;
        sub_10EAF50(a2 + 88, (__int64 *)&v143);
        v40 = v123;
        if ( v143 )
        {
          (*(void (__fastcall **)(unsigned __int8 *, unsigned __int8 **, __int64, __int64, __int64, unsigned __int8 *))(*(_QWORD *)v143 + 8LL))(
            v143,
            &v143,
            v37,
            v38,
            v39,
            v123);
          v40 = v123;
        }
        v124 = (__int64)v40;
        sub_12CD4A0(&v143, v36, 6);
        v41 = v124;
        v42 = &v143[4 * (unsigned int)v144];
        if ( v143 != v42 )
        {
          v43 = v124;
          v135 = v24;
          v44 = (int *)v143;
          do
          {
            v45 = *v44++;
            v46 = sub_10EBE20(a1, a2, a3, v45, v43);
            v43 = v46;
          }
          while ( v42 != (unsigned __int8 *)v44 );
          v24 = v135;
          v41 = v46;
          v42 = v143;
        }
        if ( v42 != (unsigned __int8 *)&v145 )
        {
          v125 = v41;
          free(v42);
          v41 = v125;
        }
        sub_10DC4B0(a5, v41);
LABEL_32:
        v33 = (void **)ptr;
LABEL_33:
        if ( v33 != p_ptr + 2 )
          free(v33);
        v24 += 4;
        if ( v130 == v24 )
          goto LABEL_53;
      }
      v29 = *(_QWORD *)(v35 + 16);
      if ( !v29 )
        v29 = v35;
      v30 = *(_BYTE *)(v29 + 44);
      if ( (v30 & 1) != 0 )
        goto LABEL_33;
      *(_BYTE *)(v29 + 44) = v30 | 1;
      v31 = sub_10DCD30(a3, 0xC7Du);
      v32 = v122;
      if ( v31 )
        goto LABEL_32;
      if ( *(_DWORD *)(a1 + 16) == 2 )
      {
        sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 560);
        sub_21B5FF0(&v138, v35, a3);
        sub_AEC220(&v143, v138, v139);
        v102 = sub_111EFE0(v122);
        sub_10D8830(&v143, v102);
        v59 = v138;
        if ( v138 == v140 )
          goto LABEL_67;
        goto LABEL_66;
      }
      if ( v122 == 2 )
      {
        if ( sub_10DE660(a3, 0x16Du, 0xC6Du)
          || sub_10DCD30(a3, 0x185u)
          || (v115 = sub_10DE660(a3, 0xBAEu, 0x9C8u), v32 = 2, v115) )
        {
          v98 = sub_12CC8E0(v34);
          v32 = 2;
          if ( !v98 )
          {
            sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 592);
            sub_21B5FF0(&v138, v35, a3);
            sub_AEC220(&v143, v138, v139);
            sub_AE9DF0(&v143, v137 != nullptr, 2u);
            if ( v137 )
            {
              v99 = v137[1];
              v100 = **(_QWORD **)(v99 + 8);
              v101 = (_DWORD *)(*(_QWORD *)(v99 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*v137 + 40LL) - 1));
              v55 = (char *)(v100 + (unsigned int)v101[1]);
              if ( *v101 )
              {
                v116 = (const char *)(v100 + *(unsigned int *)(*(_QWORD *)(v99 + 16) + 4LL * (unsigned int)(*v101 + 1)));
                if ( v116 )
                {
                  v56 = (unsigned int)j__strlen(v116);
                  v57 = 0;
                  if ( !v55 )
                  {
LABEL_98:
                    if ( v56 <= v57 )
                      goto LABEL_99;
                    goto LABEL_64;
                  }
                }
                else
                {
                  v56 = 0;
                  if ( !v55 )
                  {
                    v57 = 0;
                    v56 = 0;
                    goto LABEL_99;
                  }
                }
LABEL_97:
                v128 = v56;
                v57 = j__strlen(v55);
                v56 = v128;
                goto LABEL_98;
              }
              v56 = 0;
              if ( v55 )
                goto LABEL_97;
LABEL_90:
              v58 = 0;
              goto LABEL_65;
            }
LABEL_100:
            v55 = (char *)&byte_22F0C30;
            v58 = j__strlen(&byte_22F0C30);
LABEL_65:
            sub_AEC220(&v143, v55, v58);
            v59 = v138;
            if ( v138 == v140 )
            {
LABEL_67:
              sub_AEA040((__int64)&v143);
              goto LABEL_32;
            }
LABEL_66:
            operator delete(v59);
            goto LABEL_67;
          }
        }
      }
      v126 = v32;
      sub_FC70B0((__int64)&v143, *(_QWORD *)a1, 0, 559);
      sub_21B5FF0(&v138, v35, a3);
      sub_AEC220(&v143, v138, v139);
      v47 = sub_111EFE0(v126);
      sub_10D8830(&v143, v47);
      v48 = v143;
      v49 = v137 != nullptr;
      if ( !v143 )
      {
        v104 = v144;
        v105 = *(_DWORD *)(v144 + 14976);
        if ( v105 )
        {
          v106 = (unsigned int)(v105 - 1);
          *(_DWORD *)(v144 + 14976) = v106;
          v48 = *(unsigned __int8 **)(v104 + 8 * v106 + 14848);
          v107 = *((unsigned int *)v48 + 134);
          *v48 = 0;
          v108 = *((_QWORD *)v48 + 66);
          *((_DWORD *)v48 + 106) = 0;
          v109 = v108 + (v107 << 6);
          if ( v108 != v109 )
          {
            v110 = v48;
            v111 = v24;
            v112 = v109;
            v136 = p_ptr;
            v113 = v49;
            do
            {
              while ( 1 )
              {
                v112 -= 64;
                v114 = *(void **)(v112 + 24);
                if ( v114 == (void *)(v112 + 40) )
                  break;
                operator delete(v114);
                if ( v108 == v112 )
                  goto LABEL_111;
              }
            }
            while ( v108 != v112 );
LABEL_111:
            v24 = v111;
            v49 = v113;
            v48 = v110;
            p_ptr = v136;
          }
          *((_DWORD *)v48 + 134) = 0;
        }
        else
        {
          v129 = v137 != nullptr;
          v48 = (unsigned __int8 *)operator new(0x3A0u);
          *v48 = 0;
          *((_QWORD *)v48 + 12) = v48 + 112;
          *((_QWORD *)v48 + 16) = v48 + 144;
          *((_QWORD *)v48 + 20) = v48 + 176;
          *((_QWORD *)v48 + 24) = v48 + 208;
          *((_QWORD *)v48 + 28) = v48 + 240;
          *((_QWORD *)v48 + 32) = v48 + 272;
          *((_QWORD *)v48 + 36) = v48 + 304;
          *((_QWORD *)v48 + 40) = v48 + 336;
          *((_QWORD *)v48 + 44) = v48 + 368;
          *((_QWORD *)v48 + 48) = v48 + 400;
          *((_QWORD *)v48 + 52) = v48 + 432;
          *((_QWORD *)v48 + 13) = 0;
          v48[112] = 0;
          *((_QWORD *)v48 + 17) = 0;
          v48[144] = 0;
          *((_QWORD *)v48 + 21) = 0;
          v48[176] = 0;
          *((_QWORD *)v48 + 25) = 0;
          v48[208] = 0;
          *((_QWORD *)v48 + 29) = 0;
          v48[240] = 0;
          *((_QWORD *)v48 + 33) = 0;
          v48[272] = 0;
          *((_QWORD *)v48 + 37) = 0;
          v48[304] = 0;
          *((_QWORD *)v48 + 41) = 0;
          v48[336] = 0;
          *((_QWORD *)v48 + 45) = 0;
          v48[368] = 0;
          *((_QWORD *)v48 + 49) = 0;
          v48[400] = 0;
          *((_QWORD *)v48 + 53) = 0x800000000LL;
          v49 = v129;
          *((_QWORD *)v48 + 66) = v48 + 544;
          *((_QWORD *)v48 + 67) = 0x600000000LL;
        }
        v143 = v48;
      }
      v48[*v48 + 1] = 2;
      v50 = v143;
      v51 = *v143;
      *v143 = v51 + 1;
      *(_QWORD *)&v50[8 * v51 + 16] = v49;
      if ( !v137 )
        goto LABEL_100;
      v52 = v137[1];
      v53 = **(_QWORD **)(v52 + 8);
      v54 = (_DWORD *)(*(_QWORD *)(v52 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*v137 + 40LL) - 1));
      v55 = (char *)(v53 + (unsigned int)v54[1]);
      if ( *v54 )
      {
        v103 = (const char *)(v53 + *(unsigned int *)(*(_QWORD *)(v52 + 16) + 4LL * (unsigned int)(*v54 + 1)));
        if ( v103 )
        {
          v56 = (unsigned int)j__strlen(v103);
          v57 = 0;
          if ( !v55 )
          {
LABEL_63:
            if ( v57 >= v56 )
            {
LABEL_99:
              v55 += v56;
              v58 = v57 - v56;
              goto LABEL_65;
            }
LABEL_64:
            v55 += v57;
            v58 = 0;
            goto LABEL_65;
          }
        }
        else
        {
          v56 = 0;
          if ( !v55 )
          {
            v56 = 0;
            v57 = 0;
            goto LABEL_99;
          }
        }
      }
      else
      {
        v56 = 0;
        if ( !v55 )
          goto LABEL_90;
      }
      v127 = v56;
      v57 = j__strlen(v55);
      v56 = v127;
      goto LABEL_63;
    }
  }
}

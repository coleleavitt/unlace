__int64 __fastcall sub_223E350(__m128i **a1, __int32 a2, __int64 a3, void **a4)
{
  _QWORD *v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // r12
  size_t v9; // rax
  size_t v10; // rcx
  size_t v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  char *v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  char *v18; // rcx
  void *v19; // r14
  size_t v20; // rbp
  unsigned int v21; // eax
  unsigned int v22; // r9d
  __int64 *v23; // r8
  __int64 *v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbp
  unsigned int v27; // eax
  unsigned int v28; // r8d
  __int64 *v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rsi
  size_t v32; // rbp
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  void *v35; // r12
  _BYTE *v36; // rdi
  void **v37; // rcx
  void *v38; // rdx
  _QWORD *v39; // rdi
  unsigned __int64 v41; // rax
  _BYTE *v42; // rdi
  void **v43; // rcx
  void *v44; // rdx
  void *v45; // rdi
  __int64 v46; // rax
  unsigned int v47; // r8d
  _QWORD *v48; // r14
  __int64 *v49; // rcx
  size_t v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // r9d
  _QWORD *v54; // r8
  __m128i *v55; // rcx
  __m128i si128; // xmm1
  unsigned int v57; // eax
  _BYTE *v58; // rdi
  void **v59; // rcx
  void *v60; // rdx
  unsigned __int64 v61; // rcx
  _QWORD *v62; // rbp
  _BYTE *v63; // rdi
  void **v64; // rbx
  void *v65; // rdx
  char v66; // al
  size_t v67; // rdx
  size_t v68; // rdx
  size_t v69; // rdx
  size_t v70; // rdx
  char *v71; // rax
  _BYTE *v72; // rdi
  void **v73; // rcx
  void *v74; // rdx
  size_t v75; // rdx
  __int64 v76; // [rsp+0h] [rbp-2F8h] BYREF
  void **v77; // [rsp+8h] [rbp-2F0h]
  size_t v78; // [rsp+10h] [rbp-2E8h]
  void *v79; // [rsp+18h] [rbp-2E0h]
  __m128i **v80; // [rsp+20h] [rbp-2D8h]
  __int32 v81; // [rsp+2Ch] [rbp-2CCh]
  char *v82; // [rsp+30h] [rbp-2C8h]
  __int64 v83; // [rsp+38h] [rbp-2C0h]
  char **v84; // [rsp+40h] [rbp-2B8h]
  int v85; // [rsp+48h] [rbp-2B0h]
  unsigned int v86; // [rsp+4Ch] [rbp-2ACh]
  __int64 *v87; // [rsp+50h] [rbp-2A8h]
  __int64 v88; // [rsp+58h] [rbp-2A0h]
  _QWORD *v89; // [rsp+60h] [rbp-298h] BYREF
  _QWORD *v90; // [rsp+68h] [rbp-290h] BYREF
  char *v91; // [rsp+70h] [rbp-288h] BYREF
  size_t v92; // [rsp+78h] [rbp-280h]
  void *v93; // [rsp+80h] [rbp-278h]
  size_t v94; // [rsp+88h] [rbp-270h]
  char *v95; // [rsp+90h] [rbp-268h] BYREF
  unsigned __int64 v96; // [rsp+98h] [rbp-260h]
  char *v97; // [rsp+A0h] [rbp-258h]
  __int64 v98; // [rsp+A8h] [rbp-250h]
  void *v99[2]; // [rsp+C0h] [rbp-238h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-228h] BYREF
  void *v101; // [rsp+E0h] [rbp-218h] BYREF
  size_t v102; // [rsp+E8h] [rbp-210h]
  _QWORD v103[2]; // [rsp+F0h] [rbp-208h] BYREF
  _QWORD v104[4]; // [rsp+100h] [rbp-1F8h] BYREF
  __int16 v105; // [rsp+120h] [rbp-1D8h]
  _QWORD v106[4]; // [rsp+130h] [rbp-1C8h] BYREF
  __int16 v107; // [rsp+150h] [rbp-1A8h]
  void *v108; // [rsp+160h] [rbp-198h] BYREF
  size_t v109; // [rsp+168h] [rbp-190h]
  _QWORD v110[4]; // [rsp+170h] [rbp-188h] BYREF
  void *v111; // [rsp+190h] [rbp-168h] BYREF
  size_t v112; // [rsp+198h] [rbp-160h]
  _QWORD v113[2]; // [rsp+1A0h] [rbp-158h] BYREF
  __int16 v114; // [rsp+1B0h] [rbp-148h]
  _QWORD v115[2]; // [rsp+1C0h] [rbp-138h] BYREF
  char *v116; // [rsp+1D0h] [rbp-128h]
  __int16 v117; // [rsp+1E0h] [rbp-118h]
  _QWORD v118[2]; // [rsp+1F0h] [rbp-108h] BYREF
  char *v119; // [rsp+200h] [rbp-F8h]
  __int64 v120; // [rsp+208h] [rbp-F0h]
  __int16 v121; // [rsp+210h] [rbp-E8h]
  _QWORD *v122[2]; // [rsp+220h] [rbp-D8h] BYREF
  char *v123; // [rsp+230h] [rbp-C8h]
  size_t v124; // [rsp+238h] [rbp-C0h]
  __int16 v125; // [rsp+240h] [rbp-B8h]
  void *v126; // [rsp+250h] [rbp-A8h] BYREF
  size_t v127; // [rsp+258h] [rbp-A0h]
  _QWORD v128[2]; // [rsp+260h] [rbp-98h] BYREF
  __int16 v129; // [rsp+270h] [rbp-88h]
  void *src; // [rsp+280h] [rbp-78h] BYREF
  size_t n; // [rsp+288h] [rbp-70h]
  _QWORD v132[2]; // [rsp+290h] [rbp-68h] BYREF
  char v133; // [rsp+2A0h] [rbp-58h]
  int v134; // [rsp+2ACh] [rbp-4Ch]
  __int64 v135; // [rsp+2B0h] [rbp-48h] BYREF
  unsigned __int64 v136; // [rsp+2B8h] [rbp-40h]

  v80 = a1;
  v81 = a2;
  v77 = a4;
  sub_223E070((__int64)&src, a1, "*", 1, a2, 1, 1);
  if ( (n & 1) == 0 )
  {
    v4 = src;
    sub_223C7B0((__int64 *)&src);
    goto LABEL_3;
  }
  v35 = src;
  src = nullptr;
  sub_223C7B0((__int64 *)&src);
  if ( v35 )
  {
    v126 = v35;
    sub_2221210((__int64)&src, (_QWORD **)&v126);
    v36 = *v77;
    if ( src == v132 )
    {
      v67 = n;
      if ( n )
      {
        if ( n == 1 )
          *v36 = v132[0];
        else
          memcpy(v36, src, n);
        v67 = n;
        v36 = *v77;
      }
      v77[1] = (void *)v67;
      v36[v67] = 0;
      v36 = src;
    }
    else
    {
      v37 = v77;
      if ( v36 == (_BYTE *)(v77 + 2) )
      {
        v76 = v132[0];
        *v77 = src;
        *(__m128 *)(v37 + 1) = _mm_loadh_ps((const double *)&v76);
      }
      else
      {
        v76 = v132[0];
        v38 = v77[2];
        *v77 = src;
        *(__m128 *)(v37 + 1) = _mm_loadh_ps((const double *)&v76);
        if ( v36 )
        {
          src = v36;
          v132[0] = v38;
          goto LABEL_38;
        }
      }
      v36 = v132;
      src = v132;
    }
LABEL_38:
    n = 0;
    *v36 = 0;
    if ( src != v132 )
      operator delete(src);
    v39 = v126;
    if ( !v126 )
      return 0;
    goto LABEL_41;
  }
LABEL_3:
  v6 = *(_QWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a3 + 16);
  LOBYTE(v85) = 1;
  if ( (unsigned __int64)(v7 - v6) > 0x16 )
  {
    if ( *(_QWORD *)v6 ^ 0x6169636570732123LL | *(_QWORD *)(v6 + 8) ^ 0x6C2D657361632D6CLL
      || *(_DWORD *)(v6 + 16) != 762606441
      || *(_WORD *)(v6 + 20) != 12662
      || (v66 = 0, *(_BYTE *)(v6 + 22) != 10) )
    {
      v66 = 1;
    }
    LOBYTE(v85) = v66;
  }
  sub_222E840((__int64)&src, a3, 1, 35);
  if ( v133 )
  {
    v8 = v4;
    v84 = &v95;
    do
    {
      v32 = 0;
      LODWORD(v76) = v134;
      v33 = sub_2246FB0(&v135, asc_22E1692, 6, 0);
      v34 = v136;
      if ( v33 < v136 )
      {
        v32 = v136 - v33;
        v34 = v33;
      }
      v127 = v32;
      v126 = (void *)(v135 + v34);
      v9 = sub_2247130(&v126, asc_22E1692, 6, -1) + 1;
      if ( v9 > v127 )
        v9 = v127;
      v10 = v127 - v32 + v9;
      if ( v10 > v127 )
        v10 = v127;
      v92 = v10;
      v91 = (char *)v126;
      if ( !v10 )
        goto LABEL_30;
      if ( *(_BYTE *)v126 == 91 )
      {
        v41 = v10 - 1;
        if ( *((char *)v126 + v10 - 1) != 93 )
        {
          v128[0] = v126;
          v128[1] = v10;
          LODWORD(v115[0]) = v76;
          v118[0] = "malformed section header on line ";
          v119 = (char *)v115[0];
          v121 = 2307;
          v122[0] = v118;
          v123 = ": ";
          v125 = 770;
          v126 = v122;
          v129 = 1282;
          sub_2253560(&v111, &v126);
          v42 = *v77;
          if ( v111 == v113 )
          {
            v69 = v112;
            if ( v112 )
            {
              if ( v112 == 1 )
                *v42 = v113[0];
              else
                memcpy(v42, v111, v112);
              v69 = v112;
              v42 = *v77;
            }
            v77[1] = (void *)v69;
            v42[v69] = 0;
            v42 = v111;
            goto LABEL_48;
          }
          v43 = v77;
          if ( v42 == (_BYTE *)(v77 + 2) )
          {
            v76 = v113[0];
            *v77 = v111;
            *(__m128 *)(v43 + 1) = _mm_loadh_ps((const double *)&v76);
          }
          else
          {
            v76 = v113[0];
            v44 = v77[2];
            *v77 = v111;
            *(__m128 *)(v43 + 1) = _mm_loadh_ps((const double *)&v76);
            if ( v42 )
            {
              v111 = v42;
              v113[0] = v44;
LABEL_48:
              v112 = 0;
              *v42 = 0;
              v45 = v111;
              if ( v111 == v113 )
                return 0;
LABEL_49:
              operator delete(v45);
              return 0;
            }
          }
          v42 = v113;
          v111 = v113;
          goto LABEL_48;
        }
        v61 = v10 - 2;
        if ( v61 > v41 )
          v61 = 0;
        sub_223E070((__int64)&v126, v80, (_BYTE *)v126 + 1, v61, v81, v76, v85);
        if ( (v127 & 1) != 0 )
        {
          v62 = v126;
          v126 = nullptr;
          sub_223C7B0((__int64 *)&v126);
          if ( v62 )
          {
            v122[0] = v62;
            sub_2221210((__int64)&v126, v122);
            v63 = *v77;
            if ( v126 == v128 )
            {
              v68 = v127;
              if ( v127 )
              {
                if ( v127 == 1 )
                  *v63 = v128[0];
                else
                  memcpy(v63, v126, v127);
                v68 = v127;
                v63 = *v77;
              }
              v77[1] = (void *)v68;
              v63[v68] = 0;
              v63 = v126;
            }
            else
            {
              v64 = v77;
              if ( v63 == (_BYTE *)(v77 + 2) )
              {
                v76 = v128[0];
                *v77 = v126;
                *(__m128 *)(v64 + 1) = _mm_loadh_ps((const double *)&v76);
              }
              else
              {
                v76 = v128[0];
                v65 = v77[2];
                *v77 = v126;
                *(__m128 *)(v64 + 1) = _mm_loadh_ps((const double *)&v76);
                if ( v63 )
                {
                  v126 = v63;
                  v128[0] = v65;
                  goto LABEL_75;
                }
              }
              v63 = v128;
              v126 = v128;
            }
LABEL_75:
            v127 = 0;
            *v63 = 0;
            if ( v126 != v128 )
              operator delete(v126);
            v39 = v122[0];
            if ( !v122[0] )
              return 0;
LABEL_41:
            (*(void (__fastcall **)(_QWORD *))(*v39 + 8LL))(v39);
            return 0;
          }
        }
        else
        {
          v8 = v126;
          sub_223C7B0((__int64 *)&v126);
        }
        goto LABEL_30;
      }
      v11 = sub_2246AB0(&v91, ":", 1, 0);
      if ( v11 == -1 )
      {
        v14 = v91;
        v12 = v92;
        v95 = nullptr;
        v96 = 0;
        v93 = v91;
        v94 = v92;
        goto LABEL_59;
      }
      v12 = v92;
      v13 = v11 + 1;
      if ( v11 + 1 > v92 )
      {
        v14 = v91;
        v96 = 0;
        if ( v11 > v92 )
          v11 = v92;
        v93 = v91;
        v94 = v11;
        v95 = &v91[v92];
LABEL_59:
        v125 = 1282;
        LODWORD(v111) = v76;
        v115[0] = "malformed line ";
        v123 = v14;
        v116 = (char *)v111;
        v118[0] = v115;
        v119 = ": '";
        v122[0] = v118;
        v126 = v122;
        v128[0] = "'";
        v117 = 2307;
        v121 = 770;
        v124 = v12;
        v129 = 770;
        sub_2253560(&v108, &v126);
        v58 = *v77;
        if ( v108 == v110 )
        {
          v70 = v109;
          if ( v109 )
          {
            if ( v109 == 1 )
              *v58 = v110[0];
            else
              memcpy(v58, v108, v109);
            v70 = v109;
            v58 = *v77;
          }
          v77[1] = (void *)v70;
          v58[v70] = 0;
          v58 = v108;
        }
        else
        {
          v59 = v77;
          if ( v58 == (_BYTE *)(v77 + 2) )
          {
            v76 = v110[0];
            *v77 = v108;
            *(__m128 *)(v59 + 1) = _mm_loadh_ps((const double *)&v76);
          }
          else
          {
            v76 = v110[0];
            v60 = v77[2];
            *v77 = v108;
            *(__m128 *)(v59 + 1) = _mm_loadh_ps((const double *)&v76);
            if ( v58 )
            {
              v108 = v58;
              v110[0] = v60;
              goto LABEL_63;
            }
          }
          v58 = v110;
          v108 = v110;
        }
LABEL_63:
        v109 = 0;
        *v58 = 0;
        v45 = v108;
        if ( v108 == v110 )
          return 0;
        goto LABEL_49;
      }
      v14 = v91;
      if ( v11 > v92 )
        v11 = v92;
      v93 = v91;
      v95 = &v91[v13];
      v94 = v11;
      v96 = v92 - v13;
      if ( v92 == v13 )
        goto LABEL_59;
      v15 = sub_2246AB0(v84, "=", 1, 0);
      if ( v15 == -1 )
      {
        v78 = 0;
        v79 = nullptr;
        v82 = v95;
        v83 = v96;
      }
      else
      {
        v16 = v96;
        v17 = v15 + 1;
        if ( v15 + 1 > v96 )
        {
          v78 = 0;
          v17 = v96;
        }
        else
        {
          v78 = v96 - v17;
        }
        v18 = &v95[v17];
        v82 = v95;
        if ( v15 <= v96 )
          v16 = v15;
        v79 = v18;
        v83 = v16;
      }
      v19 = v93;
      v20 = v94;
      v21 = sub_2244B30(v93, v94);
      v22 = sub_2244CB0(v8 + 1, v19, v20, v21);
      v23 = (__int64 *)(v8[1] + 8LL * v22);
      if ( *v23 )
      {
        if ( *v23 != -8 )
        {
          sub_223D7B0((__int64 **)&v126, v23, 0);
          v24 = (__int64 *)v126;
          goto LABEL_26;
        }
        --*((_DWORD *)v8 + 6);
      }
      v87 = v23;
      v86 = v22;
      v52 = sub_22300B0(v20 + 33, 8);
      v53 = v86;
      v54 = v87;
      v55 = (__m128i *)v52;
      if ( v20 )
      {
        v88 = v52;
        memcpy((void *)(v52 + 32), v19, v20);
        v55 = (__m128i *)v88;
        v54 = v87;
        v53 = v86;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA470);
      v55[2].m128i_i8[v20] = 0;
      v55->m128i_i64[0] = v20;
      v55->m128i_i64[1] = 0;
      v55[1] = si128;
      *v54 = v55;
      ++*((_DWORD *)v8 + 5);
      v57 = sub_22450D0(v8 + 1, v53);
      sub_223D7B0((__int64 **)&v126, (__int64 *)(v8[1] + 8LL * v57), 0);
      v24 = (__int64 *)v126;
LABEL_26:
      v25 = *v24;
      v26 = *v24 + 8;
      v27 = sub_2244B30(v79, v78);
      v28 = sub_2244CB0(v26, v79, v78, v27);
      v29 = (__int64 *)(*(_QWORD *)(v25 + 8) + 8LL * v28);
      if ( *v29 )
      {
        if ( *v29 != -8 )
        {
          sub_223D7F0((__int64 **)&v126, v29, 0);
          v30 = (__int64 *)v126;
          goto LABEL_29;
        }
        --*(_DWORD *)(v25 + 24);
      }
      v87 = v29;
      v86 = v28;
      v46 = sub_22300B0(v78 + 57, 8);
      v47 = v86;
      v48 = (_QWORD *)v46;
      v49 = v87;
      if ( v78 )
      {
        memcpy((void *)(v46 + 56), v79, v78);
        v49 = v87;
        v47 = v86;
      }
      v50 = v78;
      *((_BYTE *)v48 + v78 + 56) = 0;
      *v48 = v50;
      v48[1] = 0;
      v48[2] = 0;
      v48[3] = 0;
      v48[4] = 0;
      v48[5] = 0;
      v48[6] = 0;
      *v49 = (__int64)v48;
      ++*(_DWORD *)(v25 + 20);
      v51 = sub_22450D0(v26, v47);
      sub_223D7F0((__int64 **)&v126, (__int64 *)(*(_QWORD *)(v25 + 8) + 8LL * v51), 0);
      v30 = (__int64 *)v126;
LABEL_29:
      v31 = *v30;
      v97 = v82;
      v98 = v83;
      sub_223D830((size_t *)&v89, (__m128 *)(v31 + 8), v82, v83, v76, v85 & 1);
      if ( v89 )
      {
        v90 = v89;
        v89 = nullptr;
        sub_2221210((__int64)v99, &v90);
        LODWORD(v108) = v76;
        v71 = "glob";
        if ( !(_BYTE)v85 )
          v71 = "regex";
        v104[0] = "malformed ";
        v117 = 770;
        v104[2] = v71;
        v105 = 771;
        v106[0] = v104;
        v106[2] = " in line ";
        v111 = v106;
        v121 = 1282;
        v113[0] = v108;
        v115[0] = &v111;
        v116 = ": '";
        v118[0] = v115;
        v107 = 770;
        v119 = v82;
        v114 = 2306;
        v120 = v83;
        v122[0] = v118;
        v123 = "': ";
        v126 = v122;
        v125 = 770;
        v106[1] = 0;
        v112 = 0;
        v115[1] = 0;
        v118[1] = 0;
        v122[1] = nullptr;
        v127 = 0;
        v128[0] = v99;
        v129 = 1026;
        sub_2253560(&v101, &v126);
        v72 = *v77;
        if ( v101 == v103 )
        {
          v75 = v102;
          if ( v102 )
          {
            if ( v102 == 1 )
              *v72 = v103[0];
            else
              memcpy(v72, v101, v102);
            v75 = v102;
            v72 = *v77;
          }
          v77[1] = (void *)v75;
          v72[v75] = 0;
          v72 = v101;
        }
        else
        {
          v73 = v77;
          if ( v72 == (_BYTE *)(v77 + 2) )
          {
            v76 = v103[0];
            *v77 = v101;
            *(__m128 *)(v73 + 1) = _mm_loadh_ps((const double *)&v76);
          }
          else
          {
            v76 = v103[0];
            v74 = v77[2];
            *v77 = v101;
            *(__m128 *)(v73 + 1) = _mm_loadh_ps((const double *)&v76);
            if ( v72 )
            {
              v101 = v72;
              v103[0] = v74;
              goto LABEL_120;
            }
          }
          v72 = v103;
          v101 = v103;
        }
LABEL_120:
        v102 = 0;
        *v72 = 0;
        if ( v101 != v103 )
          operator delete(v101);
        if ( v99[0] != &v100 )
          operator delete(v99[0]);
        if ( v90 )
          (*(void (__fastcall **)(_QWORD *))(*v90 + 8LL))(v90);
        v39 = v89;
        if ( !v89 )
          return 0;
        goto LABEL_41;
      }
LABEL_30:
      sub_222E680((__int64)&src);
    }
    while ( v133 );
  }
  return 1;
}

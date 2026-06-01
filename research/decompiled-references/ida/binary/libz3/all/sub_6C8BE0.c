void __fastcall sub_6C8BE0(__int64 a1, __int64 a2, char a3, int *a4, void *a5, int *a6, void *a7, __int64 *a8)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r13
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  bool v35; // zf
  __int64 v36; // r13
  char *v37; // r15
  int v38; // r9d
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r15
  _DWORD *v42; // rax
  __int64 v43; // r12
  _DWORD *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdi
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // rax
  int v53; // r11d
  __int64 v54; // r14
  char v55; // cl
  char v56; // r10
  char v57; // dl
  __int64 v58; // r13
  char v59; // r8
  int v60; // eax
  char v61; // si
  int v62; // r11d
  __int64 v63; // r14
  char v64; // dl
  char v65; // cl
  char v66; // r10
  __int64 v67; // r13
  char v68; // r8
  int v69; // eax
  char v70; // si
  __int64 v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 *v74; // rcx
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 *v77; // rsi
  __int64 v78; // [rsp+0h] [rbp-228h]
  __int64 *v79; // [rsp+8h] [rbp-220h]
  char *v80; // [rsp+8h] [rbp-220h]
  int *v81; // [rsp+10h] [rbp-218h]
  char *v82; // [rsp+18h] [rbp-210h]
  __int64 v83; // [rsp+20h] [rbp-208h]
  __int64 *ptr; // [rsp+28h] [rbp-200h]
  void *v85; // [rsp+30h] [rbp-1F8h]
  int *v86; // [rsp+38h] [rbp-1F0h]
  int v87[2]; // [rsp+40h] [rbp-1E8h]
  __int64 v88; // [rsp+48h] [rbp-1E0h]
  __int64 v89; // [rsp+50h] [rbp-1D8h]
  __int64 v90; // [rsp+58h] [rbp-1D0h]
  __int64 v91; // [rsp+60h] [rbp-1C8h]
  int *v92; // [rsp+68h] [rbp-1C0h]
  __int64 v94; // [rsp+70h] [rbp-1B8h]
  __int64 v95; // [rsp+78h] [rbp-1B0h]
  __int64 v96; // [rsp+80h] [rbp-1A8h]
  __int64 v97; // [rsp+88h] [rbp-1A0h]
  __int64 v98; // [rsp+90h] [rbp-198h]
  int v99[2]; // [rsp+98h] [rbp-190h]
  int v100; // [rsp+A0h] [rbp-188h]
  int v101[2]; // [rsp+A8h] [rbp-180h] BYREF
  int v102[2]; // [rsp+B0h] [rbp-178h] BYREF
  char v103[8]; // [rsp+B8h] [rbp-170h] BYREF
  int v104[2]; // [rsp+C0h] [rbp-168h] BYREF
  char v105[8]; // [rsp+C8h] [rbp-160h]
  int v106[2]; // [rsp+D0h] [rbp-158h] BYREF
  int v107[2]; // [rsp+D8h] [rbp-150h]
  char v108[8]; // [rsp+E0h] [rbp-148h] BYREF
  int v109[2]; // [rsp+E8h] [rbp-140h]
  int v110[2]; // [rsp+F0h] [rbp-138h] BYREF
  int v111[2]; // [rsp+F8h] [rbp-130h]
  int v112[2]; // [rsp+100h] [rbp-128h] BYREF
  int v113[2]; // [rsp+108h] [rbp-120h]
  int v114; // [rsp+110h] [rbp-118h] BYREF
  char v115; // [rsp+114h] [rbp-114h]
  __int64 v116; // [rsp+118h] [rbp-110h]
  int v117; // [rsp+120h] [rbp-108h]
  char v118; // [rsp+124h] [rbp-104h]
  __int64 v119; // [rsp+128h] [rbp-100h]
  int v120; // [rsp+130h] [rbp-F8h] BYREF
  char v121; // [rsp+134h] [rbp-F4h]
  __int64 v122; // [rsp+138h] [rbp-F0h]
  int v123; // [rsp+140h] [rbp-E8h]
  char v124; // [rsp+144h] [rbp-E4h]
  __int64 v125; // [rsp+148h] [rbp-E0h]
  int v126[2]; // [rsp+150h] [rbp-D8h] BYREF
  char v127[8]; // [rsp+158h] [rbp-D0h]
  _QWORD v128[2]; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+170h] [rbp-B8h] BYREF
  __int64 v130; // [rsp+178h] [rbp-B0h]
  __int64 v131; // [rsp+180h] [rbp-A8h]
  __int64 v132; // [rsp+188h] [rbp-A0h]
  int v133[2]; // [rsp+190h] [rbp-98h] BYREF
  __int64 v134; // [rsp+198h] [rbp-90h]
  __int64 v135; // [rsp+1A0h] [rbp-88h] BYREF
  __int64 v136; // [rsp+1A8h] [rbp-80h]
  __int64 v137[2]; // [rsp+1B0h] [rbp-78h] BYREF
  _QWORD v138[2]; // [rsp+1C0h] [rbp-68h] BYREF
  int v139[4]; // [rsp+1D0h] [rbp-58h] BYREF
  __int64 v140; // [rsp+1E0h] [rbp-48h]
  __int64 v141; // [rsp+1E8h] [rbp-40h]

  *(_QWORD *)v87 = a2;
  v82 = (char *)&v114;
  sub_3EC020((__int64)&v114, (__int64)a4);
  v81 = &v120;
  sub_3EC020((__int64)&v120, (__int64)a6);
  v95 = *(_QWORD *)a1;
  v13 = sub_6C19A0(a1, (__int64)&v120, (__int64)a5);
  v83 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v96 = *(_QWORD *)a1;
  v14 = sub_6C19A0(a1, (__int64)&v114, (__int64)a7);
  v88 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v97 = *(_QWORD *)a1;
  v15 = sub_15E1B70(*(_QWORD *)(a1 + 16));
  v85 = (void *)v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( a3 )
    sub_6C1B80((__int64 *)a1, v15, a8);
  else
    sub_6C1A50(a1, v15, a8);
  if ( ((v115 & 1) != 0 || v114 != 1 || (v118 & 1) != 0 || v117 != 1)
    && ((v121 & 1) != 0 || v120 != 1 || (v124 & 1) != 0 || v123 != 1) )
  {
    v16 = *(_QWORD *)a1;
    *(_QWORD *)v133 = 1;
    v134 = 0;
    v98 = v16;
    v135 = 1;
    v136 = 0;
    sub_182CBA0(qword_1C7F2C0, &v135);
    BYTE4(v135) &= ~1u;
    ptr = v137;
    LODWORD(v135) = 1;
    v86 = v133;
    sub_3EBB80((__int64)v137, (__int64)&v120, (__int64)v133);
    *(_QWORD *)v126 = 1;
    *(_QWORD *)v127 = 0;
    v128[0] = 1;
    v128[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v128);
    BYTE4(v128[0]) &= ~1u;
    v92 = v126;
    LODWORD(v128[0]) = 1;
    v79 = &v129;
    sub_3EBB80((__int64)&v129, (__int64)&v114, (__int64)v126);
    sub_3EBE30((__int64)v139, (__int64)&v129, (__int64)v137);
    v20 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)v99 = a1 + 16;
    if ( !v20 )
    {
      sub_16669E0(a1 + 16);
      v20 = *(_QWORD *)(a1 + 24);
    }
    v21 = sub_166A700(v20, (unsigned int)v139, 1, v17, v18, v19);
    v91 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    sub_25A130((char *)v139);
    sub_25A130((char *)&v129);
    sub_25A130((char *)v126);
    sub_25A130((char *)v137);
    sub_25A130((char *)v133);
    v22 = *(_QWORD *)a1;
    *(_QWORD *)v104 = 0;
    *(_QWORD *)v106 = 0;
    v90 = v22;
    *(_QWORD *)v105 = v22;
    *(_QWORD *)v107 = v22;
    v89 = *a8;
    if ( *a8 )
      ++*(_DWORD *)(*a8 + 8);
    v23 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v108 = 0;
    *(_QWORD *)v109 = v22;
    *(_QWORD *)v110 = 0;
    *(_QWORD *)v111 = v22;
    *(_QWORD *)v112 = 0;
    *(_QWORD *)v113 = v22;
    *(_QWORD *)v126 = 0;
    *(_QWORD *)v127 = v22;
    v24 = sub_15E1B70(v23);
    v25 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    sub_6BFE30(*(__int64 *)v108, *(__int64 *)v109);
    *(_QWORD *)v108 = v25;
    sub_6C1A50(a1, v25, (__int64 *)v104);
    v129 = 0;
    v130 = 0;
    v131 = 1;
    v132 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v129, a4);
    *(_QWORD *)v133 = 0;
    v134 = 0;
    v135 = 1;
    v136 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v133, a6);
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v114, (__int64)&v120) )
    {
      v53 = v114;
      *(_QWORD *)&v139[2] = 0;
      v54 = v116;
      v141 = 0;
      v114 = v120;
      v55 = v115 & 2;
      v116 = v122;
      v56 = v115 & 1;
      v57 = v118;
      v58 = v119;
      v120 = v53;
      v139[0] = v53;
      v59 = v118 & 1;
      v122 = v54;
      v60 = v123;
      v123 = v117;
      v61 = v115 & 1 | v115 & 2 | v121 & 0xFC;
      v115 = v121 & 1 | v121 & 2 | v115 & 0xFC;
      v117 = v60;
      v121 = v61;
      v119 = v125;
      LODWORD(v140) = v123;
      v125 = v58;
      v118 = v124 & 3 | v118 & 0xFC;
      LOBYTE(v139[1]) = v56 | v139[1] & 0xFC | v55;
      v124 = v59 | v57 & 2 | v124 & 0xFC;
      BYTE4(v140) = v59 | v57 & 2 | BYTE4(v140) & 0xFC;
      sub_25A130((char *)v139);
      v62 = v129;
      *(_QWORD *)&v139[2] = 0;
      v63 = v130;
      v141 = 0;
      LODWORD(v129) = v133[0];
      v64 = BYTE4(v131);
      v65 = BYTE4(v129) & 2;
      v130 = v134;
      v66 = BYTE4(v129) & 1;
      v67 = v132;
      v133[0] = v62;
      v68 = BYTE4(v131) & 1;
      v139[0] = v62;
      v134 = v63;
      LODWORD(v140) = v131;
      v69 = v135;
      LODWORD(v135) = v131;
      v70 = BYTE4(v129) & 1 | BYTE4(v129) & 2 | v133[1] & 0xFC;
      BYTE4(v129) = v133[1] & 1 | v133[1] & 2 | BYTE4(v129) & 0xFC;
      LODWORD(v131) = v69;
      LOBYTE(v133[1]) = v70;
      v132 = v136;
      v136 = v67;
      BYTE4(v131) = BYTE4(v135) & 3 | BYTE4(v131) & 0xFC;
      LOBYTE(v139[1]) = v66 | v139[1] & 0xFC | v65;
      BYTE4(v135) = v68 | v64 & 2 | BYTE4(v135) & 0xFC;
      BYTE4(v140) = v68 | v64 & 2 | BYTE4(v140) & 0xFC;
      sub_25A130((char *)v139);
      v71 = v88;
      v88 = v83;
      v83 = v71;
      a7 = a5;
    }
    v94 = *(_QWORD *)a1;
    v26 = sub_15E1B70(*(_QWORD *)(a1 + 16));
    v27 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    if ( v133[0] <= 0 )
    {
      v29 = v26;
    }
    else
    {
      v28 = sub_15E1A70(*(_QWORD *)(a1 + 16));
      v29 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      sub_6BFE30(v27, v94);
    }
    sub_6C19A0(a1, (__int64)&v129, v29);
    v30 = sub_15E1B70(*(_QWORD *)(a1 + 16));
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    sub_6BFE30(*(__int64 *)v112, *(__int64 *)v113);
    *(_QWORD *)v112 = v31;
    sub_6C1A50(a1, v31, (__int64 *)v110);
    if ( *(_QWORD *)v87 == *(_QWORD *)(*(_QWORD *)v110 + 32LL) )
    {
      v72 = *(_QWORD *)(*(_QWORD *)v110 + 40LL);
      memset(v139, 0, sizeof(v139));
      v140 = 1;
      v141 = 0;
      if ( (unsigned __int8)sub_1666AE0(*(_QWORD *)v99, v72, v139, v137) && !v139[0] )
      {
        sub_25A130((char *)v139);
        memset(v139, 0, sizeof(v139));
        v140 = 1;
        v141 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v139, &v120);
        sub_6C17D0(a1, v139, a7, v108);
        sub_25A130((char *)v139);
        goto LABEL_36;
      }
      sub_25A130((char *)v139);
    }
    memset(v139, 0, sizeof(v139));
    v140 = 1;
    v141 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v139, &v120);
    sub_6C17D0(a1, v139, v29, v126);
    sub_25A130((char *)v139);
    v34 = a1 + 448;
    v35 = *(_BYTE *)(a1 + 459) == 0;
    *(__m128 *)v137 = _mm_loadh_ps((const double *)v110);
    if ( !v35 )
    {
      sub_14E1930(v34, v78, (int)&v129, (int)&v120, (__int64)&v114, v83, (__int64)v137, v85, (int)v133);
      goto LABEL_34;
    }
    if ( *(_BYTE *)(a1 + 456) )
    {
      if ( (unsigned int)sub_14DD000(v34, 2, v137, v112) != 5 )
        goto LABEL_34;
    }
    else if ( (unsigned int)sub_14DC740(
                              v34,
                              2,
                              (int)v137,
                              (int)v112,
                              v32,
                              v33,
                              v78,
                              (int)&v129,
                              (int)&v120,
                              (int)&v114,
                              v83,
                              v137,
                              (int)v85,
                              (int)v133,
                              v87[0],
                              v88,
                              v89,
                              v90,
                              v91,
                              (int)v126,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99[0],
                              v100,
                              v101[0],
                              v102[0],
                              v103[0],
                              v104[0],
                              *(int *)v105,
                              v106[0],
                              v107[0],
                              *(int *)v108,
                              v109[0],
                              v110[0],
                              v111[0],
                              v112[0],
                              v113[0],
                              v114,
                              v116,
                              v117,
                              v119,
                              v120,
                              v122,
                              v123,
                              v125) != 5 )
    {
LABEL_34:
      LODWORD(v36) = v112[0];
LABEL_35:
      v137[0] = 2;
      v137[1] = 0;
      v138[0] = 1;
      v138[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v138);
      v37 = (char *)ptr;
      LODWORD(v138[0]) = 1;
      BYTE4(v138[0]) &= ~1u;
      sub_3EBB80((__int64)v139, (__int64)v81, (__int64)ptr);
      sub_6C8080(
        a1,
        (int)v139,
        v87[0],
        v36,
        (int)v108,
        v38,
        v78,
        v79,
        (int)v81,
        (int)v82,
        v83,
        (int)ptr,
        (__int64)v85,
        (int)v86,
        v87[0],
        v88,
        v89,
        v90,
        v91);
      sub_25A130((char *)v139);
      sub_25A130(v37);
LABEL_36:
      v41 = *(_QWORD *)v108;
      v35 = *(_WORD *)(v89 + 4) == 0;
      *(_QWORD *)v102 = v89;
      if ( v35 && (v42 = *(_DWORD **)(*(_QWORD *)(v89 + 16) + 24LL)) != nullptr && !*v42 && v42[1] == 5 )
      {
        v76 = *(unsigned int *)(v89 + 24);
        if ( (_DWORD)v76 )
        {
          v77 = (__int64 *)(v89 + 32);
          v43 = 0;
          *(_QWORD *)v87 = v89 + 32 + 8 * v76;
          do
          {
            *(_QWORD *)v101 = v43;
            ptr = v77;
            sub_6C01B0(v101, v77);
            v43 = *(_QWORD *)v101;
            ++v77;
          }
          while ( v77 != *(__int64 **)v87 );
        }
        else
        {
          v43 = 0;
        }
      }
      else
      {
        *(_QWORD *)v101 = 0;
        sub_6C01B0(v101, v102);
        v43 = *(_QWORD *)v101;
      }
      v35 = *(_WORD *)(v41 + 4) == 0;
      *(_QWORD *)v103 = v41;
      if ( v35 && (v44 = *(_DWORD **)(*(_QWORD *)(v41 + 16) + 24LL)) != nullptr && !*v44 && v44[1] == 5 )
      {
        v73 = *(unsigned int *)(v41 + 24);
        if ( (_DWORD)v73 )
        {
          v74 = (__int64 *)(v41 + 32);
          v75 = v41 + 32 + 8 * v73;
          do
          {
            ptr = v74;
            *(_QWORD *)v101 = v43;
            sub_6C01B0(v101, v74);
            v43 = *(_QWORD *)v101;
            v74 = ptr + 1;
          }
          while ( ptr + 1 != (__int64 *)v75 );
        }
      }
      else
      {
        *(_QWORD *)v101 = v43;
        sub_6C01B0(v101, v103);
        v43 = *(_QWORD *)v101;
      }
      if ( v43 )
        v45 = *(unsigned int *)(v43 - 4);
      else
        v45 = 0;
      if ( *(_BYTE *)(a1 + 459) )
      {
        sub_14E1930(a1 + 448, v78, (int)v79, (int)v81, (__int64)v82, v83, (__int64)ptr, v85, (int)v86);
      }
      else
      {
        LODWORD(ptr) = v45;
        v46 = a1 + 448;
        if ( *(_BYTE *)(a1 + 456) )
        {
          if ( (unsigned int)sub_14DD000(v46, v45, v43, v106) != 5 )
            goto LABEL_49;
        }
        else if ( (unsigned int)sub_14DC740(
                                  v46,
                                  v45,
                                  v43,
                                  (int)v106,
                                  v39,
                                  v40,
                                  v78,
                                  (int)v79,
                                  (int)v81,
                                  (int)v82,
                                  v83,
                                  ptr,
                                  (int)v85,
                                  (int)v86,
                                  v87[0],
                                  v88,
                                  v89,
                                  v90,
                                  v91,
                                  (int)v92,
                                  v94,
                                  v95,
                                  v96,
                                  v97,
                                  v98,
                                  v99[0],
                                  v100,
                                  v101[0],
                                  v102[0],
                                  v103[0],
                                  v104[0],
                                  *(int *)v105,
                                  v106[0],
                                  v107[0],
                                  *(int *)v108,
                                  v109[0],
                                  v110[0],
                                  v111[0],
                                  v112[0],
                                  v113[0],
                                  v114,
                                  v116,
                                  v117,
                                  v119,
                                  v120,
                                  v122,
                                  v123,
                                  v125) != 5 )
        {
          goto LABEL_49;
        }
        v52 = sub_15E1AF0(*(_QWORD *)(a1 + 448));
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        ptr = (__int64 *)v52;
        sub_6BFE30(*(__int64 *)v106, *(__int64 *)v107);
        *(_QWORD *)v106 = ptr;
      }
LABEL_49:
      if ( v43 )
        sub_186B220((void *)(v43 - 8));
      v35 = *(_BYTE *)(a1 + 456) == 0;
      *(__m128 *)v139 = _mm_loadh_ps((const double *)v106);
      if ( v35 )
      {
        if ( (unsigned int)sub_14E03D0(
                             (int)a1 + 448,
                             v78,
                             (__int64)v79,
                             (int)v81,
                             (int)v82,
                             v83,
                             (int)ptr,
                             (int)v85,
                             v86,
                             v87[0],
                             v88,
                             v89,
                             v90,
                             v91,
                             (int)v92,
                             v94,
                             v95,
                             v96,
                             v97,
                             v98,
                             v99[0],
                             v100,
                             v101[0],
                             v102[0],
                             *(int *)v103,
                             v104[0],
                             v105[0],
                             v106[0],
                             v107[0],
                             *(int *)v108,
                             v109[0],
                             v110[0],
                             v111[0],
                             v112[0],
                             v113[0],
                             v114,
                             v116,
                             v117,
                             v119,
                             v120,
                             v122,
                             v123,
                             v125,
                             v126[0],
                             v127[0]) != 5 )
          goto LABEL_53;
      }
      else if ( (unsigned int)sub_14E0E20(
                                (int)a1 + 448,
                                2,
                                (int)v139,
                                (int)a8,
                                v47,
                                v48,
                                v78,
                                (int)v79,
                                (int)v81,
                                (int)v82,
                                v83,
                                ptr) != 5 )
      {
LABEL_53:
        sub_14B9B80(a1 + 32, a8);
        sub_6BFE30(v29, v94);
        sub_25A130((char *)v86);
        sub_25A130(v80);
        sub_6BFE30(*(__int64 *)v126, *(__int64 *)v127);
        sub_6BFE30(*(__int64 *)v112, *(__int64 *)v113);
        sub_6BFE30(*(__int64 *)v110, *(__int64 *)v111);
        sub_6BFE30(*(__int64 *)v108, *(__int64 *)v109);
        sub_6BFE30(v89, v90);
        sub_6BFE30(*(__int64 *)v106, *(__int64 *)v107);
        sub_6BFE30(*(__int64 *)v104, *(__int64 *)v105);
        sub_6BFE30(v91, v98);
        goto LABEL_54;
      }
      v50 = sub_15E1AF0(*(_QWORD *)(a1 + 448));
      v51 = v50;
      if ( v50 )
        ++*(_DWORD *)(v50 + 8);
      sub_6BFE30(*a8, a8[1]);
      *a8 = v51;
      goto LABEL_53;
    }
    v49 = sub_15E1AF0(*(_QWORD *)(a1 + 448));
    v36 = v49;
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    sub_6BFE30(*(__int64 *)v112, *(__int64 *)v113);
    *(_QWORD *)v112 = v36;
    goto LABEL_35;
  }
LABEL_54:
  sub_6BFE30((__int64)v85, v97);
  sub_6BFE30(v88, v96);
  sub_6BFE30(v83, v95);
  sub_25A130((char *)v81);
  sub_25A130(v82);
}


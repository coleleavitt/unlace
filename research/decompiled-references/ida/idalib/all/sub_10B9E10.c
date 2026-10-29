__int64 __fastcall sub_10B9E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char ***a6)
{
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r13d
  __int64 *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rcx
  __int64 *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rcx
  __int64 *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rcx
  __int64 *v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rcx
  __int64 *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rcx
  __int64 *v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rcx
  __int64 *v54; // rax
  unsigned int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // r13d
  __int64 *v61; // rsi
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // rcx
  __int64 *v67; // rax
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v72; // rcx
  __int64 *v73; // rax
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 *v78; // rcx
  __int64 *v79; // rax
  unsigned int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 *v84; // rcx
  __int64 *v85; // rax
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 *v90; // rcx
  __int64 *v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 *v96; // rcx
  __int64 *v97; // rax
  __int64 v98; // rax
  unsigned int v99; // eax
  __int64 v100; // rax
  unsigned int v101; // eax
  __int64 v102; // rax
  __m128i v103; // xmm0
  unsigned int v104; // eax
  __int64 v105; // rax
  unsigned int v106; // eax
  __int64 v107; // rax
  unsigned int v108; // eax
  __int64 v109; // rax
  unsigned int v110; // eax
  __int64 v111; // rax
  __m128i si128; // xmm0
  unsigned int v113; // eax
  __int64 v114; // rax
  unsigned int v115; // eax
  __int64 v116; // rax
  unsigned int v117; // eax
  __int64 v118; // rax
  __m128i v119; // xmm0
  unsigned int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned int v123; // eax
  __int64 v124; // rax
  unsigned int v125; // eax
  __int64 v126; // rax
  unsigned int v127; // eax
  __int64 *v128; // [rsp+10h] [rbp-58h]
  unsigned int v129; // [rsp+10h] [rbp-58h]
  unsigned int v130; // [rsp+10h] [rbp-58h]
  unsigned int v131; // [rsp+10h] [rbp-58h]
  unsigned int v132; // [rsp+10h] [rbp-58h]
  unsigned int v133; // [rsp+10h] [rbp-58h]
  unsigned int v134; // [rsp+10h] [rbp-58h]
  unsigned int v135; // [rsp+10h] [rbp-58h]
  unsigned int v136; // [rsp+10h] [rbp-58h]
  unsigned int v137; // [rsp+10h] [rbp-58h]
  unsigned int v138; // [rsp+10h] [rbp-58h]
  unsigned int v139; // [rsp+10h] [rbp-58h]
  unsigned int v140; // [rsp+10h] [rbp-58h]
  __int64 *v141; // [rsp+18h] [rbp-50h]
  __int64 *v142; // [rsp+18h] [rbp-50h]
  __int64 *v143; // [rsp+18h] [rbp-50h]
  __int64 *v144; // [rsp+18h] [rbp-50h]
  __int64 *v145; // [rsp+18h] [rbp-50h]
  __int64 *v146; // [rsp+18h] [rbp-50h]
  __int64 *v147; // [rsp+18h] [rbp-50h]
  __int64 *v148; // [rsp+18h] [rbp-50h]
  __int64 *v149; // [rsp+18h] [rbp-50h]
  __int64 *v150; // [rsp+18h] [rbp-50h]
  __int64 *v151; // [rsp+18h] [rbp-50h]
  __int64 *v152; // [rsp+18h] [rbp-50h]
  __int64 v153; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v154[8]; // [rsp+28h] [rbp-40h] BYREF

  v153 = a2;
  if ( a5 != 7 )
  {
    if ( a5 == 5 )
    {
      if ( *(_DWORD *)a4 != 1701669228 || *(_BYTE *)(a4 + 4) != 49 )
        return sub_102FFA0(a1, a2, a3, a4, a5, a6);
      v12 = sub_2244B30("bulk-memory-opt", 15);
      v13 = sub_2244CB0(a2, "bulk-memory-opt", 15, v12);
      v17 = v13;
      v128 = (__int64 *)(*(_QWORD *)a2 + 8LL * v13);
      if ( *v128 )
      {
        if ( *v128 != -8 )
        {
          sub_10298F0(v154, v128, 0);
          v18 = v154[0];
          goto LABEL_10;
        }
        --*(_DWORD *)(a2 + 16);
      }
      v98 = sub_22300B0(32, 8, v13, v14, v15, v16);
      strcpy((char *)(v98 + 16), "bulk-memory-opt");
      *(_QWORD *)v98 = 15;
      *(_BYTE *)(v98 + 8) = 0;
      *v128 = v98;
      ++*(_DWORD *)(a2 + 12);
      v99 = sub_22450D0(a2, v17);
      sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v99), 0);
      v18 = v154[0];
LABEL_10:
      *(_BYTE *)(*v18 + 8) = 1;
      v19 = sub_2244B30("call-indirect-overlong", 22);
      v20 = (unsigned int)sub_2244CB0(a2, "call-indirect-overlong", 22, v19);
      v23 = (__int64 *)(*(_QWORD *)a2 + 8 * v20);
      if ( *v23 )
      {
        if ( *v23 != -8 )
        {
          sub_10298F0(v154, v23, 0);
          v24 = v154[0];
          goto LABEL_13;
        }
        --*(_DWORD *)(a2 + 16);
      }
      v146 = v23;
      v134 = v20;
      v111 = sub_22300B0(39, 8, v20, v23, v21, v22);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A97B0);
      strcpy((char *)(v111 + 32), "erlong");
      *(__m128i *)(v111 + 16) = si128;
      *(_QWORD *)v111 = 22;
      *(_BYTE *)(v111 + 8) = 0;
      *v146 = v111;
      ++*(_DWORD *)(a2 + 12);
      v113 = sub_22450D0(a2, v134);
      sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v113), 0);
      v24 = v154[0];
LABEL_13:
      *(_BYTE *)(*v24 + 8) = 1;
      v25 = sub_2244B30("extended-const", 14);
      v26 = (unsigned int)sub_2244CB0(a2, "extended-const", 14, v25);
      v29 = (__int64 *)(*(_QWORD *)a2 + 8 * v26);
      if ( *v29 )
      {
        if ( *v29 != -8 )
        {
          sub_10298F0(v154, v29, 0);
          v30 = v154[0];
          goto LABEL_16;
        }
        --*(_DWORD *)(a2 + 16);
      }
      v145 = v29;
      v133 = v26;
      v109 = sub_22300B0(31, 8, v26, v29, v27, v28);
      strcpy((char *)(v109 + 16), "extended-const");
      *(_QWORD *)v109 = 14;
      *(_BYTE *)(v109 + 8) = 0;
      *v145 = v109;
      ++*(_DWORD *)(a2 + 12);
      v110 = sub_22450D0(a2, v133);
      sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v110), 0);
      v30 = v154[0];
LABEL_16:
      *(_BYTE *)(*v30 + 8) = 1;
      v31 = sub_2244B30("multivalue", 10);
      v32 = (unsigned int)sub_2244CB0(a2, "multivalue", 10, v31);
      v35 = (__int64 *)(*(_QWORD *)a2 + 8 * v32);
      if ( *v35 )
      {
        if ( *v35 != -8 )
        {
          sub_10298F0(v154, v35, 0);
          v36 = v154[0];
          goto LABEL_19;
        }
        --*(_DWORD *)(a2 + 16);
      }
      v144 = v35;
      v132 = v32;
      v107 = sub_22300B0(27, 8, v32, v35, v33, v34);
      strcpy((char *)(v107 + 16), "multivalue");
      *(_QWORD *)v107 = 10;
      *(_BYTE *)(v107 + 8) = 0;
      *v144 = v107;
      ++*(_DWORD *)(a2 + 12);
      v108 = sub_22450D0(a2, v132);
      sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v108), 0);
      v36 = v154[0];
LABEL_19:
      *(_BYTE *)(*v36 + 8) = 1;
      v37 = sub_2244B30("mutable-globals", 15);
      v38 = (unsigned int)sub_2244CB0(a2, "mutable-globals", 15, v37);
      v41 = (__int64 *)(*(_QWORD *)a2 + 8 * v38);
      if ( *v41 )
      {
        if ( *v41 != -8 )
        {
          sub_10298F0(v154, v41, 0);
          v42 = v154[0];
          goto LABEL_22;
        }
        --*(_DWORD *)(a2 + 16);
      }
      v143 = v41;
      v131 = v38;
      v105 = sub_22300B0(32, 8, v38, v41, v39, v40);
      strcpy((char *)(v105 + 16), "mutable-globals");
      *(_QWORD *)v105 = 15;
      *(_BYTE *)(v105 + 8) = 0;
      *v143 = v105;
      ++*(_DWORD *)(a2 + 12);
      v106 = sub_22450D0(a2, v131);
      sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v106), 0);
      v42 = v154[0];
LABEL_22:
      *(_BYTE *)(*v42 + 8) = 1;
      v43 = sub_2244B30("nontrapping-fptoint", 19);
      v44 = (unsigned int)sub_2244CB0(a2, "nontrapping-fptoint", 19, v43);
      v47 = (__int64 *)(*(_QWORD *)a2 + 8 * v44);
      if ( *v47 )
      {
        if ( *v47 != -8 )
        {
          sub_10298F0(v154, v47, 0);
          v48 = v154[0];
          goto LABEL_25;
        }
        --*(_DWORD *)(a2 + 16);
      }
      v142 = v47;
      v130 = v44;
      v102 = sub_22300B0(36, 8, v44, v47, v45, v46);
      v103 = _mm_load_si128((const __m128i *)&xmmword_23A97C0);
      *(_BYTE *)(v102 + 34) = 116;
      *(__m128i *)(v102 + 16) = v103;
      *(_WORD *)(v102 + 32) = 28265;
      *(_BYTE *)(v102 + 35) = 0;
      *(_QWORD *)v102 = 19;
      *(_BYTE *)(v102 + 8) = 0;
      *v142 = v102;
      ++*(_DWORD *)(a2 + 12);
      v104 = sub_22450D0(a2, v130);
      sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v104), 0);
      v48 = v154[0];
LABEL_25:
      *(_BYTE *)(*v48 + 8) = 1;
      v49 = sub_2244B30("sign-ext", 8);
      v50 = (unsigned int)sub_2244CB0(a2, "sign-ext", 8, v49);
      v53 = (__int64 *)(*(_QWORD *)a2 + 8 * v50);
      if ( *v53 )
      {
        if ( *v53 != -8 )
        {
          sub_10298F0(v154, v53, 0);
          v54 = v154[0];
LABEL_28:
          *(_BYTE *)(*v54 + 8) = 1;
          return sub_102FFA0(a1, a2, a3, a4, a5, a6);
        }
        --*(_DWORD *)(a2 + 16);
      }
      v141 = v53;
      v129 = v50;
      v100 = sub_22300B0(25, 8, v50, v53, v51, v52);
      strcpy((char *)(v100 + 16), "sign-ext");
      *(_QWORD *)v100 = 8;
      *(_BYTE *)(v100 + 8) = 0;
      *v141 = v100;
      ++*(_DWORD *)(a2 + 12);
      v101 = sub_22450D0(a2, v129);
      sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v101), 0);
      v54 = v154[0];
      goto LABEL_28;
    }
    if ( a5 != 13
      || *(_QWORD *)a4 != 0x676E696465656C62LL
      || *(_DWORD *)(a4 + 8) != 1734632749
      || *(_BYTE *)(a4 + 12) != 101 )
    {
      return sub_102FFA0(a1, a2, a3, a4, a5, a6);
    }
    sub_10B8F90(&v153);
    v55 = sub_2244B30("atomics", 7);
    v56 = sub_2244CB0(a2, "atomics", 7, v55);
    v60 = v56;
    v61 = (__int64 *)(*(_QWORD *)a2 + 8LL * v56);
    if ( *v61 )
    {
      if ( *v61 != -8 )
        goto LABEL_35;
      --*(_DWORD *)(a2 + 16);
    }
    v121 = sub_22300B0(24, 8, v56, v57, v58, v59);
    *(_DWORD *)(v121 + 16) = 1836020833;
    *(_WORD *)(v121 + 20) = 25449;
    *(_BYTE *)(v121 + 22) = 115;
    *(_BYTE *)(v121 + 23) = 0;
    *(_QWORD *)v121 = 7;
    *(_BYTE *)(v121 + 8) = 0;
    *v61 = v121;
    ++*(_DWORD *)(a2 + 12);
    v61 = (__int64 *)(*(_QWORD *)a2 + 8LL * (unsigned int)sub_22450D0(a2, v60));
LABEL_35:
    sub_10298F0(v154, v61, 0);
    *(_BYTE *)(*v154[0] + 8) = 1;
    v62 = sub_2244B30("exception-handling", 18);
    v63 = (unsigned int)sub_2244CB0(a2, "exception-handling", 18, v62);
    v66 = (__int64 *)(*(_QWORD *)a2 + 8 * v63);
    if ( *v66 )
    {
      if ( *v66 != -8 )
      {
        sub_10298F0(v154, v66, 0);
        v67 = v154[0];
        goto LABEL_38;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v149 = v66;
    v137 = v63;
    v118 = sub_22300B0(35, 8, v63, v66, v64, v65);
    v119 = _mm_load_si128((const __m128i *)&xmmword_23A97D0);
    strcpy((char *)(v118 + 32), "ng");
    *(__m128i *)(v118 + 16) = v119;
    *(_QWORD *)v118 = 18;
    *(_BYTE *)(v118 + 8) = 0;
    *v149 = v118;
    ++*(_DWORD *)(a2 + 12);
    v120 = sub_22450D0(a2, v137);
    sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v120), 0);
    v67 = v154[0];
LABEL_38:
    *(_BYTE *)(*v67 + 8) = 1;
    v68 = sub_2244B30("extended-const", 14);
    v69 = (unsigned int)sub_2244CB0(a2, "extended-const", 14, v68);
    v72 = (__int64 *)(*(_QWORD *)a2 + 8 * v69);
    if ( *v72 )
    {
      if ( *v72 != -8 )
      {
        sub_10298F0(v154, v72, 0);
        v73 = v154[0];
        goto LABEL_41;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v148 = v72;
    v136 = v69;
    v116 = sub_22300B0(31, 8, v69, v72, v70, v71);
    strcpy((char *)(v116 + 16), "extended-const");
    *(_QWORD *)v116 = 14;
    *(_BYTE *)(v116 + 8) = 0;
    *v148 = v116;
    ++*(_DWORD *)(a2 + 12);
    v117 = sub_22450D0(a2, v136);
    sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v117), 0);
    v73 = v154[0];
LABEL_41:
    *(_BYTE *)(*v73 + 8) = 1;
    v74 = sub_2244B30("fp16", 4);
    v75 = (unsigned int)sub_2244CB0(a2, "fp16", 4, v74);
    v78 = (__int64 *)(*(_QWORD *)a2 + 8 * v75);
    if ( *v78 )
    {
      if ( *v78 != -8 )
      {
        sub_10298F0(v154, v78, 0);
        v79 = v154[0];
        goto LABEL_44;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v147 = v78;
    v135 = v75;
    v114 = sub_22300B0(21, 8, v75, v78, v76, v77);
    strcpy((char *)(v114 + 16), "fp16");
    *(_QWORD *)v114 = 4;
    *(_BYTE *)(v114 + 8) = 0;
    *v147 = v114;
    ++*(_DWORD *)(a2 + 12);
    v115 = sub_22450D0(a2, v135);
    sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v115), 0);
    v79 = v154[0];
LABEL_44:
    *(_BYTE *)(*v79 + 8) = 1;
    v80 = sub_2244B30("multimemory", 11);
    v81 = (unsigned int)sub_2244CB0(a2, "multimemory", 11, v80);
    v84 = (__int64 *)(*(_QWORD *)a2 + 8 * v81);
    if ( *v84 )
    {
      if ( *v84 != -8 )
      {
        sub_10298F0(v154, v84, 0);
        v85 = v154[0];
        goto LABEL_47;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v152 = v84;
    v140 = v81;
    v126 = sub_22300B0(28, 8, v81, v84, v82, v83);
    strcpy((char *)(v126 + 16), "multimemory");
    *(_QWORD *)v126 = 11;
    *(_BYTE *)(v126 + 8) = 0;
    *v152 = v126;
    ++*(_DWORD *)(a2 + 12);
    v127 = sub_22450D0(a2, v140);
    sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v127), 0);
    v85 = v154[0];
LABEL_47:
    *(_BYTE *)(*v85 + 8) = 1;
    v86 = sub_2244B30("tail-call", 9);
    v87 = (unsigned int)sub_2244CB0(a2, "tail-call", 9, v86);
    v90 = (__int64 *)(*(_QWORD *)a2 + 8 * v87);
    if ( *v90 )
    {
      if ( *v90 != -8 )
      {
        sub_10298F0(v154, v90, 0);
        v91 = v154[0];
        goto LABEL_50;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v151 = v90;
    v139 = v87;
    v124 = sub_22300B0(26, 8, v87, v90, v88, v89);
    strcpy((char *)(v124 + 16), "tail-call");
    *(_QWORD *)v124 = 9;
    *(_BYTE *)(v124 + 8) = 0;
    *v151 = v124;
    ++*(_DWORD *)(a2 + 12);
    v125 = sub_22450D0(a2, v139);
    sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v125), 0);
    v91 = v154[0];
LABEL_50:
    *(_BYTE *)(*v91 + 8) = 1;
    v92 = sub_2244B30("wide-arithmetic", 15);
    v93 = (unsigned int)sub_2244CB0(a2, "wide-arithmetic", 15, v92);
    v96 = (__int64 *)(*(_QWORD *)a2 + 8 * v93);
    if ( *v96 )
    {
      if ( *v96 != -8 )
      {
        sub_10298F0(v154, v96, 0);
        v97 = v154[0];
LABEL_53:
        *(_BYTE *)(*v97 + 8) = 1;
        sub_10B9650(a2, 2u, 1);
        return sub_102FFA0(a1, a2, a3, a4, a5, a6);
      }
      --*(_DWORD *)(a2 + 16);
    }
    v150 = v96;
    v138 = v93;
    v122 = sub_22300B0(32, 8, v93, v96, v94, v95);
    strcpy((char *)(v122 + 16), "wide-arithmetic");
    *(_QWORD *)v122 = 15;
    *(_BYTE *)(v122 + 8) = 0;
    *v150 = v122;
    ++*(_DWORD *)(a2 + 12);
    v123 = sub_22450D0(a2, v138);
    sub_10298F0(v154, (__int64 *)(*(_QWORD *)a2 + 8LL * v123), 0);
    v97 = v154[0];
    goto LABEL_53;
  }
  if ( *(_DWORD *)a4 == 1701733735 && *(_WORD *)(a4 + 4) == 26994 && *(_BYTE *)(a4 + 6) == 99 )
    sub_10B8F90(&v153);
  return sub_102FFA0(a1, a2, a3, a4, a5, a6);
}

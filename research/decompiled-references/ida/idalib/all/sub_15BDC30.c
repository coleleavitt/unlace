void __fastcall sub_15BDC30(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r13
  unsigned int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // r13
  __int64 v30; // r15
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // r10d
  __int64 *v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rsi
  unsigned __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int32 v49; // eax
  __int64 v50; // r9
  void *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  __int64 v59; // r15
  unsigned int v60; // eax
  __int64 v61; // r9
  unsigned int v62; // r14d
  __int64 *v63; // r8
  __int64 v64; // r9
  __int64 v65; // r8
  _QWORD *v66; // r14
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // rax
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rbp
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rbp
  __int64 v84; // rax
  __int64 v85; // rsi
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rbx
  __int64 v93; // rsi
  unsigned __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  __int64 v100; // [rsp+8h] [rbp-F0h]
  __int64 v101; // [rsp+18h] [rbp-E0h]
  __int64 v102; // [rsp+18h] [rbp-E0h]
  __int64 v103; // [rsp+20h] [rbp-D8h]
  __int64 v104; // [rsp+20h] [rbp-D8h]
  __int64 v105; // [rsp+20h] [rbp-D8h]
  __int64 *v106; // [rsp+20h] [rbp-D8h]
  unsigned int v107; // [rsp+20h] [rbp-D8h]
  __int64 v108; // [rsp+20h] [rbp-D8h]
  __int64 v109; // [rsp+20h] [rbp-D8h]
  __int64 *v110; // [rsp+28h] [rbp-D0h]
  void *v111; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v112; // [rsp+38h] [rbp-C0h]
  _BYTE v113[32]; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v114; // [rsp+60h] [rbp-98h] BYREF
  __int64 v115; // [rsp+70h] [rbp-88h] BYREF
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __int64 v117; // [rsp+88h] [rbp-70h]
  _BYTE v118[104]; // [rsp+90h] [rbp-68h] BYREF

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL);
  v3 = v2[2188];
  ptr = v118;
  v117 = 0x600000000LL;
  v4 = sub_2244B30("element", 7);
  v5 = sub_2244CB0(v3, "element", 7, v4);
  v8 = (__int64 *)(*(_QWORD *)v3 + 8LL * v5);
  if ( !*v8 )
  {
LABEL_11:
    v16 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 104) += 24LL;
    v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v3 + 32) >= v17 + 24 && v16 )
      *(_QWORD *)(v3 + 24) = v17 + 24;
    else
      v17 = sub_986170(v3 + 24, 24, 24, 3, v6, v7);
    *(_DWORD *)(v17 + 16) = 1835363429;
    *(_WORD *)(v17 + 20) = 28261;
    *(_BYTE *)(v17 + 22) = 116;
    *(_BYTE *)(v17 + 23) = 0;
    *(_QWORD *)v17 = 7;
    *(_QWORD *)(v17 + 8) = 0;
    *v8 = v17;
    ++*(_DWORD *)(v3 + 12);
    v18 = sub_22450D0(v3, v5);
    sub_989490((__int64 **)&v114, (__int64 *)(*(_QWORD *)v3 + 8LL * v18), 0);
    v11 = *(_QWORD *)v114.m128i_i64[0];
    v12 = *(_QWORD **)(*(_QWORD *)v114.m128i_i64[0] + 8LL);
    if ( v12 )
      goto LABEL_15;
    goto LABEL_4;
  }
  if ( *v8 == -8 )
  {
    --*(_DWORD *)(v3 + 16);
    goto LABEL_11;
  }
  sub_989490((__int64 **)&v114, v8, 0);
  v11 = *(_QWORD *)v114.m128i_i64[0];
  v12 = *(_QWORD **)(*(_QWORD *)v114.m128i_i64[0] + 8LL);
  if ( v12 )
    goto LABEL_15;
LABEL_4:
  v13 = *(_QWORD *)(v3 + 120);
  if ( !v13
    || (v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v13 + 16LL))(v13, "element", 7),
        (*(_QWORD *)(v11 + 8) = v12) == 0) )
  {
    v14 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 104) += 24LL;
    v12 = (_QWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v3 + 32) >= (unsigned __int64)(v12 + 3) && v14 )
      *(_QWORD *)(v3 + 24) = v12 + 3;
    else
      v12 = (_QWORD *)sub_986170(v3 + 24, 24, 24, 3, v9, v10);
    v15 = *v12 & 0xFFFFF80000000000LL;
    v12[1] = 0;
    *v12 = v15 | 0x1FFFC05;
    *(_QWORD *)(v11 + 8) = v12;
    v12[2] = v11;
  }
LABEL_15:
  *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 5;
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
    v19 += 48;
  v20 = sub_BBE1D0(v2, v19, 0, 0, 0, 0, (__int64)v12, 0, 0, 0, 0);
  v21 = *(_QWORD *)(a1 + 16);
  v100 = v20;
  v22 = v20;
  sub_F1D250((__int64)v113, v2[2350], 0, 0);
  sub_1D3AAD0(&v114, v21, v113, 0, 0, 0);
  sub_BC48F0(v22, v2, &v114, v23, v24, v25);
  v26 = (unsigned int)v117;
  v27 = v117;
  if ( (unsigned int)v117 >= (unsigned __int64)HIDWORD(v117) )
  {
    if ( HIDWORD(v117) < (unsigned __int64)(unsigned int)v117 + 1 )
    {
      sub_2237220(&ptr, v118, (unsigned int)v117 + 1LL, 8);
      v26 = (unsigned int)v117;
    }
    *((_QWORD *)ptr + v26) = v100;
    LODWORD(v117) = v117 + 1;
  }
  else
  {
    *((_QWORD *)ptr + (unsigned int)v117) = v100;
    LODWORD(v117) = v27 + 1;
  }
  v28 = sub_A81910(v2, v2[2340], 0);
  v29 = v2[2188];
  v101 = (__int64)v28;
  v30 = v2[2340];
  v31 = sub_2244B30("element_count", 13);
  v33 = sub_2244CB0(v29, "element_count", 13, v31);
  v34 = (__int64 *)(*(_QWORD *)v29 + 8LL * v33);
  if ( !*v34 )
  {
LABEL_29:
    v41 = *(_QWORD *)(v29 + 24);
    *(_QWORD *)(v29 + 104) += 30LL;
    v42 = (v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v29 + 32) >= v42 + 30 && v41 )
    {
      *(_QWORD *)(v29 + 24) = v42 + 30;
    }
    else
    {
      v110 = v34;
      v107 = v33;
      v42 = sub_986170(v29 + 24, 30, 30, 3, v32, (__int64)v34);
      v34 = v110;
      v33 = v107;
    }
    strcpy((char *)(v42 + 16), "element_count");
    *(_QWORD *)v42 = 13;
    *(_QWORD *)(v42 + 8) = 0;
    *v34 = v42;
    ++*(_DWORD *)(v29 + 12);
    v43 = sub_22450D0(v29, v33);
    sub_989490((__int64 **)&v114, (__int64 *)(*(_QWORD *)v29 + 8LL * v43), 0);
    v36 = *(_QWORD *)v114.m128i_i64[0];
    v37 = *(_QWORD **)(*(_QWORD *)v114.m128i_i64[0] + 8LL);
    if ( v37 )
      goto LABEL_33;
    goto LABEL_22;
  }
  if ( *v34 == -8 )
  {
    --*(_DWORD *)(v29 + 16);
    goto LABEL_29;
  }
  sub_989490((__int64 **)&v114, v34, 0);
  v36 = *(_QWORD *)v114.m128i_i64[0];
  v37 = *(_QWORD **)(*(_QWORD *)v114.m128i_i64[0] + 8LL);
  if ( v37 )
    goto LABEL_33;
LABEL_22:
  v38 = *(_QWORD *)(v29 + 120);
  if ( !v38
    || (v103 = v36,
        v37 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v38 + 16LL))(
                          v38,
                          "element_count",
                          13),
        v36 = v103,
        (*(_QWORD *)(v103 + 8) = v37) == 0) )
  {
    v39 = *(_QWORD *)(v29 + 24);
    *(_QWORD *)(v29 + 104) += 24LL;
    v37 = (_QWORD *)((v39 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v29 + 32) >= (unsigned __int64)(v37 + 3) && v39 )
    {
      *(_QWORD *)(v29 + 24) = v37 + 3;
    }
    else
    {
      v109 = v36;
      v37 = (_QWORD *)sub_986170(v29 + 24, 24, 24, 3, v35, v36);
      v36 = v109;
    }
    v40 = *v37 & 0xFFFFF80000000000LL;
    v37[1] = 0;
    *v37 = v40 | 0x1FFFC05;
    *(_QWORD *)(v36 + 8) = v37;
    v37[2] = v36;
  }
LABEL_33:
  *(_WORD *)v37 = *(_WORD *)v37 & 0xFE00 | 5;
  v44 = *(_QWORD *)(a1 + 24);
  if ( v44 )
    v44 += 48;
  v45 = sub_BBE620(v2, v44, 0, 0, 0, 1, (__int64)v37, v30, 0, v101);
  v49 = sub_AAC1F0((__int64)v2, v2[2340], v46, v47, v48);
  v112 = v49;
  if ( v49 > 0x40 )
  {
    sub_2205470(&v111, 4, 0);
    v49 = v112;
    v51 = v111;
  }
  else
  {
    v111 = &byte_4;
    v51 = &byte_4;
  }
  v52 = v2[2340];
  v114.m128i_i64[0] = (__int64)v51;
  v112 = 0;
  v114.m128i_i32[2] = v49;
  v114.m128i_i8[12] = 1;
  sub_F1F190((__int64)v113, v2, (void ***)&v114, v52, 1, v50);
  if ( v114.m128i_i32[2] > 0x40u && v114.m128i_i64[0] )
    operator delete[]((void *)v114.m128i_i64[0]);
  sub_1D3AAD0(&v114, *(_QWORD *)(a1 + 16), v113, v2[2340], 0, v45);
  sub_BC4850(v45, v2, &v114, v53, v54, v55);
  v56 = (unsigned int)v117;
  if ( (unsigned int)v117 >= (unsigned __int64)HIDWORD(v117) )
  {
    if ( HIDWORD(v117) < (unsigned __int64)(unsigned int)v117 + 1 )
    {
      sub_2237220(&ptr, v118, (unsigned int)v117 + 1LL, 8);
      v56 = (unsigned int)v117;
    }
    *((_QWORD *)ptr + v56) = v45;
    v57 = (unsigned int)(v117 + 1);
    LODWORD(v117) = v117 + 1;
  }
  else
  {
    v57 = (unsigned int)(v117 + 1);
    *((_QWORD *)ptr + (unsigned int)v117) = v45;
    LODWORD(v117) = v57;
  }
  v58 = sub_BC21A0(v2, 0, 0, (__int64)ptr, v57, 0, nullptr);
  v59 = v2[2188];
  v102 = v58;
  v60 = sub_2244B30("vector", 6);
  v62 = sub_2244CB0(v59, "vector", 6, v60);
  v63 = (__int64 *)(*(_QWORD *)v59 + 8LL * v62);
  if ( !*v63 )
  {
LABEL_50:
    v72 = *(_QWORD *)(v59 + 24);
    *(_QWORD *)(v59 + 104) += 23LL;
    v73 = (v72 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v59 + 32) >= v73 + 23 && v72 )
    {
      *(_QWORD *)(v59 + 24) = v73 + 23;
    }
    else
    {
      v106 = v63;
      v73 = sub_986170(v59 + 24, 23, 23, 3, (__int64)v63, v61);
      v63 = v106;
    }
    strcpy((char *)(v73 + 16), "vector");
    *(_QWORD *)v73 = 6;
    *(_QWORD *)(v73 + 8) = 0;
    *v63 = v73;
    ++*(_DWORD *)(v59 + 12);
    v74 = sub_22450D0(v59, v62);
    sub_989490((__int64 **)&v114, (__int64 *)(*(_QWORD *)v59 + 8LL * v74), 0);
    v65 = *(_QWORD *)v114.m128i_i64[0];
    v66 = *(_QWORD **)(*(_QWORD *)v114.m128i_i64[0] + 8LL);
    if ( v66 )
      goto LABEL_54;
    goto LABEL_43;
  }
  if ( *v63 == -8 )
  {
    --*(_DWORD *)(v59 + 16);
    goto LABEL_50;
  }
  sub_989490((__int64 **)&v114, v63, 0);
  v65 = *(_QWORD *)v114.m128i_i64[0];
  v66 = *(_QWORD **)(*(_QWORD *)v114.m128i_i64[0] + 8LL);
  if ( v66 )
    goto LABEL_54;
LABEL_43:
  v67 = *(_QWORD *)(v59 + 120);
  if ( !v67
    || (v104 = v65,
        v68 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v67 + 16LL))(v67, "vector", 6),
        v65 = v104,
        v66 = (_QWORD *)v68,
        (*(_QWORD *)(v104 + 8) = v68) == 0) )
  {
    v69 = *(_QWORD *)(v59 + 24);
    *(_QWORD *)(v59 + 104) += 24LL;
    v70 = ((v69 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
    if ( *(_QWORD *)(v59 + 32) >= v70 && v69 )
    {
      *(_QWORD *)(v59 + 24) = v70;
      v66 = (_QWORD *)((v69 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v108 = v65;
      v99 = sub_986170(v59 + 24, 24, 24, 3, v65, v64);
      v65 = v108;
      v66 = (_QWORD *)v99;
    }
    v71 = *v66 & 0xFFFFF80000000000LL;
    v66[1] = 0;
    *v66 = v71 | 0x1FFFC05;
    *(_QWORD *)(v65 + 8) = v66;
    v66[2] = v65;
  }
LABEL_54:
  *(_WORD *)v66 = *(_WORD *)v66 & 0xFE00 | 5;
  v75 = v2[2340];
  v76 = *(_QWORD *)(v45 + 40);
  v114.m128i_i32[2] = 0;
  v105 = v75;
  v114.m128i_i64[0] = v76;
  sub_B85890(&v115, v76);
  v77 = sub_C0C310(v2, 0, 0, 0, v45, 0, (__int64)&v114, v105, 1, 0, 0, 0);
  v78 = sub_A77DD0((__int64)v2, 0, 0, 0, v100);
  v79 = sub_A76C00((__int64)v2, v78, v77, 0);
  v80 = sub_A81910(v2, v79, 0);
  v81 = *(_QWORD *)(a1 + 24);
  if ( v81 )
    v81 += 48;
  v82 = sub_B7A760((__int64)v2, v81, 0, 0, (__int64)v66, (__int64)v80);
  *(_BYTE *)(v82 + 29) |= 2u;
  v83 = v82;
  v84 = *(_QWORD *)(v82 + 40);
  v85 = *(_QWORD *)(a1 + 24);
  v86 = v84 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v84 & 7) != 0 )
    v86 = 0;
  if ( v85 )
    v85 += 48;
  v87 = sub_BBF8A0((unsigned __int64)v2, v85, 0, v86, v102, v83);
  *(_QWORD *)(v83 + 88) = v87;
  v92 = v87;
  *(_BYTE *)(v87 + 29) |= 2u;
  v93 = *(_QWORD *)(v83 + 16);
  if ( (v93 & 4) != 0 )
    v94 = *(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v94 = v93 & 0xFFFFFFFFFFFFFFF8LL;
  sub_B90130(v87, v94, v88, v89, v90, v91);
  sub_B94AD0((__m128i *)(*(_QWORD *)(a1 + 24) + 48LL), v92, v95, v96, v97, v98);
  if ( v112 > 0x40 && v111 )
    operator delete[](v111);
  if ( ptr != v118 )
    free(ptr);
}

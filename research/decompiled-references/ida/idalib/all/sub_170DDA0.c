void __fastcall sub_170DDA0(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __m128i v13; // xmm3
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // [rsp+8h] [rbp-350h]
  __int64 v107; // [rsp+10h] [rbp-348h] BYREF
  unsigned __int64 v108; // [rsp+18h] [rbp-340h]
  __m128i si128; // [rsp+20h] [rbp-338h]
  int v110; // [rsp+30h] [rbp-328h]
  __int128 v111; // [rsp+38h] [rbp-320h] BYREF
  __int64 v112; // [rsp+48h] [rbp-310h]
  char v113; // [rsp+50h] [rbp-308h]
  __int64 v114; // [rsp+58h] [rbp-300h]
  __int64 v115; // [rsp+60h] [rbp-2F8h]
  __int64 v116; // [rsp+68h] [rbp-2F0h]
  __m128i v117; // [rsp+70h] [rbp-2E8h] BYREF
  __int64 v118; // [rsp+80h] [rbp-2D8h]
  __int64 v119; // [rsp+88h] [rbp-2D0h]
  __int64 v120; // [rsp+90h] [rbp-2C8h]
  __int64 v121; // [rsp+98h] [rbp-2C0h]
  _BYTE *v122; // [rsp+A0h] [rbp-2B8h]
  __int64 v123; // [rsp+A8h] [rbp-2B0h]
  _BYTE v124[32]; // [rsp+B0h] [rbp-2A8h] BYREF
  _QWORD *v125; // [rsp+D0h] [rbp-288h]
  __int64 v126; // [rsp+D8h] [rbp-280h]
  int v127; // [rsp+E0h] [rbp-278h]
  char v128; // [rsp+E4h] [rbp-274h]
  _QWORD v129[3]; // [rsp+E8h] [rbp-270h] BYREF
  __int64 v130; // [rsp+100h] [rbp-258h] BYREF
  __int64 v131; // [rsp+130h] [rbp-228h] BYREF
  __int64 v132; // [rsp+138h] [rbp-220h]
  __m128i v133[3]; // [rsp+1E8h] [rbp-170h] BYREF
  __int64 v134[9]; // [rsp+218h] [rbp-140h] BYREF
  int v135[62]; // [rsp+260h] [rbp-F8h] BYREF

  v7 = (__int64 *)a1[1];
  v117.m128i_i8[4] = 0;
  v117.m128i_i32[0] = 25;
  v117.m128i_i64[1] = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v125 = v129;
  v8 = *v7;
  v124[24] = 0;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v128 = 1;
  v126 = 8;
  v127 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v105 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v105;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v106 = v10;
    v104 = v11();
    v10 = v106;
    v12 = v104;
  }
  sub_16FF270((__int64)&v131, *a1, v12, v10, (unsigned int *)&v117, a6, 0);
  sub_17038E0((__int64)&v117);
  sub_16FF160((__int64)v134, (std::__detail::_List_node_base *)v134);
  v122 = v124;
  v13 = _mm_loadu_si128(v133);
  v123 = 0x400000000LL;
  v129[1] = &v130;
  v117 = v13;
  v129[2] = 0x200000000LL;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  sub_15A2F70((__int64)&v117, (__int64)"if");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"condition");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"condition", v14, v15, v16, v17);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"ifdef");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"macro");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"macro", v18, v19, v20, v21);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"ifndef");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"macro");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"macro", v22, v23, v24, v25);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  if ( a2 )
  {
    sub_15A2F70((__int64)&v117, (__int64)"elif");
    sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v117, (__int64)"condition");
    v108 = sub_15A5CA0((__int64)&v117, (__int64)"condition", v76, v77, v78, v79);
    v111 = 0;
    v107 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v113 = v113 & 0x80 | 0x40;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    sub_1706C30((__int64)&v131, (__int64)&v107);
    sub_1705410((__int64)&v111);
    sub_15A2F70((__int64)&v117, (__int64)"elifdef");
    sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v117, (__int64)"macro");
    v108 = sub_15A5CA0((__int64)&v117, (__int64)"macro", v80, v81, v82, v83);
    v111 = 0;
    v107 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v113 = v113 & 0x80 | 0x40;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    sub_1706C30((__int64)&v131, (__int64)&v107);
    sub_1705410((__int64)&v111);
    sub_15A2F70((__int64)&v117, (__int64)"elifndef");
    sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v117, (__int64)"macro");
    v108 = sub_15A5CA0((__int64)&v117, (__int64)"macro", v84, v85, v86, v87);
    v111 = 0;
    v107 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v113 = v113 & 0x80 | 0x40;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    sub_1706C30((__int64)&v131, (__int64)&v107);
    sub_1705410((__int64)&v111);
    sub_15A2F70((__int64)&v117, (__int64)"else");
    v108 = sub_15A5CA0((__int64)&v117, (__int64)"else", v88, v89, v90, v91);
    v111 = 0;
    v107 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v113 = v113 & 0x80 | 0x40;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    sub_1706C30((__int64)&v131, (__int64)&v107);
    sub_1705410((__int64)&v111);
    sub_15A2F70((__int64)&v117, (__int64)"endif");
    v108 = sub_15A5CA0((__int64)&v117, (__int64)"endif", v92, v93, v94, v95);
    v110 = 0;
    v111 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v107 = 0;
    v112 = 0;
    v113 = v113 & 0x80 | 0x40;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    sub_1706C30((__int64)&v131, (__int64)&v107);
    sub_1705410((__int64)&v111);
  }
  sub_15A2F70((__int64)&v117, (__int64)"include");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A2FD0((__int64)&v117, (__int64)"\"");
  sub_15A3090((__int64)&v117, (__int64)"header");
  sub_15A2FD0((__int64)&v117, (__int64)"\"");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"\"", v26, v27, v28, v29);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"include");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A2FD0((__int64)&v117, (__int64)"<");
  sub_15A3090((__int64)&v117, (__int64)"header");
  sub_15A2FD0((__int64)&v117, (__int64)">");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)">", v30, v31, v32, v33);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"define");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"macro");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"macro", v34, v35, v36, v37);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"define");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"macro");
  sub_15A3210((__int64)&v117, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"args");
  sub_15A3210((__int64)&v117, 8, (char *)&byte_22F0C30);
  v108 = sub_15A5CA0((__int64)&v117, 8, v38, v39, v40, v41);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"undef");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"macro");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"macro", v42, v43, v44, v45);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"line");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"number");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"number", v46, v47, v48, v49);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"line");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"number");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A2FD0((__int64)&v117, (__int64)"\"");
  sub_15A3090((__int64)&v117, (__int64)"filename");
  sub_15A2FD0((__int64)&v117, (__int64)"\"");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"\"", v50, v51, v52, v53);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"error");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"message");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"message", v54, v55, v56, v57);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"pragma");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"arguments");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"arguments", v58, v59, v60, v61);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 2) & 4) != 0 )
  {
    sub_15A2F70((__int64)&v117, (__int64)"import");
    sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
    sub_15A2FD0((__int64)&v117, (__int64)"\"");
    sub_15A3090((__int64)&v117, (__int64)"header");
    sub_15A2FD0((__int64)&v117, (__int64)"\"");
    v108 = sub_15A5CA0((__int64)&v117, (__int64)"\"", v96, v97, v98, v99);
    v111 = 0;
    v107 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v113 = v113 & 0x80 | 0x40;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    sub_1706C30((__int64)&v131, (__int64)&v107);
    sub_1705410((__int64)&v111);
    sub_15A2F70((__int64)&v117, (__int64)"import");
    sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
    sub_15A2FD0((__int64)&v117, (__int64)"<");
    sub_15A3090((__int64)&v117, (__int64)"header");
    sub_15A2FD0((__int64)&v117, (__int64)">");
    v108 = sub_15A5CA0((__int64)&v117, (__int64)">", v100, v101, v102, v103);
    v110 = 0;
    v111 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v107 = 0;
    v112 = 0;
    v113 = v113 & 0x80 | 0x40;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    sub_1706C30((__int64)&v131, (__int64)&v107);
    sub_1705410((__int64)&v111);
  }
  sub_15A2F70((__int64)&v117, (__int64)"include_next");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A2FD0((__int64)&v117, (__int64)"\"");
  sub_15A3090((__int64)&v117, (__int64)"header");
  sub_15A2FD0((__int64)&v117, (__int64)"\"");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"\"", v62, v63, v64, v65);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"include_next");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A2FD0((__int64)&v117, (__int64)"<");
  sub_15A3090((__int64)&v117, (__int64)"header");
  sub_15A2FD0((__int64)&v117, (__int64)">");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)">", v66, v67, v68, v69);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_15A2F70((__int64)&v117, (__int64)"warning");
  sub_15A3210((__int64)&v117, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v117, (__int64)"message");
  v108 = sub_15A5CA0((__int64)&v117, (__int64)"message", v70, v71, v72, v73);
  v111 = 0;
  v107 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v113 = v113 & 0x80 | 0x40;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  sub_1706C30((__int64)&v131, (__int64)&v107);
  sub_1705410((__int64)&v111);
  sub_16FF8C0((__int64)v134, v134[1]);
  v74 = a1[1];
  v75 = 0;
  if ( v131 != v132 )
    v75 = v131;
  if ( v74 )
    sub_1700D50(*a1, v74, v135, v75, -1431655765 * ((v132 - v131) >> 5));
  sub_1704B40(&v117);
  sub_1700A70((__int64)&v131);
}

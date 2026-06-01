_BYTE *__fastcall sub_137C7C0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 *v9; // rax
  unsigned __int8 *v10; // rdi
  unsigned __int64 v11; // rsi
  bool (__fastcall *v12)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  _BYTE *v20; // rdi
  __int64 v21; // rcx
  bool (__fastcall *v22)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 *v28; // rax
  _BYTE *v29; // rdi
  bool (__fastcall *v30)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rcx
  bool (__fastcall *v39)(__int64, unsigned __int64, unsigned __int64); // r8
  char *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // esi
  unsigned int v46; // eax
  __int64 v47; // r9
  __int64 v48; // rcx
  bool (__fastcall *v49)(__int64, unsigned __int64, unsigned __int64); // r8
  char *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  int v55; // esi
  unsigned int v56; // eax
  __int64 v57; // r9
  __int64 v58; // rcx
  bool (__fastcall *v59)(__int64, unsigned __int64, unsigned __int64); // r8
  char *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // rax
  unsigned __int8 *v67; // rdi
  unsigned __int64 v68; // rsi
  bool (__fastcall *v69)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 *v75; // rax
  unsigned __int8 *v76; // rdi
  unsigned __int64 v77; // rsi
  bool (__fastcall *v78)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // rax
  unsigned __int8 *v87; // rdi
  unsigned __int64 v88; // rsi
  bool (__fastcall *v89)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int8 *v97; // rdi
  unsigned __int64 v98; // rsi
  bool (__fastcall *v99)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  unsigned __int8 *v107; // rdi
  unsigned __int64 v108; // rsi
  bool (__fastcall *v109)(__int64, unsigned __int64, unsigned __int64); // rax
  char *v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 *v115; // [rsp+0h] [rbp-108h]
  __int64 *v116; // [rsp+0h] [rbp-108h]
  __int64 *v117; // [rsp+0h] [rbp-108h]
  __int64 *v118; // [rsp+0h] [rbp-108h]
  __int64 *v119; // [rsp+0h] [rbp-108h]
  __int64 *v120; // [rsp+0h] [rbp-108h]
  __int64 *v121; // [rsp+0h] [rbp-108h]
  __int64 *v122; // [rsp+0h] [rbp-108h]
  __int64 *v123; // [rsp+0h] [rbp-108h]
  __int64 *v124; // [rsp+0h] [rbp-108h]
  __int64 *v125; // [rsp+0h] [rbp-108h]
  __int64 v126; // [rsp+8h] [rbp-100h]
  unsigned __int8 *v127; // [rsp+8h] [rbp-100h]
  unsigned __int8 *v128; // [rsp+8h] [rbp-100h]
  __m128i v129[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v130; // [rsp+30h] [rbp-D8h]
  __m128i v131[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v132[4]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v133; // [rsp+90h] [rbp-78h]
  __int64 v134; // [rsp+A0h] [rbp-68h]
  __int64 v135; // [rsp+A8h] [rbp-60h]
  __int64 v136; // [rsp+B0h] [rbp-58h]
  __int64 v137; // [rsp+B8h] [rbp-50h]
  __int64 v138; // [rsp+C0h] [rbp-48h]

  v6 = 257;
  v9 = *(__int64 **)a1;
  v10 = *(unsigned __int8 **)(a1 + 8);
  LOWORD(v138) = 257;
  v115 = v9;
  v11 = v10[10];
  v12 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v10 + 224LL);
  if ( v12 == sub_102BD50 )
  {
    if ( v11 <= v10[287] && (v11 <= 8 || ((v11 >> 3) & ((v11 >> 3) - 1)) == 0) )
      goto LABEL_43;
LABEL_3:
    v13 = "1";
    goto LABEL_4;
  }
  if ( !v12((__int64)v10, v11, v10[10]) )
    goto LABEL_3;
LABEL_43:
  v13 = "2";
LABEL_4:
  v132[0] = v13;
  v133 = 259;
  v130 = 259;
  v129[0].m128i_i64[0] = (__int64)"BOOL_LOCK_FREE";
  sub_A41580(v131, a2, v129, a4, v6, a6);
  sub_1039E30(v115, (__int64)v131, (__int64)v132, v14, v15, v16, v134, v135, v136, v137, v138);
  v19 = *(__int64 **)a1;
  v20 = *(_BYTE **)(a1 + 8);
  v21 = 257;
  LOWORD(v138) = 257;
  v116 = v19;
  v22 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v20 + 224LL);
  if ( v22 == sub_102BD50 )
  {
    if ( v20[287] <= 7u )
    {
LABEL_6:
      v23 = "1";
      goto LABEL_7;
    }
  }
  else if ( !v22((__int64)v20, 8u, 8u) )
  {
    goto LABEL_6;
  }
  v23 = "2";
LABEL_7:
  v132[0] = v23;
  v133 = 259;
  v130 = 259;
  v129[0].m128i_i64[0] = (__int64)"CHAR_LOCK_FREE";
  sub_A41580(v131, a2, v129, v21, v17, v18);
  sub_1039E30(v116, (__int64)v131, (__int64)v132, v24, v25, v26, v134, v135, v136, v137, v138);
  if ( (**(_DWORD **)(a1 + 16) & 0x20000008) == 0 )
    goto LABEL_12;
  v28 = *(__int64 **)a1;
  v29 = *(_BYTE **)(a1 + 8);
  LOWORD(v138) = 257;
  v117 = v28;
  v30 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v29 + 224LL);
  if ( v30 != sub_102BD50 )
  {
    if ( v30((__int64)v29, 8u, 8u) )
      goto LABEL_10;
LABEL_68:
    v31 = "1";
    goto LABEL_11;
  }
  if ( v29[287] <= 7u )
    goto LABEL_68;
LABEL_10:
  v31 = "2";
LABEL_11:
  v132[0] = v31;
  v133 = 259;
  v129[0].m128i_i64[0] = (__int64)"CHAR8_T_LOCK_FREE";
  v130 = 259;
  sub_A41580(v131, a2, v129, v27, 259, 259);
  sub_1039E30(v117, (__int64)v131, (__int64)v132, v32, v33, v34, v134, v135, v136, v137, v138);
LABEL_12:
  v35 = *(__int64 **)a1;
  LOWORD(v138) = 257;
  v118 = v35;
  v126 = *(_QWORD *)(a1 + 8);
  v36 = sub_102DB30((unsigned __int8 *)v126, *(_DWORD *)(v126 + 160));
  v38 = v126;
  v39 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v126 + 224LL);
  if ( v39 == sub_102BD50 )
  {
    if ( v36 <= (unsigned __int64)*(unsigned __int8 *)(v126 + 287)
      && (v36 <= 8uLL || (((unsigned __int64)v36 >> 3) & (((unsigned __int64)v36 >> 3) - 1)) == 0) )
    {
      goto LABEL_55;
    }
LABEL_14:
    v40 = "1";
    goto LABEL_15;
  }
  if ( !v39(v126, v36, v36) )
    goto LABEL_14;
LABEL_55:
  v40 = "2";
LABEL_15:
  v132[0] = v40;
  v133 = 259;
  v129[0].m128i_i64[0] = (__int64)"CHAR16_T_LOCK_FREE";
  v130 = 259;
  sub_A41580(v131, a2, v129, v38, (__int64)v39, v37);
  sub_1039E30(v118, (__int64)v131, (__int64)v132, v41, v42, v43, v134, v135, v136, v137, v138);
  v44 = *(_QWORD *)(a1 + 8);
  v45 = *(_DWORD *)(v44 + 164);
  v119 = *(__int64 **)a1;
  LOWORD(v138) = 257;
  v127 = (unsigned __int8 *)v44;
  v46 = sub_102DB30((unsigned __int8 *)v44, v45);
  v48 = (__int64)v127;
  v49 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v127 + 224LL);
  if ( v49 == sub_102BD50 )
  {
    if ( v46 <= (unsigned __int64)v127[287]
      && (v46 <= 8uLL || (((unsigned __int64)v46 >> 3) & (((unsigned __int64)v46 >> 3) - 1)) == 0) )
    {
      goto LABEL_61;
    }
LABEL_17:
    v50 = "1";
    goto LABEL_18;
  }
  if ( !v49((__int64)v127, v46, v46) )
    goto LABEL_17;
LABEL_61:
  v50 = "2";
LABEL_18:
  v132[0] = v50;
  v133 = 259;
  v129[0].m128i_i64[0] = (__int64)"CHAR32_T_LOCK_FREE";
  v130 = 259;
  sub_A41580(v131, a2, v129, v48, (__int64)v49, v47);
  sub_1039E30(v119, (__int64)v131, (__int64)v132, v51, v52, v53, v134, v135, v136, v137, v138);
  v54 = *(_QWORD *)(a1 + 8);
  v55 = *(_DWORD *)(v54 + 152);
  v120 = *(__int64 **)a1;
  LOWORD(v138) = 257;
  v128 = (unsigned __int8 *)v54;
  v56 = sub_102DB30((unsigned __int8 *)v54, v55);
  v58 = (__int64)v128;
  v59 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v128 + 224LL);
  if ( v59 == sub_102BD50 )
  {
    if ( v56 <= (unsigned __int64)v128[287]
      && (v56 <= 8uLL || (((unsigned __int64)v56 >> 3) & (((unsigned __int64)v56 >> 3) - 1)) == 0) )
    {
      goto LABEL_49;
    }
LABEL_20:
    v60 = "1";
    goto LABEL_21;
  }
  if ( !v59((__int64)v128, v56, v56) )
    goto LABEL_20;
LABEL_49:
  v60 = "2";
LABEL_21:
  v132[0] = v60;
  v133 = 259;
  v129[0].m128i_i64[0] = (__int64)"WCHAR_T_LOCK_FREE";
  v130 = 259;
  sub_A41580(v131, a2, v129, v58, (__int64)v59, v57);
  sub_1039E30(v120, (__int64)v131, (__int64)v132, v61, v62, v63, v134, v135, v136, v137, v138);
  v66 = *(__int64 **)a1;
  v67 = *(unsigned __int8 **)(a1 + 8);
  LOWORD(v138) = 257;
  v121 = v66;
  v68 = v67[12];
  v69 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v67 + 224LL);
  if ( v69 == sub_102BD50 )
  {
    if ( v68 <= v67[287] && (v68 <= 8 || ((v68 >> 3) & ((v68 >> 3) - 1)) == 0) )
      goto LABEL_64;
LABEL_23:
    v70 = "1";
    goto LABEL_24;
  }
  if ( !v69((__int64)v67, v68, v67[12]) )
    goto LABEL_23;
LABEL_64:
  v70 = "2";
LABEL_24:
  v132[0] = v70;
  v130 = 259;
  v129[0].m128i_i64[0] = (__int64)"SHORT_LOCK_FREE";
  v133 = 259;
  sub_A41580(v131, a2, v129, 259, v64, v65);
  sub_1039E30(v121, (__int64)v131, (__int64)v132, v71, v72, v73, v134, v135, v136, v137, v138);
  v75 = *(__int64 **)a1;
  LOWORD(v138) = 257;
  v76 = *(unsigned __int8 **)(a1 + 8);
  v122 = v75;
  v77 = v76[14];
  v78 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v76 + 224LL);
  if ( v78 == sub_102BD50 )
  {
    if ( v77 <= v76[287] && (v77 <= 8 || ((v77 >> 3) & ((v77 >> 3) - 1)) == 0) )
      goto LABEL_52;
LABEL_26:
    v79 = "1";
    goto LABEL_27;
  }
  if ( !v78((__int64)v76, v77, v76[14]) )
    goto LABEL_26;
LABEL_52:
  v79 = "2";
LABEL_27:
  v132[0] = v79;
  v129[0].m128i_i64[0] = (__int64)"INT_LOCK_FREE";
  v133 = 259;
  v130 = 259;
  sub_A41580(v131, a2, v129, v74, 259, 259);
  sub_1039E30(v122, (__int64)v131, (__int64)v132, v80, v81, v82, v134, v135, v136, v137, v138);
  v86 = *(__int64 **)a1;
  v87 = *(unsigned __int8 **)(a1 + 8);
  LOWORD(v138) = 257;
  v123 = v86;
  v88 = v87[30];
  v89 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v87 + 224LL);
  if ( v89 == sub_102BD50 )
  {
    if ( v88 <= v87[287] && (v88 <= 8 || ((v88 >> 3) & ((v88 >> 3) - 1)) == 0) )
      goto LABEL_58;
LABEL_29:
    v90 = "1";
    goto LABEL_30;
  }
  if ( !v89((__int64)v87, v88, v87[30]) )
    goto LABEL_29;
LABEL_58:
  v90 = "2";
LABEL_30:
  v132[0] = v90;
  v129[0].m128i_i64[0] = (__int64)"LONG_LOCK_FREE";
  v130 = 259;
  v133 = 259;
  sub_A41580(v131, a2, v129, v83, v84, v85);
  sub_1039E30(v123, (__int64)v131, (__int64)v132, v91, v92, v93, v134, v135, v136, v137, v138);
  v97 = *(unsigned __int8 **)(a1 + 8);
  v124 = *(__int64 **)a1;
  v98 = v97[32];
  LOWORD(v138) = 257;
  v99 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v97 + 224LL);
  if ( v99 == sub_102BD50 )
  {
    if ( v98 <= v97[287] && (v98 <= 8 || ((v98 >> 3) & ((v98 >> 3) - 1)) == 0) )
      goto LABEL_46;
LABEL_32:
    v100 = "1";
    goto LABEL_33;
  }
  if ( !v99((__int64)v97, v98, v98) )
    goto LABEL_32;
LABEL_46:
  v100 = "2";
LABEL_33:
  v132[0] = v100;
  v133 = 259;
  v129[0].m128i_i64[0] = (__int64)"LLONG_LOCK_FREE";
  v130 = 259;
  sub_A41580(v131, a2, v129, v94, v95, v96);
  sub_1039E30(v124, (__int64)v131, (__int64)v132, v101, v102, v103, v134, v135, v136, v137, v138);
  v107 = *(unsigned __int8 **)(a1 + 8);
  v125 = *(__int64 **)a1;
  v108 = v107[8];
  LOWORD(v138) = 257;
  v109 = *(bool (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v107 + 224LL);
  if ( v109 == sub_102BD50 )
  {
    if ( v108 > v107[287] || v108 > 8 && ((v108 >> 3) & ((v108 >> 3) - 1)) != 0 )
      goto LABEL_37;
LABEL_66:
    v110 = "2";
    goto LABEL_38;
  }
  if ( v109((__int64)v107, v108, v108) )
    goto LABEL_66;
LABEL_37:
  v110 = "1";
LABEL_38:
  v132[0] = v110;
  v130 = 259;
  v133 = 259;
  v129[0].m128i_i64[0] = (__int64)"POINTER_LOCK_FREE";
  sub_A41580(v131, a2, v129, v104, v105, v106);
  return sub_1039E30(v125, (__int64)v131, (__int64)v132, v111, v112, v113, v134, v135, v136, v137, v138);
}

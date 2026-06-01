__int64 __fastcall sub_1D30000(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // r15
  char v17; // r13
  unsigned __int16 *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rsi
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  double v33; // xmm4_8
  double v34; // xmm5_8
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  double v47; // xmm4_8
  double v48; // xmm5_8
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdi
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rbp
  unsigned __int64 v56; // rbx
  int v57; // ebx
  unsigned int v58; // r8d
  unsigned __int32 v59; // edx
  __int64 v60; // rsi
  __int64 *v61; // r9
  __int64 v62; // r10
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  const __m128i *v68; // rdx
  __int32 v69; // eax
  bool v70; // zf
  __int64 v71; // rax
  __int64 v72; // rdi
  __int8 v73; // al
  __int16 v74; // ax
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  double v79; // xmm4_8
  double v80; // xmm5_8
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r11
  int v83; // r8d
  unsigned int v84; // ebx
  unsigned __int32 v85; // edx
  __int64 v86; // rsi
  __int64 *v87; // r9
  __int64 v88; // r10
  __int64 v89; // rdi
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // [rsp+10h] [rbp-148h]
  unsigned __int64 v93; // [rsp+10h] [rbp-148h]
  __int64 v94; // [rsp+18h] [rbp-140h]
  unsigned __int64 v95; // [rsp+18h] [rbp-140h]
  __int64 v96; // [rsp+20h] [rbp-138h]
  unsigned __int64 v97; // [rsp+20h] [rbp-138h]
  __int64 v98; // [rsp+28h] [rbp-130h]
  unsigned __int64 v99; // [rsp+28h] [rbp-130h]
  unsigned __int64 v100; // [rsp+30h] [rbp-128h]
  unsigned __int64 v101; // [rsp+38h] [rbp-120h]
  unsigned __int32 v102; // [rsp+40h] [rbp-118h]
  unsigned int v103; // [rsp+48h] [rbp-110h]
  unsigned __int64 v104; // [rsp+48h] [rbp-110h]
  const __m128i *v105; // [rsp+48h] [rbp-110h]
  unsigned __int32 v106; // [rsp+48h] [rbp-110h]
  unsigned __int64 v107; // [rsp+48h] [rbp-110h]
  __int64 *v108; // [rsp+50h] [rbp-108h]
  int v109; // [rsp+50h] [rbp-108h]
  __int64 v110; // [rsp+58h] [rbp-100h]
  __int64 *v111; // [rsp+60h] [rbp-F8h]
  __int64 v112; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v113; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v115; // [rsp+88h] [rbp-D0h]
  _BYTE v116[64]; // [rsp+90h] [rbp-C8h] BYREF
  const __m128i *v117; // [rsp+D0h] [rbp-88h] BYREF
  __int32 v118; // [rsp+D8h] [rbp-80h]
  __int64 v119; // [rsp+E0h] [rbp-78h]
  __int64 v120; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v121; // [rsp+F0h] [rbp-68h]
  __int8 v122; // [rsp+F4h] [rbp-64h]
  char v123; // [rsp+F8h] [rbp-60h]
  __int16 v124; // [rsp+100h] [rbp-58h]
  __m128 v125; // [rsp+108h] [rbp-50h]
  char v126; // [rsp+118h] [rbp-40h]

  v16 = *a1;
  v17 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v17 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v64 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v64 + 601) = 1;
      *(_BYTE *)(v64 + 603) = 1;
    }
  }
  v18 = *(unsigned __int16 **)(a2 + 8);
  if ( v18 )
  {
    v19 = sub_1D2FA60(a1, v18, nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
    if ( v19 == 1 )
    {
LABEL_4:
      v20 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v19 = 0;
  }
  v23 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 16), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v23 == 1 )
    goto LABEL_4;
  v28 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
  v29 = *(_DWORD *)(v28 + 520);
  ptr = v116;
  v115 = 0x800000000LL;
  if ( v29 )
    sub_1900F90(&ptr, (char **)(v28 + 512));
  v92 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 24), nullptr, a3, a4, a5, a6, v26, v27, a9, a10, v22, v24, v25);
  if ( v92 == 1 )
    goto LABEL_28;
  v94 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 32), nullptr, a3, a4, a5, a6, v33, v34, a9, a10, v30, v31, v32);
  if ( v94 == 1 )
    goto LABEL_28;
  v38 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 40), a3, a4, v35, v36, v37);
  if ( v38 == 1 )
    goto LABEL_28;
  v42 = v38 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v42 )
    goto LABEL_15;
  v65 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v42, 0, a3, a4);
  if ( v65 == 1 )
    goto LABEL_28;
  if ( (v65 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v96 = sub_19A3EF0(*a1, v65 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_15:
    v96 = 0;
  v43 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 48), a3, a4, v39, v40, v41);
  if ( v43 == 1 )
    goto LABEL_28;
  v49 = v43 & 0xFFFFFFFFFFFFFFFELL;
  v98 = v49;
  if ( v49 )
    v98 = sub_19A3EF0(*a1, v49);
  v50 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 56), nullptr, a3, a4, a5, a6, v47, v48, a9, a10, v44, v45, v46);
  if ( v50 == 1 )
    goto LABEL_28;
  v51 = v19;
  v52 = v92;
  v53 = *a1;
  v93 = v50 & 0xFFFFFFFFFFFFFFFELL;
  v54 = v51 & 0xFFFFFFFFFFFFFFFELL;
  v55 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v100 = v54;
  v101 = v52 & 0xFFFFFFFFFFFFFFFELL;
  v95 = v94 & 0xFFFFFFFFFFFFFFFELL;
  v97 = v96 & 0xFFFFFFFFFFFFFFFELL;
  v56 = v98 & 0xFFFFFFFFFFFFFFFELL;
  v99 = v98 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632)
    && *(_QWORD *)(a2 + 8) == v54
    && *(_QWORD *)(a2 + 16) == v55
    && *(_QWORD *)(a2 + 24) == v101
    && *(_QWORD *)(a2 + 32) == v95
    && *(_QWORD *)(a2 + 40) == v97
    && *(_QWORD *)(a2 + 48) == v56
    && *(_QWORD *)(a2 + 56) == v93 )
  {
    v20 = a2 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_43;
  }
  v57 = *(_DWORD *)(a2 + 84);
  v58 = *(_DWORD *)(a2 + 80);
  v59 = *(_DWORD *)(a2 + 76);
  v60 = *(unsigned int *)(a2 + 72);
  v61 = (__int64 *)ptr;
  v62 = (unsigned int)v115;
  if ( (*(_WORD *)v55 & 0x1FF) != 0xF5 )
    goto LABEL_40;
  v63 = *(_QWORD *)(v55 + 8);
  if ( (v63 & 1) != 0 || (*(_BYTE *)(v63 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_40;
  v108 = (__int64 *)ptr;
  v110 = (unsigned int)v115;
  v103 = *(_DWORD *)(a2 + 80);
  v102 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v63 + 28) < 0 )
  {
LABEL_26:
    if ( *(_QWORD *)(a2 + 56) == v93 )
    {
      v20 = 0;
      goto LABEL_43;
    }
    sub_17A5050(v53, *(_QWORD *)(v93 + 8));
LABEL_28:
    v20 = 1;
    goto LABEL_29;
  }
  v66 = (_QWORD *)sub_B73640(v63);
  v59 = v102;
  v58 = v103;
  v61 = v108;
  v62 = v110;
  v60 = (unsigned int)v60;
  if ( (*(_DWORD *)v66 & 0x10000) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
    v53 = *a1;
LABEL_40:
    v67 = sub_1C415E0(v53, v60, v59, v100, v58, v55, a3, a4, v101, v95, v97, v99, v93, v57, 1, v61, v62);
    goto LABEL_41;
  }
  if ( v100 )
    v67 = sub_1CC44F0(a1, v100, *(double *)a3.m128_u64);
  else
    v67 = sub_1A89A90(*(__int64 **)(*a1 + 736), (unsigned int)v60, v93, v66, v57, a3, a4);
LABEL_41:
  v53 = *a1;
  if ( v67 == 1 )
    goto LABEL_26;
  v20 = v67 & 0xFFFFFFFFFFFFFFFELL;
LABEL_43:
  v68 = *(const __m128i **)(v53 + 744);
  v69 = v68[2].m128i_i32[0];
  v70 = v68[4].m128i_i8[0] == 0;
  v117 = v68;
  v118 = v69;
  v71 = v68[2].m128i_i64[1];
  v123 = 0;
  v119 = v71;
  if ( v70 )
  {
    v72 = (__int64)v68;
  }
  else
  {
    v121 = v68[3].m128i_u32[2];
    if ( v121 > 0x40 )
    {
      v105 = v68;
      sub_2205510(&v120);
      v68 = v105;
      v72 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v72 = (__int64)v68;
      v120 = v68[3].m128i_i64[0];
    }
    v73 = v68[3].m128i_i8[12];
    v123 = 1;
    v122 = v73;
  }
  v74 = v68[4].m128i_i16[4];
  a3 = (__m128)_mm_loadu_si128(v68 + 5);
  v75 = *(unsigned int *)(a2 + 72);
  v126 = 1;
  v124 = v74;
  v125 = a3;
  sub_1AAA2E0(v72, v75, a2, v20);
  v81 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 64), nullptr, a3, a4, a5, a6, v79, v80, a9, a10, v76, v77, v78);
  if ( v81 == 1 )
    goto LABEL_48;
  v104 = v81;
  sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 72), v81, *(double *)a3.m128_u64);
  v82 = v104 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(a2 + 64) == (v104 & 0xFFFFFFFFFFFFFFFELL) || v20 != a2 )
  {
LABEL_53:
    if ( v20 != a2 )
      v20 = sub_1C3E180(*a1, v20, v82);
    goto LABEL_49;
  }
  v83 = *(_DWORD *)(a2 + 84);
  v84 = *(_DWORD *)(a2 + 80);
  v85 = *(_DWORD *)(a2 + 76);
  v86 = *(unsigned int *)(a2 + 72);
  v87 = (__int64 *)ptr;
  v88 = (unsigned int)v115;
  if ( (*(_WORD *)v55 & 0x1FF) != 0xF5 )
    goto LABEL_70;
  v89 = *(_QWORD *)(v55 + 8);
  if ( (v89 & 1) != 0 || (*(_BYTE *)(v89 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_70;
  v111 = (__int64 *)ptr;
  v112 = (unsigned int)v115;
  v113 = v104 & 0xFFFFFFFFFFFFFFFELL;
  v109 = *(_DWORD *)(a2 + 84);
  v106 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v89 + 28) < 0 )
    goto LABEL_48;
  v90 = (_QWORD *)sub_B73640(v89);
  v85 = v106;
  v83 = v109;
  v82 = v113;
  v87 = v111;
  v88 = v112;
  v86 = (unsigned int)v86;
  if ( (*(_DWORD *)v90 & 0x10000) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 34 )
  {
    if ( v100 )
      v91 = sub_1CC44F0(a1, v100, *(double *)a3.m128_u64);
    else
      v91 = sub_1A89A90(*(__int64 **)(*a1 + 736), (unsigned int)v86, v93, v90, v109, a3, a4);
    v82 = v113;
  }
  else
  {
LABEL_70:
    v107 = v82;
    v91 = sub_1C415E0(*a1, v86, v85, v100, v84, v55, a3, a4, v101, v95, v97, v99, v93, v83, 1, v87, v88);
    v82 = v107;
  }
  if ( v91 != 1 )
  {
    v20 = v91 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_53;
  }
LABEL_48:
  v20 = 1;
LABEL_49:
  sub_15354C0((__int64)&v117);
LABEL_29:
  if ( ptr != v116 )
  {
    free(ptr);
    if ( !v17 )
      return v20;
LABEL_31:
    sub_190D5E0(v16, a3);
    return v20;
  }
LABEL_5:
  if ( v17 )
    goto LABEL_31;
  return v20;
}

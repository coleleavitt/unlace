__int64 __fastcall sub_1DB3150(
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
  char v17; // r14
  unsigned __int16 *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // r9
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rdx
  _BYTE *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  double v48; // xmm4_8
  double v49; // xmm5_8
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r12
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rbx
  int v57; // ebx
  unsigned int v58; // r8d
  unsigned __int32 v59; // edx
  __int64 v60; // rsi
  __int64 *v61; // r9
  __int64 v62; // r10
  __int64 v63; // rax
  __int64 v64; // rax
  size_t v65; // rdx
  unsigned __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rbx
  const __m128i *v70; // rdx
  __int32 v71; // eax
  bool v72; // zf
  __int64 v73; // rax
  __int64 v74; // rdi
  __int8 v75; // al
  __int16 v76; // ax
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  double v81; // xmm4_8
  double v82; // xmm5_8
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r11
  int v85; // r8d
  unsigned int v86; // ebx
  unsigned __int32 v87; // edx
  __int64 v88; // rsi
  __int64 *v89; // r9
  __int64 v90; // r10
  __int64 v91; // rdi
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // [rsp+10h] [rbp-148h]
  unsigned __int64 v95; // [rsp+10h] [rbp-148h]
  __int64 v96; // [rsp+18h] [rbp-140h]
  unsigned __int64 v97; // [rsp+18h] [rbp-140h]
  unsigned int v98; // [rsp+18h] [rbp-140h]
  unsigned int v99; // [rsp+18h] [rbp-140h]
  __int64 v100; // [rsp+20h] [rbp-138h]
  unsigned __int64 v101; // [rsp+20h] [rbp-138h]
  __int64 v102; // [rsp+28h] [rbp-130h]
  unsigned __int64 v103; // [rsp+28h] [rbp-130h]
  unsigned __int64 v104; // [rsp+30h] [rbp-128h]
  unsigned __int64 v105; // [rsp+38h] [rbp-120h]
  unsigned __int32 v106; // [rsp+40h] [rbp-118h]
  unsigned int v107; // [rsp+48h] [rbp-110h]
  unsigned __int64 v108; // [rsp+48h] [rbp-110h]
  const __m128i *v109; // [rsp+48h] [rbp-110h]
  unsigned __int32 v110; // [rsp+48h] [rbp-110h]
  unsigned __int64 v111; // [rsp+48h] [rbp-110h]
  __int64 *v112; // [rsp+50h] [rbp-108h]
  int v113; // [rsp+50h] [rbp-108h]
  __int64 v114; // [rsp+58h] [rbp-100h]
  __int64 *v115; // [rsp+60h] [rbp-F8h]
  __int64 v116; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v117; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v119; // [rsp+88h] [rbp-D0h]
  _BYTE dest[64]; // [rsp+90h] [rbp-C8h] BYREF
  const __m128i *v121; // [rsp+D0h] [rbp-88h] BYREF
  __int32 v122; // [rsp+D8h] [rbp-80h]
  __int64 v123; // [rsp+E0h] [rbp-78h]
  __int64 v124; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v125; // [rsp+F0h] [rbp-68h]
  __int8 v126; // [rsp+F4h] [rbp-64h]
  char v127; // [rsp+F8h] [rbp-60h]
  __int16 v128; // [rsp+100h] [rbp-58h]
  __m128 v129; // [rsp+108h] [rbp-50h]
  char v130; // [rsp+118h] [rbp-40h]

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
    v19 = sub_1DAD2E0(a1, v18, nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
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
  v94 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 16), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v94 == 1 )
    goto LABEL_4;
  v26 = *a1;
  v27 = dest;
  ptr = dest;
  v28 = *(_QWORD *)(v26 + 4616) + 640LL * *(unsigned int *)(v26 + 4624) - 640;
  v29 = *(unsigned int *)(v28 + 520);
  v119 = 0x800000000LL;
  if ( (_DWORD)v29 && &ptr != (void **)(v28 + 512) )
  {
    v65 = 8LL * (unsigned int)v29;
    if ( (unsigned int)v29 <= 8uLL
      || (v99 = v29,
          sub_2237220(&ptr, dest, (unsigned int)v29, 8),
          v29 = v99,
          v27 = ptr,
          (v65 = 8LL * *(unsigned int *)(v28 + 520)) != 0) )
    {
      v98 = v29;
      memcpy(v27, *(const void **)(v28 + 512), v65);
      v29 = v98;
    }
    LODWORD(v119) = v29;
  }
  v33 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 24), nullptr, a3, a4, a5, a6, v24, v25, a9, a10, v22, v29, v23);
  if ( v33 == 1 )
    goto LABEL_27;
  v96 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 32), nullptr, a3, a4, a5, a6, v34, v35, a9, a10, v30, v31, v32);
  if ( v96 == 1 )
    goto LABEL_27;
  v39 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 40), a3, a4, v36, v37, v38);
  if ( v39 == 1 )
    goto LABEL_27;
  v43 = v39 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v43 )
    goto LABEL_14;
  v66 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v43, 0, a3, a4);
  if ( v66 == 1 )
    goto LABEL_27;
  if ( (v66 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v100 = sub_19A3EF0(*a1, v66 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_14:
    v100 = 0;
  v44 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 48), a3, a4, v40, v41, v42);
  if ( v44 == 1 )
    goto LABEL_27;
  v50 = v44 & 0xFFFFFFFFFFFFFFFELL;
  v102 = v50;
  if ( v50 )
    v102 = sub_19A3EF0(*a1, v50);
  v51 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 56), nullptr, a3, a4, a5, a6, v48, v49, a9, a10, v45, v46, v47);
  if ( v51 == 1 )
    goto LABEL_27;
  v52 = *a1;
  v105 = v33 & 0xFFFFFFFFFFFFFFFELL;
  v53 = v94;
  v54 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v95 = v51 & 0xFFFFFFFFFFFFFFFELL;
  v97 = v96 & 0xFFFFFFFFFFFFFFFELL;
  v55 = v53 & 0xFFFFFFFFFFFFFFFELL;
  v104 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v101 = v100 & 0xFFFFFFFFFFFFFFFELL;
  v56 = v102 & 0xFFFFFFFFFFFFFFFELL;
  v103 = v102 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632)
    && *(_QWORD *)(a2 + 8) == v54
    && *(_QWORD *)(a2 + 16) == v55
    && *(_QWORD *)(a2 + 24) == v105
    && *(_QWORD *)(a2 + 32) == v97
    && *(_QWORD *)(a2 + 40) == v101
    && *(_QWORD *)(a2 + 48) == v56
    && *(_QWORD *)(a2 + 56) == v95 )
  {
    v69 = a2 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_48;
  }
  v57 = *(_DWORD *)(a2 + 84);
  v58 = *(_DWORD *)(a2 + 80);
  v59 = *(_DWORD *)(a2 + 76);
  v60 = *(unsigned int *)(a2 + 72);
  v61 = (__int64 *)ptr;
  v62 = (unsigned int)v119;
  if ( (*(_WORD *)v55 & 0x1FF) != 0xF5 )
    goto LABEL_45;
  v63 = *(_QWORD *)(v55 + 8);
  if ( (v63 & 1) != 0 || (*(_BYTE *)(v63 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_45;
  v112 = (__int64 *)ptr;
  v114 = (unsigned int)v119;
  v107 = *(_DWORD *)(a2 + 80);
  v106 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v63 + 28) < 0 )
  {
LABEL_25:
    if ( *(_QWORD *)(a2 + 56) == v95 )
    {
      v69 = 0;
      goto LABEL_48;
    }
    sub_17A5050(v52, *(_QWORD *)(v95 + 8));
LABEL_27:
    v20 = 1;
    goto LABEL_28;
  }
  v67 = (_QWORD *)sub_B73640(v63);
  v59 = v106;
  v58 = v107;
  v61 = v112;
  v62 = v114;
  v60 = (unsigned int)v60;
  if ( (*(_DWORD *)v67 & 0x10000) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
    v52 = *a1;
LABEL_45:
    v68 = sub_1C415E0(v52, v60, v59, v104, v58, v55, a3, a4, v105, v97, v101, v103, v95, v57, 1, v61, v62);
    goto LABEL_46;
  }
  if ( v104 )
    v68 = sub_1D87920(a1, v104, *(double *)a3.m128_u64);
  else
    v68 = sub_1A89A90(*(__int64 **)(*a1 + 736), (unsigned int)v60, v95, v67, v57, a3, a4);
LABEL_46:
  v52 = *a1;
  if ( v68 == 1 )
    goto LABEL_25;
  v69 = v68 & 0xFFFFFFFFFFFFFFFELL;
LABEL_48:
  v70 = *(const __m128i **)(v52 + 744);
  v71 = v70[2].m128i_i32[0];
  v72 = v70[4].m128i_i8[0] == 0;
  v121 = v70;
  v122 = v71;
  v73 = v70[2].m128i_i64[1];
  v127 = 0;
  v123 = v73;
  if ( v72 )
  {
    v74 = (__int64)v70;
  }
  else
  {
    v125 = v70[3].m128i_u32[2];
    if ( v125 > 0x40 )
    {
      v109 = v70;
      sub_2205510(&v124);
      v70 = v109;
      v74 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v74 = (__int64)v70;
      v124 = v70[3].m128i_i64[0];
    }
    v75 = v70[3].m128i_i8[12];
    v127 = 1;
    v126 = v75;
  }
  v76 = v70[4].m128i_i16[4];
  a3 = (__m128)_mm_loadu_si128(v70 + 5);
  v77 = *(unsigned int *)(a2 + 72);
  v130 = 1;
  v128 = v76;
  v129 = a3;
  sub_1AAA2E0(v74, v77, a2, v69);
  v83 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 64), nullptr, a3, a4, a5, a6, v81, v82, a9, a10, v78, v79, v80);
  if ( v83 == 1 )
    goto LABEL_53;
  v108 = v83;
  sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 72), v83, *(double *)a3.m128_u64);
  v84 = v108 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(a2 + 64) == (v108 & 0xFFFFFFFFFFFFFFFELL) || v69 != a2 )
  {
LABEL_58:
    if ( a2 == v69 )
      v20 = a2;
    else
      v20 = sub_1C3E180(*a1, v69, v84);
    goto LABEL_54;
  }
  v85 = *(_DWORD *)(a2 + 84);
  v86 = *(_DWORD *)(a2 + 80);
  v87 = *(_DWORD *)(a2 + 76);
  v88 = *(unsigned int *)(a2 + 72);
  v89 = (__int64 *)ptr;
  v90 = (unsigned int)v119;
  if ( (*(_WORD *)v55 & 0x1FF) != 0xF5 )
    goto LABEL_76;
  v91 = *(_QWORD *)(v55 + 8);
  if ( (v91 & 1) != 0 || (*(_BYTE *)(v91 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_76;
  v115 = (__int64 *)ptr;
  v116 = (unsigned int)v119;
  v117 = v108 & 0xFFFFFFFFFFFFFFFELL;
  v113 = *(_DWORD *)(a2 + 84);
  v110 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v91 + 28) < 0 )
    goto LABEL_53;
  v92 = (_QWORD *)sub_B73640(v91);
  v87 = v110;
  v85 = v113;
  v84 = v117;
  v89 = v115;
  v90 = v116;
  v88 = (unsigned int)v88;
  if ( (*(_DWORD *)v92 & 0x10000) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v92[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 34 )
  {
    if ( v104 )
      v93 = sub_1D87920(a1, v104, *(double *)a3.m128_u64);
    else
      v93 = sub_1A89A90(*(__int64 **)(*a1 + 736), (unsigned int)v88, v95, v92, v113, a3, a4);
    v84 = v117;
  }
  else
  {
LABEL_76:
    v111 = v84;
    v93 = sub_1C415E0(*a1, v88, v87, v104, v86, v55, a3, a4, v105, v97, v101, v103, v95, v85, 1, v89, v90);
    v84 = v111;
  }
  if ( v93 != 1 )
  {
    v69 = v93 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_58;
  }
LABEL_53:
  v20 = 1;
LABEL_54:
  sub_15354C0((__int64)&v121);
LABEL_28:
  if ( ptr != dest )
  {
    free(ptr);
    if ( !v17 )
      return v20;
LABEL_30:
    sub_190D5E0(v16, a3);
    return v20;
  }
LABEL_5:
  if ( v17 )
    goto LABEL_30;
  return v20;
}

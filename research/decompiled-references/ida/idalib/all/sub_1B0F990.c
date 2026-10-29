unsigned __int64 __fastcall sub_1B0F990(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v11; // rbp
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r11
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  size_t v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 *v36; // r13
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  size_t v45; // rax
  unsigned __int64 v46; // r13
  size_t v47; // rax
  _QWORD *v48; // rax
  unsigned __int64 v49; // rax
  size_t v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // rdi
  unsigned int v53; // esi
  unsigned __int64 v54; // rax
  size_t v55; // rax
  unsigned __int64 v56; // r13
  size_t v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r13
  __int64 *v65; // rbp
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  bool v74; // al
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rbx
  __int64 v81; // rsi
  unsigned __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  bool v87; // al
  _BOOL4 v88; // edx
  unsigned int v89; // r9d
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rax
  _QWORD *v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rsi
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // [rsp+8h] [rbp-100h]
  unsigned __int64 v109; // [rsp+8h] [rbp-100h]
  unsigned int v110; // [rsp+8h] [rbp-100h]
  unsigned int v111; // [rsp+8h] [rbp-100h]
  unsigned int v112; // [rsp+8h] [rbp-100h]
  unsigned __int64 v113; // [rsp+8h] [rbp-100h]
  unsigned int v114; // [rsp+8h] [rbp-100h]
  _QWORD *v115; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v116; // [rsp+10h] [rbp-F8h]
  __int64 v117; // [rsp+10h] [rbp-F8h]
  __int64 v120; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v121; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v122; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v123; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v124; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v125; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v126; // [rsp+30h] [rbp-D8h]
  __int64 v127; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v128; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v129; // [rsp+38h] [rbp-D0h]
  _QWORD v130[25]; // [rsp+40h] [rbp-C8h] BYREF

  v130[0] = *(_QWORD *)(a1[8] + 48LL);
  v11 = sub_C1BEF0((__int64)v130, a2, a3, a4);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !sub_9EC890(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14, v15)
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
    && (*(_BYTE *)(*(_QWORD *)(*a1 + 232LL) + 1LL) & 8) == 0 )
  {
    return 0;
  }
  v108 = (_QWORD *)a1[10];
  v115 = (_QWORD *)a1[11];
  if ( *((_BYTE *)a1 + 124) )
  {
    v16 = a3 + 120LL * (unsigned int)(*((_DWORD *)a1 + 30) - 1);
    v17 = *(_QWORD *)(v16 + 88);
    if ( !v17 )
      return 0;
    v120 = a3 + 120LL * (unsigned int)(*((_DWORD *)a1 + 30) - 1);
    if ( !*(_QWORD *)(v16 + 96) )
      return 0;
    v18 = sub_190C990(*a1, *((_DWORD *)a1 + 6), *((_DWORD *)a1 + 6), v17, *(double *)a7.m128_u64, a8);
    if ( v18 <= 1 )
      return 0;
    v21 = sub_1929BB0(
            *a1,
            a2,
            *((unsigned int *)a1 + 6),
            0x15u,
            *(_QWORD *)(v120 + 24),
            (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL),
            a7,
            a8,
            0);
    if ( v21 <= 1 )
      return 0;
    v22 = sub_1929BB0(*a1, a2, *((unsigned int *)a1 + 6), 0x20u, v21 & 0xFFFFFFFFFFFFFFFELL, v108, a7, a8, 0);
    if ( v22 <= 1 )
      return 0;
    v23 = sub_190C990(
            *a1,
            *((_DWORD *)a1 + 6),
            *((_DWORD *)a1 + 6),
            v22 & 0xFFFFFFFFFFFFFFFELL,
            *(double *)a7.m128_u64,
            a8);
    if ( v23 <= 1 )
      return 0;
    v126 = v23;
    v24 = sub_190C990(*a1, *((_DWORD *)a1 + 6), *((_DWORD *)a1 + 6), *(_QWORD *)(v120 + 96), *(double *)a7.m128_u64, a8);
    if ( v24 <= 1 )
      return 0;
    v128 = v126;
    v127 = v120;
    v121 = sub_1929BB0(
             *a1,
             a2,
             *((unsigned int *)a1 + 6),
             0x15u,
             *(_QWORD *)(v120 + 24),
             (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFELL),
             a7,
             a8,
             0);
    if ( v121 <= 1 )
      return 0;
    v25 = sub_1929BB0(*a1, a2, *((unsigned int *)a1 + 6), 0x20u, v121 & 0xFFFFFFFFFFFFFFFELL, v108, a7, a8, 0);
    if ( v25 <= 1 )
      return 0;
    v122 = sub_190C990(
             *a1,
             *((_DWORD *)a1 + 6),
             *((_DWORD *)a1 + 6),
             v25 & 0xFFFFFFFFFFFFFFFELL,
             *(double *)a7.m128_u64,
             a8);
    if ( v122 <= 1 )
      return 0;
    v26 = j__strlen(".lb_min");
    v109 = sub_1B00390((_QWORD *)*a1, (_QWORD *)(v128 & 0xFFFFFFFFFFFFFFFELL), a6, ".lb_min", v26, a7, a8)
         & 0xFFFFFFFFFFFFFFFELL;
    v27 = j__strlen(".lb_max");
    v28 = sub_1B00390((_QWORD *)*a1, (_QWORD *)(v122 & 0xFFFFFFFFFFFFFFFELL), a6, ".lb_max", v27, a7, a8);
    if ( !v109 )
      return 0;
    if ( (v28 & 0xFFFFFFFFFFFFFFFELL) == 0 )
      return 0;
    v123 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v29 = sub_1929BB0(*a1, a2, *((unsigned int *)a1 + 6), 0xAu, v109, (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
    if ( v29 <= 1 )
      return 0;
    v129 = v29;
    v30 = j__strlen(".min_less_max");
    v31 = sub_1B00390((_QWORD *)*a1, (_QWORD *)(v129 & 0xFFFFFFFFFFFFFFFELL), a6, ".min_less_max", v30, a7, a8)
        & 0xFFFFFFFFFFFFFFFELL;
    if ( !v31 )
      return 0;
    if ( *((_BYTE *)a1 + 104) )
    {
      v32 = v109;
      v33 = v123;
    }
    else
    {
      v33 = v109;
      v32 = v123;
    }
    v34 = sub_1923BC0(*a1, *((_DWORD *)a1 + 6), *((unsigned int *)a1 + 6), v31, v32, v33, a7, a8);
    if ( v34 <= 1 )
      return 0;
    v35 = sub_1929BB0(
            *a1,
            a2,
            *((unsigned int *)a1 + 6),
            0x15u,
            *(_QWORD *)(v127 + 24),
            (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFELL),
            a7,
            a8,
            0);
    if ( v35 <= 1 )
      return 0;
    v108 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ( *((_BYTE *)a1 + 132) )
  {
    v36 = (__int64 *)(a3 + 120LL * (unsigned int)(*((_DWORD *)a1 + 32) - 1));
    v37 = v36[11];
    if ( !v37 )
      return 0;
    if ( !v36[12] )
      return 0;
    v38 = sub_190C990(*a1, *((_DWORD *)a1 + 6), *((_DWORD *)a1 + 6), v37, *(double *)a7.m128_u64, a8);
    if ( v38 <= 1 )
      return 0;
    v39 = sub_1929BB0(
            *a1,
            a2,
            *((unsigned int *)a1 + 6),
            0x15u,
            v36[3],
            (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFELL),
            a7,
            a8,
            0);
    if ( v39 <= 1 )
      return 0;
    v40 = sub_1929BB0(*a1, a2, *((unsigned int *)a1 + 6), 0x20u, v39 & 0xFFFFFFFFFFFFFFFELL, v115, a7, a8, 0);
    if ( v40 <= 1 )
      return 0;
    v124 = sub_190C990(
             *a1,
             *((_DWORD *)a1 + 6),
             *((_DWORD *)a1 + 6),
             v40 & 0xFFFFFFFFFFFFFFFELL,
             *(double *)a7.m128_u64,
             a8);
    if ( v124 <= 1 )
      return 0;
    v41 = sub_190C990(*a1, *((_DWORD *)a1 + 6), *((_DWORD *)a1 + 6), v36[12], *(double *)a7.m128_u64, a8);
    if ( v41 <= 1 )
      return 0;
    v42 = sub_1929BB0(
            *a1,
            a2,
            *((unsigned int *)a1 + 6),
            0x15u,
            v36[3],
            (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFELL),
            a7,
            a8,
            0);
    if ( v42 <= 1 )
      return 0;
    v43 = sub_1929BB0(*a1, a2, *((unsigned int *)a1 + 6), 0x20u, v42 & 0xFFFFFFFFFFFFFFFELL, v115, a7, a8, 0);
    if ( v43 <= 1 )
      return 0;
    v44 = sub_190C990(
            *a1,
            *((_DWORD *)a1 + 6),
            *((_DWORD *)a1 + 6),
            v43 & 0xFFFFFFFFFFFFFFFELL,
            *(double *)a7.m128_u64,
            a8);
    if ( v44 <= 1 )
      return 0;
    v116 = v44;
    v45 = j__strlen(".ub_min");
    v46 = sub_1B00390((_QWORD *)*a1, (_QWORD *)(v124 & 0xFFFFFFFFFFFFFFFELL), a6, ".ub_min", v45, a7, a8)
        & 0xFFFFFFFFFFFFFFFELL;
    v47 = j__strlen(".ub_max");
    v48 = (_QWORD *)(sub_1B00390((_QWORD *)*a1, (_QWORD *)(v116 & 0xFFFFFFFFFFFFFFFELL), a6, ".ub_max", v47, a7, a8)
                   & 0xFFFFFFFFFFFFFFFELL);
    if ( !v46 )
      return 0;
    if ( !v48 )
      return 0;
    v117 = (__int64)v48;
    v49 = sub_1929BB0(*a1, a2, *((unsigned int *)a1 + 6), 0xBu, v46, v48, a7, a8, 0);
    if ( v49 <= 1 )
      return 0;
    v125 = v49;
    v50 = j__strlen(".min_greater_max");
    v51 = sub_1B00390((_QWORD *)*a1, (_QWORD *)(v125 & 0xFFFFFFFFFFFFFFFELL), a6, ".min_greater_max", v50, a7, a8)
        & 0xFFFFFFFFFFFFFFFELL;
    if ( !v51 )
      return 0;
    v52 = *a1;
    v53 = *((_DWORD *)a1 + 6);
    if ( *((_BYTE *)a1 + 104) )
    {
      v54 = sub_1923BC0(v52, v53, v53, v51, v46, v117, a7, a8);
      if ( v54 <= 1 )
        return 0;
    }
    else
    {
      v54 = sub_1923BC0(v52, v53, v53, v51, v117, v46, a7, a8);
      if ( v54 <= 1 )
        return 0;
    }
    v115 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ( !*((_BYTE *)a1 + 104) )
  {
    v93 = v115;
    v115 = v108;
    v108 = v93;
  }
  v55 = j__strlen(".upper");
  v56 = sub_1B00390((_QWORD *)*a1, v115, a6, ".upper", v55, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
  v57 = j__strlen(".lower");
  v58 = sub_1B00390((_QWORD *)*a1, v108, a6, ".lower", v57, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
  if ( !v56 )
    return 0;
  if ( !v58 )
    return 0;
  v59 = sub_1B0EA60(
          (_QWORD *)*a1,
          a2,
          *((_DWORD *)a1 + 6),
          v58,
          v56,
          (_QWORD *)a1[12],
          a7,
          a8,
          v11,
          *((_BYTE *)a1 + 106),
          1u,
          a6);
  if ( v59 <= 1 )
    return 0;
  v19 = v59 & 0xFFFFFFFFFFFFFFFELL;
  v64 = *(_QWORD *)(*a1 + 248LL);
  v65 = (__int64 *)(*(_QWORD *)((v59 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !sub_F61A60(*v12, a2, v60, v61, v62, v63) )
  {
    if ( sub_9EC890(*v65, a2, v66, v67, v68) )
      goto LABEL_55;
    goto LABEL_51;
  }
  v94 = sub_A97D20(v64, *v65);
  v95 = *v12;
  v113 = v94;
  v96 = sub_A97D20(v64, *v12);
  v100 = *v65;
  if ( v113 <= v96 )
  {
    if ( sub_9EC890(v100, v95, v97, v98, v99) )
      goto LABEL_55;
LABEL_51:
    v69 = *v65;
    v110 = sub_A97D20(v64, *v65);
    v74 = sub_F65320(*v65, v69, v70, v71, v72, v73);
    v75 = v110;
    goto LABEL_52;
  }
  sub_9EC890(v100, v95, v97, v98, v99);
  v101 = *v12;
  v114 = sub_A97D20(v64, *v12);
  v74 = sub_F65320(*v12, v101, v102, v103, v104, v105);
  v75 = v114;
LABEL_52:
  v76 = sub_A64980(v64, v75, v74);
  v65 = (__int64 *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
  v77 = *(_QWORD *)&byte_8[*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v77 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v77 | (unsigned __int8)*(_QWORD *)(v19 + 8)) & 7) != (*(_QWORD *)&byte_8[v76 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v76 | (unsigned __int8)*(_QWORD *)&byte_8[v76 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
  {
    v78 = sub_1BFA490(*a1, v19, v76, 3, 1);
    if ( v78 > 1 )
    {
      v19 = v78 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_55;
    }
    return 0;
  }
LABEL_55:
  if ( a5 )
  {
    v79 = sub_A97D20(v64, *v65);
    v80 = (-(__int64)(v79 < 0x21) & 0xFFFFFFFFFFFFFFE0LL) + 64;
    v111 = v79 < 0x21 ? 32 : 64;
    if ( v80 != sub_A97D20(v64, *v65) )
    {
      v81 = *v65;
      v82 = sub_A97D20(v64, *v65);
      v86 = v111;
      if ( v80 < v82 )
      {
        sub_168B9F0((__int64)v130, (__int64 *)(*a1 + 8LL), *((_DWORD *)a1 + 6), 0x1C34u, 0);
        v107 = sub_15884C0((__int64)v130, a1 + 5);
        v81 = (__int64)(a1 + 6);
        sub_15884C0(v107, a1 + 6);
        sub_15F7200(v130);
        v86 = v111;
      }
      v112 = v86;
      v87 = sub_F65320(*v65, v81, v83, v84, v85, v86);
      v88 = 1;
      v89 = v112;
      if ( !v87 )
      {
        v106 = sub_A97D20(v64, *v65);
        v89 = v112;
        v88 = v80 > v106;
      }
      v90 = sub_A64980(v64, v89, v88);
      v91 = *(_QWORD *)&byte_8[*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v91 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v91 | (unsigned __int8)*(_QWORD *)(v19 + 8)) & 7) != (*(_QWORD *)&byte_8[v90 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v90 | (unsigned __int8)*(_QWORD *)&byte_8[v90 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
      {
        v92 = sub_1BFA490(*a1, v19, v90, 3, 1);
        v19 = 0;
        if ( v92 > 1 )
          return v92 & 0xFFFFFFFFFFFFFFFELL;
      }
    }
  }
  return v19;
}

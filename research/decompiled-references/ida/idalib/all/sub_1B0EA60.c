unsigned __int64 __fastcall sub_1B0EA60(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        char a10,
        unsigned __int8 a11,
        __int64 a12)
{
  unsigned __int64 v15; // rbx
  size_t v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // r8
  char v26; // r14
  char v27; // r13
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  void **v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r14
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rax
  unsigned int v52; // r13d
  unsigned int v53; // r13d
  bool v54; // al
  unsigned __int8 v55; // al
  unsigned int v56; // eax
  unsigned int v57; // r13d
  char v58; // r14
  char v59; // r13
  unsigned int v60; // eax
  void *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // r13
  unsigned __int64 v67; // r13
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rbp
  char v75; // r14
  bool v76; // al
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  char v81; // [rsp+20h] [rbp-148h]
  unsigned __int64 v82; // [rsp+20h] [rbp-148h]
  unsigned __int64 v83; // [rsp+20h] [rbp-148h]
  unsigned __int8 v84; // [rsp+28h] [rbp-140h]
  __int64 *v85; // [rsp+28h] [rbp-140h]
  char v86; // [rsp+28h] [rbp-140h]
  char v87; // [rsp+30h] [rbp-138h]
  unsigned __int8 v88; // [rsp+30h] [rbp-138h]
  unsigned __int8 v89; // [rsp+30h] [rbp-138h]
  void *v90; // [rsp+38h] [rbp-130h]
  unsigned int v91; // [rsp+38h] [rbp-130h]
  char v92; // [rsp+38h] [rbp-130h]
  unsigned int v94; // [rsp+4Ch] [rbp-11Ch]
  __int64 v95; // [rsp+58h] [rbp-110h] BYREF
  void *v96; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v97; // [rsp+68h] [rbp-100h]
  char v98; // [rsp+6Ch] [rbp-FCh]
  void *v99; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v100; // [rsp+78h] [rbp-F0h]
  char v101; // [rsp+7Ch] [rbp-ECh]
  void *v102; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int v103; // [rsp+88h] [rbp-E0h]
  char v104; // [rsp+8Ch] [rbp-DCh]
  void *v105; // [rsp+90h] [rbp-D8h] BYREF
  unsigned int v106; // [rsp+98h] [rbp-D0h]
  char v107; // [rsp+9Ch] [rbp-CCh]
  void *v108; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v109; // [rsp+A8h] [rbp-C0h]
  char v110; // [rsp+ACh] [rbp-BCh]
  char v111; // [rsp+B0h] [rbp-B8h]

  v15 = 0;
  v16 = j__strlen(".new_step");
  v17 = sub_1B00390(a1, a6, a12, ".new_step", v16, a7, a8);
  if ( v17 <= 1 )
    return v15;
  v21 = v17;
  v22 = a1[31];
  v97 = 1;
  v96 = nullptr;
  v98 = 0;
  v100 = 1;
  v99 = nullptr;
  v101 = 0;
  sub_C3EB00((__int64)&v108, a4, v22, nullptr, v18, v19);
  v81 = a11 ^ 1;
  if ( v111 )
  {
    if ( v109 <= 0x40 )
    {
      v97 = v109;
      v96 = v108;
    }
    else
    {
      sub_22056A0(&v96, &v108);
    }
    v98 = v110;
    sub_98E4B0((__int64)&v108);
    sub_C3EB00((__int64)&v108, (unsigned __int64)a6, a1[31], nullptr, v35, v36);
    v25 = v111;
    if ( !v111 )
    {
      sub_98E4B0((__int64)&v108);
      v84 = 0;
      v28 = 0;
      if ( v81 )
        goto LABEL_32;
      if ( !a10 )
      {
        v28 = 0;
        goto LABEL_41;
      }
      v84 = 0;
LABEL_82:
      v56 = v100;
      if ( v97 >= v100 )
        v56 = v97;
      v57 = v56 + 1;
      sub_C16810((__int64)&v108, (__int64)&v96, v56 + 1);
      if ( v97 > 0x40 && v96 )
        operator delete[](v96);
      v98 = 0;
      v96 = v108;
      v97 = v109;
      sub_C16810((__int64)&v108, (__int64)&v99, v57);
      if ( v100 > 0x40 && v99 )
        operator delete[](v99);
      v101 = 0;
      v99 = v108;
      v100 = v109;
      sub_2205A70(&v96, &v99);
      v58 = v98;
      sub_2206A40(&v108, &v96);
      v107 = v58;
      v106 = v109;
      v105 = v108;
      sub_C16810((__int64)&v108, (__int64)&v105, v57);
      if ( v109 <= 0x40 )
      {
        v26 = v96 == v108;
      }
      else
      {
        v26 = sub_2205D70(&v108, &v96);
        if ( v108 )
          operator delete[](v108);
      }
      if ( v106 > 0x40 && v105 )
        operator delete[](v105);
      v59 = v98;
      sub_2206A40(&v108, &v96);
      v60 = v109;
      v61 = v108;
      if ( v97 > 0x40 && v96 )
      {
        v94 = v109;
        v90 = v108;
        operator delete[](v96);
        v60 = v94;
        v61 = v90;
      }
      v96 = v61;
      v97 = v60;
      v98 = v59;
      if ( !a10 )
        goto LABEL_100;
      v91 = v60 + 1;
      sub_C16810((__int64)&v108, (__int64)&v96, v60 + 1);
      sub_C18DB0((__int64)&v96, (__int64)&v108);
      if ( v109 <= 0x40 )
      {
LABEL_115:
        v98 = 0;
        sub_2205900(&v96);
        if ( !v26 )
        {
LABEL_116:
          v92 = v98;
          sub_2206A40(&v108, &v96);
          v106 = v109;
          v107 = v92;
          v105 = v108;
          sub_C18DB0((__int64)&v96, (__int64)&v105);
          if ( v106 > 0x40 && v105 )
            operator delete[](v105);
LABEL_100:
          v27 = v26;
          goto LABEL_6;
        }
LABEL_137:
        v75 = v98;
        sub_2206A40(&v108, &v96);
        v107 = v75;
        v106 = v109;
        v105 = v108;
        sub_C16810((__int64)&v108, (__int64)&v105, v91);
        if ( v109 <= 0x40 )
        {
          v26 = v108 == v96;
        }
        else
        {
          v26 = sub_2205D70(&v108, &v96);
          if ( v108 )
            operator delete[](v108);
        }
        if ( v106 > 0x40 && v105 )
          operator delete[](v105);
        goto LABEL_116;
      }
LABEL_113:
      if ( v108 )
        operator delete[](v108);
      goto LABEL_115;
    }
    v84 = a11 ^ 1;
  }
  else
  {
    sub_98E4B0((__int64)&v108);
    sub_C3EB00((__int64)&v108, (unsigned __int64)a6, a1[31], nullptr, v23, v24);
    v25 = 0;
    v26 = v111;
    if ( !v111 )
    {
      v27 = 0;
      sub_98E4B0((__int64)&v108);
      v84 = 0;
      goto LABEL_6;
    }
    v84 = 0;
  }
  if ( v100 <= 0x40 && v109 <= 0x40 )
  {
    v100 = v109;
    v99 = v108;
  }
  else
  {
    v87 = v25;
    sub_22056A0(&v99, &v108);
    v25 = v87;
  }
  v88 = v25;
  v101 = v110;
  sub_98E4B0((__int64)&v108);
  v28 = v88;
  if ( v84 )
  {
    v28 = a11;
LABEL_32:
    v89 = v28;
    if ( a10 )
    {
      v26 = sub_1AF0130((__int64 *)&v96);
      if ( v26 )
      {
LABEL_34:
        v81 = v26;
        v27 = 0;
        goto LABEL_6;
      }
      v81 = a10;
      goto LABEL_111;
    }
    v26 = v98;
    if ( v98 )
      goto LABEL_34;
    v54 = sub_1AE7A00((__int64 *)&v96);
    v28 = v89;
    v81 = v54;
    if ( !v54 )
    {
      v27 = 0;
      v81 = 1;
      v26 = 1;
      goto LABEL_6;
    }
    v55 = v89;
    v28 = v84;
LABEL_81:
    v84 = v28;
    if ( v55 )
      goto LABEL_82;
LABEL_41:
    v31 = (void **)a5;
    v84 = v28;
    v37 = a1[31];
    v104 = 0;
    v103 = 1;
    v102 = nullptr;
    sub_C3EB00((__int64)&v108, a5, v37, nullptr, v28, v29);
    v27 = v111;
    if ( !v111 )
    {
      sub_98E4B0((__int64)&v108);
      goto LABEL_43;
    }
    v27 = 0;
    v26 = 0;
    goto LABEL_53;
  }
  if ( v88 )
  {
    if ( !a10 )
    {
      v55 = a11;
      goto LABEL_81;
    }
    if ( !a11 )
    {
      v84 = a10;
LABEL_111:
      v91 = v97 + 1;
      sub_C16810((__int64)&v108, (__int64)&v96, v97 + 1);
      sub_C18DB0((__int64)&v96, (__int64)&v108);
      if ( v109 <= 0x40 )
      {
        v98 = 0;
        sub_2205900(&v96);
        goto LABEL_137;
      }
      v26 = 1;
      goto LABEL_113;
    }
    v84 = a11;
    goto LABEL_82;
  }
  v27 = 0;
  v26 = 0;
  v84 = 1;
LABEL_6:
  v30 = a1[31];
  v31 = (void **)a5;
  v103 = 1;
  v102 = nullptr;
  v104 = 0;
  sub_C3EB00((__int64)&v108, a5, v30, nullptr, v28, v29);
  if ( !v111 )
  {
    sub_98E4B0((__int64)&v108);
    if ( v26 && (v98 || !sub_1AE7A00((__int64 *)&v96)) )
      goto LABEL_10;
    goto LABEL_43;
  }
LABEL_53:
  if ( v103 <= 0x40 && v109 <= 0x40 )
  {
    v103 = v109;
    v102 = v108;
  }
  else
  {
    v31 = &v108;
    sub_22056A0(&v102, &v108);
  }
  v104 = v110;
  sub_98E4B0((__int64)&v108);
  if ( v26 )
  {
    if ( !v81 && !v84 )
      goto LABEL_10;
    v52 = v103;
    if ( v97 >= v103 )
      v52 = v97;
    v53 = v52 + 1;
    sub_C16810((__int64)&v108, (__int64)&v96, v53);
    sub_C18DB0((__int64)&v96, (__int64)&v108);
    if ( v109 > 0x40 && v108 )
      operator delete[](v108);
    v98 = 0;
    sub_C16810((__int64)&v108, (__int64)&v102, v53);
    sub_C18DB0((__int64)&v102, (__int64)&v108);
    if ( v109 > 0x40 && v108 )
      operator delete[](v108);
    v104 = 0;
    sub_2205A70(&v102, &v96);
    v86 = v104;
    sub_2206A40(&v108, &v102);
    v31 = &v105;
    v106 = v109;
    v107 = v86;
    v105 = v108;
    sub_C16810((__int64)&v108, (__int64)&v105, v53);
    if ( v109 <= 0x40 )
    {
      v27 = v108 == v102;
    }
    else
    {
      v31 = &v102;
      v27 = sub_2205D70(&v108, &v102);
      if ( v108 )
        operator delete[](v108);
    }
    if ( v106 > 0x40 && v105 )
      operator delete[](v105);
    if ( v27 )
    {
LABEL_10:
      if ( !a4 || !a5 )
        goto LABEL_16;
      goto LABEL_12;
    }
  }
LABEL_43:
  v38 = *(_QWORD *)(a9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v38 + 17) & 4) != 0 || !sub_9EC890(v38, (__int64)v31, v32, v33, v34) )
    goto LABEL_10;
  v85 = (__int64 *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v39 = (__int64 *)(*(_QWORD *)(a5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v40 = sub_A97D20(a1[31], *v85);
  v41 = *v39;
  v82 = v40;
  v42 = sub_A97D20(a1[31], *v39);
  if ( v42 >= v82 )
  {
    v83 = v42;
    v76 = sub_F65320(*v39, v41, v43, (__int64)v85, v44, v45);
    v47 = v83;
    if ( !v76 )
      goto LABEL_12;
    v46 = a1[31];
  }
  else
  {
    if ( !sub_F65320(*v85, v41, v43, (__int64)v85, v44, v45) )
      goto LABEL_12;
    v46 = a1[31];
    v47 = (unsigned int)v82;
  }
  v48 = sub_A64980(v46, v47, 0);
  v49 = sub_190C990((__int64)a1, a3, a3, a5, *(double *)a7.m128_u64, a8);
  v50 = sub_1BFA490(a1, v49 & 0xFFFFFFFFFFFFFFFELL, v48, 3, 0) & 0xFFFFFFFFFFFFFFFELL;
  a4 = sub_190C990((__int64)a1, a3, a3, a4, *(double *)a7.m128_u64, a8) & 0xFFFFFFFFFFFFFFFELL;
  v51 = sub_190C990((__int64)a1, a3, a3, v21 & 0xFFFFFFFFFFFFFFFELL, *(double *)a7.m128_u64, a8);
  v21 = v51;
  if ( !a4 || !v50 || v51 == 1 )
    goto LABEL_16;
  a5 = v50;
LABEL_12:
  if ( v27 )
  {
    if ( a11 )
    {
      a4 = sub_1929BB0(
             (__int64)a1,
             a2,
             a3,
             6u,
             a4 & 0xFFFFFFFFFFFFFFFELL,
             (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL),
             a7,
             a8,
             0);
      if ( a4 <= 1 )
        goto LABEL_16;
      if ( !a10 )
        goto LABEL_126;
    }
    else if ( !a10 )
    {
      if ( a4 == 1 )
      {
LABEL_16:
        v15 = 0;
        goto LABEL_17;
      }
      goto LABEL_126;
    }
    v70 = sub_18C1B30((__int64)a1, 0, 1);
    a4 = sub_1929BB0(
           (__int64)a1,
           a2,
           a3,
           5u,
           a4 & 0xFFFFFFFFFFFFFFFELL,
           (_QWORD *)(v70 & 0xFFFFFFFFFFFFFFFELL),
           a7,
           a8,
           0);
    if ( a4 <= 1 )
      goto LABEL_16;
LABEL_126:
    v71 = sub_190C990((__int64)a1, a3, a3, a4 & 0xFFFFFFFFFFFFFFFELL, *(double *)a7.m128_u64, a8);
    if ( v71 <= 1 )
      goto LABEL_16;
    v72 = sub_1929BB0((__int64)a1, a2, a3, 6u, a5, (_QWORD *)(v71 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
    goto LABEL_128;
  }
  v66 = sub_1929BB0((__int64)a1, a2, a3, 6u, a5, (_QWORD *)a4, a7, a8, 0);
  if ( v66 <= 1 )
  {
    if ( sub_F63270(*(_QWORD *)(a9 & 0xFFFFFFFFFFFFFFF0LL), a2, v62, v63, v64, v65) )
    {
      v73 = sub_EEB7E0(a5, a2, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v108, a1 + 1, v73, 0x11BDu, 0);
      v95 = sub_EEC8C0(a5, (__int64)(a1 + 1), *(double *)a7.m128_u64);
      v74 = sub_1587DB0((__int64)&v108, &v95);
      v105 = (void *)sub_EEC8C0(a4, (__int64)&v95, *(double *)a7.m128_u64);
      sub_1587DB0(v74, (__int64 *)&v105);
      sub_15F7200(&v108);
    }
    goto LABEL_16;
  }
  v67 = v66 & 0xFFFFFFFFFFFFFFFELL;
  if ( a10 )
  {
    v77 = sub_18C1B30((__int64)a1, 0, 1);
    v78 = sub_1929BB0((__int64)a1, a2, a3, 6u, v67, (_QWORD *)(v77 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
    if ( v78 <= 1 )
      goto LABEL_16;
    v67 = v78 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( !a11 )
    goto LABEL_106;
  v72 = sub_1929BB0((__int64)a1, a2, a3, 5u, v67, (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
LABEL_128:
  if ( v72 <= 1 )
    goto LABEL_16;
  v67 = v72 & 0xFFFFFFFFFFFFFFFELL;
LABEL_106:
  v68 = sub_190C990((__int64)a1, a3, a3, v67, *(double *)a7.m128_u64, a8);
  if ( v68 <= 1 )
    goto LABEL_16;
  v69 = sub_1929BB0(
          (__int64)a1,
          a2,
          a3,
          3u,
          v68 & 0xFFFFFFFFFFFFFFFELL,
          (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL),
          a7,
          a8,
          0);
  if ( v69 <= 1 )
    goto LABEL_16;
  v15 = v69 & 0xFFFFFFFFFFFFFFFELL;
LABEL_17:
  if ( v103 > 0x40 && v102 )
    operator delete[](v102);
  if ( v100 > 0x40 && v99 )
    operator delete[](v99);
  if ( v97 > 0x40 && v96 )
    operator delete[](v96);
  return v15;
}

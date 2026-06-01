__int64 __fastcall sub_C3DEA0(__int64 a1, __int64 **a2, __int64 a3)
{
  _DWORD **v5; // rbx
  unsigned __int64 v6; // r13
  _DWORD *v7; // rbp
  bool v8; // zf
  __int64 v9; // rbp
  unsigned int v10; // r13d
  int v11; // eax
  void *v12; // r14
  int v13; // eax
  void *v14; // r14
  void *v15; // r13
  void *v16; // r13
  _OWORD *v17; // rax
  unsigned int v18; // eax
  __int64 *v19; // rsi
  __int64 *v20; // r13
  void (__fastcall ***v21)(void *); // rbp
  __int64 v22; // rax
  void (***v23)(void); // rdi
  __int64 *v24; // rsi
  unsigned int v25; // edx
  unsigned int v26; // eax
  _DWORD **v27; // rcx
  void (__fastcall ***v28)(void *); // rbp
  __int64 *v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 *v33; // rbp
  unsigned __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 *v37; // rbp
  unsigned __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 *v41; // rbp
  unsigned __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 *v45; // rbp
  unsigned __int64 v46; // r12
  __int64 v47; // rsi
  __int64 v48; // rdi
  void *v49; // rbp
  void *v50; // rbp
  void *v51; // rbp
  __int64 result; // rax
  void *v53; // r12
  char *v54; // rbp
  char *v55; // r13
  void *v56; // r14
  void *v57; // r14
  char *v58; // rsi
  void *v59; // r12
  char *v60; // rbp
  char *v61; // r13
  void *v62; // r14
  void *v63; // r14
  char *v64; // rsi
  __int64 *v65; // rbx
  unsigned __int64 v66; // rbp
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 *v73; // rbx
  unsigned __int64 v74; // rbp
  __int64 v75; // rsi
  __int64 v76; // rdi
  int v77; // r15d
  __int64 v78; // rax
  _QWORD *v79; // rdi
  __int64 v80; // rax
  __int64 i; // rax
  __int64 v83; // [rsp+10h] [rbp-318h]
  _DWORD **v84; // [rsp+20h] [rbp-308h]
  __int64 v85; // [rsp+20h] [rbp-308h]
  _QWORD v86[2]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v87[2]; // [rsp+40h] [rbp-2E8h] BYREF
  void *v88[2]; // [rsp+50h] [rbp-2D8h] BYREF
  _QWORD v89[2]; // [rsp+60h] [rbp-2C8h] BYREF
  __m128i v90; // [rsp+70h] [rbp-2B8h] BYREF
  char v91[16]; // [rsp+80h] [rbp-2A8h] BYREF
  char v92[24]; // [rsp+90h] [rbp-298h] BYREF
  char v93[48]; // [rsp+A8h] [rbp-280h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-250h]
  __int64 *v95; // [rsp+E0h] [rbp-248h]
  __int64 v96; // [rsp+E8h] [rbp-240h]
  __int64 v97; // [rsp+F0h] [rbp-238h]
  __int64 v98; // [rsp+F8h] [rbp-230h]
  __int64 v99; // [rsp+100h] [rbp-228h]
  __int64 v100; // [rsp+108h] [rbp-220h]
  __int64 *v101; // [rsp+110h] [rbp-218h]
  void *v102; // [rsp+118h] [rbp-210h]
  unsigned int v103; // [rsp+120h] [rbp-208h]
  void *v104; // [rsp+130h] [rbp-1F8h]
  unsigned int v105; // [rsp+138h] [rbp-1F0h]
  char v106[16]; // [rsp+148h] [rbp-1E0h] BYREF
  char v107[16]; // [rsp+158h] [rbp-1D0h] BYREF
  char v108[16]; // [rsp+168h] [rbp-1C0h] BYREF
  char v109[16]; // [rsp+178h] [rbp-1B0h] BYREF
  char v110[16]; // [rsp+188h] [rbp-1A0h] BYREF
  char v111[32]; // [rsp+198h] [rbp-190h] BYREF
  int v112; // [rsp+1B8h] [rbp-170h] BYREF
  __int64 v113; // [rsp+1C0h] [rbp-168h]
  __int64 *v114; // [rsp+1C8h] [rbp-160h]
  void *ptr; // [rsp+1D0h] [rbp-158h]
  __int64 v116; // [rsp+1D8h] [rbp-150h]
  int v117; // [rsp+1E0h] [rbp-148h]
  __int64 v118; // [rsp+1E8h] [rbp-140h]
  __int64 *v119; // [rsp+1F0h] [rbp-138h]
  _BYTE v120[128]; // [rsp+1F8h] [rbp-130h] BYREF
  _BYTE v121[56]; // [rsp+278h] [rbp-B0h] BYREF
  __int64 v122; // [rsp+2B0h] [rbp-78h]
  __int64 *v123; // [rsp+2B8h] [rbp-70h]
  __int64 v124; // [rsp+2C0h] [rbp-68h]
  __int64 *v125; // [rsp+2C8h] [rbp-60h]
  __int64 v126; // [rsp+2D0h] [rbp-58h]
  __int64 *v127; // [rsp+2D8h] [rbp-50h]
  unsigned __int64 v128; // [rsp+2E0h] [rbp-48h]
  void *v129; // [rsp+2E8h] [rbp-40h]

  sub_EE4F60("nla2bv");
  sub_EE5110("nla2bv");
  v5 = *(_DWORD ***)a3;
  v6 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 < v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = v7[8]-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v6 )
          goto LABEL_7;
      }
      ++v5;
      sub_ED44E0(v7);
      sub_186B220(v7);
    }
    while ( (unsigned __int64)v5 < v6 );
  }
LABEL_7:
  *(_DWORD *)(a3 + 8) = 0;
  v83 = a1 + 16;
  v9 = **a2;
  v90.m128i_i8[8] = 1;
  v90.m128i_i64[0] = v9;
  sub_16669D0(v91, v9);
  sub_16744A0(v92, v9);
  v10 = sub_1859960(a1 + 16, "nla2bv_max_bv_size", 0xFFFFFFFFLL);
  v11 = sub_1859960(a1 + 16, "nla2bv_divisor", 2);
  v88[0] = nullptr;
  v88[1] = nullptr;
  v89[0] = 1;
  v12 = qword_1C7F2C0;
  v89[1] = 0;
  if ( v11 < 0 )
    sub_1830C40(qword_1C7F2C0, v88, (unsigned int)v11);
  else
    LODWORD(v88[0]) = v11;
  sub_182CBA0(v12, v89);
  BYTE4(v89[0]) &= ~1u;
  LODWORD(v89[0]) = 1;
  v13 = sub_1859960(v83, "nla2bv_root", 2);
  v86[0] = 0;
  v14 = qword_1C7F2C0;
  v86[1] = 0;
  v87[0] = 1;
  v87[1] = 0;
  if ( v13 < 0 )
    sub_1830C40(qword_1C7F2C0, v86, (unsigned int)v13);
  else
    LODWORD(v86[0]) = v13;
  sub_182CBA0(v14, v87);
  BYTE4(v87[0]) &= ~1u;
  LODWORD(v87[0]) = 1;
  sub_C50BC0(v93, v9, v86, v88, v10);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v86);
  sub_182CBA0(v15, v87);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v88);
  sub_182CBA0(v16, v89);
  v112 = sub_1859960(v83, "nla2bv_max_bv_size", 0xFFFFFFFFLL);
  v113 = v9;
  v114 = nullptr;
  v17 = (_OWORD *)sub_186B270(0x80u);
  ptr = v17;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  v116 = 8;
  v117 = 0;
  v118 = v9;
  v119 = nullptr;
  sub_CB1CC0(&v112, v83);
  sub_F735C0(v120, v9);
  sub_1694970(v121, v9);
  v122 = v9;
  v123 = nullptr;
  v124 = v9;
  v125 = nullptr;
  v126 = v9;
  v127 = nullptr;
  v129 = nullptr;
  v18 = sub_1859960(v83, "nla2bv_bv_size", 4);
  v19 = *a2;
  *(_QWORD *)(a1 + 24) = &v90;
  v88[0] = nullptr;
  v128 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 224).m128i_u64[0];
  sub_C3CAE0(&v90, (__int64)v19, v88);
  v20 = *a2;
  v21 = (void (__fastcall ***)(void *))v88[0];
  v22 = sub_1336AB0((*a2)[1], v88[0]);
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v23 = (void (***)(void))v20[1];
  if ( v23 )
  {
    v8 = (*((_DWORD *)v23 + 2))-- == 1;
    if ( v8 )
    {
      v85 = v22;
      (**v23)();
      sub_186B220(v23);
      v22 = v85;
    }
  }
  v24 = *a2;
  v20[1] = v22;
  if ( v24 )
    ++*((_DWORD *)v24 + 8);
  v25 = *(_DWORD *)(a3 + 8);
  v26 = *(_DWORD *)(a3 + 12);
  if ( v25 >= v26 )
  {
    v77 = 2 * v26;
    v78 = sub_186B270(16LL * v26);
    v25 = *(_DWORD *)(a3 + 8);
    v79 = *(_QWORD **)a3;
    v27 = (_DWORD **)v78;
    if ( v25 )
    {
      if ( v25 - 1 <= 2 || (_QWORD *)v78 == v79 + 1 )
      {
        for ( i = 0; i != v25; ++i )
          v27[i] = (_DWORD *)v79[i];
      }
      else
      {
        v80 = 0;
        do
        {
          *(__m128i *)&v27[v80] = _mm_loadu_si128((const __m128i *)&v79[v80]);
          v80 += 2;
        }
        while ( 2LL * (v25 >> 1) != v80 );
        if ( (v25 & 1) != 0 )
          v27[v25 & 0xFFFFFFFE] = (_DWORD *)v79[v25 & 0xFFFFFFFE];
      }
    }
    if ( v79 != (_QWORD *)(a3 + 16) && v79 )
    {
      v84 = v27;
      sub_186B220(v79);
      v25 = *(_DWORD *)(a3 + 8);
      v27 = v84;
    }
    *(_QWORD *)a3 = v27;
    *(_DWORD *)(a3 + 12) = v77;
  }
  else
  {
    v27 = *(_DWORD ***)a3;
  }
  v27[v25] = v24;
  *(_DWORD *)(a3 + 8) = v25 + 1;
  if ( v21 )
  {
    v8 = (*((_DWORD *)v21 + 2))-- == 1;
    if ( v8 )
    {
      (**v21)(v21);
      sub_186B220(v21);
    }
  }
  v28 = (void (__fastcall ***)(void *))v129;
  *(_QWORD *)(a1 + 24) = 0;
  if ( v28 )
  {
    v8 = (*((_DWORD *)v28 + 2))-- == 1;
    if ( v8 )
    {
      (**v28)(v28);
      sub_186B220(v28);
    }
  }
  v29 = v127;
  if ( v127 )
  {
    v30 = (unsigned __int64)&v127[*((unsigned int *)v127 - 1)];
    if ( (unsigned __int64)v127 >= v30 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = v126;
          v8 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v29 >= v30 )
          goto LABEL_33;
      }
      sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( (unsigned __int64)v29 < v30 );
LABEL_33:
    v29 = v127;
    if ( v127 )
LABEL_34:
      sub_186B220(v29 - 1);
  }
  v33 = v125;
  if ( v125 )
  {
    v34 = (unsigned __int64)&v125[*((unsigned int *)v125 - 1)];
    if ( (unsigned __int64)v125 >= v34 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = v124;
          v8 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v33 >= v34 )
          goto LABEL_42;
      }
      sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( (unsigned __int64)v33 < v34 );
LABEL_42:
    v33 = v125;
    if ( v125 )
LABEL_43:
      sub_186B220(v33 - 1);
  }
  v37 = v123;
  if ( v123 )
  {
    v38 = (unsigned __int64)&v123[*((unsigned int *)v123 - 1)];
    if ( (unsigned __int64)v123 >= v38 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = v122;
          v8 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v37 >= v38 )
          goto LABEL_51;
      }
      sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( (unsigned __int64)v37 < v38 );
LABEL_51:
    v37 = v123;
    if ( v123 )
LABEL_52:
      sub_186B220(v37 - 1);
  }
  sub_1695230(v121);
  sub_F74720(v120);
  v41 = v119;
  if ( v119 )
  {
    v42 = (unsigned __int64)&v119[*((unsigned int *)v119 - 1)];
    if ( (unsigned __int64)v119 >= v42 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = v118;
          v8 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v41 >= v42 )
          goto LABEL_60;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( (unsigned __int64)v41 < v42 );
LABEL_60:
    v41 = v119;
    if ( v119 )
LABEL_61:
      sub_186B220(v41 - 1);
  }
  if ( ptr )
    sub_186B220(ptr);
  v45 = v114;
  if ( v114 )
  {
    v46 = (unsigned __int64)&v114[*((unsigned int *)v114 - 1)];
    if ( (unsigned __int64)v114 >= v46 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v47 = *v45;
        if ( *v45 )
        {
          v48 = v113;
          v8 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v45 >= v46 )
          goto LABEL_71;
      }
      sub_15D7BC0(v48, v47);
      ++v45;
    }
    while ( (unsigned __int64)v45 < v46 );
LABEL_71:
    v45 = v114;
    if ( v114 )
LABEL_72:
      sub_186B220(v45 - 1);
  }
  v49 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v110);
  sub_182CBA0(v49, v111);
  v50 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v108);
  sub_182CBA0(v50, v109);
  v51 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v106);
  result = sub_182CBA0(v51, v107);
  v53 = v104;
  if ( v104 )
  {
    if ( v105 )
    {
      v54 = (char *)v104;
      v55 = (char *)v104 + 80 * v105;
      do
      {
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v54 + 48);
        sub_182CBA0(v56, v54 + 64);
        v57 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v54 + 16);
        v58 = v54 + 32;
        v54 += 80;
        sub_182CBA0(v57, v58);
      }
      while ( v54 != v55 );
    }
    result = sub_186B220(v53);
  }
  v59 = v102;
  if ( v102 )
  {
    if ( v103 )
    {
      v60 = (char *)v102;
      v61 = (char *)v102 + 88 * v103;
      do
      {
        v62 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v60 + 48);
        sub_182CBA0(v62, v60 + 64);
        v63 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v60 + 16);
        v64 = v60 + 32;
        v60 += 88;
        sub_182CBA0(v63, v64);
      }
      while ( v61 != v60 );
    }
    result = sub_186B220(v59);
  }
  v65 = v101;
  if ( v101 )
  {
    result = *((unsigned int *)v101 - 1);
    v66 = (unsigned __int64)&v101[result];
    if ( (unsigned __int64)v101 >= v66 )
      goto LABEL_91;
    do
    {
      while ( 1 )
      {
        v67 = *v65;
        if ( *v65 )
        {
          v68 = v100;
          v8 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v65 >= v66 )
          goto LABEL_90;
      }
      result = sub_15D7BC0(v68, v67);
      ++v65;
    }
    while ( (unsigned __int64)v65 < v66 );
LABEL_90:
    v65 = v101;
    if ( v101 )
LABEL_91:
      result = sub_186B220(v65 - 1);
  }
  v69 = v98;
  if ( v98 )
  {
    v70 = v99;
    v8 = (*(_DWORD *)(v98 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v70, v69);
  }
  v71 = v96;
  if ( v96 )
  {
    v72 = v97;
    v8 = (*(_DWORD *)(v96 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v72, v71);
  }
  v73 = v95;
  if ( v95 )
  {
    result = *((unsigned int *)v95 - 1);
    v74 = (unsigned __int64)&v95[result];
    if ( (unsigned __int64)v95 >= v74 )
      return sub_186B220(v73 - 1);
    do
    {
      while ( 1 )
      {
        v75 = *v73;
        if ( *v73 )
        {
          v76 = v94;
          v8 = (*(_DWORD *)(v75 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v73 >= v74 )
          goto LABEL_105;
      }
      result = sub_15D7BC0(v76, v75);
      ++v73;
    }
    while ( (unsigned __int64)v73 < v74 );
LABEL_105:
    v73 = v95;
    if ( v95 )
      return sub_186B220(v73 - 1);
  }
  return result;
}


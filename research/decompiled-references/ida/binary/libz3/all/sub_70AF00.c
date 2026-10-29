char *__fastcall sub_70AF00(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  char *v8; // rdi
  char *v9; // rcx
  char *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // edi
  __int64 v19; // r13
  void *v20; // r14
  __int64 v21; // r13
  _QWORD *v22; // r14
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  _QWORD *v27; // r14
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rax
  void (__fastcall ***v33)(void *); // r13
  __int64 v34; // rax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // edi
  __int64 *v39; // r15
  void *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int i; // r12d
  __int64 v46; // r15
  __int64 v47; // r13
  __int64 v48; // rax
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  int v52; // edi
  __int64 *v53; // r15
  __int64 v54; // r12
  void *v55; // rbp
  __int64 *v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // r15
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // r13
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rbx
  int v68; // eax
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rbp
  __int64 v75; // rsi
  __int64 v76; // rdi
  __m128i v77; // [rsp+0h] [rbp-368h] BYREF
  int v78[2]; // [rsp+18h] [rbp-350h]
  __int64 v79; // [rsp+20h] [rbp-348h]
  __int64 *v80; // [rsp+28h] [rbp-340h]
  _QWORD *v81; // [rsp+30h] [rbp-338h]
  int v82[2]; // [rsp+38h] [rbp-330h]
  __int64 v83; // [rsp+40h] [rbp-328h]
  __int64 *v84; // [rsp+48h] [rbp-320h]
  void **p_ptr; // [rsp+50h] [rbp-318h]
  __int64 v86; // [rsp+58h] [rbp-310h]
  int *v87; // [rsp+60h] [rbp-308h]
  __int64 v88; // [rsp+68h] [rbp-300h]
  __int64 v89; // [rsp+78h] [rbp-2F0h] BYREF
  int v90[2]; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v91; // [rsp+88h] [rbp-2E0h]
  __int64 v92; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v93; // [rsp+98h] [rbp-2D0h]
  __int64 v94; // [rsp+A0h] [rbp-2C8h] BYREF
  char v95[16]; // [rsp+A8h] [rbp-2C0h] BYREF
  char v96; // [rsp+B8h] [rbp-2B0h]
  __int64 v97; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-2A0h]
  __int64 v99; // [rsp+D0h] [rbp-298h] BYREF
  __int64 v100; // [rsp+D8h] [rbp-290h]
  void *ptr; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-280h]
  char v103; // [rsp+F0h] [rbp-278h] BYREF
  _QWORD *v104; // [rsp+F8h] [rbp-270h]
  __int64 v105; // [rsp+100h] [rbp-268h]
  __int64 v106; // [rsp+108h] [rbp-260h]
  __int64 v107; // [rsp+110h] [rbp-258h]
  _QWORD *v108; // [rsp+118h] [rbp-250h]
  __int64 v109; // [rsp+130h] [rbp-238h]
  _QWORD *v110; // [rsp+138h] [rbp-230h]
  __int64 v111; // [rsp+168h] [rbp-200h]
  unsigned __int64 *v112; // [rsp+170h] [rbp-1F8h]
  int v113; // [rsp+178h] [rbp-1F0h]
  __int64 v114; // [rsp+180h] [rbp-1E8h]
  _QWORD v115[19]; // [rsp+188h] [rbp-1E0h] BYREF
  int v116; // [rsp+220h] [rbp-148h]
  __int64 (__fastcall **v117)(); // [rsp+228h] [rbp-140h] BYREF
  int v118; // [rsp+2B8h] [rbp-B0h]
  __int64 v119; // [rsp+2C0h] [rbp-A8h]
  __int64 v120; // [rsp+2C8h] [rbp-A0h]
  __int64 v121; // [rsp+2D0h] [rbp-98h]
  __int64 v122; // [rsp+2D8h] [rbp-90h]
  __int64 v123; // [rsp+2E0h] [rbp-88h]
  __int64 v124; // [rsp+2E8h] [rbp-80h]
  __int64 v125; // [rsp+2F0h] [rbp-78h]
  unsigned __int64 v126; // [rsp+2F8h] [rbp-70h] BYREF
  char v127[8]; // [rsp+300h] [rbp-68h] BYREF
  __int64 v128; // [rsp+308h] [rbp-60h]
  __m128i v129; // [rsp+310h] [rbp-58h]
  __int64 v130; // [rsp+320h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 16);
  v94 = a1;
  sub_16669D0(v95, v6);
  v7 = *a2;
  v96 = 0;
  p_ptr = &ptr;
  ptr = &v103;
  v102 = 0x1000000000LL;
  sub_706620(&v94, (char **)&ptr, v7);
  v8 = (char *)ptr;
  v9 = (char *)ptr + 8 * (unsigned int)v102;
  result = (char *)ptr;
  if ( ptr != v9 )
  {
    do
    {
      v11 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v11 + 6) &= ~1u;
    }
    while ( result != v9 );
  }
  LODWORD(v102) = 0;
  if ( v8 != &v103 && v8 )
    result = (char *)sub_186B220(v8);
  if ( !v96 )
    return result;
  v12 = *(_QWORD *)(a1 + 16);
  v87 = v90;
  sub_16669D0(v90, v12);
  v86 = *(_QWORD *)(a1 + 16);
  sub_1584DD0(p_ptr, v86, 0);
  ptr = &off_1C53540;
  v112 = &v126;
  v113 = 0;
  v114 = 0;
  sub_1584DD0(v115, v86, 0);
  v115[18] = 0;
  v116 = 0;
  v115[0] = &off_1C61DB8;
  sub_1584DD0(&v117, v86, 0);
  v13 = *(_QWORD *)(a1 + 16);
  v118 = 0;
  v119 = 0;
  v120 = v86;
  v117 = &off_1C61DE0;
  v121 = 0;
  v122 = v86;
  v123 = 0;
  v124 = v86;
  v125 = 0;
  ptr = &off_1C53560;
  v126 = v13;
  sub_16669D0(v127, v13);
  v97 = 0;
  v98 = 0;
  v14 = v126;
  v99 = 1;
  v84 = &v99;
  v100 = 0;
  sub_182CBA0(qword_1C7F2C0, &v99);
  v18 = v128;
  BYTE4(v99) &= ~1u;
  LODWORD(v99) = 1;
  if ( !v128 )
  {
    v80 = &v97;
    sub_16669E0(v127);
    v18 = v128;
  }
  v80 = &v97;
  v19 = sub_166A700(v18, (unsigned int)&v97, 0, v15, v16, v17);
  v77 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)v14);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v97);
  sub_182CBA0(v20, v84);
  v129 = _mm_load_si128(&v77);
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v21 = *a2;
  v130 = 0;
  if ( !v106 )
  {
    if ( *v104 == v105 )
      goto LABEL_35;
LABEL_14:
    v22 = v108;
    if ( v108 )
    {
      v23 = (unsigned __int64)&v108[*((unsigned int *)v108 - 1)];
      if ( (unsigned __int64)v108 >= v23 )
        goto LABEL_22;
      do
      {
        while ( 1 )
        {
          v24 = *v22;
          if ( *v22 )
          {
            v25 = v107;
            v26 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( (unsigned __int64)++v22 >= v23 )
            goto LABEL_21;
        }
        sub_15D7BC0(v25, v24);
        ++v22;
      }
      while ( (unsigned __int64)v22 < v23 );
LABEL_21:
      v22 = v108;
      if ( v108 )
LABEL_22:
        *((_DWORD *)v22 - 1) = 0;
    }
    v27 = v110;
    if ( v110 )
    {
      v28 = (unsigned __int64)&v110[*((unsigned int *)v110 - 1)];
      if ( (unsigned __int64)v110 >= v28 )
        goto LABEL_31;
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v30 = v109;
            v26 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( (unsigned __int64)++v27 >= v28 )
            goto LABEL_30;
        }
        sub_15D7BC0(v30, v29);
        ++v27;
      }
      while ( (unsigned __int64)v27 < v28 );
LABEL_30:
      v27 = v110;
      if ( v110 )
LABEL_31:
        *((_DWORD *)v27 - 1) = 0;
    }
    if ( v111 )
      *(_DWORD *)(v111 - 4) = 0;
    sub_15843E0(p_ptr);
    goto LABEL_35;
  }
  if ( *(_DWORD *)(v106 - 4) || *v104 != v105 )
  {
    *(_DWORD *)(v106 - 4) = 0;
    goto LABEL_14;
  }
LABEL_35:
  v92 = 0;
  v93 = v86;
  if ( v103 )
    sub_709750((__int64)p_ptr, v21, a2, &v92);
  else
    sub_70ABE0((__int64)p_ptr, v21, a2, &v92);
  v88 = v92;
  v86 = v93;
  v31 = sub_186B270(0x50u);
  v32 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v31 + 8) = 0;
  *(_QWORD *)(v31 + 16) = 0;
  *(_BYTE *)(v31 + 24) = 1;
  *(_QWORD *)v31 = &off_1C60CE8;
  *(_QWORD *)(v31 + 32) = v32;
  sub_6FFCA0((__int64 *)(v31 + 40), "purify");
  v33 = *(void (__fastcall ****)(void *))(a1 + 648);
  ++*(_DWORD *)(v31 + 8);
  *(_QWORD *)(v31 + 72) = 0;
  if ( v33 )
  {
    v26 = (*((_DWORD *)v33 + 2))-- == 1;
    if ( v26 )
    {
      (**v33)(v33);
      sub_186B220(v33);
    }
  }
  v34 = v130;
  *(_QWORD *)(a1 + 648) = v31;
  LODWORD(v79) = 0;
  v81 = (_QWORD *)(a3 + 8);
  if ( v34 )
  {
    while ( 1 )
    {
      *(_QWORD *)v82 = *(_QWORD *)(a1 + 16);
      if ( (unsigned int)v79 >= *(_DWORD *)(v34 - 4) )
        break;
      v97 = 0;
      v98 = 0;
      v99 = 1;
      v100 = 0;
      sub_182CBA0(qword_1C7F2C0, v84);
      v38 = v91;
      BYTE4(v99) &= ~1u;
      LODWORD(v99) = 1;
      if ( !v91 )
      {
        sub_16669E0(v87);
        v38 = v91;
      }
      v39 = v80;
      sub_166A700(v38, (_DWORD)v80, 0, v35, v36, v37);
      v40 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v39);
      sub_182CBA0(v40, v84);
      v41 = sub_15E1B70(v82[0]);
      v83 = v41;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      v42 = *(_QWORD *)(a1 + 16);
      sub_15E1B70(v90[0]);
      sub_15E1B70(v42);
      v43 = sub_15E1B70(v42);
      v89 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      sub_6FFDF0(v81, &v89);
      v44 = v130;
      LODWORD(v79) = v79 + 1;
      for ( i = v79; v130; ++i )
      {
        if ( i >= *(_DWORD *)(v44 - 4) )
          break;
        v46 = *(_QWORD *)(a1 + 16);
        v77.m128i_i64[0] = sub_15E1B70(v46);
        v47 = *(_QWORD *)(a1 + 16);
        sub_15E1B70(v47);
        sub_15E1A70(v47);
        *(_QWORD *)v78 = *(_QWORD *)(a1 + 16);
        sub_15E1B70(v78[0]);
        sub_15E1A70(v78[0]);
        v48 = sub_15E1BF0(v46);
        v97 = v48;
        if ( v48 )
          ++*(_DWORD *)(v48 + 8);
        sub_6FFDF0(v81, v80);
        v44 = v130;
      }
      sub_6FFC80(v83, *(__int64 *)v82);
      v34 = v130;
      if ( !v130 )
        goto LABEL_54;
    }
  }
  else
  {
LABEL_54:
    *(_QWORD *)v82 = *(_QWORD *)(a1 + 16);
  }
  v97 = 0;
  v98 = 0;
  v99 = 1;
  v100 = 0;
  sub_182CBA0(qword_1C7F2C0, v84);
  v52 = v91;
  BYTE4(v99) &= ~1u;
  LODWORD(v99) = 1;
  if ( !v91 )
  {
    sub_16669E0(v87);
    v52 = v91;
  }
  v53 = v80;
  v54 = sub_166A700(v52, (_DWORD)v80, 0, v49, v50, v51);
  v55 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v53);
  sub_182CBA0(v55, v84);
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  v80 = *(__int64 **)(a1 + 16);
  v56 = v80;
  v57 = sub_15D2CD0(*(_QWORD *)v90, 5, 0, 0, 0);
  v58 = sub_15DB5C0(v56, 0, v57);
  v77.m128i_i64[0] = v58;
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  v81 = *(_QWORD **)(a1 + 16);
  v59 = v81;
  v60 = sub_15D2CD0(*(_QWORD *)v90, 5, 0, 0, 0);
  v61 = 1;
  v62 = sub_15DB5C0(v59, 1, v60);
  *(_QWORD *)v78 = v62;
  if ( v62 )
    ++*(_DWORD *)(v62 + 8);
  v63 = v130;
  if ( v130 )
  {
    v79 = v130 + 48LL * *(unsigned int *)(v130 - 4);
    if ( v79 != v130 )
    {
      while ( 1 )
      {
        v64 = *(_QWORD *)(a1 + 16);
        sub_15E1B70(v64);
        sub_15E1B70(*(_QWORD *)(a1 + 16));
        sub_15E1B70(v64);
        v61 = 0;
        v65 = sub_15E1BF0(v64);
        v66 = v65;
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        if ( v54 && (v26 = *(_DWORD *)(v54 + 8) == 1, --*(_DWORD *)(v54 + 8), v26) )
        {
          v61 = v54;
          sub_15D7BC0(*(_QWORD *)v82, v54);
          v63 += 48;
          if ( v79 == v63 )
            goto LABEL_73;
        }
        else
        {
          v63 += 48;
          if ( v79 == v63 )
            goto LABEL_73;
        }
        v54 = v66;
      }
    }
  }
  v66 = v54;
LABEL_73:
  v67 = *(_QWORD *)(a1 + 648);
  v68 = sub_1666FB0(v87, v61);
  sub_13333D0(v67, v68, v66, v69, v70, v71, v77.m128i_i64[0]);
  sub_6FFC80(*(__int64 *)v78, (__int64)v81);
  sub_6FFC80(v77.m128i_i64[0], (__int64)v80);
  sub_6FFC80(v66, *(__int64 *)v82);
  v72 = v130;
  ptr = &off_1C53560;
  if ( v130 )
  {
    v73 = *(unsigned int *)(v130 - 4);
    if ( (_DWORD)v73 )
    {
      v74 = v130 + 48 * v73;
      do
      {
        v75 = *(_QWORD *)(v72 + 40);
        v76 = *(_QWORD *)(v72 + 32);
        v72 += 48;
        sub_6FFC60(v76, v75);
        sub_6FFC80(*(_QWORD *)(v72 - 32), *(_QWORD *)(v72 - 24));
        sub_6FFC80(*(_QWORD *)(v72 - 48), *(_QWORD *)(v72 - 40));
      }
      while ( v72 != v74 );
      v72 = v130;
    }
    sub_186B220((void *)(v72 - 8));
  }
  sub_6FFC80(v129.m128i_i64[0], v129.m128i_i64[1]);
  sub_7005A0(p_ptr);
  return (char *)sub_6FFC60(v88, v86);
}


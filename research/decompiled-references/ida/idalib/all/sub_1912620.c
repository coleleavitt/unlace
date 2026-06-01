unsigned __int64 __fastcall sub_1912620(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        char *a8,
        _BYTE *a9,
        _QWORD *a10,
        __int64 a11)
{
  __int64 v11; // r13
  unsigned __int8 v12; // r15
  unsigned int v13; // ebp
  __int64 v14; // rax
  void ***v15; // r12
  int v16; // edx
  void **v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  bool v20; // zf
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // eax
  void *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r13
  unsigned int v28; // eax
  unsigned __int8 v29; // al
  char v30; // bl
  __int64 **v31; // rbx
  unsigned __int64 v32; // rbp
  __int64 *v33; // rax
  bool v34; // al
  __int64 *v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // eax
  void **v38; // rax
  void *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // eax
  void *v44; // rdx
  unsigned int v45; // r13d
  __int64 v46; // rax
  unsigned __int64 result; // rax
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // rax
  int v52; // r12d
  __int64 *v53; // rbp
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  unsigned int v58; // edx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  char *v61; // r12
  unsigned __int64 v62; // rcx
  __int64 v63; // rdi
  unsigned __int8 v64; // dl
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  __int64 v67; // rcx
  int v68; // edx
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // rdi
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  _QWORD *v74; // rdi
  int v75; // ebx
  char v76; // dl
  void *v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  char *v88; // r14
  __int64 v89; // rax
  __int64 **v90; // r15
  __int64 v91; // rdx
  unsigned int v92; // eax
  __int64 v93; // rdx
  unsigned int v94; // r13d
  __int64 v95; // rax
  unsigned int v96; // ebp
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // r12d
  unsigned int v100; // eax
  unsigned __int64 v101; // [rsp+0h] [rbp-1B8h]
  __int64 v102; // [rsp+8h] [rbp-1B0h]
  unsigned int v103; // [rsp+10h] [rbp-1A8h]
  int v104; // [rsp+10h] [rbp-1A8h]
  __int16 v105; // [rsp+18h] [rbp-1A0h]
  unsigned __int8 v106; // [rsp+18h] [rbp-1A0h]
  int v108; // [rsp+28h] [rbp-190h]
  char v109; // [rsp+30h] [rbp-188h]
  int v110; // [rsp+30h] [rbp-188h]
  _QWORD *v111; // [rsp+38h] [rbp-180h]
  unsigned __int64 v112; // [rsp+48h] [rbp-170h]
  unsigned int v113; // [rsp+68h] [rbp-150h]
  bool v114; // [rsp+73h] [rbp-145h]
  int v115; // [rsp+74h] [rbp-144h]
  __int64 v118; // [rsp+88h] [rbp-130h] BYREF
  void *v119; // [rsp+90h] [rbp-128h] BYREF
  unsigned __int64 v120; // [rsp+98h] [rbp-120h] BYREF
  void *v121; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v122; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v123[2]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v124; // [rsp+C0h] [rbp-F8h] BYREF
  void **v125; // [rsp+C8h] [rbp-F0h] BYREF
  void *ptr; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-E0h]
  _BYTE v128[16]; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v129; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+F8h] [rbp-C0h]

  v11 = a1;
  v115 = (int)a2;
  v111 = a6;
  if ( (_BYTE)a5 )
  {
    sub_18C79E0(a1, 0, 4);
    a2 = v111;
    v65 = sub_19179A0(a1, v111, 1);
    if ( v65 == 1 )
    {
      sub_190D5E0(a1, a7);
      return 1;
    }
    v66 = v65 & 0xFFFFFFFFFFFFFFFELL;
    v112 = v65 & 0xFFFFFFFFFFFFFFFELL;
    sub_190D5E0(a1, a7);
    if ( !v66 )
      BUG();
    v111 = nullptr;
    v68 = (*(_DWORD *)v112 >> 14) & 4;
    LOBYTE(v105) = v68 != 0;
    v12 = (*(_DWORD *)v112 & 0x4000) != 0;
    if ( *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320) && !(_BYTE)v68 )
    {
      a2 = *(_BYTE **)(a1 + 248);
      LOBYTE(v105) = sub_C01160(v112, (__int64)a2, 0, v67, a5);
      if ( (_BYTE)v105 )
      {
        v53 = (__int64 *)(a1 + 8);
        v98 = sub_C00A40(v112, (__int64)a2, v69, v70, a5);
        a2 = (_BYTE *)(a1 + 8);
        sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v98, 0x1CC7u, 0);
        sub_15F7200(&v129);
        v103 = (unsigned int)a9;
        if ( (_DWORD)a9 )
        {
          LOBYTE(v105) = 0;
          goto LABEL_5;
        }
LABEL_59:
        ptr = v128;
        v127 = 0x100000000LL;
        goto LABEL_45;
      }
      v103 = (unsigned int)a9;
      if ( (_DWORD)a9 )
        goto LABEL_5;
LABEL_58:
      v53 = (__int64 *)(a1 + 8);
      goto LABEL_59;
    }
  }
  else
  {
    if ( !a6 )
      return 1;
    v112 = 0;
    v12 = *(_BYTE *)(*(_QWORD *)(*a6 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
    v105 = (*(unsigned __int8 *)(*(_QWORD *)(*a6 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) >> 2) & 1;
  }
  v103 = (unsigned int)a9;
  if ( !(_DWORD)a9 )
  {
    if ( (_BYTE)v105 )
    {
LABEL_63:
      v71 = *(_QWORD **)(v11 + 248);
      if ( v112 )
        return sub_C0A890(v71, v115, v112, a8, (__int64)a9, a3, (__int64)a10, a11, a4, v12);
      else
        return sub_C0A620(v71, v115, (__int64)v111, a8, (__int64)a9, a3, a10, a11, a4, v12);
    }
    goto LABEL_58;
  }
LABEL_5:
  v13 = 1;
  v109 = 0;
  while ( 1 )
  {
    v14 = v13 - 1;
    v15 = (void ***)&a8[8 * v14];
    v16 = *(_DWORD *)a10[v14];
    v17 = *v15;
    if ( (v16 & 0x4000) != 0 )
      v12 = 1;
    if ( v17 )
      break;
LABEL_7:
    if ( v103 <= v13 )
      goto LABEL_31;
LABEL_8:
    ++v13;
  }
  v18 = *(_QWORD *)((unsigned __int64)*v17 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(unsigned __int8 *)(v18 + 17);
  if ( (v19 & 1) != 0 )
    v12 = 1;
  if ( (v19 & 4) != 0 )
  {
    LOBYTE(v105) = 1;
    goto LABEL_7;
  }
  if ( !v112 )
  {
    v21 = 3117;
    if ( (v19 & 8) == 0 )
      goto LABEL_21;
    goto LABEL_18;
  }
  v20 = !sub_F62670(v18, nullptr, v19, 1, a5, (__int64)a6);
  v17 = *v15;
  if ( !v20 )
  {
    v21 = (**(_BYTE **)(a1 + 232) & 0x10) == 0 ? 5499 : 6635;
    goto LABEL_18;
  }
  v62 = (unsigned __int64)*v17;
  v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)*v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v64 = *(_BYTE *)(v63 + 16);
  if ( (unsigned __int8)(v64 - 25) <= 1u
    || (unsigned int)v64 - 43 <= 1
    || v64 == 13 && ((*(_WORD *)(v63 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v21 = 3116;
LABEL_18:
    v22 = (__int64)*v17;
    v125 = v17 + 1;
    v124 = v22;
    v23 = sub_F6CCB0(&v124, a7);
    sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v23, v21, 0);
    v24 = **v15;
    v127 = (__int64)(*v15 + 1);
    ptr = v24;
    v108 = sub_F6CE20((__int64 *)&ptr);
    LODWORD(v123[0]) = sub_F6CCB0((__int64 *)&ptr, a7);
    HIDWORD(v123[0]) = v108;
    v25 = sub_1587DB0((__int64)&v129, v123);
    v121 = **v15;
    sub_162B6D0(v25, (__int64 *)&v121);
    sub_15F7200(&v129);
    v26 = (__int64)**v15;
    v27 = *(_QWORD *)(a1 + 264);
    v130 = (__int64)(*v15 + 1);
    v129 = v26;
    v28 = sub_F6CCB0(&v129, a7);
    v29 = sub_FD3E40(*(_QWORD *)(v27 + 32), v21, v28, v27);
    v30 = v109;
    if ( v29 >= 4u )
      v30 = 1;
    v109 = v30;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
  {
    v21 = 3117;
    goto LABEL_18;
  }
  v124 = (__int64)*v17;
  v75 = 0;
  v76 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v76 - 2) <= 4u )
    goto LABEL_80;
  if ( ((v62 & 0xF) != 0 || (byte_8[v62 & 0xFFFFFFFFFFFFFFF0LL] & 0xF) != 0)
    && ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 || v76 != 48) )
  {
    v75 = 1;
LABEL_80:
    v77 = *v17;
    v127 = (__int64)(v17 + 1);
    ptr = v77;
    v78 = sub_F6CCB0((__int64 *)&ptr, a7);
    sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v78, 0x1D48u, 0);
    v79 = sub_1605D30((__int64)&v129, &v124);
    LODWORD(v123[0]) = v75;
    sub_16CF160(v79, (unsigned int *)v123);
    sub_15F7200(&v129);
  }
LABEL_21:
  if ( v103 > v13 )
  {
    v113 = v13;
    v31 = (__int64 **)&a8[8 * v13];
    v32 = (unsigned __int64)&a8[8 * v13 + 8 + 8 * (unsigned __int64)((_DWORD)a9 - 1 - v13)];
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(*v33 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v34 = sub_AAC110(*(_QWORD *)(a1 + 248), (__int64)**v15, *v33, 0);
            if ( v34 )
              break;
          }
        }
        if ( (__int64 **)v32 == ++v31 )
          goto LABEL_28;
      }
      v114 = v34;
      v35 = *v31++;
      v36 = *v35;
      v125 = (void **)(v35 + 1);
      v124 = v36;
      v37 = sub_F6CCB0(&v124, a7);
      sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v37, 0xC2Bu, 0);
      v38 = (void **)*(v31 - 1);
      v39 = *v38;
      v127 = (__int64)(v38 + 1);
      ptr = v39;
      v110 = sub_F6CE20((__int64 *)&ptr);
      LODWORD(v123[0]) = sub_F6CCB0((__int64 *)&ptr, a7);
      HIDWORD(v123[0]) = v110;
      v40 = sub_1587DB0((__int64)&v129, v123);
      v120 = **(v31 - 1);
      v41 = sub_162B6D0(v40, (__int64 *)&v120);
      v121 = **v15;
      sub_162B6D0(v41, (__int64 *)&v121);
      sub_15F7200(&v129);
      v42 = (__int64)**v15;
      v125 = *v15 + 1;
      v124 = v42;
      v43 = sub_F6CCB0(&v124, a7);
      sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v43, 0x16C8u, 0);
      v44 = **v15;
      v127 = (__int64)(*v15 + 1);
      ptr = v44;
      v45 = sub_F6CE20((__int64 *)&ptr);
      v123[0] = __PAIR64__(v45, sub_F6CCB0((__int64 *)&ptr, a7));
      v46 = sub_1587DB0((__int64)&v129, v123);
      v121 = **v15;
      sub_162B6D0(v46, (__int64 *)&v121);
      sub_15F7200(&v129);
      v109 = v114;
    }
    while ( (__int64 **)v32 != v31 );
LABEL_28:
    v13 = v113;
    goto LABEL_8;
  }
LABEL_31:
  v11 = a1;
  if ( v109 )
    return 1;
  if ( (_BYTE)v105 )
    goto LABEL_63;
  a2 = a9;
  v106 = v12;
  v48 = 0;
  v104 = -1;
  v102 = (unsigned int)((_DWORD)a9 - 1);
  ptr = v128;
  v127 = 0x100000000LL;
  while ( 1 )
  {
    v51 = *(__int64 **)&a8[8 * v48];
    if ( v51 )
      break;
    v104 = v48;
    v50 = v48 + 1;
    if ( v102 == v48 )
      goto LABEL_42;
LABEL_39:
    v48 = v50;
  }
  if ( v112
    && (v49 = *(_QWORD *)&byte_8[*(_QWORD *)(v112 + 8) & 0xFFFFFFFFFFFFFFF0LL],
        a2 = (_BYTE *)(v49 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v49 | *(_BYTE *)(v112 + 8)) & 7),
        sub_AAC110(*(_QWORD *)(a1 + 248), (__int64)a2, *v51, 0))
    || v111
    && (a2 = (_BYTE *)(*(_QWORD *)&byte_8[*v111 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                     | ((unsigned __int8)*(_QWORD *)&byte_8[*v111 & 0xFFFFFFFFFFFFFFF0LL] | *(_BYTE *)v111) & 7),
        sub_AAC110(*(_QWORD *)(a1 + 248), (__int64)a2, **(_QWORD **)&a8[8 * v48], 0)) )
  {
    v72 = (unsigned int)v127;
    v73 = (unsigned int)v127 + 1LL;
    if ( v73 > HIDWORD(v127) )
    {
      a2 = v128;
      sub_2237220(&ptr, v128, v73, 4);
      v72 = (unsigned int)v127;
    }
    *((_DWORD *)ptr + v72) = v48;
    LODWORD(v127) = v127 + 1;
  }
  v50 = v48 + 1;
  if ( v102 != v48 )
    goto LABEL_39;
LABEL_42:
  v52 = v104;
  if ( (unsigned int)v127 > 1uLL )
  {
    if ( v112 && (v80 = sub_BFB9F0(v112), (v81 = v80) != 0) )
    {
      v82 = sub_EEC8C0(v80, (__int64)a2, *(double *)a7.m128_u64);
      v83 = *(_QWORD *)(v81 + 8);
      v84 = (unsigned int)v82;
      v85 = HIDWORD(v82);
    }
    else
    {
      v129 = *v111;
      v130 = (__int64)(v111 + 1);
      v96 = sub_F6CE20(&v129);
      v97 = sub_F6CCB0(&v129, a7);
      v83 = *v111;
      v84 = v97;
      v85 = v96;
    }
    v122 = v83;
    v121 = (void *)((v85 << 32) | v84);
    v119 = v121;
    sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v84, 0xF20u, 0);
    v86 = sub_15884C0((__int64)&v129, (__int64 *)&v119);
    v87 = sub_1605D30(v86, &v122);
    LODWORD(v124) = v127;
    sub_16CF160(v87, (unsigned int *)&v124);
    sub_15F7200(&v129);
    v61 = (char *)ptr + 4 * (unsigned int)v127;
    if ( ptr != v61 )
    {
      v88 = (char *)ptr;
      do
      {
        v89 = *(unsigned int *)v88;
        v88 += 4;
        v90 = (__int64 **)&a8[8 * v89];
        v91 = **v90;
        v123[1] = (__int64)(*v90 + 1);
        v123[0] = v91;
        v92 = sub_F6CCB0(v123, a7);
        sub_168B9F0((__int64)&v129, (__int64 *)(a1 + 8), v92, 0x16C8u, 0);
        v93 = **v90;
        v125 = (void **)(*v90 + 1);
        v124 = v93;
        v94 = sub_F6CE20(&v124);
        v120 = __PAIR64__(v94, sub_F6CCB0(&v124, a7));
        v95 = sub_1587DB0((__int64)&v129, (__int64 *)&v120);
        v118 = **v90;
        sub_162B6D0(v95, &v118);
        sub_15F7200(&v129);
      }
      while ( v61 != v88 );
      v61 = (char *)ptr;
    }
    result = 1;
  }
  else if ( v104 != -1 || (v53 = (__int64 *)(a1 + 8), (v127 & 1) != 0) )
  {
    if ( (_DWORD)v127 )
      v52 = *(_DWORD *)ptr;
    v74 = *(_QWORD **)(a1 + 248);
    if ( v112 )
      result = sub_C0ADB0(v74, v115, v112, a8, (__int64)a9, a3, a10, a11, a4, v106, v52);
    else
      result = sub_C0AB00(v74, v115, (__int64)v111, a8, (__int64)a9, a3, a10, a11, a4, v106, v52);
    v61 = (char *)ptr;
  }
  else
  {
LABEL_45:
    if ( v112 && (v54 = sub_BFB9F0(v112), (v55 = v54) != 0) )
    {
      v56 = sub_EEC8C0(v54, (__int64)a2, *(double *)a7.m128_u64);
      v57 = *(_QWORD *)(v55 + 8);
      v58 = v56;
      v59 = HIDWORD(v56);
    }
    else
    {
      v129 = *v111;
      v130 = (__int64)(v111 + 1);
      v99 = sub_F6CE20(&v129);
      v100 = sub_F6CCB0(&v129, a7);
      v57 = *v111;
      v58 = v100;
      v59 = v99;
    }
    v125 = (void **)v57;
    v124 = (v59 << 32) | v58;
    v123[0] = v124;
    sub_168B9F0((__int64)&v129, v53, v58, 0xF21u, 0);
    v60 = sub_15884C0((__int64)&v129, v123);
    sub_1605D30(v60, (__int64 *)&v125);
    sub_15F7200(&v129);
    result = 1;
    v61 = (char *)ptr;
  }
  if ( v61 != v128 )
  {
    v101 = result;
    free(v61);
    return v101;
  }
  return result;
}

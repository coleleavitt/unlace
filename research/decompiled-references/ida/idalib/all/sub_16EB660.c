__int64 __fastcall sub_16EB660(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  unsigned int v9; // r13d
  __int64 *v12; // r14
  __int64 v13; // rdi
  char v14; // al
  char v15; // al
  int *v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // r15d
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // rsi
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // ebx
  bool v33; // cl
  bool v34; // al
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rbp
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  bool v49; // al
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // edx
  char v53; // al
  __int64 *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // r13
  int v61; // eax
  __int64 *v62; // rdi
  size_t v63; // rax
  unsigned __int64 *v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned int v67; // ecx
  void **v68; // rax
  void *v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r13
  void *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  void *v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // [rsp+18h] [rbp-1C0h]
  unsigned __int64 v86; // [rsp+18h] [rbp-1C0h]
  unsigned __int64 v87; // [rsp+20h] [rbp-1B8h]
  __int64 *v88; // [rsp+20h] [rbp-1B8h]
  bool v89; // [rsp+30h] [rbp-1A8h]
  bool v90; // [rsp+38h] [rbp-1A0h]
  __int64 v91; // [rsp+38h] [rbp-1A0h]
  char v92; // [rsp+44h] [rbp-194h]
  int v93; // [rsp+44h] [rbp-194h]
  __int64 v94; // [rsp+50h] [rbp-188h] BYREF
  __int64 v95; // [rsp+58h] [rbp-180h] BYREF
  void *v96; // [rsp+60h] [rbp-178h] BYREF
  unsigned int v97; // [rsp+68h] [rbp-170h]
  bool v98; // [rsp+6Ch] [rbp-16Ch]
  void *v99; // [rsp+70h] [rbp-168h] BYREF
  unsigned int v100; // [rsp+78h] [rbp-160h]
  bool v101; // [rsp+7Ch] [rbp-15Ch]
  void *v102[2]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v103; // [rsp+90h] [rbp-148h] BYREF
  void *v104; // [rsp+A0h] [rbp-138h] BYREF
  unsigned int v105; // [rsp+A8h] [rbp-130h]
  char v106; // [rsp+ACh] [rbp-12Ch]
  __int64 v107; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v108[2]; // [rsp+C0h] [rbp-118h] BYREF
  unsigned int v109; // [rsp+D0h] [rbp-108h] BYREF
  char v110; // [rsp+D4h] [rbp-104h]
  void *v111; // [rsp+D8h] [rbp-100h]
  unsigned int v112; // [rsp+E0h] [rbp-F8h]
  bool v113; // [rsp+E4h] [rbp-F4h]
  void *v114; // [rsp+110h] [rbp-C8h] BYREF
  _QWORD *v115; // [rsp+118h] [rbp-C0h]
  void *v116; // [rsp+120h] [rbp-B8h]
  unsigned __int8 *v117[11]; // [rsp+130h] [rbp-A8h] BYREF
  char v118; // [rsp+188h] [rbp-50h]
  unsigned int v119; // [rsp+190h] [rbp-48h]
  char v120; // [rsp+194h] [rbp-44h]

  if ( *(char *)(a2 + 28) < 0 )
    return 0;
  v9 = a4;
  v12 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_BYTE *)(v13 + 16);
  if ( v14 == 13 )
  {
    if ( ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1B4 )
      goto LABEL_4;
    return 0;
  }
  if ( v14 == 47 )
  {
    v21 = sub_F60F10(v13, a2, (__int64)a3, a4, a5, a6);
    v22 = a1[29];
    v108[0] = (__int64)v21;
    if ( (*(_BYTE *)(v22 + 1) & 0x10) != 0 )
    {
      v23 = v21[16];
      if ( (!v23 || (v23 & 4) == 0 || (v23 & 0xFFFFFFFFFFFFFFF8LL) == 0)
        && (*((_WORD *)v21 + 37) & 0x7F80) != 0
        && !(unsigned __int8)(v21[9] >> 31) )
      {
        sub_168B9F0((__int64)&v114, a1 + 1, v9, 0x1BDBu, 0);
        sub_16D7C50((__int64)&v114, v108);
        sub_15F7200(&v114);
      }
    }
  }
LABEL_4:
  v15 = *(_BYTE *)(a2 + 68);
  if ( (v15 & 1) == 0 )
    BUG();
  v16 = *(int **)(a2 + 72);
  if ( (v15 & 0xC) != 0xC && (v15 & 0xC) != 0 )
    v17 = **((_DWORD **)v16 + 1);
  else
    v17 = *v16;
  v18 = v17 >> 14;
  if ( (v18 & 8) != 0 || (v18 & 4) != 0 || ((*a3 >> 14) & 0xC) != 0 )
    return 0;
  v87 = sub_BFBAE0((unsigned __int64)a3);
  v24 = sub_B78170(a2);
  v25 = a1[31];
  v26 = v108;
  v85 = v24;
  LOWORD(v108[0]) = 0;
  v108[1] = 0;
  v109 = 0;
  v110 &= ~1u;
  v19 = sub_C3F220(v87, (__int64)v108, v25, 2, 0, v27);
  if ( (_BYTE)v19 )
  {
    v32 = v112;
    v97 = v112;
    if ( v112 > 0x40 )
    {
      sub_2205510(&v96);
      v32 = v97;
    }
    else
    {
      v96 = v111;
    }
    v33 = v113;
    v92 = 0;
    v98 = v113;
    if ( v85 == 1 )
    {
      v92 = sub_AC43F0((__int64)&v96, (char *)&dword_0 + 1);
      if ( v92 )
      {
        if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
        {
          v61 = sub_EEB7E0(v87, 1, *(double *)a7.m128_u64);
          v62 = (__int64 *)a1[34];
          LODWORD(v114) = v61;
          if ( (unsigned __int8)sub_16C5190(v62, v61) )
          {
            v63 = j__strlen("true");
            if ( (unsigned __int8)sub_15F1800((__int64)a1, (int *)&v114, "true", v63, *(double *)a7.m128_u64, a8) )
              goto LABEL_69;
          }
        }
      }
      v33 = v98;
    }
    if ( v33 || (v34 = sub_16B6690((__int64 *)&v96), v33 = 0, v34) )
    {
      if ( (*(_WORD *)v87 & 0x1FF) == 4 && (unsigned int)(*(_BYTE *)(v87 + 2) >> 3) - 7 <= 1 )
      {
        v89 = v33;
        v35 = sub_C16790((__int64)&v96);
        v33 = v89;
        v32 = v97 + 1 - v35;
      }
    }
    v90 = v33;
    if ( v32 > v85 )
    {
      sub_2206A40(&v114, &v96);
      v100 = (unsigned int)v115;
      v101 = v90;
      v99 = v114;
      v101 = !sub_F65140(*v12, (__int64)&v96, v36, v90, v37, v38);
      if ( v101 )
      {
        sub_2206CD0(&v114, &v99, v32);
        v106 = 1;
      }
      else
      {
        sub_2206B70(&v114, &v99, v32);
        v106 = 0;
      }
      v105 = (unsigned int)v115;
      v104 = v114;
      sub_C18DB0((__int64)&v99, (__int64)&v104);
      if ( v105 > 0x40 && v104 )
        operator delete[](v104);
      if ( (unsigned int)sub_98E2D0((__int64 *)&v96, (__int64 *)&v99) )
      {
        sub_C1DEB0(v102, (int)&v96, 10, !v98, 0, 1u, 0);
        sub_C1DEB0(&v104, (int)&v99, 10, !v101, 0, 1u, 0);
        sub_168B9F0((__int64)&v114, a1 + 1, v9, v92 == 0 ? 6983 : 7015, 0);
        v39 = sub_1682A40((__int64)&v114, (__int64)v102);
        v40 = sub_1682A40(v39, (__int64)&v104);
        v94 = *(_QWORD *)(v87 + 8);
        v41 = sub_162B6D0(v40, &v94);
        v95 = sub_EEC8C0((unsigned __int64)a3, (__int64)&v94, *(double *)a7.m128_u64);
        sub_1587DB0(v41, &v95);
        sub_15F7200(&v114);
        if ( v104 != &v107 )
          operator delete(v104);
        if ( v102[0] != &v103 )
          operator delete(v102[0]);
      }
      else
      {
        v19 = 0;
      }
      if ( v100 > 0x40 && v99 )
        operator delete[](v99);
      goto LABEL_45;
    }
LABEL_69:
    v19 = 0;
LABEL_45:
    if ( v97 > 0x40 && v96 )
      operator delete[](v96);
    goto LABEL_48;
  }
  v42 = 0;
  v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v44 = *(_QWORD *)v43;
  if ( *(_BYTE *)(*(_QWORD *)v43 + 16LL) == 47 )
  {
LABEL_53:
    v102[0] = sub_F60F10(v44, (__int64)v26, v28, v29, v30, v31);
    v49 = sub_F65240(*v12, (__int64)v26, v45, v46, v47, v48);
    v50 = *((_QWORD *)v102[0] + 9) >> 31;
    LOBYTE(v51) = v50;
    LOBYTE(v96) = (_BYTE)v50 != 0;
    if ( (_BYTE)v50 )
    {
      if ( v49 )
      {
        v52 = (unsigned __int8)(*((_WORD *)v102[0] + 37) >> 7);
LABEL_56:
        if ( ++v52 < (unsigned __int8)v51 )
          v52 = (unsigned __int8)v51;
        goto LABEL_58;
      }
      v67 = v42 == 0 ? 7510 : 7275;
    }
    else
    {
      v52 = (unsigned __int8)(*((_WORD *)v102[0] + 37) >> 7);
      if ( !v49 || v85 != v52 )
      {
LABEL_58:
        LODWORD(v99) = v52;
        if ( v52 > v85 )
        {
          v53 = *(_BYTE *)(a2 + 68);
          if ( (v53 & 1) != 0 )
          {
            v86 = *(_QWORD *)(a2 + 72);
            if ( (v53 & 0xC) != 0xC && (v53 & 0xC) != 0 )
              v86 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL);
          }
          else
          {
            v86 = 0;
          }
          v54 = a1 + 1;
          sub_168B9F0((__int64)&v114, v54, v9, v42 == 0 ? 6621 : 7273, 0);
          if ( v118 )
          {
            sub_16B73F0(v117, a2);
          }
          else if ( v120 )
          {
            v76 = sub_168B9E0(&v114);
            v77 = v116;
            if ( v116 )
              v77 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v116 + 32LL))(v116);
            v104 = v77;
            v78 = sub_1587BC0(v76, (__int64 *)&v104, v72, v73, v74, v75);
            sub_16B73F0((unsigned __int8 **)(*v78 + 32LL * v119 + 8), a2);
          }
          sub_16D7C50((__int64)&v114, (__int64 *)v102);
          sub_15F7200(&v114);
          v58 = sub_C00A40(v86, (__int64)v102, v55, v56, v57);
          sub_168B9F0((__int64)&v114, v54, v58, 0x1946u, 0);
          v59 = sub_1588370((__int64)&v114, (unsigned int *)&v99);
          v60 = sub_16D7C50(v59, (__int64 *)v102);
          v104 = (void *)sub_EEC8C0(v86, (__int64)v102, *(double *)a7.m128_u64);
          sub_1587DB0(v60, (__int64 *)&v104);
          sub_15F7200(&v114);
          if ( v42 )
          {
            sub_168B9F0((__int64)&v114, v54, *(_DWORD *)(v42 + 24), 0x16B1u, 0);
            sub_16D7C50((__int64)&v114, (__int64 *)v102);
            sub_15F7200(&v114);
          }
        }
        goto LABEL_48;
      }
      v67 = v42 == 0 ? 7368 : 7274;
    }
    v88 = a1 + 1;
    sub_168B9F0((__int64)&v114, a1 + 1, v9, v67, 0);
    if ( v118 )
    {
      sub_16B73F0(v117, a2);
    }
    else if ( v120 )
    {
      v91 = sub_168B9E0(&v114);
      v83 = v116;
      if ( v116 )
        v83 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v116 + 32LL))(v116);
      v104 = v83;
      v84 = sub_1587BC0(v91, (__int64 *)&v104, v79, v80, v81, v82);
      sub_16B73F0((unsigned __int8 **)(*v84 + 32LL * v119 + 8), a2);
    }
    sub_16D7C50((__int64)&v114, (__int64 *)v102);
    sub_15F7200(&v114);
    v68 = (void **)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
      v68 = (void **)v68[4];
    if ( v68 )
    {
      v69 = *v68;
      v115 = v68 + 1;
      v114 = v69;
      v93 = sub_F6CE20((__int64 *)&v114);
      LODWORD(v104) = sub_F6CCB0((__int64 *)&v114, a7);
      HIDWORD(v104) = v93;
    }
    else
    {
      v104 = nullptr;
    }
    v70 = sub_B72FF0(a2);
    sub_168B9F0((__int64)&v114, v88, v70, 0x16BEu, 0);
    v71 = sub_15890D0((__int64)&v114, (unsigned __int8 *)&v96);
    sub_15884C0(v71, (__int64 *)&v104);
    sub_15F7200(&v114);
    if ( v42 )
    {
      sub_168B9F0((__int64)&v114, v88, *(_DWORD *)(v42 + 24), 0x16B1u, 0);
      sub_16D7C50((__int64)&v114, (__int64 *)v102);
      sub_15F7200(&v114);
    }
    v52 = (unsigned __int8)(*((_WORD *)v102[0] + 37) >> 7);
    if ( !(_BYTE)v96 )
      goto LABEL_58;
    v51 = *((_QWORD *)v102[0] + 9) >> 31;
    goto LABEL_56;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v64 = sub_B8C3D0(a2, (__int64)v108, v28, v29, v30, v31);
    v28 = *v64;
    v65 = *v64 + 8LL * *((unsigned int *)v64 + 2);
    if ( v28 >= v65 )
    {
      if ( v28 == v65 )
        goto LABEL_48;
      while ( 1 )
      {
        v29 = *(_QWORD *)v65;
        if ( *(_WORD *)(*(_QWORD *)v65 + 36LL) == 335 )
          break;
        v65 += 8LL;
        if ( v28 == v65 )
          goto LABEL_48;
      }
    }
    else
    {
      v29 = v28;
      while ( 1 )
      {
        v26 = *(__int64 **)v29;
        if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 335 )
          break;
        v29 += 8;
        if ( v65 == v29 )
          goto LABEL_48;
      }
      if ( v65 == v29 )
        goto LABEL_48;
    }
    while ( 1 )
    {
      v42 = *(_QWORD *)v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 335 )
        break;
      v28 += 8LL;
    }
    v66 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 40) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v44 = *(_QWORD *)v66;
    if ( *(_BYTE *)(*(_QWORD *)v66 + 16LL) == 47 )
      goto LABEL_53;
  }
LABEL_48:
  if ( v109 > 1 )
    sub_A4F8E0((int *)&v109);
  return v19;
}

unsigned __int64 __fastcall sub_19C3640(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v9; // r13d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r10
  __int64 v17; // rax
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r9
  __int64 (__fastcall *v31)(__int64); // rax
  __int64 v32; // rax
  __int64 (__fastcall *v33)(_QWORD); // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // r12
  __int64 v41; // r14
  char v42; // al
  __int16 v43; // ax
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // rbp
  char v47; // al
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbp
  size_t v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbp
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // rax
  int v65; // eax
  unsigned __int64 v66; // rdi
  unsigned int v67; // eax
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  unsigned int v73; // r8d
  __int64 v74; // rax
  _QWORD *v75; // rdi
  __int64 v76; // rsi
  __int16 v77; // ax
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int8 v80; // al
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // [rsp+0h] [rbp-168h]
  unsigned __int64 v86; // [rsp+0h] [rbp-168h]
  unsigned __int64 v87; // [rsp+0h] [rbp-168h]
  unsigned __int64 v88; // [rsp+0h] [rbp-168h]
  unsigned __int64 v89; // [rsp+0h] [rbp-168h]
  unsigned __int64 v90; // [rsp+0h] [rbp-168h]
  __int64 v91; // [rsp+8h] [rbp-160h]
  _QWORD *v92; // [rsp+10h] [rbp-158h]
  __int64 v93; // [rsp+10h] [rbp-158h]
  unsigned __int8 v94[8]; // [rsp+2Ch] [rbp-13Ch] BYREF
  int v95; // [rsp+34h] [rbp-134h] BYREF
  char *v96; // [rsp+38h] [rbp-130h] BYREF
  __int64 v97; // [rsp+40h] [rbp-128h] BYREF
  __int64 v98; // [rsp+48h] [rbp-120h] BYREF
  __int64 v99; // [rsp+54h] [rbp-114h] BYREF
  char v100; // [rsp+5Ch] [rbp-10Ch]
  __int64 v101[3]; // [rsp+60h] [rbp-108h] BYREF
  void *v102; // [rsp+78h] [rbp-F0h]
  __int64 v103; // [rsp+88h] [rbp-E0h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+A8h] [rbp-C0h]
  _QWORD v106[2]; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int8 *v107; // [rsp+C0h] [rbp-A8h] BYREF
  char v108; // [rsp+118h] [rbp-50h]
  unsigned int v109; // [rsp+120h] [rbp-48h]
  char v110; // [rsp+124h] [rbp-44h]

  v9 = a5;
  v13 = *a2;
  v94[0] = a6;
  v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (_BYTE)a6 )
  {
    v13 = sub_19146F0((__int64)a1, (_QWORD *)v14, (__int64)a3, (__int64)a4, a5, a6, a7, a8);
    *a2 = v13;
  }
  else if ( (*(_BYTE *)(v14 + 1) & 6) == 0 )
  {
    v17 = sub_1A0BEA0(a1, v14);
    *a2 = v17;
    if ( v17 == 1 )
      return 0;
    goto LABEL_7;
  }
  if ( v13 == 1 )
    return 0;
LABEL_7:
  v18 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  v19 = sub_19146F0((__int64)a1, v18, (__int64)a3, (__int64)a4, a5, a6, a7, a8);
  *a3 = v19;
  if ( v19 == 1 )
    return 0;
  v20 = "->*";
  if ( !v94[0] )
    v20 = ".*";
  v21 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v96 = v20;
  v97 = v21;
  v21 &= 0xFFFFFFFFFFFFFFF0LL;
  v22 = *(_QWORD *)v21;
  if ( *(_BYTE *)(*(_QWORD *)v21 + 16LL) != 33
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33
     || (v22 = sub_F63050(v22, v18, v20, ".*")) == 0) )
  {
    sub_168B9F0((__int64)&ptr, a1 + 1, v9, 0xCE2u, 0);
    if ( v108 )
    {
      sub_AE9DF0(&v107, (__int64)v96, 1u);
    }
    else if ( v110 )
    {
      v60 = sub_168B9E0(&ptr);
      v63 = v106[0];
      if ( v106[0] )
        v63 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v106[0] + 32LL))(v106[0]);
      v101[0] = v63;
      v64 = sub_1587BC0(v60, v101, v58, v59, v61, v62);
      sub_AE9DF0((unsigned __int8 **)(*v64 + 32LL * v109 + 8), (__int64)v96, 1u);
    }
    v46 = sub_1605D30((__int64)&ptr, &v97);
    v101[0] = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v97, *(double *)a7.m128_u64);
    sub_1587DB0(v46, v101);
    sub_15F7200(&ptr);
    return 0;
  }
  v85 = sub_F61C10(v22);
  v27 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v98 = v27;
  if ( v94[0] )
  {
    v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v28 + 16) != 42 )
    {
      v28 = sub_199F9E0(v28, (__int64)v18, v23, v24);
      if ( !v28 )
      {
        sub_168B9F0((__int64)&ptr, a1 + 1, v9, 0xCE1u, 0);
        v53 = sub_19B0230((__int64)&ptr, (__int64 *)&v96);
        v95 = 1;
        v54 = sub_1587D10(v53, &v95);
        v55 = sub_1605D30(v54, &v98);
        v56 = j__strlen(".*");
        LODWORD(v99) = v9;
        HIDWORD(v99) = v9;
        v100 = 1;
        sub_19A1600((__int64)v101, v99, 1, ".*", v56);
        sub_1589170(v55, v101);
        if ( v102 != &v103 )
          operator delete(v102);
        sub_15F7200(&ptr);
        return 0;
      }
    }
    v98 = *(_QWORD *)(v28 + 32);
  }
  v29 = sub_F63270(*(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v18, v23, v24, v25, v26);
  v30 = (__int64)v29;
  if ( v29 && v85 )
  {
    if ( v85 == v29
      || ((v92 = v29, v31 = *(__int64 (__fastcall **)(__int64))(*v29 + 32LL), v31 != sub_A01140)
        ? (v32 = v31(v30))
        : (v32 = sub_B70A60(v30)),
          (v91 = v32, v33 = *(__int64 (__fastcall **)(_QWORD))(*v85 + 32LL), v33 != sub_A01140)
        ? (v34 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64 (__fastcall *)(_QWORD)))v33)(v85, v18, sub_A01140))
        : (v34 = sub_B70A60((__int64)v85)),
          v30 = (__int64)v92,
          v91 == v34) )
    {
LABEL_22:
      if ( (*(_WORD *)sub_BFB9F0(*a3 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) == 0x64 )
      {
        sub_168B9F0((__int64)&ptr, a1 + 1, v9, 0x12C8u, 0);
        sub_15890D0((__int64)&ptr, v94);
        sub_15F7200(&ptr);
        return 0;
      }
      v35 = *(_QWORD *)(v22 + 32);
      v36 = sub_A70F20(a1[31], v35, (*(_DWORD *)&byte_8[v98 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v98) & 7);
      v15 = v36;
      v40 = v36 & 0xFFFFFFFFFFFFFFF0LL;
      v41 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v41 + 16) != 26 )
      {
        v88 = v36;
        v57 = sub_199F9B0(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL), v35, v37, v38);
        v15 = v88;
        v41 = v57;
        if ( !v57 )
          goto LABEL_30;
      }
      v42 = (*(_BYTE *)(v41 + 18) >> 3) & 3;
      if ( v42 != 1 )
      {
        if ( v42 == 2 )
        {
          if ( v94[0]
            || (v86 = v15, v43 = sub_C0EB40(*a2 & 0xFFFFFFFFFFFFFFFELL, a1[31], nullptr, v38, v39), v15 = v86, !v43) )
          {
            v87 = v15;
            sub_168B9F0((__int64)&ptr, a1 + 1, v9, 0x12C7u, 0);
            v44 = sub_1605D30((__int64)&ptr, &v97);
            LODWORD(v99) = 0;
LABEL_29:
            v45 = sub_1587D10(v44, (int *)&v99);
            v101[0] = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v99, *(double *)a7.m128_u64);
            sub_1587DB0(v45, v101);
            sub_15F7200(&ptr);
            v15 = v87;
          }
        }
LABEL_30:
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
LABEL_31:
          *a4 = 0;
          return *(_QWORD *)(a1[31] + 19088);
        }
        if ( !v94[0] )
        {
          v65 = (*(_BYTE *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3;
LABEL_56:
          *a4 = v65;
          return v15;
        }
LABEL_62:
        v65 = 1;
        goto LABEL_56;
      }
      if ( v94[0] )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
          goto LABEL_31;
        goto LABEL_62;
      }
      v76 = a1[31];
      v89 = v15;
      v77 = sub_C0EB40(*a2 & 0xFFFFFFFFFFFFFFFELL, v76, nullptr, v38, v39);
      v15 = v89;
      if ( !v77 )
        goto LABEL_30;
      if ( *(_BYTE *)(v41 + 16) == 26 )
      {
        v80 = *(_BYTE *)(v41 + 18);
        if ( (v80 & 0x20) == 0 )
        {
LABEL_74:
          v87 = v15;
          sub_168B9F0((__int64)&ptr, a1 + 1, v9, 0x12C7u, 0);
          v44 = sub_1605D30((__int64)&ptr, &v97);
          LODWORD(v99) = 1;
          goto LABEL_29;
        }
      }
      else
      {
        v81 = sub_199F9B0(v41, v76, v78, v79);
        v15 = v89;
        if ( !v81 )
          goto LABEL_74;
        v80 = *(_BYTE *)(v41 + 18);
        if ( (v80 & 0x20) == 0 )
          goto LABEL_74;
        if ( *(_BYTE *)(v41 + 16) != 26 )
        {
          v84 = sub_199F9B0(v41, v76, v82, v83);
          v15 = v89;
          if ( !v84 )
            goto LABEL_81;
          v80 = *(_BYTE *)(v41 + 18);
        }
      }
      if ( ((v80 >> 5) & 4) != 0 )
        goto LABEL_74;
LABEL_81:
      v90 = v15;
      sub_168B9F0((__int64)&ptr, a1 + 1, v9, ((*(char *)(a1[29] + 1) >> 31) & 0x441) + 5654, 0);
      sub_15F7200(&ptr);
      v15 = v90;
      goto LABEL_30;
    }
  }
  v93 = v30;
  LODWORD(v101[0]) = v94[0];
  LODWORD(v105) = 3297;
  ptr = off_2BC7090;
  v106[0] = v101;
  v106[1] = &v96;
  v47 = sub_1E63C20(a1, v9, v98, 1, &ptr);
  v15 = 0;
  v49 = v93;
  if ( v47 )
    return v15;
  v50 = v93;
  HIDWORD(v93) = 0;
  if ( !(unsigned __int8)sub_183BB70((__int64)a1, v9, v50, (__int64)v85, v48, v49) )
  {
    sub_168B9F0((__int64)&ptr, a1 + 1, v9, 0xCE1u, 0);
    v51 = sub_19B0230((__int64)&ptr, (__int64 *)&v96);
    LODWORD(v99) = v94[0];
    v52 = sub_1587D10(v51, (int *)&v99);
    v101[0] = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
    sub_162B6D0(v52, v101);
    sub_15F7200(&ptr);
    return 0;
  }
  v66 = *a3;
  v105 = 0x400000000LL;
  ptr = v106;
  LODWORD(v93) = sub_EEC140(v66 & 0xFFFFFFFFFFFFFFFELL);
  v67 = sub_EEB7E0(*a2 & 0xFFFFFFFFFFFFFFFELL, v9, *(double *)a7.m128_u64);
  if ( !(unsigned __int8)sub_1851070(
                           (__int64)a1,
                           v98,
                           v85[6] & 0xFFFFFFFFFFFFFFF0LL,
                           v9,
                           v67 | (unsigned __int64)(v93 << 32),
                           (__int64)&ptr,
                           0) )
  {
    v68 = v85[6];
    v69 = *(_QWORD *)&byte_8[v98 & 0xFFFFFFFFFFFFFFF0LL];
    v70 = ((unsigned __int8)v69 | (unsigned __int8)v98) & 7;
    if ( (v69 & 8) != 0
      && (v70 = v98 & 7
              | *(_QWORD *)&byte_8[v98 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
              | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v98 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)),
          (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v98 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
         & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v71 = sub_A70C40(a1[31], v68, v70);
    }
    else
    {
      v71 = v68 & 0xFFFFFFFFFFFFFFF0LL | v70;
    }
    if ( v94[0] )
    {
      v71 = sub_A70010(a1[31], v71);
      v73 = 0;
      v72 = *a2 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v72 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      v73 = (*(_BYTE *)(v72 + 1) >> 1) & 3;
    }
    v74 = sub_160A600((__int64)a1, v72, v71, 7u, v73, (__int64)&ptr, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
    v75 = ptr;
    *a2 = v74;
    if ( v75 != v106 )
      free(v75);
    goto LABEL_22;
  }
  v15 = 0;
  if ( ptr != v106 )
  {
    free(ptr);
    return 0;
  }
  return v15;
}

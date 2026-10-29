unsigned __int64 __fastcall sub_191A580(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v12; // r15
  __int64 v13; // r15
  size_t v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r11
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  __int16 v25; // ax
  int v26; // eax
  unsigned __int64 v27; // r15
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // r11
  unsigned int v31; // r10d
  unsigned int v32; // r9d
  char *v33; // rax
  char v34; // r15
  __int64 v35; // rdx
  char v36; // al
  unsigned __int64 v37; // r9
  __int64 v38; // rbx
  unsigned __int64 v40; // rax
  __int16 v41; // dx
  _QWORD *v42; // r9
  char v43; // al
  unsigned __int8 v44; // al
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // al
  bool v50; // al
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  bool v55; // al
  unsigned __int16 *v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rdi
  unsigned __int64 v61; // r15
  unsigned int v62; // eax
  __int64 v63; // r8
  __int64 v64; // r9
  char v65; // al
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  unsigned __int64 *v69; // rax
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned int v77; // r10d
  unsigned __int64 v78; // r11
  __int64 v79; // rax
  __int64 v80; // r9
  _QWORD *v81; // rax
  unsigned __int64 v82; // [rsp+8h] [rbp-120h]
  unsigned __int64 v83; // [rsp+10h] [rbp-118h]
  unsigned int v84; // [rsp+10h] [rbp-118h]
  __int64 v85; // [rsp+10h] [rbp-118h]
  unsigned int v86; // [rsp+10h] [rbp-118h]
  unsigned int v87; // [rsp+10h] [rbp-118h]
  unsigned int v88; // [rsp+10h] [rbp-118h]
  unsigned int v89; // [rsp+10h] [rbp-118h]
  unsigned __int64 v90; // [rsp+10h] [rbp-118h]
  unsigned int v91; // [rsp+10h] [rbp-118h]
  unsigned int v92; // [rsp+18h] [rbp-110h]
  unsigned int v93; // [rsp+18h] [rbp-110h]
  unsigned int v94; // [rsp+18h] [rbp-110h]
  unsigned __int64 v95; // [rsp+18h] [rbp-110h]
  __int64 v96; // [rsp+18h] [rbp-110h]
  unsigned int v97; // [rsp+18h] [rbp-110h]
  __int64 v98; // [rsp+18h] [rbp-110h]
  unsigned __int64 v99; // [rsp+20h] [rbp-108h]
  unsigned int v100; // [rsp+20h] [rbp-108h]
  unsigned int v101; // [rsp+20h] [rbp-108h]
  unsigned int v102; // [rsp+28h] [rbp-100h]
  unsigned __int64 v103; // [rsp+28h] [rbp-100h]
  unsigned int v104; // [rsp+28h] [rbp-100h]
  unsigned int v105; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v106; // [rsp+30h] [rbp-F8h]
  unsigned int v107; // [rsp+3Ch] [rbp-ECh]
  int v108; // [rsp+4Ch] [rbp-DCh] BYREF
  unsigned __int64 v109; // [rsp+50h] [rbp-D8h] BYREF
  __int64 *v110; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v111; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+68h] [rbp-C0h]
  _QWORD *v113; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v114; // [rsp+80h] [rbp-A8h] BYREF
  char v115; // [rsp+D8h] [rbp-50h]
  unsigned int v116; // [rsp+E0h] [rbp-48h]
  char v117; // [rsp+E4h] [rbp-44h]

  if ( (unsigned __int8)sub_18FE730(a2, a4, (__int64 *)a1, *(double *)a6.m128_u64) )
    return 0;
  v12 = *a3;
  v109 = *(_QWORD *)(a2 + 8);
  v82 = a5 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v12 <= 1 )
      goto LABEL_4;
  }
  else
  {
    a5 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( v12 <= 1 )
      goto LABEL_4;
  }
  v40 = sub_BFD550(a2);
  v41 = *(_WORD *)v40 & 0x1FF;
  if ( v41 == 71 )
  {
    v42 = *(_QWORD **)(v40 + 16);
    v43 = 0;
  }
  else if ( v41 == 46 )
  {
    v42 = *(_QWORD **)(v40 + 24);
    v43 = 1;
  }
  else
  {
    v43 = 0;
    v42 = nullptr;
  }
  sub_1694D00(a1, v109, (_WORD *)(v12 & 0xFFFFFFFFFFFFFFFELL), 0, a4, v42, a6, v43);
LABEL_4:
  v13 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v13 + 47) & 0x20) != 0 )
  {
    v14 = j__strlen("cl_khr_fp16");
    if ( !sub_FF8450(a1 + 200, (__int64)"cl_khr_fp16", v14, v13) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E0 )
      {
        sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), a4, 0x124Fu, 0);
        v108 = 1;
        v38 = sub_1587D10((__int64)&v111, &v108);
        v110 = (__int64 *)sub_6D5440(&v109);
        sub_162B6D0(v38, (__int64 *)&v110);
        sub_15F7200(&v111);
        return 0;
      }
    }
  }
  if ( sub_F65F60(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), a4, 0x1560u, 0);
    LODWORD(v110) = 0;
    sub_1587D10((__int64)&v111, (int *)&v110);
    sub_15F7200(&v111);
    return 0;
  }
  if ( v82 )
  {
    LOWORD(v111) = v111 & 0xFE00 | 0x1A;
    if ( unk_2CD7484 )
      sub_EE9B50(26);
    v112 = a5;
    LODWORD(v111) = v111 & 0xFFF001FF;
    v113 = nullptr;
    HIDWORD(v111) = a4;
    v44 = sub_B62360((__int64)&v111);
    v110 = &v111;
    BYTE1(v111) = (v44 << 6) | BYTE1(v111) & 0x3F;
    BYTE2(v111) = BYTE2(v111) & 0xF8 | (v44 >> 2) & 7;
    v23 = sub_18D2070(
            a1,
            v109,
            (unsigned __int64 *)&v110,
            (unsigned int *)&v108,
            0,
            *(double *)a6.m128_u64,
            *(double *)a7.m128_u64);
    goto LABEL_42;
  }
  v83 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  sub_18CD1B0(a2, v83, a4, a1, v16);
  v17 = (__int64 *)v109;
  v18 = sub_1919BF0((_QWORD *)a1, v109, a3, 1, 0, 1u, a6, a7);
  v22 = v83;
  v23 = v18;
  if ( *a3 == 1 )
    return 0;
  if ( v18 != 5 )
  {
    v24 = v18;
    if ( v18 > 9 || ((1LL << v18) & 0x203) == 0 )
      goto LABEL_13;
    goto LABEL_56;
  }
  v50 = sub_F6AC10(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL), v109, v19, v20, v21);
  v54 = *(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = v83;
  if ( v50 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v24 = 0;
    v23 = 0;
LABEL_56:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 35 <= 1 )
    {
      v100 = v24;
      v95 = v22;
      v88 = v23;
      sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), a4, 0x1113u, 0);
      v17 = (__int64 *)&v109;
      sub_1605D30((__int64)&v111, (__int64 *)&v109);
      sub_15F7200(&v111);
      v24 = v100;
      v22 = v95;
      v23 = v88;
    }
    goto LABEL_13;
  }
  v55 = sub_F6AC10(v54, v109, v51, v52, v53);
  v24 = 5;
  v23 = 5;
  v22 = v83;
  if ( v55 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 34 )
      v23 = 0;
    v24 = 5
        * (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 34);
  }
LABEL_13:
  v25 = *(_WORD *)v22 & 0x1FF;
  if ( v25 == 79 )
  {
    v22 = *(_QWORD *)(v22 + 16);
    v25 = *(_WORD *)v22 & 0x1FF;
  }
  if ( v25 == 4 && (unsigned int)(*(_BYTE *)(v22 + 2) >> 3) - 6 <= 1 && (a4 & 0x80000000) == 0 )
  {
    v26 = *(_DWORD *)(v22 + 4);
    if ( v26 >= 0 && v26 == a4 + 1 )
    {
      v27 = *(_QWORD *)(v22 + 16);
      v92 = v24;
      v84 = v23;
      v99 = v22;
      v28 = sub_EEB7E0(v27, (__int64)v17, *(double *)a6.m128_u64);
      v23 = v84;
      v24 = v92;
      if ( v28 != a4 + 2 )
      {
        v29 = sub_EEB7E0(v27, (__int64)v17, *(double *)a6.m128_u64);
        v23 = v84;
        v24 = v92;
        if ( v29 >= 0 )
        {
          v102 = v92;
          v93 = v84;
          sub_168B9F0((__int64)&v111, (__int64 *)(a1 + 8), a4, 0x1BEEu, 0);
          v30 = v99;
          v31 = v84;
          v32 = v102;
          v33 = "-";
          if ( *(_BYTE *)(v99 + 2) >> 3 == 6 )
            v33 = "+";
          v85 = (__int64)v33;
          if ( v115 )
          {
            sub_AE9DF0(&v114, (__int64)v33, 1u);
            v31 = v93;
            v30 = v99;
            v32 = v102;
          }
          else if ( v117 )
          {
            v105 = v102;
            v103 = v99;
            v101 = v93;
            v73 = sub_168B9E0(&v111);
            v77 = v93;
            v78 = v103;
            v98 = v73;
            v79 = (__int64)v113;
            v80 = v105;
            if ( v113 )
            {
              v79 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD))(*v113 + 32LL))(
                      v113,
                      a1 + 8,
                      *v113,
                      v75,
                      v76,
                      v105);
              v80 = v105;
              v78 = v103;
              v77 = v101;
            }
            v107 = v80;
            v106 = v78;
            v104 = v77;
            v110 = (__int64 *)v79;
            v81 = sub_1587BC0(v98, (__int64 *)&v110, v74, (__int64)&v110, v76, v80);
            sub_AE9DF0((unsigned __int8 **)(*v81 + 32LL * v116 + 8), v85, 1u);
            v32 = v107;
            v30 = v106;
            v31 = v104;
          }
          v17 = (__int64 *)&v110;
          v94 = v32;
          v86 = v31;
          LODWORD(v110) = *(_DWORD *)(v30 + 4);
          HIDWORD(v110) = (_DWORD)v110;
          sub_1587DB0((__int64)&v111, (__int64 *)&v110);
          sub_15F7200(&v111);
          v24 = v94;
          v23 = v86;
        }
      }
    }
  }
  if ( v24 > 9 || ((1LL << v24) & 0x203) == 0 )
  {
LABEL_42:
    v37 = *a3 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_43;
  }
  v34 = v109;
  v35 = *(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v35 & 8) == 0 )
    goto LABEL_30;
  if ( (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
      & 7) != 2 )
  {
LABEL_68:
    if ( (((*(__int64 *)((char *)&qword_18 + (v35 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v34 & 7)) >> 6) & 7) == 2 )
      goto LABEL_69;
    goto LABEL_30;
  }
  v89 = v23;
  v96 = *(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL];
  v56 = (unsigned __int16 *)sub_BFD550(a2);
  v23 = v89;
  v59 = *v56;
  LOWORD(v59) = v59 & 0x1FF;
  if ( (_WORD)v59 != 71 )
    goto LABEL_75;
  v60 = *((_QWORD *)v56 + 2);
  v35 = v96;
  if ( (*(_BYTE *)(v60 + 29) & 1) == 0 )
    goto LABEL_68;
  v69 = sub_B8C3D0(v60, (__int64)v17, v96, v59, v57, v58);
  v23 = v89;
  v70 = *v69;
  v71 = *v69 + 8LL * *((unsigned int *)v69 + 2);
  if ( *v69 >= v71 )
  {
    if ( v70 != v71 )
    {
      while ( *(_WORD *)(*(_QWORD *)v71 + 36LL) != 148 )
      {
        v71 += 8LL;
        if ( v70 == v71 )
          goto LABEL_82;
      }
      goto LABEL_75;
    }
  }
  else
  {
    v72 = *v69;
    while ( *(_WORD *)(*(_QWORD *)v72 + 36LL) != 148 )
    {
      v72 += 8LL;
      if ( v71 == v72 )
        goto LABEL_82;
    }
    if ( v71 != v72 )
    {
LABEL_75:
      v17 = (__int64 *)a2;
      v91 = v23;
      sub_1A8EB30(*(_QWORD *)(a1 + 736), a2, *a3 & 0xFFFFFFFFFFFFFFFELL);
      v34 = v109;
      v23 = v91;
      v35 = *(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL];
      v68 = (v35 >> 3) & 1;
      goto LABEL_76;
    }
  }
LABEL_82:
  v34 = v109;
  v35 = *(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL];
  v68 = (v35 >> 3) & 1;
LABEL_76:
  if ( v68 )
    goto LABEL_68;
LABEL_30:
  v17 = *(__int64 **)(a1 + 248);
  v87 = v23;
  v36 = sub_F58500(&v109, (__int64)v17);
  v23 = v87;
  if ( !v36 )
  {
    v37 = *a3 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 0x14) != 0 )
    {
      sub_16D2940(a1, a4, a2, *a3 & 0xFFFFFFFFFFFFFFFELL, *(double *)a6.m128_u64);
      v23 = v87;
      v37 = *a3 & 0xFFFFFFFFFFFFFFFELL;
    }
    goto LABEL_43;
  }
LABEL_69:
  v61 = *(_QWORD *)(a1 + 264);
  v97 = v23;
  v90 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v62 = sub_EEB7E0(v90, (__int64)v17, *(double *)a6.m128_u64);
  v65 = sub_FD3830(*(_QWORD *)(v61 + 32), 0x1968u, v62, v61, v63, v64);
  v37 = v90;
  v23 = v97;
  if ( v65 != 1 )
  {
    v66 = *(unsigned int *)(a1 + 40);
    v67 = 0;
    if ( (_DWORD)v66 )
      v67 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v66 - 8);
    sub_15EED40(v67, v90);
    v23 = v97;
    v37 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  }
LABEL_43:
  if ( sub_18DCB30(a1, v23, a4, v109, a5, v37, 0, nullptr) )
    return 0;
  sub_18CABC0(a1, a2, *(double *)a6.m128_u64);
  v45 = *a3;
  v112 = 0;
  v111 = a2;
  sub_15A1710(a1, &v111, v45 & 0xFFFFFFFFFFFFFFFELL, v46, v47, v48);
  v49 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
  if ( v49 < 0 && ((v109 & 4) != 0 || (byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) && !v82 )
  {
    sub_14B7B40(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 264, a2);
    v49 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
  }
  if ( (v49 & 8) != 0 )
    return v109;
  else
    return sub_F64D20((__int64 *)&v109);
}

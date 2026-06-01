__int64 __fastcall sub_1E461B0(
        __int64 *a1,
        __int64 a2,
        char a3,
        __m128 a4,
        __m128 a5,
        __m128i a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11)
{
  void **v14; // r13
  __int64 v15; // rdi
  int v16; // ecx
  char v17; // al
  char v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int v27; // edx
  int v28; // r9d
  unsigned __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  double v45; // xmm4_8
  double v46; // xmm5_8
  unsigned __int64 v47; // rdi
  __int64 *v48; // rsi
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // r13
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r13
  __int64 v57; // rdx
  _QWORD *v58; // r14
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned int v61; // eax
  __int16 v62; // dx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int64 v78; // rax
  _DWORD *v79; // rdx
  __int64 v80; // rdi
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  _DWORD *v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // rsi
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  _QWORD *v95; // r15
  __int64 v96; // rax
  __int64 v97; // [rsp+8h] [rbp-50h]
  void *v98; // [rsp+18h] [rbp-40h] BYREF

  v14 = (void **)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v14 = (void **)*v14;
  v15 = *a1;
  v16 = *(_DWORD *)(a2 + 24);
  v17 = *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v14 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  if ( (v17 & 2) != 0 || (v17 & 8) != 0 )
  {
    v14 = (void **)sub_1DD4AE0(v15, v14, a1[4], v16, *(_QWORD *)(a2 + 40), 0, a4, a5);
    if ( !v14 )
    {
      v18 = 1;
      v14 = (void **)sub_A81910(*(_QWORD **)(*a1 + 248), *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), 0);
      goto LABEL_7;
    }
  }
  else
  {
    sub_18C4110(v15, v16, (__int64)*v14);
  }
  v18 = 0;
LABEL_7:
  if ( !(unsigned __int8)sub_142E840(*(_QWORD *)(*a1 + 240), 0x1335186u) )
    goto LABEL_15;
  v22 = *(_QWORD *)((unsigned __int64)*v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v22 + 16) != 15 )
  {
    v66 = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v66 + 16) == 15 )
      v22 = sub_F63050(*(_QWORD *)((unsigned __int64)*v14 & 0xFFFFFFFFFFFFFFF0LL), 20140422, v66, v19);
    else
      v22 = 0;
  }
  v23 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v23 = *(_QWORD *)v23;
  if ( (*(_BYTE *)(v23 + 8) & 0x7Fu) - 59 > 2
    || v23 == 64
    || !v22
    || (v24 = **(unsigned __int16 **)(v22 + 24), LOWORD(v24) = v24 & 0x1FF, (_WORD)v24 != 128)
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
  {
LABEL_15:
    v25 = *(_QWORD *)(a2 + 40);
    v26 = *a1;
    v27 = *(_DWORD *)(a2 + 56);
    v28 = v25 & 7;
    goto LABEL_16;
  }
  v97 = sub_B916A0(v23, 20140422, v24, v19, v20, v21);
  v82 = sub_183D350(*a1);
  v25 = *(_QWORD *)(a2 + 40);
  v26 = *a1;
  if ( v82 )
    v82 += 48;
  v27 = *(_DWORD *)(a2 + 56);
  v28 = *(_QWORD *)(a2 + 40) & 7;
  if ( v97 == v82 )
  {
    v83 = *(_QWORD *)(v23 - 24);
    if ( (v83 & 7) == 0 )
    {
      v84 = v83 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v84 )
      {
        v85 = *(_QWORD *)(v84 + 16);
        if ( *(_DWORD *)v85 == 11
          && *(_QWORD *)(v85 + 16) == 0x745F6E6F6D6D6F63LL
          && *(_WORD *)(v85 + 24) == 28793
          && *(_BYTE *)(v85 + 26) == 101 )
        {
          if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
          {
            v29 = 0;
            if ( !a3 )
            {
LABEL_19:
              v30 = a1[3];
              v32 = sub_B7A510(*(_QWORD *)(v26 + 248), v30, v27, *(_DWORD *)(a2 + 24), v29, (__int64)v14);
              if ( !v18 )
                goto LABEL_20;
LABEL_37:
              v30 = 1;
              sub_B88650(v32, 1);
              v35 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(a2 + 80) & 4) == 0 )
                goto LABEL_21;
              goto LABEL_38;
            }
            goto LABEL_36;
          }
          if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) == 0
            || (v86 = *(_DWORD **)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 16), *v86 != 4)
            || v86[4] != 1701869940
            || !v27 )
          {
            if ( !a3 )
            {
LABEL_18:
              v29 = v25 & 0xFFFFFFFFFFFFFFF8LL;
              goto LABEL_19;
            }
            goto LABEL_35;
          }
          v91 = v27;
          v92 = sub_1021680(*(_QWORD *)(v26 + 272), v27);
          if ( v92 && v92 != 3 )
          {
            v95 = *(_QWORD **)(*a1 + 248);
            v98 = *v14;
            v96 = sub_C1BEF0((__int64)&v98, v91, v93, v94);
            v14 = (void **)sub_A81910(v95, v96, 0);
          }
          goto LABEL_15;
        }
      }
    }
  }
LABEL_16:
  v29 = 0;
  if ( !a3 )
  {
    if ( v28 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !v28 )
LABEL_35:
    v29 = v25 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_36:
  v30 = a1[3];
  v32 = sub_B7A760(*(_QWORD *)(v26 + 248), v30, v27, *(_DWORD *)(a2 + 24), v29, (__int64)v14);
  if ( v18 )
    goto LABEL_37;
LABEL_20:
  v35 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) == 0 )
  {
LABEL_21:
    v36 = *v35;
    goto LABEL_22;
  }
LABEL_38:
  v36 = v35[1];
LABEL_22:
  v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
  v38 = *(_QWORD *)v37;
  v39 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v37 + 16LL) - 47;
  if ( (unsigned int)v39 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
    && (v38 = sub_F63050(v38, v30, v39, v31)) != 0 )
  {
    v40 = sub_F60F10(v38, v30, v39, v31, v33, v34)[15];
    if ( (v40 & 4) == 0 && a2 == (v40 & 0xFFFFFFFFFFFFFFF8LL) && !v18 )
    {
      v87 = (unsigned __int64)*v14 & 0xFFFFFFFFFFFFFFF0LL;
      v88 = *(_QWORD *)v87;
      v89 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v87 + 16LL) - 47;
      if ( (unsigned int)v89 > 1 )
        v88 = sub_F63050(v88, v30, v89, v41);
      v90 = sub_F60F10(v88, v30, v89, v41, v42, v43);
      sub_B78380((__int64)v90, v32);
    }
  }
  v44 = sub_1E0AD20(a2);
  v47 = *a1;
  v48 = (__int64 *)a1[4];
  if ( !v44 )
    goto LABEL_48;
  v49 = sub_1E38470(v47, *(_DWORD *)(a2 + 24), v44, a1[4], 0, a4, a5, a6);
  v53 = v49;
  if ( !v49 )
    return 0;
  sub_17C7020(*a1, v49, v32, v50, v51, v52);
  v56 = *(_QWORD *)(v53 + 72);
  *(_QWORD *)(v32 + 72) = v56;
  v57 = *(_QWORD *)(v56 + 64);
  if ( (v57 & 1) != 0 )
  {
    v78 = v57 & 0xFFFFFFFFFFFFFFFELL;
LABEL_62:
    v79 = (_DWORD *)(v57 & 0xFFFFFFFFFFFFFFF8LL);
    v58 = v79;
    v60 = (unsigned __int64)v79;
    if ( v78 )
    {
      if ( (v78 & 4) != 0 )
      {
        v60 = 0;
        if ( v79 )
        {
          v80 = *(_QWORD *)v79;
          v81 = *(_DWORD *)(*(_QWORD *)v79 + 12LL);
          if ( v79[2] != v81 )
          {
            v79[2] = v81;
            (*(void (__fastcall **)(__int64, __int64, _DWORD *, _QWORD))(*(_QWORD *)v80 + 152LL))(v80, v56, v79, 0);
          }
          v60 = v58[2];
          v58 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCLL);
        }
      }
    }
    goto LABEL_68;
  }
  v58 = (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v57 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v60 = 0;
LABEL_68:
    v56 = *(_QWORD *)(v32 + 72);
    goto LABEL_31;
  }
  v59 = *(_QWORD *)(v56 + 64) & 2LL;
  v60 = (unsigned __int64)v58;
  if ( (_DWORD)v59 )
  {
    v78 = sub_6E2500(v58, v56, v59, (__int64)v58, v54, v55) & 0xFFFFFFFFFFFFFFFELL;
    v57 = v78 | 1;
    *(_QWORD *)(v56 + 64) = v78 | 1;
    goto LABEL_62;
  }
LABEL_31:
  v61 = *(unsigned __int16 *)(v32 + 30);
  *(_QWORD *)(v32 + 64) = v58;
  v62 = *(_WORD *)(v60 + 30);
  v63 = v61;
  LOWORD(v63) = v61 & 0x3FFF;
  v64 = (unsigned int)v63 | v62 & 0x26;
  *(_WORD *)(v32 + 30) = v64 | v61 & 0xC000;
  v65 = *(_QWORD *)(v56 + 64);
  if ( (v65 & 1) != 0 || (v65 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v67 = v65 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v65 & 0xFFFFFFFFFFFFFFFELL) != 0 && (v65 & 4) != 0 && (v68 = v65 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      *(_QWORD *)(v68 + 16) = v32;
    else
      v67 = v32 & 0xFFFFFFFFFFFFFFFALL;
    *(_QWORD *)(v56 + 64) = v67 | 1;
    v47 = *a1;
    v48 = (__int64 *)a1[4];
  }
  else
  {
    *(_QWORD *)(v56 + 64) = sub_6E2500((_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL), v32, v64, v63, v54, v55) | 1;
    v47 = *a1;
    v48 = (__int64 *)a1[4];
  }
LABEL_48:
  sub_1E40A90(v47, v48, a2, v32, 0, nullptr, a4, a5, *(double *)a6.m128i_i64, a7, v45, v46, a10, a11);
  v73 = *(_QWORD *)(a2 + 80);
  if ( (v73 & 4) != 0 )
    v74 = *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
  v75 = v74 & 0xFFFFFFFFFFFFFFF0LL;
  v76 = *(_QWORD *)v75;
  if ( *(_BYTE *)(*(_QWORD *)v75 + 16LL) == 20
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20
    && sub_F63050(v76, v48, v69, v70) )
  {
    sub_1669300(*a1, v32, v69, v70, v71, v72);
  }
  *(_BYTE *)(v32 + 29) = *(_BYTE *)(a2 + 29) & 0x60 | *(_BYTE *)(v32 + 29) & 0x9F;
  *(_BYTE *)(v32 + 29) = (8 * sub_B8C090((_BYTE *)a2)) | *(_BYTE *)(v32 + 29) & 0xF7;
  return v32;
}

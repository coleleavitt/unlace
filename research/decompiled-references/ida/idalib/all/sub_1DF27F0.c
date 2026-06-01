__int64 __fastcall sub_1DF27F0(
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
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  char v19; // bp
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int16 *v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r14
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rax
  __int64 v38; // rbx
  int v40; // r12d
  int v41; // r14d
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int16 *v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // rax
  int v61; // r12d
  int v62; // r14d
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int16 *v68; // rax
  unsigned __int64 v69; // r15
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  __int64 v72; // r15
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // r14
  __int64 v77; // r12
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r12
  unsigned __int64 v83; // rax
  double v84; // xmm4_8
  double v85; // xmm5_8
  __int64 v86; // rdi
  __int64 v87; // [rsp+0h] [rbp-198h]
  unsigned __int64 v88; // [rsp+0h] [rbp-198h]
  __int64 v89; // [rsp+8h] [rbp-190h]
  unsigned __int64 v90; // [rsp+8h] [rbp-190h]
  unsigned __int64 v91; // [rsp+8h] [rbp-190h]
  unsigned __int64 v92; // [rsp+8h] [rbp-190h]
  unsigned __int64 v93; // [rsp+38h] [rbp-160h]
  void *v94; // [rsp+40h] [rbp-158h] BYREF
  __int64 v95; // [rsp+48h] [rbp-150h]
  _BYTE v96[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v97; // [rsp+70h] [rbp-128h] BYREF
  __int64 v98; // [rsp+78h] [rbp-120h]
  _BYTE v99[64]; // [rsp+80h] [rbp-118h] BYREF
  void *v100; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v101; // [rsp+C8h] [rbp-D0h]
  _BYTE v102[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  __int64 v104; // [rsp+118h] [rbp-80h]
  _BYTE v105[120]; // [rsp+120h] [rbp-78h] BYREF

  v15 = (unsigned __int64)v99;
  v98 = 0x800000000LL;
  v101 = 0x800000000LL;
  v104 = 0x800000000LL;
  v16 = *(_DWORD *)(a2 + 16);
  v100 = v102;
  v17 = (unsigned __int64)v96;
  v95 = 0x400000000LL;
  v97 = v99;
  v94 = v96;
  ptr = v105;
  if ( v16 )
  {
    v18 = 0;
    v19 = 0;
    v89 = (unsigned int)(v16 - 1);
    v20 = 0;
    v21 = **(_QWORD **)(a2 + 72);
    while ( 1 )
    {
      *(_QWORD *)(v17 + 8 * v20) = v21;
      v34 = *(_QWORD *)(a2 + 56);
      v35 = 8 * v18;
      LODWORD(v95) = v95 + 1;
      v36 = *(_QWORD *)(v34 + 8 * v18);
      v37 = (unsigned __int64)sub_1DC71F0(a1, v36, v17, v15, a13, a14, a3, a4);
      if ( v37 <= 1 )
      {
        if ( v37 == 1 )
          goto LABEL_16;
      }
      else if ( v36 != (v37 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v19 = 1;
        v37 = sub_1C543A0(*a1, v37 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
        if ( v37 == 1 )
          goto LABEL_16;
      }
      v22 = (unsigned int)v98;
      v23 = v37 & 0xFFFFFFFFFFFFFFFELL;
      v24 = (unsigned int)v98 + 1LL;
      if ( v24 > HIDWORD(v98) )
      {
        v93 = v23;
        sub_2237220(&v97, v99, v24, 8);
        v22 = (unsigned int)v98;
        v23 = v93;
      }
      *((_QWORD *)v97 + v22) = v23;
      LODWORD(v98) = v98 + 1;
      v25 = sub_EEDDB0(a2, v18);
      v30 = sub_1DC71F0(a1, v25, v26, v27, v28, v29, a3, a4);
      if ( v30 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_16;
      v31 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v101;
      v19 |= v25 != v31;
      v32 = (unsigned int)v101 + 1LL;
      if ( v32 > HIDWORD(v101) )
      {
        v88 = v31;
        sub_2237220(&v100, v102, v32, 8);
        v15 = (unsigned int)v101;
        v31 = v88;
      }
      v17 = (unsigned __int64)v100;
      *((_QWORD *)v100 + v15) = v31;
      LODWORD(v101) = v101 + 1;
      if ( v89 == v18 )
        goto LABEL_27;
      v15 = HIDWORD(v95);
      v21 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v35 + 8);
      v20 = (unsigned int)v95;
      v33 = (unsigned int)v95 + 1LL;
      if ( v33 > HIDWORD(v95) )
      {
        v87 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v35 + 8);
        sub_2237220(&v94, v96, v33, 8);
        v20 = (unsigned int)v95;
        v21 = v87;
      }
      v17 = (unsigned __int64)v94;
      ++v18;
    }
  }
  v19 = 0;
LABEL_27:
  v40 = *(_DWORD *)(a2 + 20);
  if ( v40 )
  {
    v41 = 0;
    while ( 1 )
    {
      v53 = HIDWORD(v95);
      v54 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v41));
      v55 = (unsigned int)v95;
      v56 = (unsigned int)v95 + 1LL;
      if ( v56 > HIDWORD(v95) )
      {
        sub_2237220(&v94, v96, v56, 8);
        v55 = (unsigned int)v95;
      }
      *((_QWORD *)v94 + v55) = v54;
      v57 = *(_QWORD *)(a2 + 56);
      v58 = (unsigned int)(*(_DWORD *)(a2 + 16) + v41);
      LODWORD(v95) = v95 + 1;
      v59 = *(_QWORD *)(v57 + 8 * v58);
      v60 = (unsigned __int64)sub_1DC71F0(a1, v59, v58, v53, a13, a14, a3, a4);
      if ( v60 > 1 )
      {
        if ( v59 == (v60 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_30;
        v19 = 1;
        v60 = sub_1C543A0(*a1, v60 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
      }
      if ( v60 == 1 )
        goto LABEL_16;
LABEL_30:
      v42 = (unsigned int)v98;
      v43 = v60 & 0xFFFFFFFFFFFFFFFELL;
      v44 = (unsigned int)v98 + 1LL;
      if ( v44 > HIDWORD(v98) )
      {
        v90 = v43;
        sub_2237220(&v97, v99, v44, 8);
        v42 = (unsigned int)v98;
        v43 = v90;
      }
      *((_QWORD *)v97 + v42) = v43;
      LODWORD(v98) = v98 + 1;
      v45 = sub_EEDDC0(a2, v41);
      v50 = sub_1DC71F0(a1, v45, v46, v47, v48, v49, a3, a4);
      if ( v50 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_16;
      v51 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v101;
      v19 |= v45 != v51;
      v52 = (unsigned int)v101 + 1LL;
      if ( v52 > HIDWORD(v101) )
      {
        v91 = v51;
        ++v41;
        sub_2237220(&v100, v102, v52, 8);
        v15 = (unsigned int)v101;
        v17 = (unsigned __int64)v100;
        *((_QWORD *)v100 + (unsigned int)v101) = v91;
        LODWORD(v101) = v101 + 1;
        if ( v40 == v41 )
          break;
      }
      else
      {
        v17 = (unsigned __int64)v100;
        ++v41;
        *((_QWORD *)v100 + (unsigned int)v101) = v51;
        LODWORD(v101) = v101 + 1;
        if ( v41 == v40 )
          break;
      }
    }
  }
  v61 = *(_DWORD *)(a2 + 80);
  if ( v61 )
  {
    v62 = 0;
    while ( 1 )
    {
      v72 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v62));
      v73 = (unsigned int)v95;
      v74 = (unsigned int)v95 + 1LL;
      if ( v74 > HIDWORD(v95) )
      {
        sub_2237220(&v94, v96, v74, 8);
        v73 = (unsigned int)v95;
      }
      *((_QWORD *)v94 + v73) = v72;
      LODWORD(v95) = v95 + 1;
      v63 = sub_EEDDE0(a2, v62);
      v68 = sub_1DC71F0(a1, v63, v64, v65, v66, v67, a3, a4);
      if ( v68 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_16;
      v69 = (unsigned __int64)v68 & 0xFFFFFFFFFFFFFFFELL;
      v70 = sub_EEDDE0(a2, v62);
      v15 = HIDWORD(v101);
      v19 |= v70 != v69;
      v71 = (unsigned int)v101 + 1LL;
      if ( v71 > HIDWORD(v101) )
      {
        ++v62;
        sub_2237220(&v100, v102, v71, 8);
        v17 = (unsigned int)v101;
        *((_QWORD *)v100 + (unsigned int)v101) = v69;
        LODWORD(v101) = v101 + 1;
        if ( v61 == v62 )
          break;
      }
      else
      {
        v17 = (unsigned __int64)v100;
        ++v62;
        *((_QWORD *)v100 + (unsigned int)v101) = v69;
        LODWORD(v101) = v101 + 1;
        if ( v62 == v61 )
          break;
      }
    }
  }
  v75 = *(_DWORD *)(a2 + 24);
  if ( v75 )
  {
    v76 = 0;
    v77 = 8LL * (unsigned int)(v75 - 1) + 8;
    while ( 1 )
    {
      v80 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + v76);
      v81 = (unsigned __int64)sub_1DC71F0(a1, v80, v17, v15, a13, a14, a3, a4);
      if ( v81 <= 1 )
        goto LABEL_51;
      if ( v80 != (v81 & 0xFFFFFFFFFFFFFFFELL) )
        break;
LABEL_52:
      v15 = (unsigned int)v104;
      v78 = v81 & 0xFFFFFFFFFFFFFFFELL;
      v79 = (unsigned int)v104 + 1LL;
      if ( v79 > HIDWORD(v104) )
      {
        v92 = v78;
        v76 += 8;
        sub_2237220(&ptr, v105, v79, 8);
        v15 = (unsigned int)v104;
        v17 = (unsigned __int64)ptr;
        *((_QWORD *)ptr + (unsigned int)v104) = v92;
        LODWORD(v104) = v104 + 1;
        if ( v76 == v77 )
          goto LABEL_58;
      }
      else
      {
        v17 = (unsigned __int64)ptr;
        v76 += 8;
        *((_QWORD *)ptr + (unsigned int)v104) = v78;
        LODWORD(v104) = v104 + 1;
        if ( v77 == v76 )
          goto LABEL_58;
      }
    }
    v19 = 1;
    v81 = sub_1C543A0(*a1, v81 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
LABEL_51:
    if ( v81 == 1 )
      goto LABEL_16;
    goto LABEL_52;
  }
LABEL_58:
  v82 = *(_QWORD *)(a2 + 48);
  v83 = (unsigned __int64)sub_1DC71F0(a1, v82, v17, v15, a13, a14, a3, a4);
  if ( v83 > 1 )
  {
    v86 = *a1;
    if ( v82 == (v83 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_61;
    v83 = sub_1C543A0(v86, v83 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
    if ( v83 != 1 )
    {
      v86 = *a1;
LABEL_63:
      v38 = sub_1C5B2B0(
              (__int64 *)v86,
              *(_DWORD *)(a2 + 8),
              *(_BYTE *)(a2 + 12),
              *(_BYTE *)(a2 + 13),
              *(_DWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 20),
              *(double *)a3.m128_u64,
              a4,
              a5,
              a6,
              v84,
              v85,
              a9,
              a10,
              v94,
              (_DWORD **)v97,
              (unsigned int)v98,
              v100,
              (char *)(unsigned int)v101,
              (_DWORD *)(v83 & 0xFFFFFFFFFFFFFFFELL),
              (_DWORD **)ptr,
              (unsigned int)v104,
              *(_DWORD *)(a2 + 80),
              *(_DWORD *)(a2 + 40));
      goto LABEL_17;
    }
LABEL_16:
    v38 = 1;
    goto LABEL_17;
  }
  if ( v83 == 1 )
    goto LABEL_16;
  v86 = *a1;
LABEL_61:
  if ( *(_DWORD *)(v86 + 12632) )
    goto LABEL_63;
  v38 = a2;
  if ( v19 )
    goto LABEL_63;
LABEL_17:
  if ( ptr != v105 )
    free(ptr);
  if ( v94 != v96 )
    free(v94);
  if ( v100 != v102 )
    free(v100);
  if ( v97 != v99 )
    free(v97);
  return v38;
}

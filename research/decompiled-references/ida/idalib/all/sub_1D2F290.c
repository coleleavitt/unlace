__int64 __fastcall sub_1D2F290(
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
        __int64 a13)
{
  unsigned __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r15
  char v18; // bp
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int16 *v24; // r12
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned __int16 *v34; // r12
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  int v38; // r12d
  int v39; // r14d
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int16 *v43; // r15
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // r15
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int16 *v56; // r15
  unsigned __int64 v57; // rax
  int v58; // r12d
  int v59; // r14d
  unsigned __int16 *v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned __int64 v65; // r15
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // r15
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // r14
  __int64 v73; // r12
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rdx
  unsigned __int16 *v76; // r15
  unsigned __int64 v77; // rax
  unsigned __int16 *v78; // r12
  unsigned __int64 v79; // rax
  double v80; // xmm4_8
  double v81; // xmm5_8
  __int64 v82; // rdi
  __int64 v83; // [rsp+0h] [rbp-198h]
  unsigned __int64 v84; // [rsp+0h] [rbp-198h]
  __int64 v85; // [rsp+8h] [rbp-190h]
  unsigned __int64 v86; // [rsp+8h] [rbp-190h]
  unsigned __int64 v87; // [rsp+8h] [rbp-190h]
  unsigned __int64 v88; // [rsp+8h] [rbp-190h]
  unsigned __int64 v89; // [rsp+38h] [rbp-160h]
  void *v90; // [rsp+40h] [rbp-158h] BYREF
  __int64 v91; // [rsp+48h] [rbp-150h]
  _BYTE v92[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v93; // [rsp+70h] [rbp-128h] BYREF
  __int64 v94; // [rsp+78h] [rbp-120h]
  _BYTE v95[64]; // [rsp+80h] [rbp-118h] BYREF
  void *v96; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-D0h]
  _BYTE v98[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  __int64 v100; // [rsp+118h] [rbp-80h]
  _BYTE v101[120]; // [rsp+120h] [rbp-78h] BYREF

  v14 = (unsigned __int64)v95;
  v94 = 0x800000000LL;
  v97 = 0x800000000LL;
  v100 = 0x800000000LL;
  v15 = *(_DWORD *)(a2 + 16);
  v96 = v98;
  v16 = (__int64)v92;
  v91 = 0x400000000LL;
  v93 = v95;
  v90 = v92;
  ptr = v101;
  if ( v15 )
  {
    v17 = 0;
    v18 = 0;
    v85 = (unsigned int)(v15 - 1);
    v19 = 0;
    v20 = **(_QWORD **)(a2 + 72);
    while ( 1 )
    {
      *(_QWORD *)(v16 + 8 * v19) = v20;
      v32 = *(_QWORD *)(a2 + 56);
      v33 = 8 * v17;
      LODWORD(v91) = v91 + 1;
      v34 = *(unsigned __int16 **)(v32 + 8 * v17);
      v35 = sub_1D11200(a1, v34, a3, a4, v16, v14, a13);
      if ( v35 <= 1 )
      {
        if ( v35 == 1 )
          goto LABEL_16;
      }
      else if ( v34 != (unsigned __int16 *)(v35 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v18 = 1;
        v35 = sub_1C543A0(*a1, v35 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
        if ( v35 == 1 )
          goto LABEL_16;
      }
      v21 = (unsigned int)v94;
      v22 = v35 & 0xFFFFFFFFFFFFFFFELL;
      v23 = (unsigned int)v94 + 1LL;
      if ( v23 > HIDWORD(v94) )
      {
        v89 = v22;
        sub_2237220(&v93, v95, v23, 8);
        v21 = (unsigned int)v94;
        v22 = v89;
      }
      *((_QWORD *)v93 + v21) = v22;
      LODWORD(v94) = v94 + 1;
      v24 = (unsigned __int16 *)sub_EEDDB0(a2, v17);
      v28 = sub_1D11200(a1, v24, a3, a4, v25, v26, v27);
      if ( v28 == 1 )
        goto LABEL_16;
      v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v97;
      v18 |= v24 != (unsigned __int16 *)v29;
      v30 = (unsigned int)v97 + 1LL;
      if ( v30 > HIDWORD(v97) )
      {
        v84 = v29;
        sub_2237220(&v96, v98, v30, 8);
        v14 = (unsigned int)v97;
        v29 = v84;
      }
      v16 = (__int64)v96;
      *((_QWORD *)v96 + v14) = v29;
      LODWORD(v97) = v97 + 1;
      if ( v85 == v17 )
        goto LABEL_27;
      v14 = HIDWORD(v91);
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v33 + 8);
      v19 = (unsigned int)v91;
      v31 = (unsigned int)v91 + 1LL;
      if ( v31 > HIDWORD(v91) )
      {
        v83 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v33 + 8);
        sub_2237220(&v90, v92, v31, 8);
        v19 = (unsigned int)v91;
        v20 = v83;
      }
      v16 = (__int64)v90;
      ++v17;
    }
  }
  v18 = 0;
LABEL_27:
  v38 = *(_DWORD *)(a2 + 20);
  if ( v38 )
  {
    v39 = 0;
    while ( 1 )
    {
      v50 = HIDWORD(v91);
      v51 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v39));
      v52 = (unsigned int)v91;
      v53 = (unsigned int)v91 + 1LL;
      if ( v53 > HIDWORD(v91) )
      {
        sub_2237220(&v90, v92, v53, 8);
        v52 = (unsigned int)v91;
      }
      *((_QWORD *)v90 + v52) = v51;
      v54 = *(_QWORD *)(a2 + 56);
      v55 = (unsigned int)(*(_DWORD *)(a2 + 16) + v39);
      LODWORD(v91) = v91 + 1;
      v56 = *(unsigned __int16 **)(v54 + 8 * v55);
      v57 = sub_1D11200(a1, v56, a3, a4, v55, v50, a13);
      if ( v57 > 1 )
      {
        if ( v56 == (unsigned __int16 *)(v57 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_30;
        v18 = 1;
        v57 = sub_1C543A0(*a1, v57 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
      }
      if ( v57 == 1 )
        goto LABEL_16;
LABEL_30:
      v40 = (unsigned int)v94;
      v41 = v57 & 0xFFFFFFFFFFFFFFFELL;
      v42 = (unsigned int)v94 + 1LL;
      if ( v42 > HIDWORD(v94) )
      {
        v86 = v41;
        sub_2237220(&v93, v95, v42, 8);
        v40 = (unsigned int)v94;
        v41 = v86;
      }
      *((_QWORD *)v93 + v40) = v41;
      LODWORD(v94) = v94 + 1;
      v43 = (unsigned __int16 *)sub_EEDDC0(a2, v39);
      v47 = sub_1D11200(a1, v43, a3, a4, v44, v45, v46);
      if ( v47 == 1 )
        goto LABEL_16;
      v48 = v47 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v97;
      v18 |= v43 != (unsigned __int16 *)v48;
      v49 = (unsigned int)v97 + 1LL;
      if ( v49 > HIDWORD(v97) )
      {
        v87 = v48;
        ++v39;
        sub_2237220(&v96, v98, v49, 8);
        v14 = (unsigned int)v97;
        v16 = (__int64)v96;
        *((_QWORD *)v96 + (unsigned int)v97) = v87;
        LODWORD(v97) = v97 + 1;
        if ( v38 == v39 )
          break;
      }
      else
      {
        v16 = (__int64)v96;
        ++v39;
        *((_QWORD *)v96 + (unsigned int)v97) = v48;
        LODWORD(v97) = v97 + 1;
        if ( v39 == v38 )
          break;
      }
    }
  }
  v58 = *(_DWORD *)(a2 + 80);
  if ( v58 )
  {
    v59 = 0;
    while ( 1 )
    {
      v68 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v59));
      v69 = (unsigned int)v91;
      v70 = (unsigned int)v91 + 1LL;
      if ( v70 > HIDWORD(v91) )
      {
        sub_2237220(&v90, v92, v70, 8);
        v69 = (unsigned int)v91;
      }
      *((_QWORD *)v90 + v69) = v68;
      LODWORD(v91) = v91 + 1;
      v60 = (unsigned __int16 *)sub_EEDDE0(a2, v59);
      v64 = sub_1D11200(a1, v60, a3, a4, v61, v62, v63);
      if ( v64 == 1 )
        goto LABEL_16;
      v65 = v64 & 0xFFFFFFFFFFFFFFFELL;
      v66 = sub_EEDDE0(a2, v59);
      v14 = HIDWORD(v97);
      v18 |= v66 != v65;
      v67 = (unsigned int)v97 + 1LL;
      if ( v67 > HIDWORD(v97) )
      {
        ++v59;
        sub_2237220(&v96, v98, v67, 8);
        v16 = (unsigned int)v97;
        *((_QWORD *)v96 + (unsigned int)v97) = v65;
        LODWORD(v97) = v97 + 1;
        if ( v58 == v59 )
          break;
      }
      else
      {
        v16 = (__int64)v96;
        ++v59;
        *((_QWORD *)v96 + (unsigned int)v97) = v65;
        LODWORD(v97) = v97 + 1;
        if ( v59 == v58 )
          break;
      }
    }
  }
  v71 = *(_DWORD *)(a2 + 24);
  if ( v71 )
  {
    v72 = 0;
    v73 = 8LL * (unsigned int)(v71 - 1) + 8;
    while ( 1 )
    {
      v76 = *(unsigned __int16 **)(*(_QWORD *)(a2 + 64) + v72);
      v77 = sub_1D11200(a1, v76, a3, a4, v16, v14, a13);
      if ( v77 <= 1 )
        goto LABEL_51;
      if ( v76 != (unsigned __int16 *)(v77 & 0xFFFFFFFFFFFFFFFELL) )
        break;
LABEL_52:
      v14 = (unsigned int)v100;
      v74 = v77 & 0xFFFFFFFFFFFFFFFELL;
      v75 = (unsigned int)v100 + 1LL;
      if ( v75 > HIDWORD(v100) )
      {
        v88 = v74;
        v72 += 8;
        sub_2237220(&ptr, v101, v75, 8);
        v14 = (unsigned int)v100;
        v16 = (__int64)ptr;
        *((_QWORD *)ptr + (unsigned int)v100) = v88;
        LODWORD(v100) = v100 + 1;
        if ( v72 == v73 )
          goto LABEL_58;
      }
      else
      {
        v16 = (__int64)ptr;
        v72 += 8;
        *((_QWORD *)ptr + (unsigned int)v100) = v74;
        LODWORD(v100) = v100 + 1;
        if ( v73 == v72 )
          goto LABEL_58;
      }
    }
    v18 = 1;
    v77 = sub_1C543A0(*a1, v77 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
LABEL_51:
    if ( v77 == 1 )
      goto LABEL_16;
    goto LABEL_52;
  }
LABEL_58:
  v78 = *(unsigned __int16 **)(a2 + 48);
  v79 = sub_1D11200(a1, v78, a3, a4, v16, v14, a13);
  if ( v79 > 1 )
  {
    v82 = *a1;
    if ( v78 == (unsigned __int16 *)(v79 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_61;
    v79 = sub_1C543A0(v82, v79 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
    if ( v79 != 1 )
    {
      v82 = *a1;
LABEL_63:
      v36 = sub_1C5B2B0(
              (__int64 *)v82,
              *(_DWORD *)(a2 + 8),
              *(_BYTE *)(a2 + 12),
              *(_BYTE *)(a2 + 13),
              *(_DWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 20),
              *(double *)a3.m128_u64,
              a4,
              a5,
              a6,
              v80,
              v81,
              a9,
              a10,
              v90,
              (_DWORD **)v93,
              (unsigned int)v94,
              v96,
              (char *)(unsigned int)v97,
              (_DWORD *)(v79 & 0xFFFFFFFFFFFFFFFELL),
              (_DWORD **)ptr,
              (unsigned int)v100,
              *(_DWORD *)(a2 + 80),
              *(_DWORD *)(a2 + 40));
      goto LABEL_17;
    }
LABEL_16:
    v36 = 1;
    goto LABEL_17;
  }
  if ( v79 == 1 )
    goto LABEL_16;
  v82 = *a1;
LABEL_61:
  if ( *(_DWORD *)(v82 + 12632) )
    goto LABEL_63;
  v36 = a2;
  if ( v18 )
    goto LABEL_63;
LABEL_17:
  if ( ptr != v101 )
    free(ptr);
  if ( v90 != v92 )
    free(v90);
  if ( v96 != v98 )
    free(v96);
  if ( v93 != v95 )
    free(v93);
  return v36;
}

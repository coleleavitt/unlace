__int64 __fastcall sub_1C9A860(
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
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int16 *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r12
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rax
  _DWORD **v36; // rdi
  __int64 v37; // rbx
  int v39; // ebp
  int v40; // r13d
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int16 *v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // r15
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rax
  int v59; // r12d
  int v60; // r15d
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int16 *v65; // rax
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // rdx
  __int64 v68; // rbp
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // r13
  __int64 v73; // rbp
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r15
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rbp
  unsigned __int64 v79; // rax
  double v80; // xmm4_8
  double v81; // xmm5_8
  __int64 v82; // rax
  __int64 v83; // [rsp+8h] [rbp-190h]
  unsigned __int64 v84; // [rsp+8h] [rbp-190h]
  unsigned __int64 v85; // [rsp+8h] [rbp-190h]
  unsigned __int64 v86; // [rsp+8h] [rbp-190h]
  __int64 v87; // [rsp+38h] [rbp-160h]
  unsigned __int64 v88; // [rsp+38h] [rbp-160h]
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

  v14 = (unsigned __int64)v101;
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
    v17 = *(_QWORD *)(a2 + 72);
    v18 = 0;
    v83 = (unsigned int)(v15 - 1);
    v19 = 0;
    v20 = *(_QWORD *)v17;
    while ( 1 )
    {
      *(_QWORD *)(v16 + 8 * v19) = v20;
      v32 = *(_QWORD *)(a2 + 56);
      LODWORD(v91) = v91 + 1;
      v33 = 8 * v18;
      v34 = *(_QWORD *)(v32 + 8 * v18);
      v35 = (unsigned __int64)sub_1C7CFE0(a1, v34, a3, a4, v16, v17, a13);
      if ( v35 <= 1 )
      {
        if ( v35 == 1 )
          goto LABEL_16;
      }
      else if ( v34 != (v35 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v35 = sub_1C543A0(*a1, v35 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
        if ( v35 == 1 )
          goto LABEL_16;
      }
      v21 = (unsigned int)v94;
      v22 = v35 & 0xFFFFFFFFFFFFFFFELL;
      v23 = (unsigned int)v94 + 1LL;
      if ( v23 > HIDWORD(v94) )
      {
        v88 = v22;
        sub_2237220(&v93, v95, v23, 8);
        v21 = (unsigned int)v94;
        v22 = v88;
      }
      *((_QWORD *)v93 + v21) = v22;
      LODWORD(v94) = v94 + 1;
      v24 = sub_EEDDB0(a2, v18);
      v28 = sub_1C7CFE0(a1, v24, a3, a4, v25, v26, v27);
      if ( v28 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_16;
      v14 = (unsigned int)v97;
      v29 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFELL;
      v30 = (unsigned int)v97 + 1LL;
      if ( v30 > HIDWORD(v97) )
      {
        v89 = v29;
        sub_2237220(&v96, v98, v30, 8);
        v14 = (unsigned int)v97;
        v29 = v89;
      }
      v16 = (__int64)v96;
      *((_QWORD *)v96 + v14) = v29;
      LODWORD(v97) = v97 + 1;
      if ( v83 == v18 )
        break;
      v17 = HIDWORD(v91);
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v33 + 8);
      v19 = (unsigned int)v91;
      v31 = (unsigned int)v91 + 1LL;
      if ( v31 > HIDWORD(v91) )
      {
        v87 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v33 + 8);
        sub_2237220(&v90, v92, v31, 8);
        v19 = (unsigned int)v91;
        v20 = v87;
      }
      v16 = (__int64)v90;
      ++v18;
    }
  }
  v39 = *(_DWORD *)(a2 + 20);
  if ( v39 )
  {
    v40 = 0;
    while ( 1 )
    {
      v51 = HIDWORD(v91);
      v52 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v40));
      v53 = (unsigned int)v91;
      v54 = (unsigned int)v91 + 1LL;
      if ( v54 > HIDWORD(v91) )
      {
        sub_2237220(&v90, v92, v54, 8);
        v53 = (unsigned int)v91;
      }
      *((_QWORD *)v90 + v53) = v52;
      v55 = *(_QWORD *)(a2 + 56);
      v56 = (unsigned int)(*(_DWORD *)(a2 + 16) + v40);
      LODWORD(v91) = v91 + 1;
      v57 = *(_QWORD *)(v55 + 8 * v56);
      v58 = (unsigned __int64)sub_1C7CFE0(a1, v57, a3, a4, v56, v51, a13);
      if ( v58 > 1 )
      {
        if ( v57 == (v58 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_29;
        v58 = sub_1C543A0(*a1, v58 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
      }
      if ( v58 == 1 )
        goto LABEL_16;
LABEL_29:
      v41 = (unsigned int)v94;
      v42 = v58 & 0xFFFFFFFFFFFFFFFELL;
      v43 = (unsigned int)v94 + 1LL;
      if ( v43 > HIDWORD(v94) )
      {
        v84 = v42;
        sub_2237220(&v93, v95, v43, 8);
        v41 = (unsigned int)v94;
        v42 = v84;
      }
      *((_QWORD *)v93 + v41) = v42;
      LODWORD(v94) = v94 + 1;
      v44 = sub_EEDDC0(a2, v40);
      v48 = sub_1C7CFE0(a1, v44, a3, a4, v45, v46, v47);
      if ( v48 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_16;
      v14 = (unsigned int)v97;
      v49 = (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFELL;
      v50 = (unsigned int)v97 + 1LL;
      if ( v50 > HIDWORD(v97) )
      {
        v85 = v49;
        ++v40;
        sub_2237220(&v96, v98, v50, 8);
        v14 = (unsigned int)v97;
        v16 = (__int64)v96;
        *((_QWORD *)v96 + (unsigned int)v97) = v85;
        LODWORD(v97) = v97 + 1;
        if ( v39 == v40 )
          break;
      }
      else
      {
        v16 = (__int64)v96;
        ++v40;
        *((_QWORD *)v96 + (unsigned int)v97) = v49;
        LODWORD(v97) = v97 + 1;
        if ( v40 == v39 )
          break;
      }
    }
  }
  v59 = *(_DWORD *)(a2 + 80);
  if ( v59 )
  {
    v60 = 0;
    while ( 1 )
    {
      v68 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v60));
      v69 = (unsigned int)v91;
      v70 = (unsigned int)v91 + 1LL;
      if ( v70 > HIDWORD(v91) )
      {
        sub_2237220(&v90, v92, v70, 8);
        v69 = (unsigned int)v91;
      }
      *((_QWORD *)v90 + v69) = v68;
      LODWORD(v91) = v91 + 1;
      v61 = sub_EEDDE0(a2, v60);
      v65 = sub_1C7CFE0(a1, v61, a3, a4, v62, v63, v64);
      if ( v65 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      v66 = (unsigned __int64)v65 & 0xFFFFFFFFFFFFFFFELL;
      sub_EEDDE0(a2, v60);
      v14 = HIDWORD(v97);
      v67 = (unsigned int)v97 + 1LL;
      if ( v67 > HIDWORD(v97) )
      {
        ++v60;
        sub_2237220(&v96, v98, v67, 8);
        v16 = (unsigned int)v97;
        *((_QWORD *)v96 + (unsigned int)v97) = v66;
        LODWORD(v97) = v97 + 1;
        if ( v59 == v60 )
          goto LABEL_48;
      }
      else
      {
        v16 = (__int64)v96;
        ++v60;
        *((_QWORD *)v96 + (unsigned int)v97) = v66;
        LODWORD(v97) = v97 + 1;
        if ( v60 == v59 )
          goto LABEL_48;
      }
    }
LABEL_16:
    v36 = (_DWORD **)ptr;
    v37 = 1;
    goto LABEL_17;
  }
LABEL_48:
  v71 = *(_DWORD *)(a2 + 24);
  if ( v71 )
  {
    v72 = 0;
    v73 = 8LL * (unsigned int)(v71 - 1) + 8;
    while ( 1 )
    {
      v76 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + v72);
      v77 = (unsigned __int64)sub_1C7CFE0(a1, v76, a3, a4, v16, v14, a13);
      if ( v77 <= 1 )
        goto LABEL_50;
      if ( v76 != (v77 & 0xFFFFFFFFFFFFFFFELL) )
        break;
LABEL_51:
      v14 = (unsigned int)v100;
      v74 = v77 & 0xFFFFFFFFFFFFFFFELL;
      v75 = (unsigned int)v100 + 1LL;
      if ( v75 > HIDWORD(v100) )
      {
        v86 = v74;
        sub_2237220(&ptr, v101, v75, 8);
        v14 = (unsigned int)v100;
        v74 = v86;
      }
      v16 = (__int64)ptr;
      v72 += 8;
      *((_QWORD *)ptr + v14) = v74;
      LODWORD(v100) = v100 + 1;
      if ( v72 == v73 )
        goto LABEL_57;
    }
    v77 = sub_1C543A0(*a1, v77 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
LABEL_50:
    if ( v77 == 1 )
      goto LABEL_16;
    goto LABEL_51;
  }
LABEL_57:
  v78 = *(_QWORD *)(a2 + 48);
  v79 = (unsigned __int64)sub_1C7CFE0(a1, v78, a3, a4, v16, v14, a13);
  if ( v79 > 1 )
  {
    if ( v78 == (v79 & 0xFFFFFFFFFFFFFFFELL) )
    {
      v36 = (_DWORD **)ptr;
      goto LABEL_61;
    }
    v79 = sub_1C543A0(*a1, v79 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
  }
  v36 = (_DWORD **)ptr;
  if ( v79 == 1 )
  {
    v37 = 1;
    goto LABEL_17;
  }
LABEL_61:
  v82 = sub_1C5B2B0(
          (__int64 *)*a1,
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
          v36,
          (unsigned int)v100,
          *(_DWORD *)(a2 + 80),
          *(_DWORD *)(a2 + 40));
  v36 = (_DWORD **)ptr;
  v37 = v82;
LABEL_17:
  if ( v36 != (_DWORD **)v101 )
    free(v36);
  if ( v90 != v92 )
    free(v90);
  if ( v96 != v98 )
    free(v96);
  if ( v93 != v95 )
    free(v93);
  return v37;
}

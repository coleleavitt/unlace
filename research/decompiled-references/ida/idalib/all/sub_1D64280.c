__int64 __fastcall sub_1D64280(
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
  __int64 v72; // r12
  __int64 v73; // r15
  unsigned __int16 *v74; // rbp
  unsigned __int64 v75; // rax
  unsigned __int16 *v76; // r12
  unsigned __int64 v77; // rax
  double v78; // xmm4_8
  double v79; // xmm5_8
  __int64 v80; // rdi
  __int64 v81; // [rsp+0h] [rbp-198h]
  unsigned __int64 v82; // [rsp+0h] [rbp-198h]
  char v83; // [rsp+0h] [rbp-198h]
  __int64 v84; // [rsp+8h] [rbp-190h]
  unsigned __int64 v85; // [rsp+8h] [rbp-190h]
  unsigned __int64 v86; // [rsp+8h] [rbp-190h]
  unsigned __int64 v87; // [rsp+38h] [rbp-160h]
  void *v88; // [rsp+40h] [rbp-158h] BYREF
  __int64 v89; // [rsp+48h] [rbp-150h]
  _BYTE v90[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v91; // [rsp+70h] [rbp-128h] BYREF
  __int64 v92; // [rsp+78h] [rbp-120h]
  _BYTE v93[64]; // [rsp+80h] [rbp-118h] BYREF
  void *v94; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-D0h]
  _BYTE v96[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  __int64 v98; // [rsp+118h] [rbp-80h]
  _BYTE v99[120]; // [rsp+120h] [rbp-78h] BYREF

  v14 = (unsigned __int64)v93;
  v92 = 0x800000000LL;
  v95 = 0x800000000LL;
  v98 = 0x800000000LL;
  v15 = *(_DWORD *)(a2 + 16);
  v94 = v96;
  v16 = (__int64)v90;
  v89 = 0x400000000LL;
  v91 = v93;
  v88 = v90;
  ptr = v99;
  if ( v15 )
  {
    v17 = 0;
    v18 = 0;
    v84 = (unsigned int)(v15 - 1);
    v19 = 0;
    v20 = **(_QWORD **)(a2 + 72);
    while ( 1 )
    {
      *(_QWORD *)(v16 + 8 * v19) = v20;
      v32 = *(_QWORD *)(a2 + 56);
      v33 = 8 * v17;
      LODWORD(v89) = v89 + 1;
      v34 = *(unsigned __int16 **)(v32 + 8 * v17);
      v35 = sub_1D434A0(a1, v34, a3, a4, v16, v14, a13);
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
      v21 = (unsigned int)v92;
      v22 = v35 & 0xFFFFFFFFFFFFFFFELL;
      v23 = (unsigned int)v92 + 1LL;
      if ( v23 > HIDWORD(v92) )
      {
        v87 = v22;
        sub_2237220(&v91, v93, v23, 8);
        v21 = (unsigned int)v92;
        v22 = v87;
      }
      *((_QWORD *)v91 + v21) = v22;
      LODWORD(v92) = v92 + 1;
      v24 = (unsigned __int16 *)sub_EEDDB0(a2, v17);
      v28 = sub_1D434A0(a1, v24, a3, a4, v25, v26, v27);
      if ( v28 == 1 )
        goto LABEL_16;
      v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v95;
      v18 |= v24 != (unsigned __int16 *)v29;
      v30 = (unsigned int)v95 + 1LL;
      if ( v30 > HIDWORD(v95) )
      {
        v82 = v29;
        sub_2237220(&v94, v96, v30, 8);
        v14 = (unsigned int)v95;
        v29 = v82;
      }
      v16 = (__int64)v94;
      *((_QWORD *)v94 + v14) = v29;
      LODWORD(v95) = v95 + 1;
      if ( v84 == v17 )
        goto LABEL_27;
      v14 = HIDWORD(v89);
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v33 + 8);
      v19 = (unsigned int)v89;
      v31 = (unsigned int)v89 + 1LL;
      if ( v31 > HIDWORD(v89) )
      {
        v81 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v33 + 8);
        sub_2237220(&v88, v90, v31, 8);
        v19 = (unsigned int)v89;
        v20 = v81;
      }
      v16 = (__int64)v88;
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
      v50 = HIDWORD(v89);
      v51 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v39));
      v52 = (unsigned int)v89;
      v53 = (unsigned int)v89 + 1LL;
      if ( v53 > HIDWORD(v89) )
      {
        sub_2237220(&v88, v90, v53, 8);
        v52 = (unsigned int)v89;
      }
      *((_QWORD *)v88 + v52) = v51;
      v54 = *(_QWORD *)(a2 + 56);
      v55 = (unsigned int)(*(_DWORD *)(a2 + 16) + v39);
      LODWORD(v89) = v89 + 1;
      v56 = *(unsigned __int16 **)(v54 + 8 * v55);
      v57 = sub_1D434A0(a1, v56, a3, a4, v55, v50, a13);
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
      v40 = (unsigned int)v92;
      v41 = v57 & 0xFFFFFFFFFFFFFFFELL;
      v42 = (unsigned int)v92 + 1LL;
      if ( v42 > HIDWORD(v92) )
      {
        v85 = v41;
        sub_2237220(&v91, v93, v42, 8);
        v40 = (unsigned int)v92;
        v41 = v85;
      }
      *((_QWORD *)v91 + v40) = v41;
      LODWORD(v92) = v92 + 1;
      v43 = (unsigned __int16 *)sub_EEDDC0(a2, v39);
      v47 = sub_1D434A0(a1, v43, a3, a4, v44, v45, v46);
      if ( v47 == 1 )
        goto LABEL_16;
      v48 = v47 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v95;
      v18 |= v43 != (unsigned __int16 *)v48;
      v49 = (unsigned int)v95 + 1LL;
      if ( v49 > HIDWORD(v95) )
      {
        v86 = v48;
        ++v39;
        sub_2237220(&v94, v96, v49, 8);
        v14 = (unsigned int)v95;
        v16 = (__int64)v94;
        *((_QWORD *)v94 + (unsigned int)v95) = v86;
        LODWORD(v95) = v95 + 1;
        if ( v38 == v39 )
          break;
      }
      else
      {
        v16 = (__int64)v94;
        ++v39;
        *((_QWORD *)v94 + (unsigned int)v95) = v48;
        LODWORD(v95) = v95 + 1;
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
      v69 = (unsigned int)v89;
      v70 = (unsigned int)v89 + 1LL;
      if ( v70 > HIDWORD(v89) )
      {
        sub_2237220(&v88, v90, v70, 8);
        v69 = (unsigned int)v89;
      }
      *((_QWORD *)v88 + v69) = v68;
      LODWORD(v89) = v89 + 1;
      v60 = (unsigned __int16 *)sub_EEDDE0(a2, v59);
      v64 = sub_1D434A0(a1, v60, a3, a4, v61, v62, v63);
      if ( v64 == 1 )
        goto LABEL_16;
      v65 = v64 & 0xFFFFFFFFFFFFFFFELL;
      v66 = sub_EEDDE0(a2, v59);
      v14 = HIDWORD(v95);
      v18 |= v66 != v65;
      v67 = (unsigned int)v95 + 1LL;
      if ( v67 > HIDWORD(v95) )
      {
        ++v59;
        sub_2237220(&v94, v96, v67, 8);
        v16 = (unsigned int)v95;
        *((_QWORD *)v94 + (unsigned int)v95) = v65;
        LODWORD(v95) = v95 + 1;
        if ( v58 == v59 )
          break;
      }
      else
      {
        v16 = (__int64)v94;
        ++v59;
        *((_QWORD *)v94 + (unsigned int)v95) = v65;
        LODWORD(v95) = v95 + 1;
        if ( v59 == v58 )
          break;
      }
    }
  }
  v71 = *(_DWORD *)(a2 + 24);
  if ( !v71 )
    goto LABEL_57;
  v72 = 0;
  v83 = v18;
  v73 = 8LL * (unsigned int)(v71 - 1) + 8;
  do
  {
    v74 = *(unsigned __int16 **)(*(_QWORD *)(a2 + 64) + v72);
    v75 = sub_1D434A0(a1, v74, a3, a4, v16, v14, a13);
    if ( v75 > 1 )
    {
      if ( v74 == (unsigned __int16 *)(v75 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_52;
      v75 = sub_1C543A0(*a1, v75 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
      v83 = 1;
    }
    if ( v75 == 1 )
      goto LABEL_16;
LABEL_52:
    v72 += 8;
    sub_14B7B40((__int64)&ptr, v75 & 0xFFFFFFFFFFFFFFFELL);
  }
  while ( v73 != v72 );
  v18 = v83;
LABEL_57:
  v76 = *(unsigned __int16 **)(a2 + 48);
  v77 = sub_1D434A0(a1, v76, a3, a4, v16, v14, a13);
  if ( v77 > 1 )
  {
    v80 = *a1;
    if ( v76 == (unsigned __int16 *)(v77 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_60;
    v77 = sub_1C543A0(v80, v77 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a3.m128_u64);
    if ( v77 != 1 )
    {
      v80 = *a1;
      goto LABEL_62;
    }
    goto LABEL_16;
  }
  if ( v77 == 1 )
  {
LABEL_16:
    v36 = 1;
    goto LABEL_17;
  }
  v80 = *a1;
LABEL_60:
  if ( *(_DWORD *)(v80 + 12632) || (v36 = a2, v18) )
LABEL_62:
    v36 = sub_1C5B2B0(
            (__int64 *)v80,
            *(_DWORD *)(a2 + 8),
            *(_BYTE *)(a2 + 12),
            *(_BYTE *)(a2 + 13),
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            *(double *)a3.m128_u64,
            a4,
            a5,
            a6,
            v78,
            v79,
            a9,
            a10,
            v88,
            (_DWORD **)v91,
            (unsigned int)v92,
            v94,
            (char *)(unsigned int)v95,
            (_DWORD *)(v77 & 0xFFFFFFFFFFFFFFFELL),
            (_DWORD **)ptr,
            (unsigned int)v98,
            *(_DWORD *)(a2 + 80),
            *(_DWORD *)(a2 + 40));
LABEL_17:
  if ( ptr != v99 )
    free(ptr);
  if ( v88 != v90 )
    free(v88);
  if ( v94 != v96 )
    free(v94);
  if ( v91 != v93 )
    free(v91);
  return v36;
}

__int64 __fastcall sub_1BA2490(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int16 *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned __int16 *v28; // r13
  unsigned __int64 v29; // rax
  _BYTE *v30; // rdi
  __int64 v31; // rbx
  int v33; // ebp
  int v34; // r13d
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int16 *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int16 *v51; // r15
  unsigned __int64 v52; // rax
  int v53; // r12d
  int v54; // r15d
  unsigned __int16 *v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 v60; // rbp
  unsigned __int64 v61; // rdx
  __int64 v62; // rbp
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // r13
  __int64 v67; // rbp
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int16 *v70; // r15
  unsigned __int64 v71; // rax
  unsigned __int16 *v72; // rbp
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // [rsp+8h] [rbp-190h]
  unsigned __int64 v76; // [rsp+8h] [rbp-190h]
  unsigned __int64 v77; // [rsp+8h] [rbp-190h]
  unsigned __int64 v78; // [rsp+8h] [rbp-190h]
  __int64 v79; // [rsp+38h] [rbp-160h]
  unsigned __int64 v80; // [rsp+38h] [rbp-160h]
  unsigned __int64 v81; // [rsp+38h] [rbp-160h]
  void *v82; // [rsp+40h] [rbp-158h] BYREF
  __int64 v83; // [rsp+48h] [rbp-150h]
  _BYTE v84[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v85; // [rsp+70h] [rbp-128h] BYREF
  __int64 v86; // [rsp+78h] [rbp-120h]
  _BYTE v87[64]; // [rsp+80h] [rbp-118h] BYREF
  void *v88; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-D0h]
  _BYTE v90[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  __int64 v92; // [rsp+118h] [rbp-80h]
  _BYTE v93[120]; // [rsp+120h] [rbp-78h] BYREF

  v8 = (unsigned __int64)v93;
  v86 = 0x800000000LL;
  v89 = 0x800000000LL;
  v92 = 0x800000000LL;
  v9 = *(_DWORD *)(a2 + 16);
  v88 = v90;
  v10 = (__int64)v84;
  v83 = 0x400000000LL;
  v85 = v87;
  v82 = v84;
  ptr = v93;
  if ( v9 )
  {
    v11 = *(_QWORD *)(a2 + 72);
    v12 = 0;
    v75 = (unsigned int)(v9 - 1);
    v13 = 0;
    v14 = *(_QWORD *)v11;
    while ( 1 )
    {
      *(_QWORD *)(v10 + 8 * v13) = v14;
      v26 = *(_QWORD *)(a2 + 56);
      LODWORD(v83) = v83 + 1;
      v27 = 8 * v12;
      v28 = *(unsigned __int16 **)(v26 + 8 * v12);
      v29 = sub_1B7CAD0(a1, v28, a3, a4, v10, v11, a7);
      if ( v29 <= 1 )
      {
        if ( v29 == 1 )
          goto LABEL_16;
      }
      else if ( v28 != (unsigned __int16 *)(v29 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v29 = sub_1C543A0(*a1, v29 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v29 == 1 )
          goto LABEL_16;
      }
      v15 = (unsigned int)v86;
      v16 = v29 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v86 + 1LL;
      if ( v17 > HIDWORD(v86) )
      {
        v80 = v16;
        sub_2237220(&v85, v87, v17, 8);
        v15 = (unsigned int)v86;
        v16 = v80;
      }
      *((_QWORD *)v85 + v15) = v16;
      LODWORD(v86) = v86 + 1;
      v18 = (unsigned __int16 *)sub_EEDDB0(a2, v12);
      v22 = sub_1B7CAD0(a1, v18, a3, a4, v19, v20, v21);
      if ( v22 == 1 )
        goto LABEL_16;
      v8 = (unsigned int)v89;
      v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
      v24 = (unsigned int)v89 + 1LL;
      if ( v24 > HIDWORD(v89) )
      {
        v81 = v23;
        sub_2237220(&v88, v90, v24, 8);
        v8 = (unsigned int)v89;
        v23 = v81;
      }
      v10 = (__int64)v88;
      *((_QWORD *)v88 + v8) = v23;
      LODWORD(v89) = v89 + 1;
      if ( v75 == v12 )
        break;
      v11 = HIDWORD(v83);
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v27 + 8);
      v13 = (unsigned int)v83;
      v25 = (unsigned int)v83 + 1LL;
      if ( v25 > HIDWORD(v83) )
      {
        v79 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v27 + 8);
        sub_2237220(&v82, v84, v25, 8);
        v13 = (unsigned int)v83;
        v14 = v79;
      }
      v10 = (__int64)v82;
      ++v12;
    }
  }
  v33 = *(_DWORD *)(a2 + 20);
  if ( v33 )
  {
    v34 = 0;
    while ( 1 )
    {
      v45 = HIDWORD(v83);
      v46 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v34));
      v47 = (unsigned int)v83;
      v48 = (unsigned int)v83 + 1LL;
      if ( v48 > HIDWORD(v83) )
      {
        sub_2237220(&v82, v84, v48, 8);
        v47 = (unsigned int)v83;
      }
      *((_QWORD *)v82 + v47) = v46;
      v49 = *(_QWORD *)(a2 + 56);
      v50 = (unsigned int)(*(_DWORD *)(a2 + 16) + v34);
      LODWORD(v83) = v83 + 1;
      v51 = *(unsigned __int16 **)(v49 + 8 * v50);
      v52 = sub_1B7CAD0(a1, v51, a3, a4, v50, v45, a7);
      if ( v52 > 1 )
      {
        if ( v51 == (unsigned __int16 *)(v52 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_29;
        v52 = sub_1C543A0(*a1, v52 & 0xFFFFFFFFFFFFFFFELL, 0);
      }
      if ( v52 == 1 )
        goto LABEL_16;
LABEL_29:
      v35 = (unsigned int)v86;
      v36 = v52 & 0xFFFFFFFFFFFFFFFELL;
      v37 = (unsigned int)v86 + 1LL;
      if ( v37 > HIDWORD(v86) )
      {
        v76 = v36;
        sub_2237220(&v85, v87, v37, 8);
        v35 = (unsigned int)v86;
        v36 = v76;
      }
      *((_QWORD *)v85 + v35) = v36;
      LODWORD(v86) = v86 + 1;
      v38 = (unsigned __int16 *)sub_EEDDC0(a2, v34);
      v42 = sub_1B7CAD0(a1, v38, a3, a4, v39, v40, v41);
      if ( v42 == 1 )
        goto LABEL_16;
      v8 = (unsigned int)v89;
      v43 = v42 & 0xFFFFFFFFFFFFFFFELL;
      v44 = (unsigned int)v89 + 1LL;
      if ( v44 > HIDWORD(v89) )
      {
        v77 = v43;
        ++v34;
        sub_2237220(&v88, v90, v44, 8);
        v8 = (unsigned int)v89;
        v10 = (__int64)v88;
        *((_QWORD *)v88 + (unsigned int)v89) = v77;
        LODWORD(v89) = v89 + 1;
        if ( v33 == v34 )
          break;
      }
      else
      {
        v10 = (__int64)v88;
        ++v34;
        *((_QWORD *)v88 + (unsigned int)v89) = v43;
        LODWORD(v89) = v89 + 1;
        if ( v34 == v33 )
          break;
      }
    }
  }
  v53 = *(_DWORD *)(a2 + 80);
  if ( v53 )
  {
    v54 = 0;
    while ( 1 )
    {
      v62 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v54));
      v63 = (unsigned int)v83;
      v64 = (unsigned int)v83 + 1LL;
      if ( v64 > HIDWORD(v83) )
      {
        sub_2237220(&v82, v84, v64, 8);
        v63 = (unsigned int)v83;
      }
      *((_QWORD *)v82 + v63) = v62;
      LODWORD(v83) = v83 + 1;
      v55 = (unsigned __int16 *)sub_EEDDE0(a2, v54);
      v59 = sub_1B7CAD0(a1, v55, a3, a4, v56, v57, v58);
      if ( v59 == 1 )
        break;
      v60 = v59 & 0xFFFFFFFFFFFFFFFELL;
      sub_EEDDE0(a2, v54);
      v8 = HIDWORD(v89);
      v61 = (unsigned int)v89 + 1LL;
      if ( v61 > HIDWORD(v89) )
      {
        ++v54;
        sub_2237220(&v88, v90, v61, 8);
        v10 = (unsigned int)v89;
        *((_QWORD *)v88 + (unsigned int)v89) = v60;
        LODWORD(v89) = v89 + 1;
        if ( v53 == v54 )
          goto LABEL_48;
      }
      else
      {
        v10 = (__int64)v88;
        ++v54;
        *((_QWORD *)v88 + (unsigned int)v89) = v60;
        LODWORD(v89) = v89 + 1;
        if ( v54 == v53 )
          goto LABEL_48;
      }
    }
LABEL_16:
    v30 = ptr;
    v31 = 1;
    goto LABEL_17;
  }
LABEL_48:
  v65 = *(_DWORD *)(a2 + 24);
  if ( v65 )
  {
    v66 = 0;
    v67 = 8LL * (unsigned int)(v65 - 1) + 8;
    while ( 1 )
    {
      v70 = *(unsigned __int16 **)(*(_QWORD *)(a2 + 64) + v66);
      v71 = sub_1B7CAD0(a1, v70, a3, a4, v10, v8, a7);
      if ( v71 <= 1 )
        goto LABEL_50;
      if ( v70 != (unsigned __int16 *)(v71 & 0xFFFFFFFFFFFFFFFELL) )
        break;
LABEL_51:
      v8 = (unsigned int)v92;
      v68 = v71 & 0xFFFFFFFFFFFFFFFELL;
      v69 = (unsigned int)v92 + 1LL;
      if ( v69 > HIDWORD(v92) )
      {
        v78 = v68;
        sub_2237220(&ptr, v93, v69, 8);
        v8 = (unsigned int)v92;
        v68 = v78;
      }
      v10 = (__int64)ptr;
      v66 += 8;
      *((_QWORD *)ptr + v8) = v68;
      LODWORD(v92) = v92 + 1;
      if ( v66 == v67 )
        goto LABEL_57;
    }
    v71 = sub_1C543A0(*a1, v71 & 0xFFFFFFFFFFFFFFFELL, 0);
LABEL_50:
    if ( v71 == 1 )
      goto LABEL_16;
    goto LABEL_51;
  }
LABEL_57:
  v72 = *(unsigned __int16 **)(a2 + 48);
  v73 = sub_1B7CAD0(a1, v72, a3, a4, v10, v8, a7);
  if ( v73 > 1 )
  {
    if ( v72 == (unsigned __int16 *)(v73 & 0xFFFFFFFFFFFFFFFELL) )
    {
      v30 = ptr;
      goto LABEL_61;
    }
    v73 = sub_1C543A0(*a1, v73 & 0xFFFFFFFFFFFFFFFELL, 0);
  }
  v30 = ptr;
  if ( v73 == 1 )
  {
    v31 = 1;
    goto LABEL_17;
  }
LABEL_61:
  v74 = sub_1C5B2B0(
          *a1,
          *(_DWORD *)(a2 + 8),
          *(unsigned __int8 *)(a2 + 12),
          *(unsigned __int8 *)(a2 + 13),
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          (__int64)v82,
          (__int64)v85,
          (unsigned int)v86,
          (__int64)v88,
          (unsigned int)v89,
          v73 & 0xFFFFFFFFFFFFFFFELL,
          (__int64)v30,
          (unsigned int)v92,
          *(_DWORD *)(a2 + 80),
          *(_DWORD *)(a2 + 40));
  v30 = ptr;
  v31 = v74;
LABEL_17:
  if ( v30 != v93 )
    free(v30);
  if ( v82 != v84 )
    free(v82);
  if ( v88 != v90 )
    free(v88);
  if ( v85 != v87 )
    free(v85);
  return v31;
}

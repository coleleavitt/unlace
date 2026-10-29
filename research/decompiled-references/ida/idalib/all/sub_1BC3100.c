__int64 __fastcall sub_1BC3100(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  int v32; // r12d
  int v33; // r14d
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rax
  int v52; // r12d
  int v53; // r14d
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // r15
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // r12
  __int64 v67; // r15
  unsigned __int64 v68; // rbp
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // [rsp+0h] [rbp-198h]
  unsigned __int64 v74; // [rsp+0h] [rbp-198h]
  char v75; // [rsp+0h] [rbp-198h]
  __int64 v76; // [rsp+8h] [rbp-190h]
  unsigned __int64 v77; // [rsp+8h] [rbp-190h]
  unsigned __int64 v78; // [rsp+8h] [rbp-190h]
  unsigned __int64 v79; // [rsp+38h] [rbp-160h]
  void *v80; // [rsp+40h] [rbp-158h] BYREF
  __int64 v81; // [rsp+48h] [rbp-150h]
  _BYTE v82[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v83; // [rsp+70h] [rbp-128h] BYREF
  __int64 v84; // [rsp+78h] [rbp-120h]
  _BYTE v85[64]; // [rsp+80h] [rbp-118h] BYREF
  void *v86; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v87; // [rsp+C8h] [rbp-D0h]
  _BYTE v88[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  __int64 v90; // [rsp+118h] [rbp-80h]
  _BYTE v91[120]; // [rsp+120h] [rbp-78h] BYREF

  v8 = (__int64)v85;
  v84 = 0x800000000LL;
  v87 = 0x800000000LL;
  v90 = 0x800000000LL;
  v9 = *(_DWORD *)(a2 + 16);
  v86 = v88;
  v10 = (unsigned __int64)v82;
  v81 = 0x400000000LL;
  v83 = v85;
  v80 = v82;
  ptr = v91;
  if ( v9 )
  {
    v11 = 0;
    v12 = 0;
    v76 = (unsigned int)(v9 - 1);
    v13 = 0;
    v14 = **(_QWORD **)(a2 + 72);
    while ( 1 )
    {
      *(_QWORD *)(v10 + 8 * v13) = v14;
      v26 = *(_QWORD *)(a2 + 56);
      v27 = 8 * v11;
      LODWORD(v81) = v81 + 1;
      v28 = *(_QWORD *)(v26 + 8 * v11);
      v29 = sub_1B73BE0(a1, v28, v10, a3, a4, v8, a7);
      if ( v29 <= 1 )
      {
        if ( v29 == 1 )
          goto LABEL_16;
      }
      else if ( v28 != (v29 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v12 = 1;
        v29 = sub_1C543A0(*a1, v29 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v29 == 1 )
          goto LABEL_16;
      }
      v15 = (unsigned int)v84;
      v16 = v29 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v84 + 1LL;
      if ( v17 > HIDWORD(v84) )
      {
        v79 = v16;
        sub_2237220(&v83, v85, v17, 8);
        v15 = (unsigned int)v84;
        v16 = v79;
      }
      *((_QWORD *)v83 + v15) = v16;
      LODWORD(v84) = v84 + 1;
      v18 = sub_EEDDB0(a2, v11);
      v22 = sub_1B73BE0(a1, v18, v19, a3, a4, v20, v21);
      if ( v22 == 1 )
        goto LABEL_16;
      v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
      v8 = (unsigned int)v87;
      v12 |= v18 != v23;
      v24 = (unsigned int)v87 + 1LL;
      if ( v24 > HIDWORD(v87) )
      {
        v74 = v23;
        sub_2237220(&v86, v88, v24, 8);
        v8 = (unsigned int)v87;
        v23 = v74;
      }
      v10 = (unsigned __int64)v86;
      *((_QWORD *)v86 + v8) = v23;
      LODWORD(v87) = v87 + 1;
      if ( v76 == v11 )
        goto LABEL_27;
      v8 = HIDWORD(v81);
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v27 + 8);
      v13 = (unsigned int)v81;
      v25 = (unsigned int)v81 + 1LL;
      if ( v25 > HIDWORD(v81) )
      {
        v73 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v27 + 8);
        sub_2237220(&v80, v82, v25, 8);
        v13 = (unsigned int)v81;
        v14 = v73;
      }
      v10 = (unsigned __int64)v80;
      ++v11;
    }
  }
  v12 = 0;
LABEL_27:
  v32 = *(_DWORD *)(a2 + 20);
  if ( v32 )
  {
    v33 = 0;
    while ( 1 )
    {
      v44 = HIDWORD(v81);
      v45 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v33));
      v46 = (unsigned int)v81;
      v47 = (unsigned int)v81 + 1LL;
      if ( v47 > HIDWORD(v81) )
      {
        sub_2237220(&v80, v82, v47, 8);
        v46 = (unsigned int)v81;
      }
      *((_QWORD *)v80 + v46) = v45;
      v48 = *(_QWORD *)(a2 + 56);
      v49 = (unsigned int)(*(_DWORD *)(a2 + 16) + v33);
      LODWORD(v81) = v81 + 1;
      v50 = *(_QWORD *)(v48 + 8 * v49);
      v51 = sub_1B73BE0(a1, v50, v49, a3, a4, v44, a7);
      if ( v51 > 1 )
      {
        if ( v50 == (v51 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_30;
        v12 = 1;
        v51 = sub_1C543A0(*a1, v51 & 0xFFFFFFFFFFFFFFFELL, 0);
      }
      if ( v51 == 1 )
        goto LABEL_16;
LABEL_30:
      v34 = (unsigned int)v84;
      v35 = v51 & 0xFFFFFFFFFFFFFFFELL;
      v36 = (unsigned int)v84 + 1LL;
      if ( v36 > HIDWORD(v84) )
      {
        v77 = v35;
        sub_2237220(&v83, v85, v36, 8);
        v34 = (unsigned int)v84;
        v35 = v77;
      }
      *((_QWORD *)v83 + v34) = v35;
      LODWORD(v84) = v84 + 1;
      v37 = sub_EEDDC0(a2, v33);
      v41 = sub_1B73BE0(a1, v37, v38, a3, a4, v39, v40);
      if ( v41 == 1 )
        goto LABEL_16;
      v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
      v8 = (unsigned int)v87;
      v12 |= v37 != v42;
      v43 = (unsigned int)v87 + 1LL;
      if ( v43 > HIDWORD(v87) )
      {
        v78 = v42;
        ++v33;
        sub_2237220(&v86, v88, v43, 8);
        v8 = (unsigned int)v87;
        v10 = (unsigned __int64)v86;
        *((_QWORD *)v86 + (unsigned int)v87) = v78;
        LODWORD(v87) = v87 + 1;
        if ( v32 == v33 )
          break;
      }
      else
      {
        v10 = (unsigned __int64)v86;
        ++v33;
        *((_QWORD *)v86 + (unsigned int)v87) = v42;
        LODWORD(v87) = v87 + 1;
        if ( v33 == v32 )
          break;
      }
    }
  }
  v52 = *(_DWORD *)(a2 + 80);
  if ( v52 )
  {
    v53 = 0;
    while ( 1 )
    {
      v62 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v53));
      v63 = (unsigned int)v81;
      v64 = (unsigned int)v81 + 1LL;
      if ( v64 > HIDWORD(v81) )
      {
        sub_2237220(&v80, v82, v64, 8);
        v63 = (unsigned int)v81;
      }
      *((_QWORD *)v80 + v63) = v62;
      LODWORD(v81) = v81 + 1;
      v54 = sub_EEDDE0(a2, v53);
      v58 = sub_1B73BE0(a1, v54, v55, a3, a4, v56, v57);
      if ( v58 == 1 )
        goto LABEL_16;
      v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
      v60 = sub_EEDDE0(a2, v53);
      v8 = HIDWORD(v87);
      v12 |= v60 != v59;
      v61 = (unsigned int)v87 + 1LL;
      if ( v61 > HIDWORD(v87) )
      {
        ++v53;
        sub_2237220(&v86, v88, v61, 8);
        v10 = (unsigned int)v87;
        *((_QWORD *)v86 + (unsigned int)v87) = v59;
        LODWORD(v87) = v87 + 1;
        if ( v52 == v53 )
          break;
      }
      else
      {
        v10 = (unsigned __int64)v86;
        ++v53;
        *((_QWORD *)v86 + (unsigned int)v87) = v59;
        LODWORD(v87) = v87 + 1;
        if ( v53 == v52 )
          break;
      }
    }
  }
  v65 = *(_DWORD *)(a2 + 24);
  if ( !v65 )
    goto LABEL_57;
  v66 = 0;
  v75 = v12;
  v67 = 8LL * (unsigned int)(v65 - 1) + 8;
  do
  {
    v68 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + v66);
    v69 = sub_1B73BE0(a1, v68, v10, a3, a4, v8, a7);
    if ( v69 > 1 )
    {
      if ( v68 == (v69 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_52;
      v69 = sub_1C543A0(*a1, v69 & 0xFFFFFFFFFFFFFFFELL, 0);
      v75 = 1;
    }
    if ( v69 == 1 )
      goto LABEL_16;
LABEL_52:
    v66 += 8;
    sub_14B7B40((__int64)&ptr, v69 & 0xFFFFFFFFFFFFFFFELL);
  }
  while ( v67 != v66 );
  v12 = v75;
LABEL_57:
  v70 = *(_QWORD *)(a2 + 48);
  v71 = sub_1B73BE0(a1, v70, v10, a3, a4, v8, a7);
  if ( v71 > 1 )
  {
    v72 = *a1;
    if ( v70 == (v71 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_60;
    v71 = sub_1C543A0(v72, v71 & 0xFFFFFFFFFFFFFFFELL, 0);
    if ( v71 != 1 )
    {
      v72 = *a1;
      goto LABEL_62;
    }
    goto LABEL_16;
  }
  if ( v71 == 1 )
  {
LABEL_16:
    v30 = 1;
    goto LABEL_17;
  }
  v72 = *a1;
LABEL_60:
  if ( *(_DWORD *)(v72 + 12632) || (v30 = a2, v12) )
LABEL_62:
    v30 = sub_1C5B2B0(
            v72,
            *(_DWORD *)(a2 + 8),
            *(unsigned __int8 *)(a2 + 12),
            *(unsigned __int8 *)(a2 + 13),
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            (__int64)v80,
            (__int64)v83,
            (unsigned int)v84,
            (__int64)v86,
            (unsigned int)v87,
            v71 & 0xFFFFFFFFFFFFFFFELL,
            (__int64)ptr,
            (unsigned int)v90,
            *(_DWORD *)(a2 + 80),
            *(_DWORD *)(a2 + 40));
LABEL_17:
  if ( ptr != v91 )
    free(ptr);
  if ( v80 != v82 )
    free(v80);
  if ( v86 != v88 )
    free(v86);
  if ( v83 != v85 )
    free(v83);
  return v30;
}

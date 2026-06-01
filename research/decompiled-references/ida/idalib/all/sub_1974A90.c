__int64 __fastcall sub_1974A90(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  int v5; // eax
  _BYTE *v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  _BYTE *v23; // rdi
  __int64 v24; // rbx
  int v26; // ebp
  int v27; // r13d
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rax
  int v42; // r12d
  int v43; // r15d
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // r13
  __int64 v53; // rbp
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rbp
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+8h] [rbp-190h]
  unsigned __int64 v63; // [rsp+8h] [rbp-190h]
  unsigned __int64 v64; // [rsp+8h] [rbp-190h]
  unsigned __int64 v65; // [rsp+8h] [rbp-190h]
  __int64 v66; // [rsp+38h] [rbp-160h]
  unsigned __int64 v67; // [rsp+38h] [rbp-160h]
  unsigned __int64 v68; // [rsp+38h] [rbp-160h]
  void *v69; // [rsp+40h] [rbp-158h] BYREF
  __int64 v70; // [rsp+48h] [rbp-150h]
  _BYTE v71[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v72; // [rsp+70h] [rbp-128h] BYREF
  __int64 v73; // [rsp+78h] [rbp-120h]
  _BYTE v74[64]; // [rsp+80h] [rbp-118h] BYREF
  void *v75; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-D0h]
  _BYTE v77[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  __int64 v79; // [rsp+118h] [rbp-80h]
  _BYTE v80[120]; // [rsp+120h] [rbp-78h] BYREF

  v73 = 0x800000000LL;
  v76 = 0x800000000LL;
  v79 = 0x800000000LL;
  v5 = *(_DWORD *)(a2 + 16);
  v75 = v77;
  v6 = v71;
  v70 = 0x400000000LL;
  v72 = v74;
  v69 = v71;
  ptr = v80;
  if ( v5 )
  {
    v7 = 0;
    v62 = (unsigned int)(v5 - 1);
    v8 = 0;
    v9 = **(_QWORD **)(a2 + 72);
    while ( 1 )
    {
      *(_QWORD *)&v6[8 * v8] = v9;
      v19 = *(_QWORD *)(a2 + 56);
      LODWORD(v70) = v70 + 1;
      v20 = 8 * v7;
      v21 = *(_QWORD *)(v19 + 8 * v7);
      v22 = sub_1933BC0(a1, v21, a3, a4);
      if ( v22 <= 1 )
      {
        if ( v22 == 1 )
          goto LABEL_16;
      }
      else if ( v21 != (v22 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v22 = sub_1C543A0(*a1, v22 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v22 == 1 )
          goto LABEL_16;
      }
      v10 = (unsigned int)v73;
      v11 = v22 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v73 + 1LL;
      if ( v12 > HIDWORD(v73) )
      {
        v67 = v11;
        sub_2237220(&v72, v74, v12, 8);
        v10 = (unsigned int)v73;
        v11 = v67;
      }
      *((_QWORD *)v72 + v10) = v11;
      LODWORD(v73) = v73 + 1;
      v13 = sub_EEDDB0(a2, v7);
      v14 = sub_1933BC0(a1, v13, a3, a4);
      if ( v14 == 1 )
        goto LABEL_16;
      v15 = (unsigned int)v76;
      v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v76 + 1LL;
      if ( v17 > HIDWORD(v76) )
      {
        v68 = v16;
        sub_2237220(&v75, v77, v17, 8);
        v15 = (unsigned int)v76;
        v16 = v68;
      }
      *((_QWORD *)v75 + v15) = v16;
      LODWORD(v76) = v76 + 1;
      if ( v62 == v7 )
        break;
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v20 + 8);
      v8 = (unsigned int)v70;
      v18 = (unsigned int)v70 + 1LL;
      if ( v18 > HIDWORD(v70) )
      {
        v66 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v20 + 8);
        sub_2237220(&v69, v71, v18, 8);
        v8 = (unsigned int)v70;
        v9 = v66;
      }
      v6 = v69;
      ++v7;
    }
  }
  v26 = *(_DWORD *)(a2 + 20);
  if ( v26 )
  {
    v27 = 0;
    while ( 1 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v27));
      v36 = (unsigned int)v70;
      v37 = (unsigned int)v70 + 1LL;
      if ( v37 > HIDWORD(v70) )
      {
        sub_2237220(&v69, v71, v37, 8);
        v36 = (unsigned int)v70;
      }
      *((_QWORD *)v69 + v36) = v35;
      v38 = *(_QWORD *)(a2 + 56);
      v39 = (unsigned int)(*(_DWORD *)(a2 + 16) + v27);
      LODWORD(v70) = v70 + 1;
      v40 = *(_QWORD *)(v38 + 8 * v39);
      v41 = sub_1933BC0(a1, v40, a3, a4);
      if ( v41 > 1 )
      {
        if ( v40 == (v41 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_29;
        v41 = sub_1C543A0(*a1, v41 & 0xFFFFFFFFFFFFFFFELL, 0);
      }
      if ( v41 == 1 )
        goto LABEL_16;
LABEL_29:
      v28 = (unsigned int)v73;
      v29 = v41 & 0xFFFFFFFFFFFFFFFELL;
      v30 = (unsigned int)v73 + 1LL;
      if ( v30 > HIDWORD(v73) )
      {
        v63 = v29;
        sub_2237220(&v72, v74, v30, 8);
        v28 = (unsigned int)v73;
        v29 = v63;
      }
      *((_QWORD *)v72 + v28) = v29;
      LODWORD(v73) = v73 + 1;
      v31 = sub_EEDDC0(a2, v27);
      v32 = sub_1933BC0(a1, v31, a3, a4);
      if ( v32 == 1 )
        goto LABEL_16;
      v33 = v32 & 0xFFFFFFFFFFFFFFFELL;
      v34 = (unsigned int)v76 + 1LL;
      if ( v34 > HIDWORD(v76) )
      {
        v64 = v33;
        ++v27;
        sub_2237220(&v75, v77, v34, 8);
        *((_QWORD *)v75 + (unsigned int)v76) = v64;
        LODWORD(v76) = v76 + 1;
        if ( v26 == v27 )
          break;
      }
      else
      {
        ++v27;
        *((_QWORD *)v75 + (unsigned int)v76) = v33;
        LODWORD(v76) = v76 + 1;
        if ( v27 == v26 )
          break;
      }
    }
  }
  v42 = *(_DWORD *)(a2 + 80);
  if ( v42 )
  {
    v43 = 0;
    while ( 1 )
    {
      v48 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v43));
      v49 = (unsigned int)v70;
      v50 = (unsigned int)v70 + 1LL;
      if ( v50 > HIDWORD(v70) )
      {
        sub_2237220(&v69, v71, v50, 8);
        v49 = (unsigned int)v70;
      }
      *((_QWORD *)v69 + v49) = v48;
      LODWORD(v70) = v70 + 1;
      v44 = sub_EEDDE0(a2, v43);
      v45 = sub_1933BC0(a1, v44, a3, a4);
      if ( v45 == 1 )
        break;
      v46 = v45 & 0xFFFFFFFFFFFFFFFELL;
      sub_EEDDE0(a2, v43);
      v47 = (unsigned int)v76 + 1LL;
      if ( v47 > HIDWORD(v76) )
      {
        ++v43;
        sub_2237220(&v75, v77, v47, 8);
        *((_QWORD *)v75 + (unsigned int)v76) = v46;
        LODWORD(v76) = v76 + 1;
        if ( v42 == v43 )
          goto LABEL_48;
      }
      else
      {
        ++v43;
        *((_QWORD *)v75 + (unsigned int)v76) = v46;
        LODWORD(v76) = v76 + 1;
        if ( v43 == v42 )
          goto LABEL_48;
      }
    }
LABEL_16:
    v23 = ptr;
    v24 = 1;
    goto LABEL_17;
  }
LABEL_48:
  v51 = *(_DWORD *)(a2 + 24);
  if ( v51 )
  {
    v52 = 0;
    v53 = 8LL * (unsigned int)(v51 - 1) + 8;
    while ( 1 )
    {
      v57 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + v52);
      v58 = sub_1933BC0(a1, v57, a3, a4);
      if ( v58 <= 1 )
        goto LABEL_50;
      if ( v57 != (v58 & 0xFFFFFFFFFFFFFFFELL) )
        break;
LABEL_51:
      v54 = (unsigned int)v79;
      v55 = v58 & 0xFFFFFFFFFFFFFFFELL;
      v56 = (unsigned int)v79 + 1LL;
      if ( v56 > HIDWORD(v79) )
      {
        v65 = v55;
        sub_2237220(&ptr, v80, v56, 8);
        v54 = (unsigned int)v79;
        v55 = v65;
      }
      v52 += 8;
      *((_QWORD *)ptr + v54) = v55;
      LODWORD(v79) = v79 + 1;
      if ( v52 == v53 )
        goto LABEL_57;
    }
    v58 = sub_1C543A0(*a1, v58 & 0xFFFFFFFFFFFFFFFELL, 0);
LABEL_50:
    if ( v58 == 1 )
      goto LABEL_16;
    goto LABEL_51;
  }
LABEL_57:
  v59 = *(_QWORD *)(a2 + 48);
  v60 = sub_1933BC0(a1, v59, a3, a4);
  if ( v60 > 1 )
  {
    if ( v59 == (v60 & 0xFFFFFFFFFFFFFFFELL) )
    {
      v23 = ptr;
      goto LABEL_61;
    }
    v60 = sub_1C543A0(*a1, v60 & 0xFFFFFFFFFFFFFFFELL, 0);
  }
  v23 = ptr;
  if ( v60 == 1 )
  {
    v24 = 1;
    goto LABEL_17;
  }
LABEL_61:
  v61 = sub_1C5B2B0(
          *a1,
          *(_DWORD *)(a2 + 8),
          *(unsigned __int8 *)(a2 + 12),
          *(unsigned __int8 *)(a2 + 13),
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          (__int64)v69,
          (__int64)v72,
          (unsigned int)v73,
          (__int64)v75,
          (unsigned int)v76,
          v60 & 0xFFFFFFFFFFFFFFFELL,
          (__int64)v23,
          (unsigned int)v79,
          *(_DWORD *)(a2 + 80),
          *(_DWORD *)(a2 + 40));
  v23 = ptr;
  v24 = v61;
LABEL_17:
  if ( v23 != v80 )
    free(v23);
  if ( v69 != v71 )
    free(v69);
  if ( v75 != v77 )
    free(v75);
  if ( v72 != v74 )
    free(v72);
  return v24;
}

__int64 __fastcall sub_1997D50(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  int v4; // eax
  _BYTE *v5; // rdx
  __int64 v6; // r15
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int16 *v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int16 *v21; // r12
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  int v25; // r12d
  int v26; // r14d
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int16 *v30; // r15
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int16 *v39; // r15
  unsigned __int64 v40; // rax
  int v41; // r12d
  int v42; // r14d
  unsigned __int16 *v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rdx
  __int64 v47; // r15
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // r14
  __int64 v52; // r12
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int16 *v55; // r15
  unsigned __int64 v56; // rax
  unsigned __int16 *v57; // r12
  unsigned __int64 v58; // rax
  __int64 v59; // [rsp+0h] [rbp-198h]
  unsigned __int64 v60; // [rsp+0h] [rbp-198h]
  __int64 v61; // [rsp+8h] [rbp-190h]
  unsigned __int64 v62; // [rsp+8h] [rbp-190h]
  unsigned __int64 v63; // [rsp+8h] [rbp-190h]
  unsigned __int64 v64; // [rsp+8h] [rbp-190h]
  unsigned __int64 v65; // [rsp+38h] [rbp-160h]
  void *v66; // [rsp+40h] [rbp-158h] BYREF
  __int64 v67; // [rsp+48h] [rbp-150h]
  _BYTE v68[32]; // [rsp+50h] [rbp-148h] BYREF
  void *v69; // [rsp+70h] [rbp-128h] BYREF
  __int64 v70; // [rsp+78h] [rbp-120h]
  _BYTE v71[64]; // [rsp+80h] [rbp-118h] BYREF
  void *v72; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-D0h]
  _BYTE v74[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  __int64 v76; // [rsp+118h] [rbp-80h]
  _BYTE v77[120]; // [rsp+120h] [rbp-78h] BYREF

  v70 = 0x800000000LL;
  v73 = 0x800000000LL;
  v76 = 0x800000000LL;
  v4 = *(_DWORD *)(a2 + 16);
  v72 = v74;
  v5 = v68;
  v67 = 0x400000000LL;
  v69 = v71;
  v66 = v68;
  ptr = v77;
  if ( v4 )
  {
    v6 = 0;
    v7 = 0;
    v61 = (unsigned int)(v4 - 1);
    v8 = 0;
    v9 = **(_QWORD **)(a2 + 72);
    while ( 1 )
    {
      *(_QWORD *)&v5[8 * v8] = v9;
      v19 = *(_QWORD *)(a2 + 56);
      v20 = 8 * v6;
      LODWORD(v67) = v67 + 1;
      v21 = *(unsigned __int16 **)(v19 + 8 * v6);
      v22 = sub_190CCA0(a1, v21, a3, a4);
      if ( v22 <= 1 )
      {
        if ( v22 == 1 )
          goto LABEL_16;
      }
      else if ( v21 != (unsigned __int16 *)(v22 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v7 = 1;
        v22 = sub_1C543A0(*a1, v22 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v22 == 1 )
          goto LABEL_16;
      }
      v10 = (unsigned int)v70;
      v11 = v22 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v70 + 1LL;
      if ( v12 > HIDWORD(v70) )
      {
        v65 = v11;
        sub_2237220(&v69, v71, v12, 8);
        v10 = (unsigned int)v70;
        v11 = v65;
      }
      *((_QWORD *)v69 + v10) = v11;
      LODWORD(v70) = v70 + 1;
      v13 = (unsigned __int16 *)sub_EEDDB0(a2, v6);
      v14 = sub_190CCA0(a1, v13, a3, a4);
      if ( v14 == 1 )
        goto LABEL_16;
      v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (unsigned int)v73;
      v7 |= v13 != (unsigned __int16 *)v15;
      v17 = (unsigned int)v73 + 1LL;
      if ( v17 > HIDWORD(v73) )
      {
        v60 = v15;
        sub_2237220(&v72, v74, v17, 8);
        v16 = (unsigned int)v73;
        v15 = v60;
      }
      *((_QWORD *)v72 + v16) = v15;
      LODWORD(v73) = v73 + 1;
      if ( v61 == v6 )
        goto LABEL_27;
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v20 + 8);
      v8 = (unsigned int)v67;
      v18 = (unsigned int)v67 + 1LL;
      if ( v18 > HIDWORD(v67) )
      {
        v59 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v20 + 8);
        sub_2237220(&v66, v68, v18, 8);
        v8 = (unsigned int)v67;
        v9 = v59;
      }
      v5 = v66;
      ++v6;
    }
  }
  v7 = 0;
LABEL_27:
  v25 = *(_DWORD *)(a2 + 20);
  if ( v25 )
  {
    v26 = 0;
    while ( 1 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v26));
      v35 = (unsigned int)v67;
      v36 = (unsigned int)v67 + 1LL;
      if ( v36 > HIDWORD(v67) )
      {
        sub_2237220(&v66, v68, v36, 8);
        v35 = (unsigned int)v67;
      }
      *((_QWORD *)v66 + v35) = v34;
      v37 = *(_QWORD *)(a2 + 56);
      v38 = (unsigned int)(*(_DWORD *)(a2 + 16) + v26);
      LODWORD(v67) = v67 + 1;
      v39 = *(unsigned __int16 **)(v37 + 8 * v38);
      v40 = sub_190CCA0(a1, v39, a3, a4);
      if ( v40 > 1 )
      {
        if ( v39 == (unsigned __int16 *)(v40 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_30;
        v7 = 1;
        v40 = sub_1C543A0(*a1, v40 & 0xFFFFFFFFFFFFFFFELL, 0);
      }
      if ( v40 == 1 )
        goto LABEL_16;
LABEL_30:
      v27 = (unsigned int)v70;
      v28 = v40 & 0xFFFFFFFFFFFFFFFELL;
      v29 = (unsigned int)v70 + 1LL;
      if ( v29 > HIDWORD(v70) )
      {
        v62 = v28;
        sub_2237220(&v69, v71, v29, 8);
        v27 = (unsigned int)v70;
        v28 = v62;
      }
      *((_QWORD *)v69 + v27) = v28;
      LODWORD(v70) = v70 + 1;
      v30 = (unsigned __int16 *)sub_EEDDC0(a2, v26);
      v31 = sub_190CCA0(a1, v30, a3, a4);
      if ( v31 == 1 )
        goto LABEL_16;
      v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
      v7 |= v30 != (unsigned __int16 *)v32;
      v33 = (unsigned int)v73 + 1LL;
      if ( v33 > HIDWORD(v73) )
      {
        v63 = v32;
        ++v26;
        sub_2237220(&v72, v74, v33, 8);
        *((_QWORD *)v72 + (unsigned int)v73) = v63;
        LODWORD(v73) = v73 + 1;
        if ( v25 == v26 )
          break;
      }
      else
      {
        ++v26;
        *((_QWORD *)v72 + (unsigned int)v73) = v32;
        LODWORD(v73) = v73 + 1;
        if ( v26 == v25 )
          break;
      }
    }
  }
  v41 = *(_DWORD *)(a2 + 80);
  if ( v41 )
  {
    v42 = 0;
    while ( 1 )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v42));
      v48 = (unsigned int)v67;
      v49 = (unsigned int)v67 + 1LL;
      if ( v49 > HIDWORD(v67) )
      {
        sub_2237220(&v66, v68, v49, 8);
        v48 = (unsigned int)v67;
      }
      *((_QWORD *)v66 + v48) = v47;
      LODWORD(v67) = v67 + 1;
      v43 = (unsigned __int16 *)sub_EEDDE0(a2, v42);
      v44 = sub_190CCA0(a1, v43, a3, a4);
      if ( v44 == 1 )
        goto LABEL_16;
      v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
      v7 |= sub_EEDDE0(a2, v42) != (v44 & 0xFFFFFFFFFFFFFFFELL);
      v46 = (unsigned int)v73 + 1LL;
      if ( v46 > HIDWORD(v73) )
      {
        ++v42;
        sub_2237220(&v72, v74, v46, 8);
        *((_QWORD *)v72 + (unsigned int)v73) = v45;
        LODWORD(v73) = v73 + 1;
        if ( v41 == v42 )
          break;
      }
      else
      {
        ++v42;
        *((_QWORD *)v72 + (unsigned int)v73) = v45;
        LODWORD(v73) = v73 + 1;
        if ( v42 == v41 )
          break;
      }
    }
  }
  v50 = *(_DWORD *)(a2 + 24);
  if ( v50 )
  {
    v51 = 0;
    v52 = 8LL * (unsigned int)(v50 - 1) + 8;
    while ( 1 )
    {
      v55 = *(unsigned __int16 **)(*(_QWORD *)(a2 + 64) + v51);
      v56 = sub_190CCA0(a1, v55, a3, a4);
      if ( v56 <= 1 )
        goto LABEL_51;
      if ( v55 != (unsigned __int16 *)(v56 & 0xFFFFFFFFFFFFFFFELL) )
        break;
LABEL_52:
      v53 = v56 & 0xFFFFFFFFFFFFFFFELL;
      v54 = (unsigned int)v76 + 1LL;
      if ( v54 > HIDWORD(v76) )
      {
        v64 = v53;
        v51 += 8;
        sub_2237220(&ptr, v77, v54, 8);
        *((_QWORD *)ptr + (unsigned int)v76) = v64;
        LODWORD(v76) = v76 + 1;
        if ( v51 == v52 )
          goto LABEL_58;
      }
      else
      {
        v51 += 8;
        *((_QWORD *)ptr + (unsigned int)v76) = v53;
        LODWORD(v76) = v76 + 1;
        if ( v52 == v51 )
          goto LABEL_58;
      }
    }
    v7 = 1;
    v56 = sub_1C543A0(*a1, v56 & 0xFFFFFFFFFFFFFFFELL, 0);
LABEL_51:
    if ( v56 == 1 )
      goto LABEL_16;
    goto LABEL_52;
  }
LABEL_58:
  v57 = *(unsigned __int16 **)(a2 + 48);
  v58 = sub_190CCA0(a1, v57, a3, a4);
  if ( v58 <= 1 )
  {
    if ( v58 != 1 )
      goto LABEL_60;
LABEL_16:
    v23 = 1;
    goto LABEL_17;
  }
  if ( v57 != (unsigned __int16 *)(v58 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v58 = sub_1C543A0(*a1, v58 & 0xFFFFFFFFFFFFFFFELL, 0);
    if ( v58 != 1 )
      goto LABEL_64;
    goto LABEL_16;
  }
LABEL_60:
  if ( !v7 )
  {
    v23 = a2;
    goto LABEL_17;
  }
LABEL_64:
  v23 = sub_1C5B2B0(
          *a1,
          *(_DWORD *)(a2 + 8),
          *(unsigned __int8 *)(a2 + 12),
          *(unsigned __int8 *)(a2 + 13),
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          (__int64)v66,
          (__int64)v69,
          (unsigned int)v70,
          (__int64)v72,
          (unsigned int)v73,
          v58 & 0xFFFFFFFFFFFFFFFELL,
          (__int64)ptr,
          (unsigned int)v76,
          *(_DWORD *)(a2 + 80),
          *(_DWORD *)(a2 + 40));
LABEL_17:
  if ( ptr != v77 )
    free(ptr);
  if ( v66 != v68 )
    free(v66);
  if ( v72 != v74 )
    free(v72);
  if ( v69 != v71 )
    free(v69);
  return v23;
}

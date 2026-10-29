__int64 __fastcall sub_177B1F0(__int64 *a1, __int64 a2)
{
  int v3; // eax
  _BYTE *v4; // rdx
  __int64 v5; // r15
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int16 *v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int16 *v20; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  int v24; // r12d
  int v25; // r14d
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int16 *v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int16 *v38; // r15
  unsigned __int64 v39; // rax
  int v40; // r12d
  int v41; // r14d
  unsigned __int16 *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rdx
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // r14
  __int64 v51; // r12
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int16 *v54; // r15
  unsigned __int64 v55; // rax
  unsigned __int16 *v56; // r12
  unsigned __int64 v57; // rax
  __int64 v58; // rdi
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
  v3 = *(_DWORD *)(a2 + 16);
  v72 = v74;
  v4 = v68;
  v67 = 0x400000000LL;
  v69 = v71;
  v66 = v68;
  ptr = v77;
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    v61 = (unsigned int)(v3 - 1);
    v7 = 0;
    v8 = **(_QWORD **)(a2 + 72);
    while ( 1 )
    {
      *(_QWORD *)&v4[8 * v7] = v8;
      v18 = *(_QWORD *)(a2 + 56);
      v19 = 8 * v5;
      LODWORD(v67) = v67 + 1;
      v20 = *(unsigned __int16 **)(v18 + 8 * v5);
      v21 = sub_175B800(a1, v20);
      if ( v21 <= 1 )
      {
        if ( v21 == 1 )
          goto LABEL_16;
      }
      else if ( v20 != (unsigned __int16 *)(v21 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v6 = 1;
        v21 = sub_1C543A0(*a1, v21 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v21 == 1 )
          goto LABEL_16;
      }
      v9 = (unsigned int)v70;
      v10 = v21 & 0xFFFFFFFFFFFFFFFELL;
      v11 = (unsigned int)v70 + 1LL;
      if ( v11 > HIDWORD(v70) )
      {
        v65 = v10;
        sub_2237220(&v69, v71, v11, 8);
        v9 = (unsigned int)v70;
        v10 = v65;
      }
      *((_QWORD *)v69 + v9) = v10;
      LODWORD(v70) = v70 + 1;
      v12 = (unsigned __int16 *)sub_EEDDB0(a2, v5);
      v13 = sub_175B800(a1, v12);
      if ( v13 == 1 )
        goto LABEL_16;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v73;
      v6 |= v12 != (unsigned __int16 *)v14;
      v16 = (unsigned int)v73 + 1LL;
      if ( v16 > HIDWORD(v73) )
      {
        v60 = v14;
        sub_2237220(&v72, v74, v16, 8);
        v15 = (unsigned int)v73;
        v14 = v60;
      }
      *((_QWORD *)v72 + v15) = v14;
      LODWORD(v73) = v73 + 1;
      if ( v61 == v5 )
        goto LABEL_27;
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v19 + 8);
      v7 = (unsigned int)v67;
      v17 = (unsigned int)v67 + 1LL;
      if ( v17 > HIDWORD(v67) )
      {
        v59 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v19 + 8);
        sub_2237220(&v66, v68, v17, 8);
        v7 = (unsigned int)v67;
        v8 = v59;
      }
      v4 = v66;
      ++v5;
    }
  }
  v6 = 0;
LABEL_27:
  v24 = *(_DWORD *)(a2 + 20);
  if ( v24 )
  {
    v25 = 0;
    while ( 1 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v25));
      v34 = (unsigned int)v67;
      v35 = (unsigned int)v67 + 1LL;
      if ( v35 > HIDWORD(v67) )
      {
        sub_2237220(&v66, v68, v35, 8);
        v34 = (unsigned int)v67;
      }
      *((_QWORD *)v66 + v34) = v33;
      v36 = *(_QWORD *)(a2 + 56);
      v37 = (unsigned int)(*(_DWORD *)(a2 + 16) + v25);
      LODWORD(v67) = v67 + 1;
      v38 = *(unsigned __int16 **)(v36 + 8 * v37);
      v39 = sub_175B800(a1, v38);
      if ( v39 > 1 )
      {
        if ( v38 == (unsigned __int16 *)(v39 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_30;
        v6 = 1;
        v39 = sub_1C543A0(*a1, v39 & 0xFFFFFFFFFFFFFFFELL, 0);
      }
      if ( v39 == 1 )
        goto LABEL_16;
LABEL_30:
      v26 = (unsigned int)v70;
      v27 = v39 & 0xFFFFFFFFFFFFFFFELL;
      v28 = (unsigned int)v70 + 1LL;
      if ( v28 > HIDWORD(v70) )
      {
        v62 = v27;
        sub_2237220(&v69, v71, v28, 8);
        v26 = (unsigned int)v70;
        v27 = v62;
      }
      *((_QWORD *)v69 + v26) = v27;
      LODWORD(v70) = v70 + 1;
      v29 = (unsigned __int16 *)sub_EEDDC0(a2, v25);
      v30 = sub_175B800(a1, v29);
      if ( v30 == 1 )
        goto LABEL_16;
      v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
      v6 |= v29 != (unsigned __int16 *)v31;
      v32 = (unsigned int)v73 + 1LL;
      if ( v32 > HIDWORD(v73) )
      {
        v63 = v31;
        ++v25;
        sub_2237220(&v72, v74, v32, 8);
        *((_QWORD *)v72 + (unsigned int)v73) = v63;
        LODWORD(v73) = v73 + 1;
        if ( v24 == v25 )
          break;
      }
      else
      {
        ++v25;
        *((_QWORD *)v72 + (unsigned int)v73) = v31;
        LODWORD(v73) = v73 + 1;
        if ( v25 == v24 )
          break;
      }
    }
  }
  v40 = *(_DWORD *)(a2 + 80);
  if ( v40 )
  {
    v41 = 0;
    while ( 1 )
    {
      v46 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + v41));
      v47 = (unsigned int)v67;
      v48 = (unsigned int)v67 + 1LL;
      if ( v48 > HIDWORD(v67) )
      {
        sub_2237220(&v66, v68, v48, 8);
        v47 = (unsigned int)v67;
      }
      *((_QWORD *)v66 + v47) = v46;
      LODWORD(v67) = v67 + 1;
      v42 = (unsigned __int16 *)sub_EEDDE0(a2, v41);
      v43 = sub_175B800(a1, v42);
      if ( v43 == 1 )
        goto LABEL_16;
      v44 = v43 & 0xFFFFFFFFFFFFFFFELL;
      v6 |= sub_EEDDE0(a2, v41) != (v43 & 0xFFFFFFFFFFFFFFFELL);
      v45 = (unsigned int)v73 + 1LL;
      if ( v45 > HIDWORD(v73) )
      {
        ++v41;
        sub_2237220(&v72, v74, v45, 8);
        *((_QWORD *)v72 + (unsigned int)v73) = v44;
        LODWORD(v73) = v73 + 1;
        if ( v40 == v41 )
          break;
      }
      else
      {
        ++v41;
        *((_QWORD *)v72 + (unsigned int)v73) = v44;
        LODWORD(v73) = v73 + 1;
        if ( v41 == v40 )
          break;
      }
    }
  }
  v49 = *(_DWORD *)(a2 + 24);
  if ( v49 )
  {
    v50 = 0;
    v51 = 8LL * (unsigned int)(v49 - 1) + 8;
    while ( 1 )
    {
      v54 = *(unsigned __int16 **)(*(_QWORD *)(a2 + 64) + v50);
      v55 = sub_175B800(a1, v54);
      if ( v55 <= 1 )
        goto LABEL_51;
      if ( v54 != (unsigned __int16 *)(v55 & 0xFFFFFFFFFFFFFFFELL) )
        break;
LABEL_52:
      v52 = v55 & 0xFFFFFFFFFFFFFFFELL;
      v53 = (unsigned int)v76 + 1LL;
      if ( v53 > HIDWORD(v76) )
      {
        v64 = v52;
        v50 += 8;
        sub_2237220(&ptr, v77, v53, 8);
        *((_QWORD *)ptr + (unsigned int)v76) = v64;
        LODWORD(v76) = v76 + 1;
        if ( v50 == v51 )
          goto LABEL_58;
      }
      else
      {
        v50 += 8;
        *((_QWORD *)ptr + (unsigned int)v76) = v52;
        LODWORD(v76) = v76 + 1;
        if ( v51 == v50 )
          goto LABEL_58;
      }
    }
    v6 = 1;
    v55 = sub_1C543A0(*a1, v55 & 0xFFFFFFFFFFFFFFFELL, 0);
LABEL_51:
    if ( v55 == 1 )
      goto LABEL_16;
    goto LABEL_52;
  }
LABEL_58:
  v56 = *(unsigned __int16 **)(a2 + 48);
  v57 = sub_175B800(a1, v56);
  if ( v57 > 1 )
  {
    v58 = *a1;
    if ( v56 == (unsigned __int16 *)(v57 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_61;
    v57 = sub_1C543A0(v58, v57 & 0xFFFFFFFFFFFFFFFELL, 0);
    if ( v57 != 1 )
    {
      v58 = *a1;
LABEL_63:
      v22 = sub_1C5B2B0(
              v58,
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
              v57 & 0xFFFFFFFFFFFFFFFELL,
              (__int64)ptr,
              (unsigned int)v76,
              *(_DWORD *)(a2 + 80),
              *(_DWORD *)(a2 + 40));
      goto LABEL_17;
    }
LABEL_16:
    v22 = 1;
    goto LABEL_17;
  }
  if ( v57 == 1 )
    goto LABEL_16;
  v58 = *a1;
LABEL_61:
  if ( *(_DWORD *)(v58 + 12632) )
    goto LABEL_63;
  v22 = a2;
  if ( v6 )
    goto LABEL_63;
LABEL_17:
  if ( ptr != v77 )
    free(ptr);
  if ( v66 != v68 )
    free(v66);
  if ( v72 != v74 )
    free(v72);
  if ( v69 != v71 )
    free(v69);
  return v22;
}

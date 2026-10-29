bool __fastcall sub_7F1460(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  bool result; // al
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r12
  int v24; // r15d
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // r12
  __int64 v29; // r15
  unsigned int v30; // r12d
  __int64 v31; // r15
  __int64 v32; // r15
  unsigned int v33; // r12d
  _DWORD *v34; // rdi
  unsigned int v35; // r12d
  __int64 v36; // r15
  __int64 v37; // rdi
  unsigned int v38; // r12d
  __int64 v39; // r15
  void *v40; // rdi
  __int64 v41; // r15
  unsigned int v42; // r12d
  _DWORD *v43; // rdi
  unsigned int v44; // r12d
  __int64 v45; // r15
  __int64 v46; // rdi
  __int64 v47; // r15
  unsigned int v48; // r12d
  _DWORD *v49; // rdi
  unsigned int v50; // r12d
  __int64 v51; // r15
  __int64 v52; // rdi
  __int64 v53; // r15
  unsigned int v54; // r12d
  _DWORD *v55; // rdi
  unsigned int v56; // r12d
  __int64 v57; // r15
  __int64 v58; // rdi
  __int64 v59; // r15
  unsigned int v60; // r12d
  _DWORD *v61; // rdi
  unsigned int v62; // r12d
  __int64 v63; // r15
  __int64 v64; // rdi
  char *v65; // rdx
  unsigned __int64 v66; // [rsp+8h] [rbp-140h]
  __int64 v67; // [rsp+8h] [rbp-140h]
  __int64 v68; // [rsp+8h] [rbp-140h]
  unsigned __int64 v69; // [rsp+8h] [rbp-140h]
  unsigned __int64 v70; // [rsp+10h] [rbp-138h]
  unsigned __int64 v71; // [rsp+10h] [rbp-138h]
  unsigned int v72; // [rsp+18h] [rbp-130h]
  unsigned int v73; // [rsp+20h] [rbp-128h]
  unsigned int v74; // [rsp+34h] [rbp-114h] BYREF
  char *v75; // [rsp+38h] [rbp-110h] BYREF
  __int64 v76; // [rsp+40h] [rbp-108h] BYREF
  __int128 v77; // [rsp+48h] [rbp-100h]
  __m128i si128; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v79[48]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-A8h]
  __int64 v81; // [rsp+A8h] [rbp-A0h]
  _BYTE v82[24]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v84; // [rsp+D0h] [rbp-78h]
  __int64 v85; // [rsp+F0h] [rbp-58h]
  __int64 v86; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v87; // [rsp+108h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v75 = *a2;
  v3 = &v75[a3];
  if ( __CFADD__(a3, v75) || !sub_7E30F0(&v74, (unsigned __int64 *)&v75) )
    return 0;
  v6 = v74;
  v73 = v74;
  if ( v74 != *(_QWORD *)(a1 + 24) )
  {
    v76 = 0;
    v83 = 0;
    memset(v82, 0, sizeof(v82));
    v77 = 0;
    v84 = 0;
    sub_7DCF50(&v83, (__int64)&v76);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    sub_7E2EE0((__int64)v79, (__int64)v82);
    sub_7E25B0((__int64)v82);
    v7 = *(_QWORD *)(a1 + 24);
    v80 = 0;
    v81 = 0;
    v70 = v7;
    if ( v6 < v7 )
    {
      v9 = v6;
      do
      {
        v66 = v9;
        sub_7E25B0(*(_QWORD *)(a1 + 16) + 80 * v9 + 16);
        v9 = v66 + 1;
      }
      while ( v66 + 1 < v70 );
      *(_QWORD *)(a1 + 24) = v6;
    }
    else if ( v7 < v6 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)&si128 < v8 || (unsigned __int64)&si128 >= 80LL * *(_QWORD *)(a1 + 32) + v8 )
      {
        sub_7F11E0((_QWORD *)(a1 + 16), v6, (__int64)&si128);
      }
      else
      {
        *(__m128i *)v82 = _mm_load_si128(&si128);
        sub_7E2EE0((__int64)&v82[16], (__int64)v79);
        v85 = 0;
        v86 = 0;
        sub_7F11E0((_QWORD *)(a1 + 16), v6, (__int64)v82);
        sub_7E25B0((__int64)&v82[16]);
      }
      sub_7E25B0((__int64)v79);
LABEL_15:
      v67 = 80 * v6;
      v10 = 0;
      while ( sub_7E8330(v10 + *(_QWORD *)(a1 + 16), (unsigned __int64 *)&v75, v3 - v75) )
      {
        v10 += 80;
        if ( v10 == v67 )
          goto LABEL_19;
      }
      return 0;
    }
    sub_7E25B0((__int64)v79);
  }
  if ( v73 )
    goto LABEL_15;
LABEL_19:
  if ( !sub_7E30F0(&v74, (unsigned __int64 *)&v75) )
    return 0;
  v11 = v74;
  v72 = v74;
  if ( v74 != *(_QWORD *)(a1 + 48) )
  {
    v76 = 0;
    v83 = 0;
    memset(v82, 0, sizeof(v82));
    v77 = 0;
    v84 = 0;
    sub_7DCF50(&v83, (__int64)&v76);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    sub_7E2EE0((__int64)v79, (__int64)v82);
    sub_7E25B0((__int64)v82);
    v12 = *(_QWORD *)(a1 + 48);
    LOBYTE(v80) = 0;
    v71 = v12;
    if ( v11 < v12 )
    {
      v16 = v11;
      do
      {
        v69 = v16;
        sub_7E25B0(*(_QWORD *)(a1 + 40) + 72 * v16 + 16);
        v16 = v69 + 1;
      }
      while ( v69 + 1 < v71 );
      *(_QWORD *)(a1 + 48) = v11;
    }
    else if ( v12 < v11 )
    {
      v13 = *(_QWORD *)(a1 + 40);
      if ( (unsigned __int64)&si128 < v13 || (unsigned __int64)&si128 >= v13 + 72LL * *(_QWORD *)(a1 + 56) )
      {
        sub_7F1320((_QWORD *)(a1 + 40), v11, (__int64)&si128);
      }
      else
      {
        *(__m128i *)v82 = _mm_load_si128(&si128);
        sub_7E2EE0((__int64)&v82[16], (__int64)v79);
        LOBYTE(v85) = 0;
        sub_7F1320((_QWORD *)(a1 + 40), v11, (__int64)v82);
        sub_7E25B0((__int64)&v82[16]);
      }
      sub_7E25B0((__int64)v79);
LABEL_27:
      v14 = 72 * v11;
      v15 = 0;
      v68 = v14;
      while ( sub_7E8510(v15 + *(_QWORD *)(a1 + 40), (unsigned __int64 *)&v75, v3 - v75) )
      {
        v15 += 72;
        if ( v15 == v68 )
          goto LABEL_38;
      }
      return 0;
    }
    sub_7E25B0((__int64)v79);
  }
  if ( v72 )
    goto LABEL_27;
LABEL_38:
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v17 = *(unsigned int *)v82;
  sub_787E10((__int64 *)(a1 + 64), *(unsigned int *)v82);
  if ( (_DWORD)v17 )
  {
    v18 = 4 * v17;
    v19 = 0;
    while ( sub_7E30F0((_DWORD *)(v19 + *(_QWORD *)(a1 + 64)), (unsigned __int64 *)&v75) )
    {
      v19 += 4;
      if ( v18 == v19 )
        goto LABEL_45;
    }
    return 0;
  }
LABEL_45:
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v20 = *(unsigned int *)v82;
  sub_787E10((__int64 *)(a1 + 88), *(unsigned int *)v82);
  if ( (_DWORD)v20 )
  {
    v21 = 4 * v20;
    v22 = 0;
    while ( sub_7E30F0((_DWORD *)(v22 + *(_QWORD *)(a1 + 88)), (unsigned __int64 *)&v75) )
    {
      v22 += 4;
      if ( v21 == v22 )
        goto LABEL_51;
    }
    return 0;
  }
LABEL_51:
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v23 = *(unsigned int *)v82;
  v24 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 120) )
    sub_7DE460((__int64 *)(a1 + 112), *(unsigned int *)v82);
  if ( v24 )
  {
    v25 = 16 * v23;
    v26 = 0;
    while ( sub_7E0960((void *)(v26 + *(_QWORD *)(a1 + 112)), 0x10u, (size_t *)&v75, (size_t)v3) )
    {
      v26 += 16;
      if ( v25 == v26 )
        goto LABEL_59;
    }
    return 0;
  }
LABEL_59:
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v27 = *(unsigned int *)v82;
  sub_787E10((__int64 *)(a1 + 136), *(unsigned int *)v82);
  if ( (_DWORD)v27 )
  {
    v28 = 4 * v27;
    v29 = 0;
    while ( sub_7E30F0((_DWORD *)(v29 + *(_QWORD *)(a1 + 136)), (unsigned __int64 *)&v75) )
    {
      v29 += 4;
      if ( v28 == v29 )
        goto LABEL_65;
    }
    return 0;
  }
LABEL_65:
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v30 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 168) )
    sub_7DE7A0((__int64 *)(a1 + 160), *(unsigned int *)v82);
  if ( v30 )
  {
    v31 = 0;
    while ( (unsigned __int8)sub_7E1CF0(
                               (__int64 *)(*(_QWORD *)(a1 + 160) + 24 * v31),
                               (const void **)&v75,
                               (unsigned __int64)v3) )
    {
      if ( (unsigned int)++v31 >= v30 )
        goto LABEL_73;
    }
    return 0;
  }
LABEL_73:
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v32 = 0;
  v33 = *(_DWORD *)v82;
  sub_787E10((__int64 *)(a1 + 184), *(unsigned int *)v82);
  while ( (unsigned int)v32 < v33 )
  {
    v34 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 4 * v32++);
    if ( !sub_7E30F0(v34, (unsigned __int64 *)&v75) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v35 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 216) )
    sub_7DE7A0((__int64 *)(a1 + 208), *(unsigned int *)v82);
  v36 = 0;
  while ( (unsigned int)v36 < v35 )
  {
    v37 = 24 * v36++;
    if ( !(unsigned __int8)sub_7E1CF0(
                             (__int64 *)(*(_QWORD *)(a1 + 208) + v37),
                             (const void **)&v75,
                             (unsigned __int64)v3) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v38 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 240) )
    sub_7DE460((__int64 *)(a1 + 232), *(unsigned int *)v82);
  v39 = 0;
  while ( (unsigned int)v39 < v38 )
  {
    v40 = (void *)(*(_QWORD *)(a1 + 232) + 16 * v39++);
    if ( !sub_7E0960(v40, 0x10u, (size_t *)&v75, (size_t)v3) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v41 = 0;
  v42 = *(_DWORD *)v82;
  sub_787E10((__int64 *)(a1 + 256), *(unsigned int *)v82);
  while ( (unsigned int)v41 < v42 )
  {
    v43 = (_DWORD *)(*(_QWORD *)(a1 + 256) + 4 * v41++);
    if ( !sub_7E30F0(v43, (unsigned __int64 *)&v75) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v44 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 288) )
    sub_7DE7A0((__int64 *)(a1 + 280), *(unsigned int *)v82);
  v45 = 0;
  while ( (unsigned int)v45 < v44 )
  {
    v46 = 24 * v45++;
    if ( !(unsigned __int8)sub_7E1CF0(
                             (__int64 *)(*(_QWORD *)(a1 + 280) + v46),
                             (const void **)&v75,
                             (unsigned __int64)v3) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v47 = 0;
  v48 = *(_DWORD *)v82;
  sub_787E10((__int64 *)(a1 + 304), *(unsigned int *)v82);
  while ( (unsigned int)v47 < v48 )
  {
    v49 = (_DWORD *)(*(_QWORD *)(a1 + 304) + 4 * v47++);
    if ( !sub_7E30F0(v49, (unsigned __int64 *)&v75) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v50 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 336) )
    sub_7DE7A0((__int64 *)(a1 + 328), *(unsigned int *)v82);
  v51 = 0;
  while ( (unsigned int)v51 < v50 )
  {
    v52 = 24 * v51++;
    if ( !(unsigned __int8)sub_7E1CF0(
                             (__int64 *)(*(_QWORD *)(a1 + 328) + v52),
                             (const void **)&v75,
                             (unsigned __int64)v3) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v53 = 0;
  v54 = *(_DWORD *)v82;
  sub_787E10((__int64 *)(a1 + 352), *(unsigned int *)v82);
  while ( (unsigned int)v53 < v54 )
  {
    v55 = (_DWORD *)(*(_QWORD *)(a1 + 352) + 4 * v53++);
    if ( !sub_7E30F0(v55, (unsigned __int64 *)&v75) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v56 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 384) )
    sub_7DE7A0((__int64 *)(a1 + 376), *(unsigned int *)v82);
  v57 = 0;
  while ( (unsigned int)v57 < v56 )
  {
    v58 = 24 * v57++;
    if ( !(unsigned __int8)sub_7E1CF0(
                             (__int64 *)(*(_QWORD *)(a1 + 376) + v58),
                             (const void **)&v75,
                             (unsigned __int64)v3) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v59 = 0;
  v60 = *(_DWORD *)v82;
  sub_787E10((__int64 *)(a1 + 400), *(unsigned int *)v82);
  while ( (unsigned int)v59 < v60 )
  {
    v61 = (_DWORD *)(*(_QWORD *)(a1 + 400) + 4 * v59++);
    if ( !sub_7E30F0(v61, (unsigned __int64 *)&v75) )
      return 0;
  }
  if ( !sub_7E30F0(v82, (unsigned __int64 *)&v75) )
    return 0;
  v62 = *(_DWORD *)v82;
  if ( *(unsigned int *)v82 != *(_QWORD *)(a1 + 432) )
    sub_7DE7A0((__int64 *)(a1 + 424), *(unsigned int *)v82);
  v63 = 0;
  while ( (unsigned int)v63 < v62 )
  {
    v64 = 24 * v63++;
    if ( !(unsigned __int8)sub_7E1CF0(
                             (__int64 *)(*(_QWORD *)(a1 + 424) + v64),
                             (const void **)&v75,
                             (unsigned __int64)v3) )
      return 0;
  }
  result = sub_7E30F0(v82, (unsigned __int64 *)&v75);
  if ( !result )
    return 0;
  v65 = v75;
  *(_BYTE *)(a1 + 448) = *(_DWORD *)v82 != 0;
  *a2 = v65;
  return result;
}

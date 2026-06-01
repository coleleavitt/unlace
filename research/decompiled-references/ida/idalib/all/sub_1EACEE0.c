bool __fastcall sub_1EACEE0(__int64 a1, __int64 a2, _BYTE *a3, signed __int64 a4, __int64 a5, bool a6)
{
  size_t v9; // rdx
  bool result; // al
  signed __int64 v11; // rdx
  _BYTE *v12; // rsi
  char *v13; // r9
  char *v14; // r14
  char *v15; // rsi
  unsigned __int64 v16; // r8
  char *i; // rax
  __int64 v18; // rdx
  unsigned int v19; // edx
  char *v20; // r8
  char *v21; // r14
  char *v22; // rsi
  unsigned __int64 v23; // r15
  char *j; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  void *v29; // rax
  int v30; // edx
  __int64 v31; // rdx
  char *v32; // rbp
  _BYTE *v33; // r14
  signed __int64 v34; // r15
  int v35; // ecx
  __int64 v36; // rdx
  signed __int64 v37; // rax
  _BYTE *v38; // r13
  char *v39; // r12
  signed __int64 v40; // r14
  _BYTE *v41; // rbp
  signed __int64 v42; // r15
  size_t v44; // rdx
  size_t v45; // rdx
  size_t v46; // rdx
  __int64 v47; // [rsp+0h] [rbp-1F8h]
  char *v48; // [rsp+0h] [rbp-1F8h]
  __int64 v49; // [rsp+0h] [rbp-1F8h]
  char *v50; // [rsp+0h] [rbp-1F8h]
  bool v51; // [rsp+0h] [rbp-1F8h]
  bool v52; // [rsp+0h] [rbp-1F8h]
  bool v53; // [rsp+0h] [rbp-1F8h]
  bool v54; // [rsp+0h] [rbp-1F8h]
  char *v55; // [rsp+8h] [rbp-1F0h]
  char *v56; // [rsp+8h] [rbp-1F0h]
  __int64 v57; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 *v58[10]; // [rsp+30h] [rbp-1C8h] BYREF
  void *base; // [rsp+80h] [rbp-178h] BYREF
  __int64 v60; // [rsp+88h] [rbp-170h]
  _BYTE v61[64]; // [rsp+90h] [rbp-168h] BYREF
  void *v62; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-120h]
  _BYTE v64[64]; // [rsp+E0h] [rbp-118h] BYREF
  void *v65; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v66; // [rsp+128h] [rbp-D0h]
  _BYTE v67[64]; // [rsp+130h] [rbp-C8h] BYREF
  void *ptr; // [rsp+170h] [rbp-88h] BYREF
  __int64 v69; // [rsp+178h] [rbp-80h]
  _BYTE v70[120]; // [rsp+180h] [rbp-78h] BYREF

  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 != *(_QWORD *)(a2 + 8) || sub_9B48C0(*(const void **)a1, *(const void **)a2, v9) )
  {
    result = 1;
    if ( !a5 )
      return result;
    sub_FC70B0((__int64)&ptr, a5, 0, 913);
    sub_AEC220((unsigned __int8 **)&ptr, a3, a4);
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"target", 1u);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)a1, *(_QWORD *)(a1 + 8));
    v11 = *(_QWORD *)(a2 + 8);
    v12 = *(_BYTE **)a2;
    goto LABEL_47;
  }
  v44 = *(_QWORD *)(a1 + 168);
  if ( v44 != *(_QWORD *)(a2 + 168) || sub_9B48C0(*(const void **)(a1 + 160), *(const void **)(a2 + 160), v44) )
  {
    result = 1;
    if ( !a5 )
      return result;
    sub_FC70B0((__int64)&ptr, a5, 0, 913);
    sub_AEC220((unsigned __int8 **)&ptr, a3, a4);
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"target ABI", 1u);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(a1 + 160), *(_QWORD *)(a1 + 168));
    v11 = *(_QWORD *)(a2 + 168);
    v12 = *(_BYTE **)(a2 + 160);
    goto LABEL_47;
  }
  if ( a6 )
    goto LABEL_5;
  v45 = *(_QWORD *)(a1 + 72);
  if ( v45 != *(_QWORD *)(a2 + 72) || sub_9B48C0(*(const void **)(a1 + 64), *(const void **)(a2 + 64), v45) )
  {
    result = 1;
    if ( !a5 )
      return result;
    sub_FC70B0((__int64)&ptr, a5, 0, 913);
    sub_AEC220((unsigned __int8 **)&ptr, a3, a4);
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"target CPU", 1u);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(a1 + 64), *(_QWORD *)(a1 + 72));
    v11 = *(_QWORD *)(a2 + 72);
    v12 = *(_BYTE **)(a2 + 64);
    goto LABEL_47;
  }
  v46 = *(_QWORD *)(a1 + 104);
  if ( v46 != *(_QWORD *)(a2 + 104) || sub_9B48C0(*(const void **)(a1 + 96), *(const void **)(a2 + 96), v46) )
  {
    result = 1;
    if ( !a5 )
      return result;
    sub_FC70B0((__int64)&ptr, a5, 0, 913);
    sub_AEC220((unsigned __int8 **)&ptr, a3, a4);
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"tune CPU", 1u);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(a1 + 96), *(_QWORD *)(a1 + 104));
    v11 = *(_QWORD *)(a2 + 104);
    v12 = *(_BYTE **)(a2 + 96);
LABEL_47:
    sub_AEC220((unsigned __int8 **)&ptr, v12, v11);
    sub_AEA040((__int64)&ptr);
    return 1;
  }
LABEL_5:
  v13 = *(char **)(a2 + 240);
  v14 = *(char **)(a2 + 232);
  v15 = v61;
  base = v61;
  v60 = 0x400000000LL;
  v16 = (v13 - v14) >> 5;
  if ( v16 > 4 )
  {
    v55 = v13;
    v47 = (v13 - v14) >> 5;
    sub_2237220(&base, v61, v47, 16);
    v13 = v55;
    LODWORD(v16) = v60 + v47;
    v15 = (char *)base + 16 * (unsigned int)v60;
  }
  for ( i = v14; v13 != i; *((_QWORD *)v15 - 1) = *((_QWORD *)i - 3) )
  {
    v18 = *(_QWORD *)i;
    i += 32;
    v15 += 16;
    *((_QWORD *)v15 - 2) = v18;
  }
  v19 = v16;
  LODWORD(v60) = v16;
  v20 = *(char **)(a1 + 240);
  v21 = *(char **)(a1 + 232);
  v22 = v64;
  v62 = v64;
  v63 = 0x400000000LL;
  v23 = (v20 - v21) >> 5;
  if ( v23 > 4 )
  {
    v48 = v20;
    sub_2237220(&v62, v64, (v20 - v21) >> 5, 16);
    v19 = v60;
    v20 = v48;
    LODWORD(v23) = v63 + v23;
    v22 = (char *)v62 + 16 * (unsigned int)v63;
  }
  for ( j = v21; v20 != j; *((_QWORD *)v22 - 1) = *((_QWORD *)j - 3) )
  {
    v25 = *(_QWORD *)j;
    j += 32;
    v22 += 16;
    *((_QWORD *)v22 - 2) = v25;
  }
  v26 = (unsigned int)v23;
  LODWORD(v63) = v23;
  v27 = 16LL * v19;
  if ( (unsigned __int64)v27 > 0x10 )
  {
    qsort(base, v27 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v26 = (unsigned int)v63;
  }
  v28 = 16 * v26;
  v29 = v62;
  if ( (unsigned __int64)v28 > 0x10 )
  {
    qsort(v62, v28 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v29 = v62;
    v28 = 16LL * (unsigned int)v63;
  }
  ptr = v70;
  v65 = v67;
  v66 = 0x400000000LL;
  v69 = 0x400000000LL;
  sub_1EA8D70((__int64)base, (__int64)base + 16 * (unsigned int)v60, (__int64)v29, (__int64)v29 + v28, (__int64)&v65);
  sub_1EA8D70(
    (__int64)v62,
    (__int64)v62 + 16 * (unsigned int)v63,
    (__int64)base,
    (__int64)base + 16 * (unsigned int)v60,
    (__int64)&ptr);
  v30 = v69;
  if ( a6 )
  {
    result = 0;
    if ( !(_DWORD)v69 )
      goto LABEL_29;
    result = a6;
    if ( !a5 )
      goto LABEL_29;
    goto LABEL_19;
  }
  if ( a5 )
  {
LABEL_19:
    v31 = 16LL * (unsigned int)v69;
    v56 = (char *)ptr + v31;
    if ( ptr != (char *)ptr + v31 )
    {
      v49 = a5;
      v32 = (char *)ptr;
      do
      {
        v33 = *(_BYTE **)v32;
        v34 = *((_QWORD *)v32 + 1);
        v32 += 16;
        sub_FC70B0((__int64)v58, v49, 0, 912);
        sub_AE9DF0(v58, 0, 2u);
        sub_AEC220(v58, a3, a4);
        sub_AEC220(v58, v33, v34);
        sub_AEA040((__int64)v58);
      }
      while ( v56 != v32 );
      a5 = v49;
    }
    v35 = v66;
    v36 = 16LL * (unsigned int)v66;
    v50 = (char *)v65 + v36;
    if ( v65 != (char *)v65 + v36 )
    {
      v57 = a5;
      v37 = a4;
      v38 = a3;
      v39 = (char *)v65;
      v40 = v37;
      do
      {
        v41 = *(_BYTE **)v39;
        v42 = *((_QWORD *)v39 + 1);
        v39 += 16;
        sub_FC70B0((__int64)v58, v57, 0, 912);
        sub_AE9DF0(v58, 1, 2u);
        sub_AEC220(v58, v38, v40);
        sub_AEC220(v58, v41, v42);
        sub_AEA040((__int64)v58);
      }
      while ( v50 != v39 );
      v35 = v66;
    }
    v30 = v69;
    goto LABEL_28;
  }
  v35 = v66;
LABEL_28:
  result = (v30 | v35) != 0;
LABEL_29:
  if ( ptr != v70 )
  {
    v51 = result;
    free(ptr);
    result = v51;
  }
  if ( v65 != v67 )
  {
    v52 = result;
    free(v65);
    result = v52;
  }
  if ( v62 != v64 )
  {
    v53 = result;
    free(v62);
    result = v53;
  }
  if ( base != v61 )
  {
    v54 = result;
    free(base);
    return v54;
  }
  return result;
}

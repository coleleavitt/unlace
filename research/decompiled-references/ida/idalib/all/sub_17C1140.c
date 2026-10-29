__int64 __fastcall sub_17C1140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 i; // r12
  __int64 **v15; // rax
  __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 j; // r15
  __int64 v20; // rbx
  __int64 (*v22)(); // rax
  _QWORD *v23; // r13
  _QWORD *v24; // r14
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  __int64 (*v27)(); // rax
  __int64 (*v28)(); // rax
  __int64 (*v29)(); // rax
  _DWORD *v30; // r14
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i si128; // xmm1
  __int64 v35; // rax
  void *v36; // rax
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __m128i v39; // xmm5
  __int64 *v40; // r10
  __int64 *v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // r15
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rcx
  char *v50; // r14
  __int64 v51; // rax
  char *v52; // r12
  __int64 (*v53)(); // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  void *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  _QWORD *v81; // rax
  void (__fastcall *v82)(__int128 *, _DWORD *, __int64, __int64); // [rsp+8h] [rbp-1F8h]
  __int64 v83; // [rsp+8h] [rbp-1F8h]
  __int64 *v84; // [rsp+10h] [rbp-1F0h]
  __int128 v85; // [rsp+18h] [rbp-1E8h] BYREF
  void *v86[2]; // [rsp+28h] [rbp-1D8h] BYREF
  __int64 v87; // [rsp+38h] [rbp-1C8h] BYREF
  _BYTE v88[40]; // [rsp+48h] [rbp-1B8h] BYREF
  __m128i v89; // [rsp+70h] [rbp-190h]
  __m128i v90; // [rsp+80h] [rbp-180h]
  __m128i v91; // [rsp+90h] [rbp-170h]
  __int128 v92; // [rsp+A8h] [rbp-158h] BYREF
  void *v93; // [rsp+B8h] [rbp-148h]
  __m128i v94; // [rsp+C0h] [rbp-140h] BYREF
  __m128i v95; // [rsp+D0h] [rbp-130h] BYREF
  __m128i v96; // [rsp+E0h] [rbp-120h] BYREF
  __m128i v97[3]; // [rsp+F0h] [rbp-110h] BYREF
  char v98; // [rsp+120h] [rbp-E0h]
  unsigned int v99; // [rsp+128h] [rbp-D8h]
  char v100; // [rsp+12Ch] [rbp-D4h]
  void *ptr; // [rsp+138h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+140h] [rbp-C0h]
  _QWORD v103[2]; // [rsp+148h] [rbp-B8h] BYREF
  unsigned __int8 *v104[11]; // [rsp+158h] [rbp-A8h] BYREF
  char v105; // [rsp+1B0h] [rbp-50h]
  unsigned int v106; // [rsp+1B8h] [rbp-48h]
  char v107; // [rsp+1BCh] [rbp-44h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v11 = *v7;
  v12 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( v11 >= v12 )
  {
    v13 = *(_BYTE *)(a2 + 29) & 1;
    if ( v11 == v12 )
    {
      if ( !(_BYTE)v13 )
        return 0;
      i = 0;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v8 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 376 )
        break;
      v12 += 8LL;
      if ( v11 == v12 )
        goto LABEL_7;
    }
  }
  else
  {
    v8 = v11;
    while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 376 )
    {
      v8 += 8;
      if ( v12 == v8 )
      {
        v13 = *(_BYTE *)(a2 + 29) & 1;
        goto LABEL_7;
      }
    }
    v13 = *(_BYTE *)(a2 + 29) & 1;
    if ( v12 == v8 )
    {
LABEL_7:
      i = 0;
      if ( !(_BYTE)v13 )
        return 0;
      goto LABEL_8;
    }
  }
  for ( i = *(_QWORD *)v11; *(_WORD *)(*(_QWORD *)v11 + 36LL) != 376; i = *(_QWORD *)v11 )
    v11 += 8LL;
  if ( !(_BYTE)v13 )
  {
    j = 0;
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
    goto LABEL_22;
  }
LABEL_8:
  v15 = (__int64 **)sub_B8C3D0(a2, v13, v11, v8, v9, v10);
  v16 = *v15;
  v17 = (unsigned __int64)&(*v15)[*((unsigned int *)v15 + 2)];
  if ( (unsigned __int64)v16 >= v17 )
  {
    if ( v16 != (__int64 *)v17 )
    {
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 378 )
        goto LABEL_66;
      v48 = (__int64 *)(v17 + 8);
      while ( v16 != v48 )
      {
        v49 = *v48++;
        if ( *(_WORD *)(v49 + 36) == 378 )
          goto LABEL_66;
      }
    }
LABEL_12:
    j = 0;
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
    if ( !i )
      return 0;
    goto LABEL_22;
  }
  v18 = v16;
  while ( *(_WORD *)(*v18 + 36) != 378 )
  {
    if ( (__int64 *)v17 == ++v18 )
      goto LABEL_12;
  }
  if ( (__int64 *)v17 == v18 )
    goto LABEL_12;
LABEL_66:
  for ( j = *v16; *(_WORD *)(*v16 + 36) != 378; j = *v16 )
    ++v16;
  v47 = *(_QWORD *)(a1 + 248);
  v20 = *(_QWORD *)(v47 + 17448);
  if ( !i )
  {
    v30 = *(_DWORD **)(v47 + 17448);
    goto LABEL_51;
  }
LABEL_22:
  (*(void (__fastcall **)(__int128 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 496LL))(
    &v92,
    v20,
    *(_QWORD *)(i + 48),
    *(unsigned int *)(i + 40));
  if ( v94.m128i_i64[1] )
  {
    v22 = *(__int64 (**)())(*(_QWORD *)v20 + 632LL);
    if ( v22 == sub_102BAC0
      || !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64))v22)(v20, v94.m128i_i64[0], v94.m128i_i64[1]) )
    {
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xCE3u, 0);
      if ( v105 )
      {
        sub_AE9DF0(v104, 1, 2u);
      }
      else if ( v107 )
      {
        v77 = sub_168B9E0(&ptr);
        v80 = v103[0];
        if ( v103[0] )
          v80 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v103[0] + 32LL))(v103[0]);
        *(_QWORD *)v88 = v80;
        v81 = sub_1587BC0(v77, (__int64 *)v88, v75, v76, v78, v79);
        sub_AE9DF0((unsigned __int8 **)(*v81 + 32LL * v106 + 8), 1, 2u);
      }
      sub_1682BA0((__int64)&ptr, (__int64)&v94);
      sub_15F7200(&ptr);
LABEL_38:
      sub_9B4A30((void ***)&v92);
      return 1;
    }
  }
  v23 = *((_QWORD **)&v92 + 1);
  if ( (_QWORD)v92 != *((_QWORD *)&v92 + 1) )
  {
    v24 = (_QWORD *)v92;
    while ( 1 )
    {
      v25 = v24[1];
      v26 = (_BYTE *)*v24;
      if ( v25 )
      {
        --v25;
        ++v26;
      }
      *(_QWORD *)&v85 = v26;
      *((_QWORD *)&v85 + 1) = v25;
      if ( *(_BYTE *)*v24 == 45 )
        break;
      v27 = *(__int64 (**)())(*(_QWORD *)v20 + 616LL);
      if ( v27 == sub_102BAA0
        || !((unsigned __int8 (__fastcall *)(__int64))v27)(v20)
        || (v28 = *(__int64 (**)())(*(_QWORD *)v20 + 544LL), v28 != sub_A55ED0)
        && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v28)(v20, v85, *((_QWORD *)&v85 + 1))
        || (*((_QWORD *)&v85 + 1) != 7
         || *(_DWORD *)v85 != 1634100580
         || *(_WORD *)(v85 + 4) != 27765
         || *(_BYTE *)(v85 + 6) != 116)
        && ((v29 = *(__int64 (**)())(*(_QWORD *)v20 + 624LL), v29 == sub_102BAB0)
         || !((__int64 (__fastcall *)(__int64, __int128 *, __int64))v29)(v20, &v85, 1)) )
      {
        sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xCE3u, 0);
        if ( v105 )
        {
          sub_AE9DF0(v104, 0, 2u);
        }
        else if ( v107 )
        {
          v56 = sub_168B9E0(&ptr);
          v59 = v103[0];
          if ( v103[0] )
            v59 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v103[0] + 32LL))(v103[0]);
          *(_QWORD *)v88 = v59;
          v60 = sub_1587BC0(v56, (__int64 *)v88, v54, v55, v57, v58);
          sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v106 + 8), 0, 2u);
        }
        sub_1682BA0((__int64)&ptr, (__int64)&v85);
        goto LABEL_37;
      }
      v24 += 4;
      if ( v23 == v24 )
        goto LABEL_49;
    }
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xCE3u, 0);
    if ( v105 )
    {
      sub_AE9DF0(v104, 0, 2u);
    }
    else if ( v107 )
    {
      v70 = sub_168B9E0(&ptr);
      v73 = v103[0];
      if ( v103[0] )
        v73 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v103[0] + 32LL))(v103[0]);
      *(_QWORD *)v88 = v73;
      v74 = sub_1587BC0(v70, (__int64 *)v88, v68, v69, v71, v72);
      sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * v106 + 8), 0, 2u);
    }
    *(_WORD *)&v88[32] = 1283;
    *(_QWORD *)v88 = "no-";
    *(_OWORD *)&v88[16] = v85;
    sub_2253560(v86, v88);
    sub_1682AF0((__int64)&ptr, (__int64)v86);
    if ( v86[0] != &v87 )
      operator delete(v86[0]);
LABEL_37:
    sub_15F7200(&ptr);
    goto LABEL_38;
  }
LABEL_49:
  sub_9B4A30((void ***)&v92);
  if ( !j )
    return 0;
  v30 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
LABEL_51:
  v102 = 0x800000000LL;
  memset(v88, 0, sizeof(v88));
  v31 = v30[62];
  ptr = v103;
  v89 = 0u;
  v90 = 0u;
  v91 = 0u;
  if ( (unsigned int)(v31 - 27) > 1 )
  {
    sub_A5F120(j, (__int64)&ptr, 43);
    v42 = (unsigned int)v102;
  }
  else
  {
    v82 = *(void (__fastcall **)(__int128 *, _DWORD *, __int64, __int64))(*(_QWORD *)v30 + 496LL);
    v32 = sub_A5F080(j);
    v82(&v92, v30, v32, v33);
    si128 = _mm_load_si128((const __m128i *)v88);
    v87 = *(_QWORD *)&v88[16];
    *(__m128i *)v86 = si128;
    v35 = *((_QWORD *)&v92 + 1);
    *(_QWORD *)v88 = v92;
    v92 = 0;
    *(_QWORD *)&v88[8] = v35;
    v36 = v93;
    v93 = nullptr;
    *(_QWORD *)&v88[16] = v36;
    sub_9B4A30((void ***)v86);
    v37 = _mm_loadu_si128(&v95);
    v38 = _mm_loadu_si128(&v96);
    v39 = _mm_loadu_si128(v97);
    *(__m128i *)&v88[24] = _mm_loadu_si128(&v94);
    v89 = v37;
    v90 = v38;
    v91 = v39;
    sub_9B4A30((void ***)&v92);
    v40 = *(__int64 **)&v88[8];
    v41 = *(__int64 **)v88;
    v42 = (unsigned int)v102;
    if ( *(_QWORD *)&v88[8] != *(_QWORD *)v88 )
    {
      do
      {
        while ( 1 )
        {
          v44 = v41[1];
          v45 = *v41;
          if ( v44 )
          {
            --v44;
            ++v45;
          }
          if ( v42 + 1 > (unsigned __int64)HIDWORD(v102) )
            break;
          v43 = (char *)ptr + 16 * v42;
          v41 += 4;
          *v43 = v45;
          v43[1] = v44;
          v42 = (unsigned int)(v102 + 1);
          LODWORD(v102) = v102 + 1;
          if ( v40 == v41 )
            goto LABEL_78;
        }
        v84 = v40;
        v83 = v45;
        v41 += 4;
        sub_2237220(&ptr, v103, v42 + 1, 16);
        v40 = v84;
        v46 = (char *)ptr + 16 * (unsigned int)v102;
        *v46 = v83;
        v46[1] = v44;
        v42 = (unsigned int)(v102 + 1);
        LODWORD(v102) = v102 + 1;
      }
      while ( v84 != v41 );
    }
  }
LABEL_78:
  v50 = (char *)ptr;
  v51 = 16 * v42;
  v52 = (char *)ptr + v51;
  if ( ptr == (char *)ptr + v51 )
  {
LABEL_88:
    sub_9B4A30((void ***)v88);
    if ( ptr != v103 )
    {
      free(ptr);
      return 0;
    }
    return 0;
  }
  v53 = *(__int64 (**)())(*(_QWORD *)v20 + 616LL);
  if ( v53 != sub_102BAA0 )
  {
    while ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v53)(v20, *(_QWORD *)v50, *((_QWORD *)v50 + 1)) )
    {
      v50 += 16;
      if ( v50 == v52 )
        goto LABEL_88;
      v53 = *(__int64 (**)())(*(_QWORD *)v20 + 616LL);
      if ( v53 == sub_102BAA0 )
        break;
    }
  }
  sub_168B9F0((__int64)&v92, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xCE3u, 0);
  if ( v98 )
  {
    sub_AE9DF0((unsigned __int8 **)&v94.m128i_i64[1], 0, 2u);
  }
  else if ( v100 )
  {
    v63 = sub_168B9E0(&v92);
    v66 = v93;
    if ( v93 )
      v66 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v93 + 32LL))(v93);
    v86[0] = v66;
    v67 = sub_1587BC0(v63, (__int64 *)v86, v61, v62, v64, v65);
    sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v99 + 8), 0, 2u);
  }
  sub_1682BA0((__int64)&v92, (__int64)v50);
  sub_15F7200(&v92);
  sub_9B4A30((void ***)v88);
  if ( ptr != v103 )
    free(ptr);
  return 1;
}

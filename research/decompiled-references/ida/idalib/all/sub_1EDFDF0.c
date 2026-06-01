void __fastcall sub_1EDFDF0(__int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4, char a5)
{
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // esi
  unsigned int v16; // edx
  __int64 *v17; // rbp
  __int64 v18; // rcx
  __int64 *v19; // rbp
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  int v22; // r14d
  __int64 v23; // r15
  unsigned int *v24; // r12
  unsigned int v25; // edx
  unsigned int v26; // eax
  _DWORD *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r14
  char *v36; // r8
  __int64 v37; // r15
  unsigned int *v38; // r14
  __int64 v39; // r15
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // rdi
  __int64 v45; // rsi
  char *v46; // r11
  __int64 *v47; // rdx
  char *v48; // r15
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  size_t v52; // r10
  unsigned __int64 v53; // rcx
  unsigned int v54; // r9d
  __int64 v55; // rdx
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  char *v60; // r15
  int *v61; // rbx
  int v62; // r15d
  int v63; // r14d
  __int64 v64; // rax
  __int64 v65; // rcx
  _DWORD *v66; // rbx
  __m128i si128; // xmm1
  __m128 v68; // xmm0
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 *v73; // rax
  char *v74; // r10
  unsigned __int64 v75; // rcx
  size_t v76; // r9
  void *v77; // rdi
  unsigned __int64 v78; // rdx
  __int64 i; // rax
  __int64 *v80; // r10
  int v81; // edi
  __int64 v82; // rcx
  bool v83; // zf
  _DWORD *v84; // [rsp+8h] [rbp-130h] BYREF
  __m128 v85; // [rsp+10h] [rbp-128h] BYREF
  _DWORD *v86; // [rsp+20h] [rbp-118h]
  size_t n; // [rsp+28h] [rbp-110h]
  unsigned int v88; // [rsp+34h] [rbp-104h]
  void *src; // [rsp+38h] [rbp-100h]
  char *v90; // [rsp+40h] [rbp-F8h]
  __int64 v91; // [rsp+48h] [rbp-F0h]
  size_t v92; // [rsp+50h] [rbp-E8h]
  char *v93; // [rsp+58h] [rbp-E0h]
  char *v94; // [rsp+60h] [rbp-D8h]
  _QWORD *v95; // [rsp+68h] [rbp-D0h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v97; // [rsp+78h] [rbp-C0h]
  _BYTE v98[184]; // [rsp+80h] [rbp-B8h] BYREF

  v8 = a1 + 3840;
  v95 = a2;
  v9 = *a2;
  v84 = (_DWORD *)a4;
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(v9 + 32))(a2);
  v14 = a1 + 3864;
  if ( a5 )
    v8 = a1 + 3864;
  v95 = (_QWORD *)v10;
  v15 = *(_DWORD *)(v8 + 16);
  if ( !v15 )
  {
    ptr = nullptr;
LABEL_92:
    sub_1ED9890(v8, 2 * v15, v14, v11, v12, v13);
LABEL_93:
    sub_1EB0AB0((__int64 *)v8, (__int64 *)&v95, &ptr);
    v10 = (__int64)v95;
    v17 = (__int64 *)ptr;
    LODWORD(v14) = *(_DWORD *)(v8 + 8) + 1;
    goto LABEL_79;
  }
  v12 = v15 - 1;
  v16 = v12 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
  v17 = (__int64 *)(*(_QWORD *)v8 + 24LL * v16);
  v18 = *v17;
  if ( v10 == *v17 )
  {
LABEL_5:
    v19 = v17 + 1;
    goto LABEL_6;
  }
  v13 = 1;
  v80 = nullptr;
  if ( v18 != -4096 )
  {
    while ( 1 )
    {
      if ( v18 == -8192 && !v80 )
        v80 = v17;
      v16 = v12 & (v13 + v16);
      v17 = (__int64 *)(*(_QWORD *)v8 + 24LL * v16);
      v18 = *v17;
      if ( v10 == *v17 )
        goto LABEL_5;
      if ( v18 == -4096 )
      {
        if ( v80 )
          v17 = v80;
        break;
      }
      v13 = (unsigned int)(v13 + 1);
    }
  }
  v81 = *(_DWORD *)(v8 + 8);
  v11 = 3 * v15;
  ptr = v17;
  v14 = (unsigned int)(v81 + 1);
  if ( 4 * (int)v14 >= (unsigned int)v11 )
    goto LABEL_92;
  v82 = v15 - *(_DWORD *)(v8 + 12) - (unsigned int)v14;
  if ( (unsigned int)v82 <= v15 >> 3 )
  {
    sub_1ED9890(v8, v15, v14, v82, v12, v13);
    goto LABEL_93;
  }
LABEL_79:
  v83 = *v17 == -4096;
  *(_DWORD *)(v8 + 8) = v14;
  if ( !v83 )
    --*(_DWORD *)(v8 + 12);
  *v17 = v10;
  v19 = v17 + 1;
  *v19 = 0;
  v19[1] = 0;
LABEL_6:
  v20 = *a3;
  v21 = a3[1];
  ptr = v98;
  v88 = v20;
  v22 = v21;
  v86 = a3 + 2;
  v97 = 0x1000000000LL;
  if ( v21 <= 0x10 )
  {
    if ( (_DWORD)v21 )
      goto LABEL_8;
LABEL_59:
    v34 = (unsigned int)v97;
    goto LABEL_23;
  }
  sub_2237220(&ptr, v98, v21, 8);
  if ( !v22 )
    goto LABEL_59;
LABEL_8:
  v23 = (unsigned int)(v22 - 1);
  n = (size_t)v19;
  v24 = a3 + 2;
  v85.m128_u64[0] = (unsigned __int64)&a3[v23 + 3];
  do
  {
    v25 = *v24++;
    v26 = v25 >> 1;
    if ( (v25 & 1) != 0 )
    {
      if ( v26 )
        v26 = sub_1EDFD20(a1, (__int64)v84, v26);
      v27 = *(_DWORD **)(a1 + 4504);
      v28 = 16LL * *(unsigned int *)(a1 + 4512);
      v29 = v28 >> 4;
      if ( v28 )
      {
        v30 = *(_DWORD **)(a1 + 4504);
        do
        {
          while ( 1 )
          {
            v31 = v29 >> 1;
            v32 = &v30[4 * (v29 >> 1)];
            if ( v26 < *v32 )
              break;
            v30 = v32 + 4;
            v29 = v29 - v31 - 1;
            if ( v29 <= 0 )
            {
              if ( v27 == v30 )
                goto LABEL_32;
              goto LABEL_17;
            }
          }
          v29 >>= 1;
        }
        while ( v31 );
        if ( v27 == v30 )
          goto LABEL_32;
LABEL_17:
        if ( (_DWORD *)((char *)v27 + v28) != v30 - 4 )
        {
          v28 = *((_QWORD *)v30 - 1);
          goto LABEL_19;
        }
LABEL_32:
        v28 = 0;
      }
    }
    else
    {
      v28 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * (*(unsigned int *)(a1 + 200) + (__int64)-v26));
    }
LABEL_19:
    v33 = (unsigned int)v97 + 1LL;
    if ( v33 > HIDWORD(v97) )
      sub_2237220(&ptr, v98, v33, 8);
    *((_QWORD *)ptr + (unsigned int)v97) = v28;
    v34 = (unsigned int)(v97 + 1);
    LODWORD(v97) = v97 + 1;
  }
  while ( v24 != (unsigned int *)v85.m128_u64[0] );
  v19 = (__int64 *)n;
  v86 += v23 + 1;
LABEL_23:
  v35 = v19[1];
  v36 = (char *)ptr;
  n = 8 * v34;
  v37 = v35;
  v38 = (unsigned int *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
  v85.m128_u64[0] = (unsigned __int64)ptr + 8 * v34;
  v39 = (v37 >> 2) & 1;
  if ( (_DWORD)v39 )
  {
    v43 = v38[2];
    v47 = *(__int64 **)v38;
    v45 = 8 * v43;
    v46 = (char *)(*(_QWORD *)v38 + 8 * v43);
    if ( ptr == (void *)v85.m128_u64[0] )
      goto LABEL_51;
    v39 = 8 * v43;
    src = v38;
    v41 = 8 * v43;
    if ( v38 )
      goto LABEL_36;
    goto LABEL_26;
  }
  if ( !v38 )
  {
    if ( ptr == (void *)v85.m128_u64[0] )
      goto LABEL_51;
LABEL_26:
    if ( (void *)v85.m128_u64[0] == (char *)ptr + 8 )
    {
      v19[1] = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFFBLL;
      goto LABEL_51;
    }
    src = ptr;
    v40 = operator new(0x30u);
    v36 = (char *)src;
    v41 = v39;
    *(_QWORD *)(v40 + 8) = 0x400000000LL;
    *(_QWORD *)v40 = v40 + 16;
    v40 |= 4u;
    v19[1] = v40;
    v42 = v40;
    goto LABEL_28;
  }
  if ( ptr == (void *)v85.m128_u64[0] )
    goto LABEL_51;
  src = ptr;
  v69 = operator new(0x30u);
  v36 = (char *)src;
  *(_QWORD *)(v69 + 8) = 0x400000000LL;
  *(_QWORD *)v69 = v69 + 16;
  v70 = v69 & 0xFFFFFFFFFFFFFFF8LL;
  v19[1] = v69 | 4;
  v71 = *(unsigned int *)((v69 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  if ( v71 + 1 > (unsigned __int64)*(unsigned int *)(v70 + 12) )
  {
    sub_2237220(v70, v70 + 16, v71 + 1, 8);
    v71 = *(unsigned int *)(v70 + 8);
    v36 = (char *)src;
  }
  v41 = 8;
  *(_QWORD *)(*(_QWORD *)v70 + 8 * v71) = v38;
  ++*(_DWORD *)(v70 + 8);
  v42 = v19[1];
LABEL_28:
  v38 = (unsigned int *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
  v43 = *(unsigned int *)((v42 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v44 = *(__int64 **)(v42 & 0xFFFFFFFFFFFFFFF8LL);
  src = (void *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
  v45 = 8 * v43;
  v46 = (char *)&v44[v43];
  if ( (v42 & 4) == 0 )
  {
    v47 = v19 + 1;
    goto LABEL_37;
  }
  v47 = v44;
LABEL_36:
  v44 = v47;
LABEL_37:
  v48 = (char *)v47 + v41;
  v49 = (__int64)n >> 3;
  src = (void *)((char *)v47 + v41 - (char *)v44);
  v50 = ((__int64)n >> 3) + v43;
  v51 = v38[3];
  if ( v48 == v46 )
  {
    if ( v50 > v51 )
    {
      src = (void *)((__int64)n >> 3);
      v85.m128_u64[0] = (unsigned __int64)v36;
      sub_2237220(v38, v38 + 4, v50, 8);
      v49 = (__int64)n >> 3;
      v36 = (char *)v85.m128_u64[0];
    }
    v72 = v38[2];
    v73 = *(__int64 **)v38;
    v85.m128_u64[0] = v49;
    memcpy(&v73[v72], v36, n);
    v38[2] += v85.m128_i32[0];
  }
  else
  {
    if ( v50 > v51 )
    {
      v91 = (__int64)n >> 3;
      v90 = v36;
      sub_2237220(v38, v38 + 4, v50, 8);
      v44 = *(__int64 **)v38;
      v49 = (__int64)n >> 3;
      v36 = v90;
      v48 = (char *)src + *(_QWORD *)v38;
      v43 = v38[2];
      v45 = 8 * v43;
      v46 = (char *)(*(_QWORD *)v38 + 8 * v43);
    }
    v52 = v45 - (_QWORD)src;
    v53 = (v45 - (__int64)src) >> 3;
    if ( v53 < v49 )
    {
      v54 = v43 + v49;
      v38[2] = v54;
      if ( v48 != v46 )
      {
        v92 = v53;
        v91 = (__int64)v46;
        v90 = v36;
        src = (void *)v52;
        memcpy((char *)&v44[v54] - v52, v48, v52);
        v53 = v92;
        v46 = (char *)v91;
        v36 = v90;
        v52 = (size_t)src;
      }
      if ( v53 )
      {
        if ( (v48 >= v36 + 16 || v36 >= v48 + 16) && v53 - 1 > 3 )
        {
          v55 = 0;
          v56 = 0;
          v57 = ((v53 - 2) >> 1) + 1;
          do
          {
            ++v56;
            *(__m128i *)&v48[v55] = _mm_loadu_si128((const __m128i *)&v36[v55]);
            v55 += 16;
          }
          while ( v56 < v57 );
          v58 = 2 * v57;
          v59 = 16 * v57;
          v60 = &v48[v59];
          if ( v53 != v58 )
            *(_QWORD *)v60 = *(_QWORD *)&v36[v59];
        }
        else
        {
          for ( i = 0; i != v53; ++i )
            *(_QWORD *)&v48[8 * i] = *(_QWORD *)&v36[8 * i];
        }
        v36 += v52;
        if ( (char *)v85.m128_u64[0] == v36 )
          goto LABEL_51;
        n -= v52;
      }
      memcpy(v46, v36, n);
      goto LABEL_51;
    }
    v74 = (char *)v44 + v45 - n;
    v90 = (char *)(v45 - n);
    v75 = v38[3];
    v76 = n;
    v77 = v46;
    v78 = ((__int64)n >> 3) + v43;
    v85.m128_u64[0] = (__int64)n >> 3;
    if ( v78 > v75 )
    {
      v94 = v46;
      v93 = v36;
      v92 = n;
      v91 = (__int64)v74;
      sub_2237220(v38, v38 + 4, v78, 8);
      v43 = v38[2];
      v46 = v94;
      v36 = v93;
      v77 = (void *)(*(_QWORD *)v38 + 8 * v43);
      v76 = n;
      v74 = (char *)v91;
    }
    if ( v74 != v46 )
    {
      v93 = v46;
      v92 = (size_t)v36;
      v91 = (__int64)v74;
      memmove(v77, v74, v76);
      LODWORD(v43) = v38[2];
      v46 = v93;
      v36 = (char *)v92;
      v74 = (char *)v91;
    }
    v38[2] = v43 + v85.m128_i32[0];
    if ( v74 != v48 )
    {
      v85.m128_u64[0] = (unsigned __int64)v36;
      memmove(&v46[-(v90 - (_BYTE *)src)], v48, v90 - (_BYTE *)src);
      v36 = (char *)v85.m128_u64[0];
    }
    memmove(v48, v36, n);
  }
LABEL_51:
  v85.m128_u64[0] = a1;
  v61 = (int *)((char *)a3 + v88);
  v62 = *v61;
  v63 = v61[1];
  v85 = _mm_loadh_ps((const double *)&v84);
  v64 = operator new(0x38u);
  v65 = (__int64)v84;
  v66 = v86;
  v84 = a3;
  si128 = _mm_load_si128((const __m128i *)&v85);
  *(_QWORD *)v64 = v65;
  *(_DWORD *)(v64 + 8) = v62;
  *(_DWORD *)(v64 + 12) = v63;
  v68 = _mm_loadh_ps((const double *)&v84);
  *(_QWORD *)(v64 + 48) = v66;
  *(__m128 *)(v64 + 16) = v68;
  *(__m128i *)(v64 + 32) = si128;
  sub_1EB0B70(v19, v64 & 0xFFFFFFFFFFFFFFFBLL);
  if ( ptr != v98 )
    free(ptr);
}

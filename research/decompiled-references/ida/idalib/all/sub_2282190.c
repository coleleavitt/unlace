__int64 __fastcall sub_2282190(__int64 a1, const char *a2, __int32 a3)
{
  __int32 v3; // eax
  const char *v5; // r12
  char v6; // r15
  size_t v7; // r13
  _DWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  _QWORD *v12; // r9
  const char *v13; // r13
  int v14; // edx
  __m128i si128; // xmm0
  __int32 v16; // ecx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // r8
  __int64 i; // rcx
  unsigned __int8 v22; // al
  int v23; // edi
  int v24; // esi
  __int64 v25; // rdx
  int v26; // esi
  __int64 v27; // rdi
  __int64 v28; // rdx
  int v29; // r9d
  int v30; // edx
  __int64 v31; // rdi
  char v32; // r10
  int v33; // r9d
  __int64 v34; // r11
  int v35; // edx
  int v36; // r12d
  __int64 v37; // r13
  int v38; // r9d
  char *v39; // rdx
  char v40; // r14
  unsigned __int64 v41; // r13
  __int64 result; // rax
  unsigned int v43; // ecx
  int v44; // r13d
  __m128i v45; // xmm0
  __int64 v46; // r14
  __m128i v47; // xmm0
  char *v48; // rax
  char *v49; // r12
  __int64 v50; // r8
  _QWORD *v51; // r10
  _QWORD *v52; // r15
  _QWORD *j; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rsi
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  void *v61; // rax
  __m128i v62; // xmm0
  int v63; // edx
  _BYTE *v64; // rax
  __int64 v65; // rsi
  int v66; // edx
  _BYTE *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rdx
  unsigned __int64 v70; // r12
  __m128i v71; // xmm0
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __m128i v75; // xmm0
  void *v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // ecx
  __m128i v79; // xmm0
  __m128i v80; // [rsp+8h] [rbp-130h] BYREF
  __int64 v81; // [rsp+18h] [rbp-120h]
  __m128i v82; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v83; // [rsp+30h] [rbp-108h]
  void *ptr; // [rsp+38h] [rbp-100h]
  __int64 v85; // [rsp+40h] [rbp-F8h]
  __int64 v86; // [rsp+48h] [rbp-F0h]
  int v87; // [rsp+50h] [rbp-E8h]
  _DWORD *v88; // [rsp+58h] [rbp-E0h]
  _BYTE v89[160]; // [rsp+60h] [rbp-D8h] BYREF

  v3 = a3;
  LOBYTE(v3) = a3 & 0x7F;
  v80.m128i_i32[0] = v3;
  if ( (a3 & 0x11) == 0x11 )
    return 16;
  v5 = a2;
  v6 = a3;
  if ( (a3 & 0x20) != 0 )
  {
    v41 = *(_QWORD *)(a1 + 16);
    result = 16;
    if ( v41 < (unsigned __int64)a2 )
      return result;
    v7 = v41 - (_QWORD)a2;
  }
  else
  {
    v7 = strlen(a2);
  }
  v8 = malloc(0x18Fu);
  if ( !v8 )
    return 12;
  v81 = 3 * (v7 >> 1);
  v85 = v81 + 1;
  v80.m128i_i64[1] = v81 + 1;
  v9 = calloc(v81 + 1, 8u);
  v10 = v81 + 1;
  v11 = v81;
  v86 = 0;
  v12 = v9;
  ptr = v9;
  if ( !v9 )
  {
    free(v8);
    return 12;
  }
  v13 = &a2[v7];
  *((_QWORD *)v8 + 2) = 256;
  v14 = 0;
  *(_OWORD *)(v8 + 6) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23ABD00);
  memset(v89, 0, sizeof(v89));
  v16 = v80.m128i_i32[0];
  *((_QWORD *)v8 + 12) = 0;
  v8[26] = 0;
  v8[10] = v16;
  *((_QWORD *)v8 + 11) = v8 + 66;
  *((_QWORD *)v8 + 14) = 0;
  *(__m128i *)(v8 + 18) = si128;
  v88 = v8;
  memset(v8 + 34, 0, 0x100u);
  v82.m128i_i64[0] = (__int64)a2;
  v82.m128i_i64[1] = (__int64)v13;
  v83 = 0;
  v87 = 0;
  v8[30] = 0;
  if ( v10 <= 0 )
  {
    v60 = 3 * ((v11 + 2) / 2);
    if ( v10 < v60 )
    {
      if ( (unsigned __int64)v60 <= 0x1FFFFFFFFFFFFFFFLL
        && (v80.m128i_i32[2] = 0,
            v80.m128i_i64[0] = (__int64)v12,
            v61 = realloc(v12, 0),
            v12 = (_QWORD *)v80.m128i_i64[0],
            v14 = 0,
            v61) )
      {
        ptr = v61;
        v12 = v61;
        v85 = 0;
      }
      else
      {
        v83 = 12;
        v14 = 12;
        v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
        v74 = _mm_loadl_epi64(&v80);
        v5 = (const char *)v74.m128i_i64[0];
        v13 = (const char *)v74.m128i_i64[0];
        v82 = _mm_unpacklo_epi64(v74, v74);
      }
    }
  }
  v86 = 1;
  *v12 = 0x8000000;
  v17 = v86;
  v18 = v86 - 1;
  *((_QWORD *)v8 + 7) = v86 - 1;
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x10) != 0 )
    {
      if ( v13 - v5 <= 0 )
      {
        if ( !v14 )
          v83 = 14;
        v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
        v73 = _mm_loadl_epi64(&v80);
        v82 = _mm_unpacklo_epi64(v73, v73);
        goto LABEL_93;
      }
      do
      {
        v82.m128i_i64[0] = (__int64)(v5 + 1);
        sub_227FC30((__int64)&v82, *v5);
        v5 = (const char *)v82.m128i_i64[0];
      }
      while ( v82.m128i_i64[1] - v82.m128i_i64[0] > 0 );
    }
    else
    {
      sub_227FDF0((__int64)&v82, 128, 128);
    }
    v17 = v86;
    if ( !v83 )
      goto LABEL_11;
LABEL_92:
    v18 = v17 - 1;
LABEL_93:
    *((_QWORD *)v8 + 8) = v18;
LABEL_94:
    v19 = ptr;
    goto LABEL_39;
  }
  sub_2280D90((__int64)&v82, 128);
  v17 = v86;
  if ( v83 )
    goto LABEL_92;
LABEL_11:
  v19 = ptr;
  if ( v85 > (__int64)v17 || (v69 = (v85 + 1) / 2, v70 = 3 * v69, v85 >= 3 * v69) )
  {
    v86 = v17 + 1;
    *((_QWORD *)ptr + v17) = 0x8000000;
    *((_QWORD *)v8 + 8) = v86 - 1;
  }
  else
  {
    if ( v70 > 0x1FFFFFFFFFFFFFFFLL )
    {
      v83 = 12;
      v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
      v71 = _mm_loadl_epi64(&v80);
      v82 = _mm_unpacklo_epi64(v71, v71);
LABEL_108:
      v86 = v17 + 1;
      v19[v17] = 0x8000000;
      v17 = v86;
      *((_QWORD *)v8 + 8) = v86 - 1;
      goto LABEL_39;
    }
    v76 = realloc(ptr, 24 * v69);
    if ( !v76 )
    {
      if ( !v83 )
        v83 = 12;
      v19 = ptr;
      v17 = v86;
      v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
      v79 = _mm_loadl_epi64(&v80);
      v82 = _mm_unpacklo_epi64(v79, v79);
      goto LABEL_108;
    }
    v77 = v86;
    v78 = v83;
    ptr = v76;
    v85 = v70;
    ++v86;
    *((_QWORD *)v76 + v77) = 0x8000000;
    v17 = v86;
    *((_QWORD *)v8 + 8) = v86 - 1;
    if ( v78 )
      goto LABEL_94;
  }
  v20 = *((_QWORD *)v8 + 11);
  for ( i = -127; ; ++i )
  {
    v22 = i - 1;
    if ( !*(_BYTE *)(v20 + i - 1) )
    {
      v23 = v8[5];
      v24 = v23 + 14;
      if ( v23 + 7 >= 0 )
        v24 = v23 + 7;
      v25 = *((_QWORD *)v8 + 4);
      v26 = v24 >> 3;
      if ( v23 > 0 )
      {
        if ( *(_BYTE *)(v25 + v22) )
        {
LABEL_24:
          v30 = v8[21];
          v31 = i;
          v32 = v30;
          v8[21] = v30 + 1;
          *(_BYTE *)(v20 + i - 1) = v30;
          if ( (int)i > 127 )
            goto LABEL_14;
LABEL_27:
          if ( !*(_BYTE *)(v20 + v31) )
          {
            v33 = v8[5];
            v34 = *((_QWORD *)v8 + 4);
            v35 = v33 + 14;
            if ( v33 + 7 >= 0 )
              v35 = v33 + 7;
            v36 = v35 >> 3;
            if ( v33 <= 0 )
              goto LABEL_35;
            if ( *(_BYTE *)(v34 + v22) == *(_BYTE *)(v34 + (unsigned __int8)v31) )
            {
              v37 = (int)v8[4];
              v38 = 0;
              v39 = (char *)(v34 + v37 + v22);
              while ( v36 > ++v38 )
              {
                v40 = *v39;
                v39 += v37;
                if ( v40 != v39[(unsigned __int8)v31 - (unsigned __int64)v22 - (int)v8[4]] )
                  goto LABEL_26;
              }
LABEL_35:
              *(_BYTE *)(v20 + v31) = v32;
            }
          }
LABEL_26:
          if ( (int)++v31 > 127 )
            continue;
          goto LABEL_27;
        }
        v27 = (int)v8[4];
        v28 = v27 + v22 + v25;
        v29 = 0;
        while ( v26 > ++v29 )
        {
          v28 += v27;
          if ( *(_BYTE *)(v28 - (int)v8[4]) )
            goto LABEL_24;
        }
      }
    }
LABEL_14:
    if ( (_DWORD)i == 128 )
      break;
  }
  v17 = v86;
  v19 = ptr;
LABEL_39:
  *((_QWORD *)v8 + 6) = v17;
  if ( v17 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v43 = v83;
    *((_QWORD *)v8 + 1) = v19;
    if ( !v43 )
    {
      v83 = 12;
      v44 = v8[18];
      v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
      v45 = _mm_loadl_epi64(&v80);
      v46 = *((_QWORD *)v8 + 14);
      v82 = _mm_unpacklo_epi64(v45, v45);
      goto LABEL_42;
    }
    v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
    v62 = _mm_loadl_epi64(&v80);
    v82 = _mm_unpacklo_epi64(v62, v62);
    goto LABEL_96;
  }
  v48 = (char *)realloc(v19, 8 * v17);
  *((_QWORD *)v8 + 1) = v48;
  if ( !v48 )
  {
    if ( !v83 )
    {
      v83 = 12;
      v44 = v8[18];
      v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
      v72 = _mm_loadl_epi64(&v80);
      v46 = *((_QWORD *)v8 + 14);
      v82 = _mm_unpacklo_epi64(v72, v72);
      *((_QWORD *)v8 + 1) = ptr;
LABEL_42:
      *v8 = 53829;
      *((_QWORD *)v8 + 16) = 0;
      *(_QWORD *)(a1 + 8) = v46;
      *(_QWORD *)(a1 + 24) = v8;
      *(_DWORD *)a1 = 62053;
      if ( (v44 & 4) == 0 )
        goto LABEL_44;
      goto LABEL_43;
    }
    v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
    v75 = _mm_loadl_epi64(&v80);
    v82 = _mm_unpacklo_epi64(v75, v75);
    *((_QWORD *)v8 + 1) = ptr;
LABEL_96:
    v44 = v8[18];
    v46 = *((_QWORD *)v8 + 14);
    goto LABEL_42;
  }
  v44 = v8[18];
  v46 = *((_QWORD *)v8 + 14);
  if ( v83 )
    goto LABEL_42;
  v49 = v48 + 8;
  v50 = 0;
  v51 = nullptr;
  v52 = nullptr;
  for ( j = v48 + 8; ; j = v55 )
  {
    v54 = *j;
    v55 = j + 1;
    v56 = *j & 0xF8000000LL;
    if ( v56 == 1476395008 )
      goto LABEL_68;
    if ( v56 > 0x58000000 )
      break;
    if ( v56 == 0x10000000 )
    {
      if ( !v50 )
        v51 = j;
      ++v50;
    }
    else if ( v56 != 1207959552 )
    {
      goto LABEL_62;
    }
LABEL_56:
    ;
  }
  switch ( v56 )
  {
    case 0x70000000uLL:
      goto LABEL_56;
    case 0x78000000uLL:
LABEL_68:
      v55 = j;
      while ( 1 )
      {
        v55 += v54 & 0x7FFFFFF;
        v54 = *v55;
        v56 = *v55 & 0xF8000000LL;
        if ( v56 == 1610612736 || v56 == 2415919104 )
          goto LABEL_62;
        if ( v56 != 2281701376 )
        {
          v44 |= 4u;
          v8[18] = v44;
          goto LABEL_73;
        }
      }
    case 0x68000000uLL:
      goto LABEL_56;
  }
LABEL_62:
  if ( v50 > (int)v8[26] )
  {
    v8[26] = v50;
    v52 = v51;
  }
  if ( v56 != 0x8000000 )
  {
    v50 = 0;
    goto LABEL_56;
  }
  v63 = v8[26];
  if ( v63 )
  {
    v80.m128i_i32[2] = v8[26];
    v80.m128i_i64[0] = v63;
    v64 = malloc(v63 + 1LL);
    v65 = v80.m128i_i64[0];
    v66 = v80.m128i_i32[2];
    *((_QWORD *)v8 + 12) = v64;
    if ( v64 )
    {
      if ( v66 <= 0 )
      {
        v67 = v64;
      }
      else
      {
        v67 = &v64[v65];
        do
        {
          do
            v68 = *v52++;
          while ( (v68 & 0xF8000000) != 0x10000000 );
          *v64++ = v68;
        }
        while ( v67 != v64 );
      }
      *v67 = 0;
    }
    else
    {
      v8[26] = 0;
    }
  }
LABEL_73:
  v57 = 0;
  v58 = 0;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v49 += 8;
        v59 = *((_QWORD *)v49 - 1) & 0xF8000000LL;
        if ( v59 != 1207959552 )
          break;
        ++v58;
      }
      if ( v59 != 1342177280 )
        break;
      if ( v57 < v58 )
        v57 = v58;
      --v58;
    }
  }
  while ( v59 != 0x8000000 );
  if ( v58 )
  {
    *((_QWORD *)v8 + 16) = v57;
    v8[18] = v44 | 4;
    *v8 = 53829;
    *(_QWORD *)(a1 + 8) = v46;
    *(_QWORD *)(a1 + 24) = v8;
    *(_DWORD *)a1 = 62053;
    goto LABEL_79;
  }
  *((_QWORD *)v8 + 16) = v57;
  *v8 = 53829;
  *(_QWORD *)(a1 + 8) = v46;
  *(_QWORD *)(a1 + 24) = v8;
  *(_DWORD *)a1 = 62053;
  if ( (v44 & 4) != 0 )
  {
LABEL_79:
    v83 = 15;
LABEL_43:
    v80.m128i_i64[0] = (__int64)byte_2D0ADA8;
    v47 = _mm_loadl_epi64(&v80);
    v82 = _mm_unpacklo_epi64(v47, v47);
    goto LABEL_44;
  }
  result = v83;
  if ( v83 )
  {
LABEL_44:
    sub_22872C0(a1);
    return v83;
  }
  return result;
}

__int64 __fastcall sub_C7340(
        __m128i *a1,
        __int64 a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *exception; // rdi
  __m128i *v13; // rbp
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  int i; // edx
  __int64 v18; // rcx
  int *v19; // rbx
  int *v20; // r14
  int *v21; // rdx
  __int64 v22; // r9
  int **v23; // r12
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int *v31; // r8
  _QWORD *v32; // r15
  __int64 v33; // r14
  __m128i v34; // xmm0
  unsigned __int64 v35; // r11
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // r12
  unsigned int v39; // ecx
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  signed __int64 v42; // rcx
  signed int *v43; // rax
  signed int *v44; // r13
  signed int *v45; // rbp
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // rsi
  __m128i v49; // xmm0
  __int64 v50; // rax
  char v52; // r12
  unsigned __int64 v53; // rax
  _BYTE *v54; // rax
  __int64 v55; // rax
  __m128i v56; // xmm0
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __m128i v62; // xmm0
  int v63; // [rsp+Ch] [rbp-ECh]
  __m128i v64; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+40h] [rbp-B8h]
  _QWORD *v67; // [rsp+48h] [rbp-B0h]
  __int64 v68; // [rsp+50h] [rbp-A8h]
  __int64 v69; // [rsp+58h] [rbp-A0h]
  signed __int64 v70; // [rsp+60h] [rbp-98h]
  int *v71; // [rsp+68h] [rbp-90h]
  __m128i v72; // [rsp+70h] [rbp-88h] BYREF
  __m128i v73; // [rsp+80h] [rbp-78h]
  signed int *v74; // [rsp+90h] [rbp-68h] BYREF
  __m128i v75; // [rsp+98h] [rbp-60h]
  _QWORD *v76; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-40h]

  v13 = a1;
  v14 = a1[6].m128i_u64[0];
  v77 = __readfsqword(0x28u);
  v15 = 0;
  if ( !v14 )
    goto LABEL_23;
  v16 = a1[5].m128i_i64[1];
  for ( i = 0; i < v14; v15 = ++i )
  {
    if ( !*(_QWORD *)(v13[4].m128i_i64[0] + 8LL * *(int *)(v16 + 4 * v15)) )
    {
      if ( !under_debugger )
        sub_37CFE0(50043);
      BUG();
    }
  }
  v18 = v13[9].m128i_i64[1];
  v13[6].m128i_i64[0] = 0;
  v19 = (int *)v13[8].m128i_i64[0];
  v20 = (int *)v13[9].m128i_i64[0];
  v21 = (int *)v13[10].m128i_i64[0];
  v22 = v13[10].m128i_i64[1];
  v23 = (int **)(v18 + 8);
  v24 = v13[11].m128i_i64[0];
  v25 = v13[11].m128i_i64[1];
  while ( v19 != v21 )
  {
    while ( 1 )
    {
      if ( v19[2] != -1 )
      {
        v26 = sub_32B2C0(*(_QWORD *)(*(_QWORD *)(v13[20].m128i_i64[0] + 528) + 8LL * *v19), (unsigned int)v19[1]);
        v19[2] = sub_B86D0((__int64)v13, v26, v27, v28, v29, v30);
        v21 = (int *)v13[10].m128i_i64[0];
        v22 = v13[10].m128i_i64[1];
        v24 = v13[11].m128i_i64[0];
        v25 = v13[11].m128i_i64[1];
      }
      v19 += 3;
      if ( v20 != v19 )
        break;
      v19 = *v23++;
      v20 = v19 + 126;
      if ( v19 == v21 )
        goto LABEL_11;
    }
  }
LABEL_11:
  v31 = (int *)v13[8].m128i_i64[0];
  if ( v31 == v19 )
    goto LABEL_23;
  v32 = (_QWORD *)v13[9].m128i_i64[1];
  v33 = v13[9].m128i_i64[0];
  v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v32);
  v35 = 0xAAAAAAAAAAAAAAABLL * (((v33 - (__int64)v31) >> 2) + (((__int64)v19 - v22) >> 2))
      + 42 * ((v25 == 0) + ((v25 - (__int64)v32) >> 3) - 1);
  v36 = -2;
  if ( v35 )
  {
    _BitScanReverse64(&v37, v35);
    v36 = 2LL * (int)v37;
  }
  v67 = (_QWORD *)v25;
  v38 = v13[8].m128i_i64[1];
  v76 = (_QWORD *)v25;
  v39 = v13[14].m128i_u32[0];
  v70 = 0xAAAAAAAAAAAAAAABLL * (((v33 - (__int64)v31) >> 2) + (((__int64)v19 - v22) >> 2))
      + 42 * ((v25 == 0) + ((v25 - (__int64)v32) >> 3) - 1);
  v75.m128i_i64[0] = v22;
  v69 = v22;
  v75.m128i_i64[1] = v24;
  v68 = v24;
  v66 = (__int64)&v72;
  v72 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v38);
  v65 = v72;
  v73 = v34;
  v64 = v34;
  v71 = v31;
  v74 = v19;
  v63 = v39;
  sub_C68F0(
    v72.m128i_i64,
    (__m128i *)&v74,
    v36,
    v39,
    *(double *)v34.m128i_i64,
    *(double *)v72.m128i_i64,
    a6,
    *(double *)&v32,
    (__m128)(unsigned __int64)v38,
    a9);
  v40 = _mm_load_si128(&v64);
  v41 = _mm_load_si128(&v65);
  if ( v70 > 16 )
  {
    v76 = v32;
    v75 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v33);
    v42 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v71 - v38) >> 2) + 16;
    if ( v42 < 0 )
    {
      v57 = ~(~v42 / 0x2AuLL);
    }
    else
    {
      if ( v42 <= 41 )
      {
        v72 = v41;
        v74 = v71 + 48;
        v66 = (__int64)(v71 + 48);
        v73 = v40;
        sub_C6EF0(v72.m128i_i64, &v74, v63, *(double *)v40.m128i_i64, v41);
        v43 = (signed int *)v66;
        v66 = (__int64)v13;
        v64.m128i_i64[0] = a3;
        v44 = (signed int *)v33;
        goto LABEL_18;
      }
      v57 = v42 / 42;
    }
    v32 += v57;
    v72 = v41;
    v58 = *v32;
    v76 = v32;
    v73 = v40;
    v75.m128i_i64[0] = v58;
    v75.m128i_i64[1] = v58 + 504;
    v66 = 12 * (v42 - 42 * v57);
    v74 = (signed int *)(v66 + v58);
    sub_C6EF0(v72.m128i_i64, &v74, v63, *(double *)v40.m128i_i64, v41);
    v38 = *v32;
    v59 = v66;
    v64.m128i_i64[0] = a3;
    v66 = (__int64)v13;
    v43 = (signed int *)(v38 + v59);
    v44 = (signed int *)(v38 + 504);
LABEL_18:
    v45 = v43;
    while ( v19 != v45 )
    {
      v74 = v45;
      v45 += 3;
      v75.m128i_i64[0] = v38;
      v75.m128i_i64[1] = (__int64)v44;
      v76 = v32;
      sub_C07B0((__int64)&v74, v63);
      if ( v44 == v45 )
      {
        v43 = (signed int *)v32[1];
        ++v32;
        v44 = v43 + 126;
        v38 = (__int64)v43;
        goto LABEL_18;
      }
    }
    v13 = (__m128i *)v66;
    a3 = v64.m128i_i64[0];
    goto LABEL_23;
  }
  v74 = v19;
  v75.m128i_i64[0] = v69;
  v75.m128i_i64[1] = v68;
  v76 = v67;
  v72 = v41;
  v73 = v40;
  sub_C6EF0(v72.m128i_i64, &v74, v63, *(double *)v40.m128i_i64, v41);
LABEL_23:
  *(_QWORD *)(*(_QWORD *)(v13[2].m128i_i64[1] + 24LL * (int)a2) + 8 * (a2 >> 32)) = a3;
  v46 = v13->m128i_i64[0];
  if ( !v13->m128i_i64[0] )
  {
    v61 = qalloc(32);
    v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v61, (__m128i)(unsigned __int64)v61);
    if ( !v61 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v61 + 16) = 0;
    *(__m128i *)(v61 + 8) = v62;
    *(_QWORD *)v61 = v61 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v13->m128i_i64[0] = v61;
    *(_QWORD *)v61 = v61 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v61 & 3LL;
    *(__m128i *)(v13->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v13->m128i_u64[0], (__m128i)v13->m128i_u64[0]);
    *(_QWORD *)v13->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v13->m128i_i64[0] |= 2uLL;
    v46 = v13->m128i_i64[0];
LABEL_25:
    v47 = qalloc(32);
    v48 = v47;
    if ( !v47 )
    {
      v9 = __cxa_allocate_exception(8u);
      *v9 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v47 + 16) = 0;
    *(_OWORD *)v47 = 0;
    *(_QWORD *)(v47 + 24) = a3;
    *(_QWORD *)v47 = v46 & 0xFFFFFFFFFFFFFFFCLL;
    v49 = _mm_loadl_epi64(v13);
    *(_QWORD *)v47 = v46 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v49, v49);
    if ( v46 != v13->m128i_i64[0] )
    {
      *(_QWORD *)(v46 + 8) = v47;
      v50 = v13->m128i_i64[0];
      if ( v46 == *(_QWORD *)(v13->m128i_i64[0] + 8) )
        goto LABEL_39;
      goto LABEL_28;
    }
    goto LABEL_44;
  }
  if ( !v13->m128i_i64[1] )
    goto LABEL_25;
  if ( (*(_BYTE *)(*(_QWORD *)v46 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v52 = 1;
    goto LABEL_35;
  }
  v46 = *(_QWORD *)v46 & 0xFFFFFFFFFFFFFFFCLL;
  v52 = 1;
  while ( 1 )
  {
    v53 = *(_QWORD *)(v46 + 24);
    if ( a3 < v53 )
    {
      v54 = *(_BYTE **)(v46 + 8);
      v52 = 1;
      if ( (*v54 & 2) != 0 )
        goto LABEL_35;
      goto LABEL_47;
    }
    if ( v53 >= a3 )
      break;
    v54 = *(_BYTE **)(v46 + 16);
    v52 = 0;
    if ( (*v54 & 2) != 0 )
      goto LABEL_35;
LABEL_47:
    v46 = (unsigned __int64)v54;
  }
  if ( v46 )
    return 1;
LABEL_35:
  v55 = qalloc(32);
  v48 = v55;
  if ( !v55 )
  {
    v10 = __cxa_allocate_exception(8u);
    *v10 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v10, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v55 + 16) = 0;
  *(_OWORD *)v55 = 0;
  *(_QWORD *)(v55 + 24) = a3;
  *(_QWORD *)v55 = v46 & 0xFFFFFFFFFFFFFFFCLL;
  v56 = _mm_loadl_epi64(v13);
  *(_QWORD *)v55 = v46 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v55 + 8) = _mm_unpacklo_epi64(v56, v56);
  if ( v13->m128i_i64[0] == v46 )
  {
LABEL_44:
    *(_QWORD *)v46 = v48 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v46 & 3LL;
    *(_QWORD *)(v13->m128i_i64[0] + 8) = v48;
    *(_QWORD *)(v13->m128i_i64[0] + 16) = v48;
    v60 = *(_QWORD *)v48 & 2LL;
    *(_QWORD *)v48 &= ~1uLL;
    *(_QWORD *)v48 = v60 | v13->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_29;
  }
  if ( v52 )
  {
    *(_QWORD *)(v46 + 8) = v55;
    v50 = v13->m128i_i64[0];
    if ( *(_QWORD *)(v13->m128i_i64[0] + 8) == v46 )
LABEL_39:
      *(_QWORD *)(v50 + 8) = v48;
  }
  else
  {
    *(_QWORD *)(v46 + 16) = v55;
    if ( *(_QWORD *)(v13->m128i_i64[0] + 16) == v46 )
      *(_QWORD *)(v13->m128i_i64[0] + 16) = v55;
  }
LABEL_28:
  sub_BF160(v13, (__int64 *)v48);
LABEL_29:
  ++v13->m128i_i64[1];
  return 1;
}

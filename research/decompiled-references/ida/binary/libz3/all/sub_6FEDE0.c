__int64 __fastcall sub_6FEDE0(const __m128i *a1, char a2, __int64 *a3, __int64 a4, unsigned __int64 *a5, _QWORD *a6)
{
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // kr00_16
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  bool v23; // zf
  char v24; // al
  __int64 v25; // rcx
  char v26; // r13
  void *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int8 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rsi
  _QWORD *v37; // r12
  _QWORD *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  __int64 v46; // [rsp+20h] [rbp-138h]
  __int64 *v47; // [rsp+38h] [rbp-120h] BYREF
  __m128i v48; // [rsp+40h] [rbp-118h] BYREF
  __int64 v49; // [rsp+50h] [rbp-108h] BYREF
  __int64 v50; // [rsp+58h] [rbp-100h]
  char v51[8]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v52[3]; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+80h] [rbp-D8h]
  __int64 v54; // [rsp+90h] [rbp-C8h] BYREF
  __m128 v55; // [rsp+98h] [rbp-C0h]
  int v56; // [rsp+A8h] [rbp-B0h]
  __int64 *v57; // [rsp+B0h] [rbp-A8h]
  __int64 v58; // [rsp+B8h] [rbp-A0h]
  int v59; // [rsp+C0h] [rbp-98h]
  __int64 *v60; // [rsp+C8h] [rbp-90h]
  __int64 v61; // [rsp+D0h] [rbp-88h]
  int v62; // [rsp+D8h] [rbp-80h]
  __int64 v63; // [rsp+E0h] [rbp-78h]
  __int64 v64[14]; // [rsp+E8h] [rbp-70h] BYREF

  if ( !a1[2].m128i_i8[10] )
    return sub_6F8E80(a1, a2, a3, a4, (__int64)a5, a6);
  v10 = a5[1];
  v11 = (__m128i)*a5;
  v12 = v11;
  if ( v10 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= *(_DWORD *)(v10 - 4) )
        break;
      v14 = *(_QWORD *)(v10 + 8LL * v13);
      v54 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v48 = v11;
      sub_6EFE70(&v48.m128i_i64[1], &v54);
      v10 = a5[1];
      v11 = _mm_load_si128(&v48);
      ++v13;
      v12 = v48;
    }
    while ( v10 );
  }
  v54 = a1->m128i_i64[0];
  v15 = v54;
  sub_180C5A0(v51, "seq");
  v16 = sub_15DA4C0(v15 + 560, v51);
  v17 = sub_15D2690(v15, v16);
  v49 = 0;
  v55 = _mm_loadh_ps((const double *)(v17 + 88));
  v18 = *(_DWORD *)(v17 + 16);
  v57 = &v54;
  v58 = v54;
  v61 = v54;
  v64[0] = v54;
  v64[4] = 0xFFFFFFFFLL;
  v19 = a1->m128i_i64[0];
  v56 = v18;
  v59 = v18;
  v60 = &v54;
  v62 = v18;
  v63 = 0;
  memset(&v64[1], 0, 24);
  v64[5] = 0;
  v50 = v19;
  if ( v12.m128i_i64[1] )
    v20 = *(unsigned int *)(v12.m128i_i64[1] - 4);
  else
    v20 = 0;
  v21 = sub_15EC1C0(v12.m128i_i64[0], v20);
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v22 = v49;
  v49 = v21;
  if ( v22 )
  {
    v23 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v12.m128i_i64[0], v22);
  }
  v47 = &v54;
  sub_167EE60(v51, &v49, 1, 0, 0);
  v24 = sub_6F32F0((__int64)v51, (__int64 *)&v47);
  v25 = v53;
  v26 = v24;
  if ( v53 )
  {
    v27 = *(void **)(v53 + 16);
    if ( v27 )
    {
      v46 = v53;
      memset(v27, 0, 4LL * *(unsigned int *)(v53 + 12));
      v25 = v46;
    }
    *(_DWORD *)(v25 + 8) = 0;
  }
  sub_2334C0(v52);
  v28 = v49;
  if ( v49 )
  {
    v29 = v50;
    v23 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v29, v28);
  }
  sub_2334C0(v64);
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  if ( a6 || v26 == 1 )
  {
    v48 = v12;
    sub_2334C0(v48.m128i_i64);
    return sub_6F8E80(a1, a2, a3, a4, (__int64)a5, a6);
  }
  v48 = v12;
  sub_2334C0(v48.m128i_i64);
  v30 = a1->m128i_i64[0];
  v31 = a5[1];
  v54 = 0;
  v32 = a1[2].m128i_i8[9];
  a1[2].m128i_i8[9] = a2 ^ 1;
  v55.m128_u64[0] = v30;
  v33 = *a5;
  if ( v31 )
    v34 = *(unsigned int *)(v31 - 4);
  else
    v34 = 0;
  v35 = sub_15EC1C0(*a5, v34);
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v36 = v54;
  v54 = v35;
  if ( v36 )
  {
    v23 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v33, v36);
  }
  sub_6FE600(a1, a3, a4, &v54);
  v37 = (_QWORD *)a5[1];
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 >= v38 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = *a5;
          v23 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_42;
      }
      sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_42:
    v37 = (_QWORD *)a5[1];
    if ( v37 )
LABEL_43:
      *((_DWORD *)v37 - 1) = 0;
  }
  result = sub_15EEF60(v54);
  v41 = v54;
  a1[2].m128i_i8[9] = v32;
  if ( v41 )
  {
    v42 = v55.m128_u64[0];
    v23 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v23 )
      return sub_15D7BC0(v42, v41);
  }
  return result;
}


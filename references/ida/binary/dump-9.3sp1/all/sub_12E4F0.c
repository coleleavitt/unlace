__int64 __fastcall sub_12E4F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned int *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned int *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned int *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // [rsp+0h] [rbp-B4h]
  unsigned __int8 v52[16]; // [rsp+1Ch] [rbp-98h] BYREF
  __int64 v53; // [rsp+2Ch] [rbp-88h] BYREF
  __int128 v54; // [rsp+34h] [rbp-80h]
  __int128 v55; // [rsp+4Ch] [rbp-68h] BYREF
  __m128i v56; // [rsp+5Ch] [rbp-58h]
  unsigned __int64 v57; // [rsp+74h] [rbp-40h]

  v8 = a2;
  v57 = __readfsqword(0x28u);
  v54 = 0;
  v53 = 0;
  v53 = qvector_reserve((__int64)&v53, 0, 2, 16);
  v12 = v53;
  v49 = (unsigned __int8)a6;
  if ( a2 == a3 )
  {
    sub_123A40((__int64)v52, a4, v10, v11);
    v44 = v54;
    v45 = v53;
    v46 = v54 + 1;
    if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
    {
      v53 = qvector_reserve((__int64)&v53, v53, v46, 16);
      v45 = v53;
      v44 = v54;
    }
    sub_123A40(v45 + 16 * v44, v52, v46, v43);
    *(_QWORD *)&v54 = v54 + 1;
    sub_11CDA0((__int64)v52);
    sub_123A40((__int64)v52, a5, v47, v48);
    v27 = v54;
    v28 = v53;
    v29 = v54 + 1;
    if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
    {
      v53 = qvector_reserve((__int64)&v53, v53, v29, 16);
      v28 = v53;
      v27 = v54;
    }
LABEL_24:
    sub_123A40(v28 + 16 * v27, v52, v29, v26);
    *(_QWORD *)&v54 = v54 + 1;
    sub_11CDA0((__int64)v52);
    goto LABEL_25;
  }
  LOBYTE(a6) = a2 != 0 && a3 != 0;
  if ( !(_BYTE)a6 )
    goto LABEL_3;
  v17 = *(_QWORD *)(a3 + 8);
  if ( !v17 )
  {
LABEL_12:
    v18 = *(_QWORD *)(a2 + 8);
    if ( !v18 )
    {
LABEL_15:
      a6 = 0;
      goto LABEL_3;
    }
    while ( a3 != v18 )
    {
      v18 = *(_QWORD *)(v18 + 8);
      if ( !v18 )
        goto LABEL_15;
    }
    sub_123A40((__int64)v52, a5, v10, v11);
    v20 = v54;
    v21 = v53;
    v22 = v54 + 1;
    if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
    {
      v53 = qvector_reserve((__int64)&v53, v53, v22, 16);
      v21 = v53;
      v20 = v54;
    }
    sub_123A40(v21 + 16 * v20, v52, v22, v19);
    *(_QWORD *)&v54 = v54 + 1;
    sub_11CDA0((__int64)v52);
    v23 = *(unsigned int **)(a3 + 16);
    v56 = 0u;
    v55 = 0;
    a6 = sub_12BAA0(&v53, a1, v23, (unsigned int *)v8, v49, (__int64)&v55);
    if ( v56.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v56.m128i_i64[0])(&v55, &v55, 3);
    if ( !(_BYTE)a6 )
      goto LABEL_21;
    sub_123A40((__int64)v52, a4, v24, v25);
    v27 = v54;
    v28 = v53;
    v29 = v54 + 1;
    if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
    {
      v53 = qvector_reserve((__int64)&v53, v53, v29, 16);
      v28 = v53;
      v27 = v54;
    }
    goto LABEL_24;
  }
  while ( a2 != v17 )
  {
    v17 = *(_QWORD *)(v17 + 8);
    if ( !v17 )
      goto LABEL_12;
  }
  sub_123A40((__int64)v52, a4, v10, v11);
  v33 = v54;
  v34 = v53;
  v35 = v54 + 1;
  if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
  {
    v53 = qvector_reserve((__int64)&v53, v53, v35, 16);
    v34 = v53;
    v33 = v54;
  }
  sub_123A40(v34 + 16 * v33, v52, v35, v32);
  *(_QWORD *)&v54 = v54 + 1;
  sub_11CDA0((__int64)v52);
  v36 = *(unsigned int **)(v8 + 16);
  v56 = 0u;
  v55 = 0;
  a6 = sub_12BAA0(&v53, a1, v36, (unsigned int *)a3, v49, (__int64)&v55);
  if ( v56.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v56.m128i_i64[0])(&v55, &v55, 3);
  if ( !(_BYTE)a6 )
    goto LABEL_21;
  sub_123A40((__int64)v52, a5, v37, v38);
  v40 = v54;
  v41 = v53;
  v42 = v54 + 1;
  if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
  {
    v53 = qvector_reserve((__int64)&v53, v53, v42, 16);
    v41 = v53;
    v40 = v54;
  }
  sub_123A40(v41 + 16 * v40, v52, v42, v39);
  *(_QWORD *)&v54 = v54 + 1;
  v8 = a3;
  sub_11CDA0((__int64)v52);
LABEL_25:
  v30 = *(unsigned int **)(v8 + 16);
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  DWORD2(v55) = v49;
  *(_QWORD *)&v55 = v31;
  v56 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4DD9C0), (__m128i)(unsigned __int64)sub_125FF0);
  a6 = sub_12BAA0(&v53, a1, v30, nullptr, v49, (__int64)&v55);
  if ( !v56.m128i_i64[0] )
  {
LABEL_21:
    v12 = v53;
    goto LABEL_3;
  }
  ((void (__fastcall *)(__int128 *, __int128 *, __int64))v56.m128i_i64[0])(&v55, &v55, 3);
  v12 = v53;
LABEL_3:
  if ( v12 )
  {
    v13 = v54;
    if ( (_QWORD)v54 )
    {
      v14 = 0;
      do
      {
        v15 = v14++;
        sub_11CDA0(16 * v15 + v12);
        v12 = v53;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v12);
  }
  return a6;
}

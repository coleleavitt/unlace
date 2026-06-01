void *__fastcall sub_ECC6E0(
        __int64 a1,
        _QWORD *a2,
        const void *a3,
        size_t a4,
        const void *a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        unsigned __int64 a10,
        char *a11,
        __int64 a12)
{
  void *v13; // rcx
  __int64 v16; // r12
  char *v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r10
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  size_t v27; // r15
  __int64 v28; // rax
  char *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // r15
  _QWORD *v33; // rax
  unsigned __int64 v34; // r13
  __int64 v35; // r9
  size_t v36; // r13
  void *v37; // rcx
  char *v38; // rcx
  const void *v39; // r8
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // r15
  _QWORD *v43; // r12
  _QWORD *v44; // rax
  void *result; // rax
  char *v46; // r14
  size_t v47; // r13
  void *v48; // rcx
  char *v49; // rcx
  const void *v50; // r15
  __int64 v51; // rax
  char *v52; // rcx
  const void *v53; // r11
  void *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-80h]
  const void *v58; // [rsp+18h] [rbp-70h]
  size_t v59; // [rsp+30h] [rbp-58h]
  const void *v60; // [rsp+30h] [rbp-58h]
  size_t v61; // [rsp+30h] [rbp-58h]
  const void *v62; // [rsp+38h] [rbp-50h]
  const void *v63; // [rsp+38h] [rbp-50h]
  unsigned __int64 v65; // [rsp+40h] [rbp-48h]
  unsigned __int64 v66; // [rsp+40h] [rbp-48h]
  const void *v67; // [rsp+40h] [rbp-48h]
  unsigned __int64 v68; // [rsp+48h] [rbp-40h]

  v13 = nullptr;
  v16 = a7;
  v17 = a11;
  v57 = (__int64)(a2 + 294);
  if ( a4 )
  {
    v52 = (char *)a2[294];
    v53 = a3;
    a2[304] += a4;
    if ( a2[295] >= (unsigned __int64)&v52[a4] && v52 )
    {
      a2[294] = &v52[a4];
    }
    else
    {
      v68 = a6;
      v67 = a5;
      v61 = a4;
      v56 = sub_962430((__int64)(a2 + 294), a4, a4, 0, (__int64)a5, a6);
      a6 = v68;
      a5 = v67;
      v52 = (char *)v56;
      v53 = a3;
      a4 = v61;
    }
    v65 = a6;
    v62 = a5;
    v59 = a4;
    v54 = memmove(v52, v53, a4);
    a6 = v65;
    a5 = v62;
    a4 = v59;
    v13 = v54;
  }
  *(_QWORD *)(a1 + 48) = v13;
  v18 = -1;
  *(_QWORD *)(a1 + 56) = a4;
  v19 = a2[294];
  v20 = 8 * a10;
  if ( a10 <= 0xFFFFFFFFFFFFFFFLL )
    v18 = 8 * a10;
  a2[304] += v18;
  v21 = (_QWORD *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)v21 + v18 && v19 )
  {
    a2[294] = (char *)v21 + v18;
  }
  else
  {
    v66 = a6;
    v63 = a5;
    v21 = (_QWORD *)sub_962430((__int64)(a2 + 294), v18, v18, 3, (__int64)a5, a6);
    a6 = v66;
    a5 = v63;
    v20 = 8 * a10;
  }
  *(_QWORD *)(a1 + 32) = v21;
  v22 = a9;
  v23 = v20 >> 3;
  if ( v20 > 0 )
  {
    if ( v20 <= 8 )
      goto LABEL_12;
    v24 = 0;
    do
    {
      *(__m128i *)&v21[v24] = _mm_loadu_si128((const __m128i *)&a9[v24]);
      v24 += 2;
    }
    while ( 2 * (v23 >> 1) != v24 );
    v25 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v22 = &a9[v25];
    v21 = (_QWORD *)((char *)v21 + v25 * 8);
    if ( v23 != (v23 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_12:
      *v21 = *v22;
  }
  v26 = -1;
  v27 = 24 * a6;
  v28 = a2[294];
  if ( a6 <= 0x555555555555555LL )
    v26 = 24 * a6;
  a2[304] += v26;
  v29 = (char *)((v28 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v29[v26] && v28 )
  {
    a2[294] = &v29[v26];
  }
  else
  {
    v60 = a5;
    v55 = sub_962430(v57, v26, v26, 3, (__int64)a5, a6);
    a5 = v60;
    v29 = (char *)v55;
  }
  *(_QWORD *)(a1 + 72) = v29;
  if ( v27 )
    memmove(v29, a5, v27);
  v30 = -1;
  if ( a10 <= 0x7FFFFFFFFFFFFFFLL )
    v30 = 16 * a10;
  v31 = a2[294];
  a2[304] += v30;
  v32 = (_QWORD *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)v32 + v30 && v31 )
    a2[294] = (char *)v32 + v30;
  else
    v32 = (_QWORD *)sub_962430(v57, v30, v30, 3, (__int64)a5, a6);
  v33 = v32;
  v34 = a10 - 1;
  if ( (__int64)(a10 - 1) >= 0 )
  {
    do
    {
      --v34;
      *v33 = 0;
      v33 += 2;
      *(v33 - 1) = 0;
    }
    while ( v34 != -1 );
  }
  *(_QWORD *)(a1 + 80) = v32;
  v35 = a7 + 16 * a8;
  if ( a7 != v35 )
  {
    do
    {
      v36 = *(_QWORD *)(v16 + 8);
      v37 = nullptr;
      if ( v36 )
      {
        v38 = (char *)a2[294];
        v39 = *(const void **)v16;
        a2[304] += v36;
        if ( a2[295] >= (unsigned __int64)&v38[v36] && v38 )
        {
          a2[294] = &v38[v36];
        }
        else
        {
          v58 = v39;
          v51 = sub_962430(v57, v36, v36, 0, (__int64)v39, v35);
          v39 = v58;
          v38 = (char *)v51;
        }
        v37 = memmove(v38, v39, v36);
      }
      v16 += 16;
      *v32 = v37;
      v32 += 2;
      *(v32 - 1) = v36;
    }
    while ( a7 + 16 * a8 != v16 );
    v17 = a11;
  }
  v40 = *(unsigned int *)(a1 + 24);
  v41 = a2[294];
  v42 = 2 * v40;
  v43 = (_QWORD *)((v41 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  a2[304] += 16 * v40;
  if ( a2[295] >= (unsigned __int64)&v43[2 * v40] && v41 )
    a2[294] = &v43[v42];
  else
    v43 = (_QWORD *)sub_962430(v57, v42 * 8, v42 * 8, 3, (__int64)a5, v35);
  v44 = v43;
  if ( v40 )
  {
    do
    {
      *v44 = 0;
      v44 += 2;
      *(v44 - 1) = 0;
    }
    while ( &v43[v42] != v44 );
  }
  *(_QWORD *)(a1 + 88) = v43;
  result = a11;
  v46 = &a11[16 * a12];
  if ( a11 != v46 )
  {
    do
    {
      v47 = *((_QWORD *)v17 + 1);
      v48 = nullptr;
      if ( v47 )
      {
        v49 = (char *)a2[294];
        v50 = *(const void **)v17;
        a2[304] += v47;
        if ( a2[295] >= (unsigned __int64)&v49[v47] && v49 )
          a2[294] = &v49[v47];
        else
          v49 = (char *)sub_962430(v57, v47, v47, 0, (__int64)a5, v35);
        result = memmove(v49, v50, v47);
        v48 = result;
      }
      v17 += 16;
      *v43 = v48;
      v43 += 2;
      *(v43 - 1) = v47;
    }
    while ( v46 != v17 );
  }
  return result;
}


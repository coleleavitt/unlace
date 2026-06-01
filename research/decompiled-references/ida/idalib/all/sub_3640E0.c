__int64 __fastcall sub_3640E0(__int64 a1, __int64 a2, unsigned __int64 a3, void *a4, const char *a5, const char *a6)
{
  _QWORD *v8; // r15
  _QWORD *v9; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // r13
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // r13
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 *v26; // r8
  unsigned __int64 *v27; // r14
  unsigned __int64 *i; // r9
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rax
  __m128i *v31; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r12
  __m128i *v36; // rsi
  unsigned __int64 v37; // rdx
  unsigned __int64 **v38; // rax
  unsigned __int64 v39; // r14
  __int64 v40; // rdx
  void *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int8 v47; // [rsp+18h] [rbp-B0h]
  __int64 v48; // [rsp+20h] [rbp-A8h]
  unsigned __int8 v49; // [rsp+20h] [rbp-A8h]
  __int64 v50; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v51; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v52; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v53; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v54; // [rsp+28h] [rbp-A0h]
  size_t n[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v56; // [rsp+40h] [rbp-88h] BYREF
  void *src; // [rsp+50h] [rbp-78h] BYREF
  __int128 v58; // [rsp+58h] [rbp-70h]
  void **p_src; // [rsp+70h] [rbp-58h] BYREF
  __int128 v60; // [rsp+78h] [rbp-50h]
  unsigned __int64 v61; // [rsp+88h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a1 + 88);
  src = a4;
  v56.m128i_i64[0] = 0;
  v9 = (_QWORD *)v8[5];
  if ( !v9 )
  {
    v11 = v8 + 4;
LABEL_17:
    p_src = &src;
    v11 = sub_35C600(v8 + 3, v11, (unsigned __int64 **)&p_src);
    goto LABEL_8;
  }
  v11 = v8 + 4;
  do
  {
    while ( 1 )
    {
      v12 = v9[2];
      v13 = v9[3];
      if ( v9[4] < (unsigned __int64)a4 )
        break;
      v11 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v12 )
        goto LABEL_6;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v13 );
LABEL_6:
  if ( v8 + 4 == v11 || (unsigned __int64)a4 < v11[4] )
    goto LABEL_17;
LABEL_8:
  v14 = v8[9];
  v15 = v8[10];
  v16 = v11 + 5;
  v17 = (_QWORD *)(v14 + 8 * v15);
  if ( (_QWORD *)v14 != v17 )
  {
    v18 = (_QWORD *)v8[9];
    while ( v16 != (_QWORD *)*v18 )
    {
      if ( v17 == ++v18 )
        goto LABEL_18;
    }
    if ( v17 != v18 )
      goto LABEL_13;
  }
LABEL_18:
  if ( !*((_BYTE *)v11 + 478) )
  {
    get_type_by_tid(&v56, src);
    if ( !(unsigned __int8)sub_35D690(v11 + 5, a1, a2, &v56, 0) )
    {
LABEL_13:
      clear_tinfo_t(&v56);
      goto LABEL_14;
    }
    v15 = v8[10];
    v14 = v8[9];
  }
  v20 = v8[12];
  if ( v8[11] < (unsigned __int64)(v15 + 1) )
  {
    v48 = v8[12];
    v34 = qvector_reserve(v8 + 9, v14, v15 + 1, 8);
    v15 = v8[10];
    v20 = v48;
    v8[9] = v34;
    v14 = v34;
  }
  *(_QWORD *)(v14 + 8 * v15) = v20;
  ++v8[10];
  v8[12] = v16;
  v11[50] = a2;
  clear_tinfo_t(&v56);
  v21 = v8[12];
  v22 = *(_QWORD *)(v21 + 368);
  if ( *(_BYTE *)(v21 + 436) )
  {
    if ( a3 < v22 )
    {
LABEL_26:
      v23 = v8[10];
      v24 = *(_QWORD *)(v8[9] + 8 * v23 - 8);
      if ( v23 )
        v8[10] = v23 - 1;
      v8[12] = v24;
      result = 0;
      if ( a3 )
        goto LABEL_29;
      return result;
    }
    v54 = 1;
  }
  else
  {
    if ( a3 % v22 || a3 < v22 )
      goto LABEL_26;
    v54 = a3 / v22;
  }
  v25 = 0;
  v26 = nullptr;
  src = nullptr;
  v58 = 0;
  v27 = *(unsigned __int64 **)(v21 + 8);
  for ( i = &v27[18 * *(_QWORD *)(v21 + 16)]; i != v27; v26 = v29 )
  {
    v30 = *v27;
    if ( (unsigned __int64)v26 < *v27 )
    {
      v31 = (__m128i *)src;
      si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)v30);
      v33 = v25 + 1;
      v56 = si128;
      if ( &v56 < src || &v56 >= (__m128i *)((char *)src + 16 * *((_QWORD *)&v58 + 1)) )
      {
        if ( *((_QWORD *)&v58 + 1) < v33 )
        {
          v51 = i;
          src = (void *)qvector_reserve(&src, src, v33, 16);
          v25 = v58;
          v31 = (__m128i *)src;
          i = v51;
        }
        v31[v25] = _mm_load_si128(&v56);
      }
      else
      {
        if ( *((_QWORD *)&v58 + 1) < v33 )
        {
          v52 = i;
          *(__m128i *)n = si128;
          src = (void *)qvector_reserve(&src, src, v33, 16);
          v25 = v58;
          v31 = (__m128i *)src;
          si128 = _mm_load_si128((const __m128i *)n);
          i = v52;
        }
        v31[v25] = si128;
      }
      v25 = v58 + 1;
      *(_QWORD *)&v58 = v58 + 1;
      v30 = *v27;
    }
    v29 = (unsigned __int64 *)(v27[1] + v30);
    v27 += 18;
  }
  v35 = 8LL * *(_QWORD *)(v21 + 32);
  if ( (unsigned __int64 *)v35 != v26 )
  {
    v36 = (__m128i *)src;
    p_src = (void **)v26;
    v37 = v25 + 1;
    *(_QWORD *)&v60 = v35;
    if ( &p_src < src || &p_src >= (void ***)((char *)src + 16 * *((_QWORD *)&v58 + 1)) )
    {
      if ( *((_QWORD *)&v58 + 1) < v37 )
      {
        src = (void *)qvector_reserve(&src, src, v37, 16);
        v25 = v58;
        v36 = (__m128i *)src;
      }
      v36[v25] = _mm_load_si128((const __m128i *)&p_src);
    }
    else
    {
      if ( *((_QWORD *)&v58 + 1) < v37 )
      {
        v53 = v26;
        src = (void *)qvector_reserve(&src, src, v37, 16);
        v25 = v58;
        v36 = (__m128i *)src;
        v26 = v53;
      }
      v38 = (unsigned __int64 **)&v36[v25];
      *v38 = v26;
      v38[1] = (unsigned __int64 *)v35;
    }
    v25 = v58 + 1;
    *(_QWORD *)&v58 = v58 + 1;
  }
  v39 = 0;
  while ( 1 )
  {
    v41 = nullptr;
    v60 = 0;
    if ( v25 )
    {
      v50 = v25;
      n[0] = 16 * v25;
      v41 = (void *)qalloc_or_throw(16 * v25);
      *((_QWORD *)&v60 + 1) = v50;
      memcpy(v41, src, n[0]);
      *(_QWORD *)&v60 = v50;
    }
    p_src = (void **)v41;
    result = sub_3637D0(a1, a3, (__int64)&p_src, a5, a6, v39);
    if ( v41 )
    {
      v49 = result;
      qfree(v41);
      result = v49;
    }
    if ( (_BYTE)result )
      break;
    v40 = *(_QWORD *)(v21 + 368);
    a3 -= v40;
    if ( *(_BYTE *)(v21 + 436) )
      a3 = 0;
    ++v39;
    *(_QWORD *)(v21 + 360) += v40;
    if ( v39 >= v54 )
      break;
    v25 = v58;
  }
  if ( src )
  {
    v47 = result;
    *(_QWORD *)&v58 = 0;
    qfree(src);
    result = v47;
  }
  v42 = v8[10];
  v43 = *(_QWORD *)(v8[9] + 8 * v42 - 8);
  if ( v42 )
    v8[10] = v42 - 1;
  v8[12] = v43;
  if ( !(_BYTE)result )
  {
LABEL_14:
    result = 0;
    if ( !a3 )
      return result;
LABEL_29:
    p_src = (void **)(&dword_0 + 1);
    LODWORD(v60) = -1;
    return sub_364730(a1, a2, 2, (int)a5, 0);
  }
  return result;
}

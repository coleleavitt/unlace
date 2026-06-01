/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_insn
// Address: 0x00000000000B0F9C

//----- (00000000000B0F9C) ----------------------------------------------------
void *__fastcall serialize_insn(pthread_mutex_t *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x0
  pthread_mutex_t *v5; // x0
  pthread_mutex_t *v6; // x0
  pthread_mutex_t *v7; // x0
  pthread_mutex_t *v8; // x0
  pthread_mutex_t *v9; // x0
  __int64 v10; // x8
  char v11; // w24
  _BYTE *align; // x0
  __int64 v13; // x9
  unsigned __int64 v14; // x10
  __int64 v15; // x8
  char v16; // w24
  _BYTE *v17; // x0
  pthread_mutex_t *v18; // x0
  __int64 v19; // x8
  __int64 i; // x25
  char v21; // w27
  void *v22; // x1
  void *v23; // x0
  void *v24; // x1
  __int64 v25; // x9
  unsigned __int64 v26; // x10
  __int64 v27; // x8
  char v28; // w26
  void *v29; // x0
  void *v30; // x1
  __int64 v31; // x9
  unsigned __int64 v32; // x10
  __int64 v33; // x8
  char v34; // w27
  void *v35; // x0
  void *v36; // x1
  __int64 v37; // x9
  unsigned __int64 v38; // x10
  __int64 v39; // x8
  char v40; // w26
  void *v41; // x0
  void *v42; // x1
  __int64 v43; // x9
  unsigned __int64 v44; // x10
  __int64 v45; // x26
  __int64 v46; // x8
  char v47; // w27
  void *v48; // x0
  pthread_mutex_t *v49; // x0
  pthread_mutex_t *v50; // x0
  pthread_mutex_t *v51; // x0
  pthread_mutex_t *v52; // x0
  void *result; // x0
  __int64 v54; // x8
  void *v55; // x1
  char v56; // w26
  void *v57; // x1
  __int64 v58; // x9
  unsigned __int64 v59; // x10
  __int64 v60; // x8
  char v61; // w27
  void *v62; // x1
  __int64 v63; // x9
  unsigned __int64 v64; // x10
  __int64 v65; // x8
  char v66; // w26
  void *v67; // x1
  __int64 v68; // x9
  unsigned __int64 v69; // x10
  __int64 v70; // x8
  char v71; // w26
  pthread_mutex_t src; // [xsp+Ch] [xbp-64h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)a2 + 1LL);
  sub_545E8(a1, &src, (char *)v4 - (char *)&src);
  v5 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 8) + 1LL);
  sub_545E8(a1, &src, (char *)v5 - (char *)&src);
  v6 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 16) + 1LL);
  sub_545E8(a1, &src, (char *)v6 - (char *)&src);
  v7 = pack_dw(&src, (unsigned __int64)&src.__align + 3, *(unsigned __int16 *)(a2 + 24));
  sub_545E8(a1, &src, (char *)v7 - (char *)&src);
  v8 = pack_dw(&src, (unsigned __int64)&src.__align + 3, *(unsigned __int16 *)(a2 + 26));
  sub_545E8(a1, &src, (char *)v8 - (char *)&src);
  v9 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *(unsigned int *)(a2 + 28));
  sub_545E8(a1, &src, (char *)v9 - (char *)&src);
  v10 = *(&a1->__align + 1);
  v11 = *(_BYTE *)(a2 + 32);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v10 + 1) )
  {
    align = (_BYTE *)a1->__align;
  }
  else
  {
    align = qvector_reserve(a1, (void *)a1->__align, v10 + 1, 1u);
    v10 = *(&a1->__align + 1);
    a1->__align = (__int64)align;
  }
  align[v10] = v11;
  v13 = *(&a1->__align + 1);
  v14 = *(&a1->__align + 2);
  v15 = v13 + 1;
  *(&a1->__align + 1) = v13 + 1;
  v16 = *(_BYTE *)(a2 + 33);
  if ( v14 >= v13 + 2 )
  {
    v17 = (_BYTE *)a1->__align;
  }
  else
  {
    v17 = qvector_reserve(a1, (void *)a1->__align, v13 + 2, 1u);
    v15 = *(&a1->__align + 1);
    a1->__align = (__int64)v17;
  }
  v17[v15] = v16;
  ++*(&a1->__align + 1);
  v18 = pack_dw(&src, (unsigned __int64)&src.__align + 3, *(unsigned __int16 *)(a2 + 34));
  sub_545E8(a1, &src, (char *)v18 - (char *)&src);
  v19 = *(&a1->__align + 1);
  for ( i = 0; i != 320; i += 40 )
  {
    v21 = *(_BYTE *)(a2 + i + 41);
    v22 = (void *)a1->__align;
    if ( *(&a1->__align + 2) < (unsigned __int64)(v19 + 1) )
    {
      v23 = qvector_reserve(a1, v22, v19 + 1, 1u);
      v19 = *(&a1->__align + 1);
      v22 = v23;
      a1->__align = (__int64)v23;
    }
    *((_BYTE *)v22 + v19) = v21;
    v24 = (void *)a1->__align;
    v25 = *(&a1->__align + 1);
    v26 = *(&a1->__align + 2);
    v27 = v25 + 1;
    *(&a1->__align + 1) = v25 + 1;
    v28 = *(_BYTE *)(a2 + i + 42);
    if ( v26 < v25 + 2 )
    {
      v29 = qvector_reserve(a1, v24, v25 + 2, 1u);
      v27 = *(&a1->__align + 1);
      v24 = v29;
      a1->__align = (__int64)v29;
    }
    *((_BYTE *)v24 + v27) = v28;
    v30 = (void *)a1->__align;
    v31 = *(&a1->__align + 1);
    v32 = *(&a1->__align + 2);
    v33 = v31 + 1;
    *(&a1->__align + 1) = v31 + 1;
    v34 = *(_BYTE *)(a2 + i + 43);
    if ( v32 < v31 + 2 )
    {
      v35 = qvector_reserve(a1, v30, v31 + 2, 1u);
      v33 = *(&a1->__align + 1);
      v30 = v35;
      a1->__align = (__int64)v35;
    }
    *((_BYTE *)v30 + v33) = v34;
    v36 = (void *)a1->__align;
    v37 = *(&a1->__align + 1);
    v38 = *(&a1->__align + 2);
    v39 = v37 + 1;
    *(&a1->__align + 1) = v37 + 1;
    v40 = *(_BYTE *)(a2 + i + 44);
    if ( v38 < v37 + 2 )
    {
      v41 = qvector_reserve(a1, v36, v37 + 2, 1u);
      v39 = *(&a1->__align + 1);
      v36 = v41;
      a1->__align = (__int64)v41;
    }
    *((_BYTE *)v36 + v39) = v40;
    v42 = (void *)a1->__align;
    v43 = *(&a1->__align + 1);
    v44 = *(&a1->__align + 2);
    v45 = a2 + i;
    v46 = v43 + 1;
    *(&a1->__align + 1) = v43 + 1;
    v47 = *(_BYTE *)(a2 + i + 45);
    if ( v44 < v43 + 2 )
    {
      v48 = qvector_reserve(a1, v42, v43 + 2, 1u);
      v46 = *(&a1->__align + 1);
      v42 = v48;
      a1->__align = (__int64)v48;
    }
    *((_BYTE *)v42 + v46) = v47;
    ++*(&a1->__align + 1);
    v49 = pack_dw(&src, (unsigned __int64)&src.__align + 3, *(unsigned __int16 *)(v45 + 46));
    sub_545E8(a1, &src, (char *)v49 - (char *)&src);
    v50 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(v45 + 48) + 1LL);
    sub_545E8(a1, &src, (char *)v50 - (char *)&src);
    v51 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(v45 + 56) + 1LL);
    sub_545E8(a1, &src, (char *)v51 - (char *)&src);
    v52 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(v45 + 64) + 1LL);
    result = sub_545E8(a1, &src, (char *)v52 - (char *)&src);
    v54 = *(&a1->__align + 1);
    v55 = (void *)a1->__align;
    v56 = *(_BYTE *)(v45 + 72);
    if ( *(&a1->__align + 2) < (unsigned __int64)(v54 + 1) )
    {
      result = qvector_reserve(a1, v55, v54 + 1, 1u);
      v54 = *(&a1->__align + 1);
      v55 = result;
      a1->__align = (__int64)result;
    }
    *((_BYTE *)v55 + v54) = v56;
    v57 = (void *)a1->__align;
    v58 = *(&a1->__align + 1);
    v59 = *(&a1->__align + 2);
    v60 = v58 + 1;
    *(&a1->__align + 1) = v58 + 1;
    v61 = *(_BYTE *)(a2 + i + 73);
    if ( v59 < v58 + 2 )
    {
      result = qvector_reserve(a1, v57, v58 + 2, 1u);
      v60 = *(&a1->__align + 1);
      v57 = result;
      a1->__align = (__int64)result;
    }
    *((_BYTE *)v57 + v60) = v61;
    v62 = (void *)a1->__align;
    v63 = *(&a1->__align + 1);
    v64 = *(&a1->__align + 2);
    v65 = v63 + 1;
    *(&a1->__align + 1) = v63 + 1;
    v66 = *(_BYTE *)(a2 + i + 74);
    if ( v64 < v63 + 2 )
    {
      result = qvector_reserve(a1, v62, v63 + 2, 1u);
      v65 = *(&a1->__align + 1);
      v62 = result;
      a1->__align = (__int64)result;
    }
    *((_BYTE *)v62 + v65) = v66;
    v67 = (void *)a1->__align;
    v68 = *(&a1->__align + 1);
    v69 = *(&a1->__align + 2);
    v70 = v68 + 1;
    *(&a1->__align + 1) = v68 + 1;
    v71 = *(_BYTE *)(a2 + i + 75);
    if ( v69 < v68 + 2 )
    {
      result = qvector_reserve(a1, v67, v68 + 2, 1u);
      v70 = *(&a1->__align + 1);
      v67 = result;
      a1->__align = (__int64)result;
    }
    *((_BYTE *)v67 + v70) = v71;
    v19 = *(&a1->__align + 1) + 1;
    *(&a1->__align + 1) = v19;
  }
  return result;
}

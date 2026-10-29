unsigned __int64 __fastcall sub_282330(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  signed __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 *v11; // r14
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // r14
  _QWORD *v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // r12
  _QWORD *v31; // r13
  int v32; // eax
  _QWORD *v33; // r12
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rbx
  const __m128i *v44; // r13
  __int64 v45; // rax
  __m128i v46; // xmm0
  void *v47; // rdi
  __m128i *v48; // rbx
  __m128i v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  void *v56; // rdi
  _QWORD *v58; // [rsp+0h] [rbp-88h]
  __int64 v59; // [rsp+0h] [rbp-88h]
  _QWORD *v60; // [rsp+0h] [rbp-88h]
  __int64 v61; // [rsp+8h] [rbp-80h]
  __int64 v62; // [rsp+8h] [rbp-80h]
  __int64 v63; // [rsp+10h] [rbp-78h]
  __int64 v64; // [rsp+18h] [rbp-70h]
  __int64 v65; // [rsp+20h] [rbp-68h]
  __int64 v66; // [rsp+28h] [rbp-60h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v68; // [rsp+40h] [rbp-48h]
  unsigned __int64 v69; // [rsp+48h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v58 = a2;
  v6 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 <= 384 )
    return v69 - __readfsqword(0x28u);
  v61 = a3;
  while ( 1 )
  {
    v8 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
    v9 = v8 >> 1;
    if ( !v61 )
      break;
    v10 = *(_QWORD *)(a1 + 40);
    v11 = (__int64 *)(a1 + 24 * v9);
    v64 = v11[2];
    v12 = *(_QWORD *)(a1 + 32);
    v63 = v11[1];
    v13 = QT::QtPrivate::compareStrings(v10, v12, v64, v63, 1, a6, v58, v61 - 1);
    v15 = *(_QWORD *)a1;
    v16 = *(_QWORD *)(v59 - 16);
    v17 = *(_QWORD *)(v59 - 8);
    v65 = v16;
    v66 = v17;
    if ( v13 >= 0 )
    {
      if ( (int)QT::QtPrivate::compareStrings(v10, v12, v17, v16, 1, v14, v59, v62) < 0 )
        goto LABEL_19;
      if ( (int)QT::QtPrivate::compareStrings(v64, v63, v66, v65, 1, v35, v60, v61) < 0 )
        goto LABEL_21;
    }
    else if ( (int)QT::QtPrivate::compareStrings(v64, v63, v17, v16, 1, v63, v59, v62) >= 0 )
    {
      if ( (int)QT::QtPrivate::compareStrings(v10, v12, v66, v65, 1, v18, v60, v61) < 0 )
      {
LABEL_21:
        *(_QWORD *)a1 = *(v60 - 3);
        v38 = *(v60 - 2);
        *(v60 - 3) = v15;
        v39 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v38;
        v40 = *(v60 - 1);
        *(v60 - 2) = v39;
        v41 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v40;
        *(v60 - 1) = v41;
        v12 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(a1 + 16);
        goto LABEL_7;
      }
LABEL_19:
      v36 = *(_QWORD *)(a1 + 16);
      v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 24)), (__m128i)v12);
      *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)(a1 + 8));
      *(__m128i *)a1 = v37;
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 40) = v36;
      goto LABEL_7;
    }
    *(_QWORD *)a1 = *v11;
    v19 = v11[1];
    *v11 = v15;
    v20 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v19;
    v21 = v11[2];
    v11[1] = v20;
    v22 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v21;
    v11[2] = v22;
    v12 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 16);
LABEL_7:
    v23 = v60;
    v24 = (_QWORD *)(a1 + 24);
    while ( 1 )
    {
      v30 = v24;
      do
      {
        v31 = v30;
        v32 = QT::QtPrivate::compareStrings(v30[2], v30[1], v10, v12, 1, v24, v60, v61);
        if ( !v32 )
          break;
        v30 += 3;
      }
      while ( v32 < 0 );
      v33 = v23 - 3;
      do
      {
        v23 = v33;
        v34 = QT::QtPrivate::compareStrings(v10, v12, v33[2], v33[1], 1, v24, v60, v61);
        if ( !v34 )
          break;
        v33 -= 3;
      }
      while ( v34 < 0 );
      if ( v31 >= v23 )
        break;
      v25 = *v31;
      v24 = v31 + 3;
      *v31 = *v23;
      v26 = v23[1];
      *v23 = v25;
      v27 = v31[1];
      v31[1] = v26;
      v28 = v23[2];
      v23[1] = v27;
      v29 = v31[2];
      v31[2] = v28;
      v23[2] = v29;
      v12 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(a1 + 16);
    }
    sub_282330(v31, v60, v61);
    v6 = (__int64)v31 - a1;
    if ( (__int64)v31 - a1 <= 384 )
      return v69 - __readfsqword(0x28u);
    v58 = v31;
  }
  v42 = v9 - 1;
  v43 = v8;
  v44 = (const __m128i *)(a1 + 24 * (v9 - 1));
  while ( 1 )
  {
    v45 = v44[1].m128i_i64[0];
    v46 = _mm_loadu_si128(v44);
    v44[1].m128i_i64[0] = 0;
    *v44 = 0;
    v68 = v45;
    *(__m128i *)ptr = v46;
    sub_282090(a1, v42, v43, (const __m128i *)ptr);
    v47 = ptr[0];
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(v47);
    v44 = (const __m128i *)((char *)v44 - 24);
    if ( !v42 )
      break;
    --v42;
  }
  v48 = (__m128i *)(v58 - 3);
  if ( (__int64)v58 - a1 > 24 )
  {
    do
    {
      v49 = _mm_loadu_si128(v48);
      v50 = v48[1].m128i_i64[0];
      v48[1].m128i_i64[0] = 0;
      v51 = (__int64)v48->m128i_i64 - a1;
      *v48 = 0;
      v52 = *(_QWORD *)a1;
      v68 = v50;
      v48->m128i_i64[0] = v52;
      v53 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = 0;
      v48->m128i_i64[1] = v53;
      v54 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v55 = v48[1].m128i_i64[0];
      v48[1].m128i_i64[0] = v54;
      *(_QWORD *)(a1 + 16) = v55;
      *(__m128i *)ptr = v49;
      sub_282090(a1, 0, 0xAAAAAAAAAAAAAAABLL * (((__int64)v48->m128i_i64 - a1) >> 3), (const __m128i *)ptr);
      v56 = ptr[0];
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(v56);
      v48 = (__m128i *)((char *)v48 - 24);
    }
    while ( v51 > 24 );
  }
  return v69 - __readfsqword(0x28u);
}

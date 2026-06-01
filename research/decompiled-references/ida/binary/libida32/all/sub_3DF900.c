unsigned __int64 __fastcall sub_3DF900(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 (*v7)(void); // rax
  unsigned __int64 *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rax
  int v14; // r15d
  char v15; // dl
  int v16; // eax
  void *v17; // rdi
  char *v18; // rbp
  unsigned __int64 v19; // rdx
  size_t v20; // r9
  __int64 v21; // r13
  __int64 v22; // r10
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  char v27; // al
  __int64 v28; // r13
  char v29; // r9
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned int v33; // r13d
  __int64 v34; // rsi
  __int64 v35; // r15
  void *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r13
  unsigned __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __int64 v53; // rax
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v58; // [rsp+18h] [rbp-90h]
  __int64 v59; // [rsp+20h] [rbp-88h]
  __int64 v60; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v62; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __m128i v64; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD *)a1;
  v65 = __readfsqword(0x28u);
  v7 = *(__int64 (**)(void))(v5 + 32);
  if ( (char *)v7 == (char *)sub_3D58E0 )
    v8 = (unsigned __int64 *)(a1 + 16);
  else
    v8 = (unsigned __int64 *)v7();
  if ( a3 < *v8
    || a3 >= v8[1]
    || a3 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    return v65 - __readfsqword(0x28u);
  }
  v10 = switch_dbctx(*(int *)(a1 + 8));
  v11 = *(int *)(a1 + 8);
  ptr = nullptr;
  v12 = *(_QWORD **)(v10 + 1480);
  v62 = 0;
  v13 = switch_dbctx(v11);
  sub_3DF5C0(a1, v13, (__int64 *)&ptr, a3);
  v14 = (sub_614FB0(*v12, 33) & 4) == 0 ? 10 : 2;
  v15 = sub_614FB0(*v12, 33);
  v16 = v14 | 1;
  if ( (v15 & 1) != 0 )
    v16 = v14;
  v57.m128i_i32[2] = v16;
  if ( (_QWORD)v62 )
  {
    v17 = ptr;
    v57.m128i_i64[0] = (__int64)ptr + 12 * v62;
    if ( (void *)v57.m128i_i64[0] == ptr )
      goto LABEL_42;
    v18 = (char *)ptr;
    do
    {
      v32 = a2[1];
      v33 = *(_DWORD *)v18;
      v34 = *a2;
      if ( a2[2] < (unsigned __int64)(v32 + 1) )
      {
        v43 = qvector_reserve(a2, v34, v32 + 1, 24);
        *a2 = v43;
        v32 = a2[1];
        v34 = v43;
      }
      v35 = v34 + 24 * v32;
      *(_QWORD *)v35 = 0;
      *(_OWORD *)(v35 + 8) = 0;
      ++a2[1];
      src = nullptr;
      v64 = 0;
      if ( sub_3B8910((__int64)v12, v33) )
        sub_4BBA40(v12, &src, v33, v57.m128i_u32[2]);
      else
        sub_47DA20(*(_QWORD *)(a1 + 32), &src, v33, *(unsigned int *)(a1 + 12));
      v19 = v64.m128i_i64[0];
      if ( v64.m128i_i64[0] )
      {
        v20 = v64.m128i_i64[0] - 1;
        if ( v64.m128i_i64[0] != 1 )
        {
          v21 = *(_QWORD *)(v35 + 8);
          v22 = v64.m128i_i64[0] - 1;
          if ( v21 )
          {
            --v21;
            v22 = v20 + v21;
            v19 = v64.m128i_i64[0] + v21;
          }
          v23 = *(_QWORD *)v35;
          if ( *(_QWORD *)(v35 + 16) < v19 )
          {
            v60 = v64.m128i_i64[0] - 1;
            v59 = v22;
            v58 = v19;
            v50 = qvector_reserve(v35, v23, v19, 1);
            v20 = v60;
            v22 = v59;
            *(_QWORD *)v35 = v50;
            v23 = v50;
            v19 = v58;
          }
          *(_QWORD *)(v35 + 8) = v19;
          *(_BYTE *)(v23 + v22) = 0;
          memcpy((void *)(v21 + *(_QWORD *)v35), src, v20);
        }
      }
      v24 = *(_QWORD *)(v35 + 8);
      v25 = 2;
      if ( v24 )
        v25 = v24-- + 1;
      v26 = *(_QWORD *)v35;
      if ( *(_QWORD *)(v35 + 16) < v25 )
      {
        v58 = v25;
        v48 = qvector_reserve(v35, v26, v25, 1);
        *(_QWORD *)v35 = v48;
        v25 = v58;
        v26 = v48;
      }
      *(_QWORD *)(v35 + 8) = v25;
      *(_BYTE *)(v26 + v24) = 47;
      *(_BYTE *)(*(_QWORD *)v35 + v24 + 1) = 0;
      v27 = xrefchar((unsigned int)v18[4]);
      v28 = *(_QWORD *)(v35 + 8);
      v29 = v27;
      v30 = 2;
      if ( v28 )
        v30 = v28-- + 1;
      v31 = *(_QWORD *)v35;
      if ( *(_QWORD *)(v35 + 16) < v30 )
      {
        LOBYTE(v59) = v27;
        v58 = v30;
        v47 = qvector_reserve(v35, v31, v30, 1);
        *(_QWORD *)v35 = v47;
        v29 = v59;
        v31 = v47;
        v30 = v58;
      }
      *(_QWORD *)(v35 + 8) = v30;
      *(_BYTE *)(v31 + v28) = v29;
      *(_BYTE *)(*(_QWORD *)v35 + v28 + 1) = 0;
      if ( !v18[8] )
      {
        v44 = *(_QWORD *)(v35 + 8);
        v45 = 2;
        if ( v44 )
          v45 = v44-- + 1;
        v46 = *(_QWORD *)v35;
        if ( *(_QWORD *)(v35 + 16) < v45 )
        {
          v58 = v45;
          v49 = qvector_reserve(v35, v46, v45, 1);
          *(_QWORD *)v35 = v49;
          v45 = v58;
          v46 = v49;
        }
        *(_QWORD *)(v35 + 8) = v45;
        *(_BYTE *)(v46 + v44) = 35;
        *(_BYTE *)(*(_QWORD *)v35 + v44 + 1) = 0;
      }
      if ( src )
      {
        v64.m128i_i64[0] = 0;
        qfree(src);
      }
      v18 += 12;
    }
    while ( (char *)v57.m128i_i64[0] != v18 );
  }
  else
  {
    v64 = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 16, 1);
    v64.m128i_i64[0] = 16;
    strcpy((char *)src, "(DANGLING XREF)");
    v36 = src;
    v37 = a2[1];
    v38 = *a2;
    v39 = a2[2];
    v40 = v37 + 1;
    if ( (unsigned __int64)&src >= *a2 && (unsigned __int64)&src < v38 + 24 * v39 )
    {
      v51 = _mm_loadl_epi64(&v64);
      v52 = _mm_loadl_epi64((const __m128i *)&v64.m128i_u64[1]);
      src = nullptr;
      v64 = 0;
      if ( v39 < v40 )
      {
        v57.m128i_i64[1] = v52.m128i_i64[0];
        v57.m128i_i64[0] = v51.m128i_i64[0];
        v56 = qvector_reserve(a2, v38, v37 + 1, 24);
        *a2 = v56;
        v38 = v56;
        v52 = _mm_loadl_epi64((const __m128i *)&v57.m128i_u64[1]);
        v37 = a2[1];
        v51 = _mm_loadl_epi64(&v57);
      }
      v53 = v38 + 24 * v37;
      *(_QWORD *)v53 = v36;
      *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64(v51, v52);
      v54 = src;
      ++a2[1];
      if ( v54 )
      {
        v64.m128i_i64[0] = 0;
        qfree(v54);
      }
    }
    else
    {
      if ( v39 < v40 )
      {
        v55 = qvector_reserve(a2, v38, v37 + 1, 24);
        *a2 = v55;
        v38 = v55;
        v36 = src;
        v37 = a2[1];
      }
      v41 = _mm_loadu_si128(&v64);
      v42 = v38 + 24 * v37;
      *(_QWORD *)v42 = v36;
      *(__m128i *)(v42 + 8) = v41;
      ++a2[1];
    }
  }
  v17 = ptr;
LABEL_42:
  if ( v17 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v17);
  }
  return v65 - __readfsqword(0x28u);
}


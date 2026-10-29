unsigned __int64 __fastcall sub_63DA90(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // r14
  char *v10; // r13
  char *i; // rbp
  char *v12; // rax
  void *v13; // rdi
  int v14; // ebp
  void *v15; // rbp
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  char *v18; // rax
  int v19; // r13d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  void *v24; // rdx
  char *v25; // rax
  __int64 v26; // rax
  __int64 v28; // rax
  char *v29; // rsi
  char *v30; // rax
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v33; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v5 = *(int *)(a1 + 8);
  v34 = __readfsqword(0x28u);
  v7 = switch_dbctx(v5);
  v8 = (char *)*a2;
  v9 = v7;
  if ( *a2 )
  {
    v10 = (char *)a2[1];
    if ( v10 )
    {
      for ( i = nullptr; i != v10; ++i )
      {
        v12 = &v8[24 * (_QWORD)i];
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v13);
          v8 = (char *)*a2;
        }
      }
    }
    a2[1] = 0;
    qfree(v8);
    *a2 = 0;
    a2[2] = 0;
  }
  v14 = *(_DWORD *)(a1 + 40);
  ptr = nullptr;
  v33 = 0;
  while ( 1 )
  {
    v19 = v14 + 1;
    v20 = sub_3BDD60(*(_QWORD **)(v9 + 1672), a3);
    if ( netnode_qsupstr(v20, &ptr, v14, 83) < 0 )
      break;
    v30 = (char *)a2[1];
    v29 = (char *)*a2;
    v21 = a2[2];
    v22 = (unsigned __int64)(v30 + 1);
    if ( (unsigned __int64)&ptr < *a2 || &ptr >= (void **)&v29[24 * v21] )
    {
      if ( v21 < v22 )
      {
        v26 = qvector_reserve(a2, v29, v30 + 1, 24);
        *a2 = v26;
        v29 = (char *)v26;
        v30 = (char *)a2[1];
      }
      v23 = _mm_loadu_si128(&v33);
      v24 = ptr;
      ptr = nullptr;
      v25 = &v29[24 * (_QWORD)v30];
      *(__m128i *)(v25 + 8) = v23;
      *(_QWORD *)v25 = v24;
      v33 = 0;
    }
    else
    {
      v15 = ptr;
      v16 = _mm_loadl_epi64(&v33);
      ptr = nullptr;
      v17 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
      v33 = 0;
      if ( v21 < v22 )
      {
        v31.m128i_i64[1] = v17.m128i_i64[0];
        v31.m128i_i64[0] = v16.m128i_i64[0];
        v28 = qvector_reserve(a2, v29, v30 + 1, 24);
        *a2 = v28;
        v29 = (char *)v28;
        v30 = (char *)a2[1];
        v17 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
        v16 = _mm_loadl_epi64(&v31);
      }
      v18 = &v29[24 * (_QWORD)v30];
      *(_QWORD *)v18 = v15;
      *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
    }
    ++a2[1];
    v14 = v19;
  }
  if ( ptr )
  {
    v33.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v34 - __readfsqword(0x28u);
}

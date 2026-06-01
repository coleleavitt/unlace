unsigned __int64 __fastcall sub_6208E0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // r13
  char *v10; // r15
  char *i; // rbp
  char *v12; // rax
  void *v13; // rdi
  unsigned int v14; // ebp
  void *v15; // r15
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  char *v18; // rax
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm0
  void *v23; // rdx
  char *v24; // rax
  __int64 v25; // rax
  __int64 v27; // rax
  char *v28; // rsi
  char *v29; // rax
  __m128i v30; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v32; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v5 = *(int *)(a1 + 8);
  v33 = __readfsqword(0x28u);
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
  v32 = 0;
  while ( 1 )
  {
    v19 = sub_3B90A0(*(_QWORD **)(v9 + 1480), a3);
    if ( netnode_qsupstr(v19, &ptr, v14, 83) < 0 )
      break;
    v29 = (char *)a2[1];
    v28 = (char *)*a2;
    v20 = a2[2];
    v21 = (unsigned __int64)(v29 + 1);
    if ( (unsigned __int64)&ptr < *a2 || &ptr >= (void **)&v28[24 * v20] )
    {
      if ( v20 < v21 )
      {
        v25 = qvector_reserve(a2, v28, v29 + 1, 24);
        *a2 = v25;
        v28 = (char *)v25;
        v29 = (char *)a2[1];
      }
      v22 = _mm_loadu_si128(&v32);
      v23 = ptr;
      ptr = nullptr;
      v24 = &v28[24 * (_QWORD)v29];
      *(__m128i *)(v24 + 8) = v22;
      *(_QWORD *)v24 = v23;
      v32 = 0;
    }
    else
    {
      v15 = ptr;
      v16 = _mm_loadl_epi64(&v32);
      ptr = nullptr;
      v17 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
      v32 = 0;
      if ( v20 < v21 )
      {
        v30.m128i_i64[1] = v17.m128i_i64[0];
        v30.m128i_i64[0] = v16.m128i_i64[0];
        v27 = qvector_reserve(a2, v28, v29 + 1, 24);
        *a2 = v27;
        v28 = (char *)v27;
        v29 = (char *)a2[1];
        v17 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
        v16 = _mm_loadl_epi64(&v30);
      }
      v18 = &v28[24 * (_QWORD)v29];
      *(_QWORD *)v18 = v15;
      *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
    }
    ++a2[1];
    ++v14;
  }
  if ( ptr )
  {
    v32.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v33 - __readfsqword(0x28u);
}


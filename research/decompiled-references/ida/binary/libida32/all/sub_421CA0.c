void __fastcall sub_421CA0(__int64 *a1, char *a2, const __m128i *a3, double a4, __m128 a5)
{
  __m128 v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rbx
  void *v10; // rcx
  __int128 v11; // kr00_16
  bool v12; // zf
  __int64 i; // rbx
  void *v14; // rdi
  __int64 *v15; // r14
  __int64 v16; // rdx
  char *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  size_t v23; // rax
  char *v24; // r13
  __int64 v25; // rax
  const char *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+10h] [rbp-C8h]
  char v29; // [rsp+1Fh] [rbp-B9h]
  __int64 v30; // [rsp+28h] [rbp-B0h]
  char v31; // [rsp+3Fh] [rbp-99h] BYREF
  __m128 v32; // [rsp+40h] [rbp-98h]
  __int64 v33; // [rsp+50h] [rbp-88h]
  void *v34; // [rsp+60h] [rbp-78h] BYREF
  __int128 v35; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __int128 v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v5 = (__m128)_mm_loadu_si128(a3);
  v38 = __readfsqword(0x28u);
  v6 = *a1;
  v34 = nullptr;
  v7 = _mm_movehl_ps(a5, v5).m128_u64[0];
  v32 = v5;
  *a3 = 0;
  v35 = 0;
  v28 = v6;
  v8 = a3[1].m128i_i64[0];
  a3[1].m128i_i64[0] = 0;
  v30 = v8;
  v33 = v8;
  v29 = *a2;
  if ( *a2 )
  {
    if ( v7 != v5.m128_u64[0] )
    {
      v15 = (__int64 *)v5.m128_u64[0];
      v16 = 0;
      v17 = nullptr;
      while ( 1 )
      {
        v18 = 8 * v15[1];
        v19 = v18 >> 3;
        if ( v18 >> 3 )
        {
          v20 = 8 * v16;
          v21 = *v15;
          v22 = v19 + v16;
          v23 = 0;
          if ( *((_QWORD *)&v35 + 1) < v22 )
          {
            v34 = (void *)qvector_reserve(&v34, v17, v22, 8);
            v17 = (char *)v34;
            v23 = 8 * v35 - v20;
          }
          v24 = &v17[v20];
          memmove(&v24[v18], v24, v23);
          v25 = 0;
          if ( v18 )
          {
            do
            {
              *(_QWORD *)&v24[v25] = *(_QWORD *)(v21 + v25);
              v25 += 8;
            }
            while ( v18 != v25 );
          }
          *(_QWORD *)&v35 = v19 + v35;
        }
        v15 += 3;
        if ( (__int64 *)v7 == v15 )
          break;
        v17 = (char *)v34;
        v16 = v35;
      }
    }
    v26 = haystack;
    v27 = *(_QWORD *)(v28 + 40);
    if ( v27 )
    {
      v26 = *(const char **)(v28 + 32);
      --v27;
    }
    sub_427F20(&v34, v27, v26, *(int *)(v28 + 56));
    goto LABEL_4;
  }
  v9 = v5.m128_u64[0];
  if ( v7 != v5.m128_u64[0] )
  {
    do
    {
      free_result_vec(v9);
      v9 += 24;
    }
    while ( v7 != v9 );
LABEL_4:
    v10 = v34;
    v11 = v35;
    goto LABEL_5;
  }
  v10 = nullptr;
  v11 = 0u;
LABEL_5:
  v35 = 0;
  v31 = v29;
  ptr = v10;
  v12 = *(_QWORD *)(v28 + 16) == 0;
  v37 = v11;
  v34 = nullptr;
  if ( v12 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, char *, void **))(v28 + 24))(v28, &v31, &ptr);
  if ( ptr )
  {
    *(_QWORD *)&v37 = 0;
    qfree(ptr);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  for ( i = v5.m128_u64[0]; v7 != i; i += 24 )
  {
    v14 = *(void **)i;
    if ( *(_QWORD *)i )
    {
      *(_QWORD *)(i + 8) = 0;
      qfree(v14);
    }
  }
  if ( v5.m128_u64[0] )
    operator delete((void *)v5.m128_u64[0], v30 - v5.m128_u64[0]);
}


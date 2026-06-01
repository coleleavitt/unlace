void __fastcall sub_12B86E0(__int64 a1, __int64 a2, const __m128i *a3, void *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __m128i *p_ptr; // rax
  __m128i *v10; // rdx
  char *v11; // rdi
  void **v12; // r14
  void **v13; // rbx
  void **v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  void **v19; // r15
  void **v20; // rdi
  __int64 v21; // rbx
  __m128i *v22; // rax
  void *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __m128i *v27; // rax
  __m128i *v28; // rdx
  __m128i *v29; // rdi
  char *v30; // r15
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __m128i *v34; // rdx
  unsigned __int64 v35; // rsi
  __m128i *v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rdi
  unsigned __int64 v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rax
  void *v43[2]; // [rsp+0h] [rbp-268h] BYREF
  __m128i v44; // [rsp+10h] [rbp-258h] BYREF
  __m128i ptr; // [rsp+20h] [rbp-248h] BYREF
  char v46[16]; // [rsp+30h] [rbp-238h] BYREF
  char v47; // [rsp+40h] [rbp-228h]

  sub_1269780(a1, a2, a3, a4);
  *(_QWORD *)a1 = off_2C416B0;
  v5 = *(unsigned int *)(a1 + 1160);
  ptr.m128i_i64[0] = (__int64)v46;
  strcpy(v46, "/opt/nec/ve/bin");
  v6 = v5 + 1;
  v7 = *(unsigned int *)(a1 + 1164);
  ptr.m128i_i64[1] = 15;
  if ( v5 + 1 > v7 )
  {
    v37 = *(_QWORD *)(a1 + 1152);
    v38 = a1 + 1152;
    if ( v37 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v37 + 32 * v5 )
    {
      sub_A8C1F0(v38, v6);
      v8 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
      p_ptr = &ptr;
    }
    else
    {
      sub_A8C1F0(v38, v6);
      v8 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
      p_ptr = (__m128i *)((char *)&ptr + v8 - v37);
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 1152);
    p_ptr = &ptr;
  }
  v10 = (__m128i *)(v8 + 32 * v5);
  v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
  if ( (__m128i *)p_ptr->m128i_i64[0] == &p_ptr[1] )
  {
    v10[1] = _mm_loadu_si128(p_ptr + 1);
  }
  else
  {
    v10->m128i_i64[0] = p_ptr->m128i_i64[0];
    v10[1].m128i_i64[0] = p_ptr[1].m128i_i64[0];
  }
  v10->m128i_i64[1] = p_ptr->m128i_i64[1];
  p_ptr->m128i_i64[0] = (__int64)p_ptr[1].m128i_i64;
  p_ptr->m128i_i64[1] = 0;
  p_ptr[1].m128i_i8[0] = 0;
  v11 = (char *)ptr.m128i_i64[0];
  ++*(_DWORD *)(a1 + 1160);
  if ( v11 != v46 )
    operator delete(v11);
  v12 = *(void ***)(a1 + 624);
  v13 = &v12[4 * *(unsigned int *)(a1 + 632)];
  while ( v12 != v13 )
  {
    while ( 1 )
    {
      v13 -= 4;
      if ( *v13 == v13 + 2 )
        break;
      operator delete(*v13);
      if ( v12 == v13 )
        goto LABEL_11;
    }
  }
LABEL_11:
  *(_DWORD *)(a1 + 632) = 0;
  sub_1131310((__int64)&ptr, a1);
  if ( v47 )
  {
    v32 = *(unsigned int *)(a1 + 632);
    v33 = *(_QWORD *)(a1 + 624);
    v34 = &ptr;
    v35 = v32 + 1;
    v36 = (__m128i *)(v33 + 32 * v32);
    if ( v35 > *(unsigned int *)(a1 + 636) )
    {
      v41 = a1 + 624;
      if ( v33 > (unsigned __int64)&ptr || v36 <= &ptr )
      {
        sub_A8C1F0(v41, v35);
        v34 = &ptr;
        v36 = (__m128i *)(*(_QWORD *)(a1 + 624) + 32LL * *(unsigned int *)(a1 + 632));
      }
      else
      {
        sub_A8C1F0(v41, v35);
        v42 = *(_QWORD *)(a1 + 624);
        v34 = (__m128i *)((char *)&ptr + v42 - v33);
        v36 = (__m128i *)(32LL * *(unsigned int *)(a1 + 632) + v42);
      }
    }
    v36->m128i_i64[0] = (__int64)v36[1].m128i_i64;
    if ( (__m128i *)v34->m128i_i64[0] == &v34[1] )
    {
      v36[1] = _mm_loadu_si128(v34 + 1);
    }
    else
    {
      v36->m128i_i64[0] = v34->m128i_i64[0];
      v36[1].m128i_i64[0] = v34[1].m128i_i64[0];
    }
    v36->m128i_i64[1] = v34->m128i_i64[1];
    v34->m128i_i64[0] = (__int64)v34[1].m128i_i64;
    v34->m128i_i64[1] = 0;
    v34[1].m128i_i8[0] = 0;
    ++*(_DWORD *)(a1 + 632);
    if ( v47 && (char *)ptr.m128i_i64[0] != v46 )
      operator delete((void *)ptr.m128i_i64[0]);
  }
  sub_11348A0(&ptr, a1);
  v14 = (void **)ptr.m128i_i64[0];
  v15 = ptr.m128i_i64[0] + 32LL * ptr.m128i_u32[2];
  if ( v15 != ptr.m128i_i64[0] )
  {
    v16 = *(unsigned int *)(a1 + 632);
    do
    {
      v17 = *(_QWORD *)(a1 + 624);
      v18 = v16 + 1;
      v19 = v14;
      v20 = (void **)(v17 + 32 * v16);
      if ( v18 > *(unsigned int *)(a1 + 636) )
      {
        if ( v17 > (unsigned __int64)v14 || v20 <= v14 )
        {
          sub_A8C1F0(a1 + 624, v18);
          v20 = (void **)(*(_QWORD *)(a1 + 624) + 32LL * *(unsigned int *)(a1 + 632));
        }
        else
        {
          v30 = (char *)v14 - v17;
          sub_A8C1F0(a1 + 624, v18);
          v31 = *(_QWORD *)(a1 + 624);
          v19 = (void **)&v30[v31];
          v20 = (void **)(v31 + 32LL * *(unsigned int *)(a1 + 632));
        }
      }
      v14 += 4;
      *v20 = v20 + 2;
      sub_12B7650(v20, *v19, (__int64)v19[1] + (_QWORD)*v19);
      v16 = (unsigned int)(*(_DWORD *)(a1 + 632) + 1);
      *(_DWORD *)(a1 + 632) = v16;
    }
    while ( (void **)v15 != v14 );
    v21 = ptr.m128i_i64[0];
    v14 = (void **)(ptr.m128i_i64[0] + 32LL * ptr.m128i_u32[2]);
    if ( (void **)ptr.m128i_i64[0] != v14 )
    {
      do
      {
        while ( 1 )
        {
          v14 -= 4;
          if ( *v14 == v14 + 2 )
            break;
          operator delete(*v14);
          if ( (void **)v21 == v14 )
            goto LABEL_19;
        }
      }
      while ( (void **)v21 != v14 );
LABEL_19:
      v14 = (void **)ptr.m128i_i64[0];
    }
  }
  if ( v14 != (void **)v46 )
    free(v14);
  sub_1265750(&ptr, a1);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - ptr.m128i_i64[1]) <= 0xE )
    std::__throw_length_error("basic_string::append");
  v22 = (__m128i *)sub_9EE560(&ptr, "/opt/nec/ve/lib", 0xFu);
  v43[0] = &v44;
  if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
  {
    v44 = _mm_loadu_si128(v22 + 1);
  }
  else
  {
    v43[0] = (void *)v22->m128i_i64[0];
    v44.m128i_i64[0] = v22[1].m128i_i64[0];
  }
  v23 = (void *)v22->m128i_i64[1];
  v22[1].m128i_i8[0] = 0;
  v43[1] = v23;
  v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
  v24 = *(unsigned int *)(a1 + 632);
  v22->m128i_i64[1] = 0;
  v25 = v24 + 1;
  if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v39 = *(_QWORD *)(a1 + 624);
    v40 = a1 + 624;
    if ( v39 > (unsigned __int64)v43 || (unsigned __int64)v43 >= v39 + 32 * v24 )
    {
      sub_A8C1F0(v40, v25);
      v26 = *(_QWORD *)(a1 + 624);
      v24 = *(unsigned int *)(a1 + 632);
      v27 = (__m128i *)v43;
    }
    else
    {
      sub_A8C1F0(v40, v25);
      v26 = *(_QWORD *)(a1 + 624);
      v24 = *(unsigned int *)(a1 + 632);
      v27 = (__m128i *)((char *)v43 + v26 - v39);
    }
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 624);
    v27 = (__m128i *)v43;
  }
  v28 = (__m128i *)(v26 + 32 * v24);
  v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
  if ( (__m128i *)v27->m128i_i64[0] == &v27[1] )
  {
    v28[1] = _mm_loadu_si128(v27 + 1);
  }
  else
  {
    v28->m128i_i64[0] = v27->m128i_i64[0];
    v28[1].m128i_i64[0] = v27[1].m128i_i64[0];
  }
  v28->m128i_i64[1] = v27->m128i_i64[1];
  v27->m128i_i64[0] = (__int64)v27[1].m128i_i64;
  v29 = (__m128i *)v43[0];
  v27->m128i_i64[1] = 0;
  v27[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(a1 + 632);
  if ( v29 != &v44 )
    operator delete(v29);
  if ( (char *)ptr.m128i_i64[0] != v46 )
    operator delete((void *)ptr.m128i_i64[0]);
}

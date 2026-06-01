unsigned __int64 __fastcall sub_4C3940(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  char *v15; // rdx
  __int64 v16; // r12
  __int64 i; // rbx
  char *v18; // rax
  void *v19; // rdi
  __m128i v20; // xmm4
  char *v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rbx
  char *v24; // rdx
  void *v25; // rax
  __int64 v27; // r12
  __int64 v28; // rbx
  void *v29; // rdx
  __int64 v30; // rdx
  size_t v31; // r15
  __int64 v32; // rdi
  void *v33; // rax
  const void **v34; // rdx
  __m128i v35; // [rsp+0h] [rbp-98h] BYREF
  void *p_ptr; // [rsp+18h] [rbp-80h]
  unsigned int v37; // [rsp+24h] [rbp-74h] BYREF
  unsigned int *v38; // [rsp+28h] [rbp-70h] BYREF
  __m128i v39; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v42 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1528);
  v39 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dd(&v39);
  v37 = v7;
  if ( a3 )
  {
    sub_4C34D0(v6 + 88, v7);
    return v42 - __readfsqword(0x28u);
  }
  ptr = nullptr;
  p_ptr = &ptr;
  v41 = 0;
  sub_4BCE70((__int64)&v39, (__int64 *)&ptr);
  v8 = *(_QWORD *)(v6 + 104);
  if ( v8 )
  {
    v9 = v37;
    v10 = v6 + 96;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v8 + 16);
        v12 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) < v37 )
          break;
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v11 )
          goto LABEL_7;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v12 );
LABEL_7:
    if ( v6 + 96 != v10 && v37 >= *(_DWORD *)(v10 + 32) )
      goto LABEL_10;
  }
  else
  {
    v10 = v6 + 96;
  }
  v9 = v10;
  v38 = &v37;
  v10 = sub_4BE680((_QWORD *)(v6 + 88), v10, (__int64)&unk_2389B34, &v38);
LABEL_10:
  v13 = v41;
  v14 = 0;
  if ( (_QWORD)v41 )
  {
    v14 = qalloc_or_throw(24 * v41, (const char *)v9, v12);
    v27 = v14;
    v28 = 0;
    do
    {
      v29 = ptr;
      *(_QWORD *)v27 = 0;
      *(_OWORD *)(v27 + 8) = 0;
      v30 = (__int64)v29 + 24 * v28;
      v31 = *(_QWORD *)(v30 + 8);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v30 + 8);
        v35.m128i_i64[0] = v30;
        v33 = (void *)qalloc_or_throw(v32, (const char *)v9);
        v34 = (const void **)v35.m128i_i64[0];
        *(_QWORD *)v27 = v33;
        *(_QWORD *)(v27 + 16) = v31;
        v9 = (unsigned __int64)*v34;
        memcpy(v33, *v34, v31);
        *(_QWORD *)(v27 + 8) = v31;
      }
      ++v28;
      v27 += 24;
    }
    while ( v13 != v28 );
  }
  v15 = *(char **)(v10 + 40);
  v35 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v10 + 48);
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v18 = &v15[24 * i];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v19);
          v15 = *(char **)(v10 + 40);
        }
      }
    }
    *(_QWORD *)(v10 + 48) = 0;
    qfree(v15);
  }
  v20 = _mm_load_si128(&v35);
  v21 = (char *)ptr;
  *(_QWORD *)(v10 + 40) = v14;
  *(__m128i *)(v10 + 48) = v20;
  if ( v21 )
  {
    v22 = v41;
    if ( (_QWORD)v41 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[24 * v23];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v21 = (char *)ptr;
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v21);
  }
  return v42 - __readfsqword(0x28u);
}


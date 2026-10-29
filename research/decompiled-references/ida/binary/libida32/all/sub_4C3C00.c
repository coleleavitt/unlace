unsigned __int64 __fastcall sub_4C3C00(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax
  char *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  char *v11; // rax
  void *v12; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  char *v20; // rdx
  __int64 v21; // r12
  __int64 i; // rbx
  char *v23; // rax
  void *v24; // rdi
  __m128i v25; // xmm4
  __int64 v26; // r12
  __int64 v27; // rbx
  void *v28; // rdx
  __int64 v29; // rdx
  size_t v30; // r15
  __int64 v31; // rdi
  void *v32; // rax
  const void **v33; // rdx
  __int64 v34; // [rsp+8h] [rbp-90h]
  __m128i v35; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v36; // [rsp+24h] [rbp-74h] BYREF
  unsigned int *v37; // [rsp+28h] [rbp-70h] BYREF
  __m128i v38; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v41 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1528);
  ptr = nullptr;
  v38 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v40 = 0;
  v7 = unpack_dd(&v38);
  v36 = v7;
  if ( !a3 )
  {
    sub_4C34D0(v6 + 88, v7);
    goto LABEL_3;
  }
  sub_4BCE70((__int64)&v38, (__int64 *)&ptr);
  v14 = *(_QWORD *)(v6 + 104);
  if ( v14 )
  {
    v15 = v36;
    v16 = v6 + 96;
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v14 + 16);
        v18 = *(_QWORD *)(v14 + 24);
        if ( *(_DWORD *)(v14 + 32) < v36 )
          break;
        v16 = v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v17 )
          goto LABEL_16;
      }
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v18 );
LABEL_16:
    if ( v6 + 96 != v16 && v36 >= *(_DWORD *)(v16 + 32) )
      goto LABEL_19;
  }
  else
  {
    v16 = v6 + 96;
  }
  v15 = v16;
  v37 = &v36;
  v16 = sub_4BE680((_QWORD *)(v6 + 88), v16, (__int64)&unk_2389B34, &v37);
LABEL_19:
  v34 = 0;
  v19 = v40;
  if ( (_QWORD)v40 )
  {
    v34 = qalloc_or_throw(24 * v40, (const char *)v15, v18);
    v26 = v34;
    v27 = 0;
    do
    {
      v28 = ptr;
      *(_QWORD *)v26 = 0;
      *(_OWORD *)(v26 + 8) = 0;
      v29 = (__int64)v28 + 24 * v27;
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v29 + 8);
        v35.m128i_i64[0] = v29;
        v32 = (void *)qalloc_or_throw(v31, (const char *)v15);
        v33 = (const void **)v35.m128i_i64[0];
        *(_QWORD *)v26 = v32;
        *(_QWORD *)(v26 + 16) = v30;
        v15 = (unsigned __int64)*v33;
        memcpy(v32, *v33, v30);
        *(_QWORD *)(v26 + 8) = v30;
      }
      ++v27;
      v26 += 24;
    }
    while ( v19 != v27 );
  }
  v20 = *(char **)(v16 + 40);
  v35 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  if ( v20 )
  {
    v21 = *(_QWORD *)(v16 + 48);
    if ( v21 )
    {
      for ( i = 0; i != v21; ++i )
      {
        v23 = &v20[24 * i];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v20 = *(char **)(v16 + 40);
        }
      }
    }
    *(_QWORD *)(v16 + 48) = 0;
    qfree(v20);
  }
  v25 = _mm_load_si128(&v35);
  *(_QWORD *)(v16 + 40) = v34;
  *(__m128i *)(v16 + 48) = v25;
LABEL_3:
  v8 = (char *)ptr;
  if ( ptr )
  {
    v9 = v40;
    if ( (_QWORD)v40 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[24 * v10];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = (char *)ptr;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v8);
  }
  return v41 - __readfsqword(0x28u);
}


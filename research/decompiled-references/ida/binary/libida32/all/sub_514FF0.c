__int64 __fastcall sub_514FF0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  const char *v6; // r14
  __int64 v7; // rax
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // rbp
  _QWORD *std_dirtree; // rbp
  void *v12; // r15
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  void *v19; // rdi
  _QWORD *v20; // rax
  const char *v21; // rsi
  __m128i v23; // [rsp+0h] [rbp-A8h] BYREF
  void *v24; // [rsp+10h] [rbp-98h] BYREF
  __m128i v25; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h]
  __m128i v27; // [rsp+38h] [rbp-70h]
  void *v28; // [rsp+48h] [rbp-60h] BYREF
  __int128 v29; // [rsp+50h] [rbp-58h]
  unsigned int v30; // [rsp+60h] [rbp-48h]
  bool v31; // [rsp+64h] [rbp-44h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v3 = a1[1];
  v32 = __readfsqword(0x28u);
  if ( !v3 )
    return enum_import_names(a3, sub_512E50, a2);
  v6 = haystack;
  v7 = *a1 + 24 * v3 - 24;
  if ( *(_QWORD *)(v7 + 8) )
    v6 = *(const char **)v7;
  ptr = nullptr;
  v28 = nullptr;
  v27 = 0;
  v29 = 0;
  if ( v6 )
  {
    v8 = strlen(v6);
    v9 = v8 + 1;
    v10 = v8;
    v28 = (void *)qvector_reserve(&v28, 0, v8 + 1, 1);
    *(_QWORD *)&v29 = v9;
    memmove(v28, v6, v10);
    *((_BYTE *)v28 + v10) = 0;
  }
  v30 = 3;
  std_dirtree = (_QWORD *)get_std_dirtree(3);
  v24 = nullptr;
  v25 = 0;
  dirtree_getcwd(&v24, *std_dirtree);
  v12 = v24;
  v24 = nullptr;
  v13 = _mm_loadu_si128(&v25);
  v25 = 0;
  if ( ptr )
  {
    v23 = v13;
    v27.m128i_i64[0] = 0;
    qfree(ptr);
    v14 = _mm_load_si128(&v23);
    ptr = v12;
    v27 = v14;
    if ( v24 )
    {
      v25.m128i_i64[0] = 0;
      qfree(v24);
    }
  }
  else
  {
    ptr = v12;
    v27 = v13;
  }
  v31 = (unsigned __int8)dirtree_mkdir(*std_dirtree, v6) == 0;
  dirtree_chdir(*std_dirtree, v6);
  v15 = a1[1];
  if ( v15 )
  {
    v16 = v15 - 1;
    v17 = *a1;
    a1[1] = v16;
    v18 = v17 + 24 * v16;
    v19 = *(void **)v18;
    if ( *(_QWORD *)v18 )
    {
      *(_QWORD *)(v18 + 8) = 0;
      qfree(v19);
    }
  }
  sub_514FF0(a1, a2, a3);
  v20 = (_QWORD *)get_std_dirtree(v30);
  v21 = haystack;
  if ( v27.m128i_i64[0] )
    v21 = (const char *)ptr;
  dirtree_chdir(*v20, v21);
  if ( v31 )
    dirtree_rmdir();
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( ptr )
  {
    v27.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v32 - __readfsqword(0x28u);
}


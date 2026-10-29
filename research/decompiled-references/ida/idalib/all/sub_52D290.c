__int64 __fastcall sub_52D290(__int64 *a1, __int64 a2, unsigned int a3)
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
  _QWORD *v22; // rbx
  const char *v23; // rsi
  __m128i v25; // [rsp+0h] [rbp-A8h] BYREF
  void *v26; // [rsp+10h] [rbp-98h] BYREF
  __m128i v27; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h]
  __m128i v29; // [rsp+38h] [rbp-70h]
  void *v30; // [rsp+48h] [rbp-60h] BYREF
  __int128 v31; // [rsp+50h] [rbp-58h]
  unsigned int v32; // [rsp+60h] [rbp-48h]
  bool v33; // [rsp+64h] [rbp-44h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v3 = a1[1];
  v34 = __readfsqword(0x28u);
  if ( !v3 )
    return enum_import_names(a3, sub_52B0D0, a2);
  v6 = haystack;
  v7 = *a1 + 24 * v3 - 24;
  if ( *(_QWORD *)(v7 + 8) )
    v6 = *(const char **)v7;
  ptr = nullptr;
  v30 = nullptr;
  v29 = 0;
  v31 = 0;
  if ( v6 )
  {
    v8 = strlen(v6);
    v9 = v8 + 1;
    v10 = v8;
    v30 = (void *)qvector_reserve(&v30, 0, v8 + 1, 1);
    *(_QWORD *)&v31 = v9;
    memmove(v30, v6, v10);
    *((_BYTE *)v30 + v10) = 0;
  }
  v32 = 3;
  std_dirtree = (_QWORD *)get_std_dirtree(3);
  v26 = nullptr;
  v27 = 0;
  dirtree_getcwd(&v26, *std_dirtree);
  v12 = v26;
  v26 = nullptr;
  v13 = _mm_loadu_si128(&v27);
  v27 = 0;
  if ( ptr )
  {
    v25 = v13;
    v29.m128i_i64[0] = 0;
    qfree(ptr);
    v14 = _mm_load_si128(&v25);
    ptr = v12;
    v29 = v14;
    if ( v26 )
    {
      v27.m128i_i64[0] = 0;
      qfree(v26);
    }
  }
  else
  {
    ptr = v12;
    v29 = v13;
  }
  v33 = (unsigned __int8)dirtree_mkdir(*std_dirtree, v6) == 0;
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
  sub_52D290(a1, a2, a3);
  v20 = (_QWORD *)get_std_dirtree(v32);
  v21 = haystack;
  v22 = v20;
  if ( v29.m128i_i64[0] )
    v21 = (const char *)ptr;
  dirtree_chdir(*v20, v21);
  if ( v33 )
  {
    v23 = haystack;
    if ( (_QWORD)v31 )
      v23 = (const char *)v30;
    dirtree_rmdir(*v22, v23);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( ptr )
  {
    v29.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v34 - __readfsqword(0x28u);
}

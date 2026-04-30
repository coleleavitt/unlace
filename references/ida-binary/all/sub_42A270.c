__int64 __fastcall vault_files_dirspec_t__::vfunc_2(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  const char *v5; // rdi
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r12
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v3 = *(_QWORD *)(a1 + 40);
  if ( a3 >= *(_QWORD *)(v3 + 336) )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 328) + 8 * a3);
  if ( !v4 )
    return 0;
  v5 = &s1;
  if ( *(_QWORD *)(v4 + 8) )
    v5 = *(const char **)v4;
  v6 = (const char *)qbasename(v5);
  v7 = v6;
  if ( v6 && (v8 = strlen(v6), (v9 = v8) != 0) )
  {
    v11 = (void *)*a2;
    v12 = v8 + 1;
    if ( a2[2] < v8 + 1 )
    {
      v13 = qvector_reserve(a2, *a2, v8 + 1, 1);
      *a2 = v13;
      v11 = (void *)v13;
    }
    a2[1] = v12;
    memmove(v11, v7, v9);
    *(_BYTE *)(*a2 + v9) = 0;
    return 1;
  }
  else
  {
    a2[1] = 0;
    return 1;
  }
}

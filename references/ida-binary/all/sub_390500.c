unsigned __int64 __fastcall sub_390500(const char ***a1, const char **a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  const char **v5; // rax
  const char *v7; // rax
  const char **v8; // rdx
  unsigned __int64 v9; // r12
  const char **v10; // rbp
  __int64 v11; // rax
  const char **v12; // rdx
  const char **v13; // r14
  const char **v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  const char *v17; // rax
  bool v18; // cf
  const char *v19; // rsi
  __int64 v20; // rax
  const char **v21; // rdx
  const char **v22; // r13
  const char **v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  const char *v26; // [rsp+0h] [rbp-38h]
  unsigned __int64 v27; // [rsp+8h] [rbp-30h]

  v3 = (__int64)*a1;
  v4 = (unsigned __int64)a1[2];
  v27 = __readfsqword(0x28u);
  if ( a2 >= *a1 && (unsigned __int64)a2 < v3 + 8 * v4 )
  {
    v7 = *a2;
    *a2 = nullptr;
    v8 = a1[1];
    v9 = (unsigned __int64)a1[2];
    v26 = v7;
    if ( v9 < (unsigned __int64)v8 + 1 )
    {
      v19 = nullptr;
      v20 = qvector_reserve(a1, 0, (char *)v8 + 1, 8);
      v21 = a1[1];
      v22 = a1[2];
      v10 = (const char **)v20;
      a1[2] = (const char **)v9;
      v23 = *a1;
      v24 = (__int64)v21 - 1;
      if ( v24 >= 0 )
      {
        v25 = v20;
        do
        {
          v19 = *v23;
          v25 += 8;
          ++v23;
          *(_QWORD *)(v25 - 8) = v19;
          v18 = v24-- == 0;
        }
        while ( !v18 );
        v23 = *a1;
      }
      qfree(v23, v19);
      *a1 = v10;
      v8 = a1[1];
      a1[2] = v22;
    }
    else
    {
      v10 = *a1;
    }
    v10[(_QWORD)v8] = v26;
  }
  else
  {
    v5 = a1[1];
    if ( v4 < (unsigned __int64)v5 + 1 )
    {
      v11 = qvector_reserve(a1, 0, (char *)v5 + 1, 8);
      v12 = a1[1];
      v13 = a1[2];
      a1[2] = (const char **)v4;
      v14 = *a1;
      v3 = v11;
      v15 = (__int64)v12 - 1;
      if ( v15 >= 0 )
      {
        v16 = v11;
        do
        {
          v17 = *v14;
          v16 += 8;
          ++v14;
          *(_QWORD *)(v16 - 8) = v17;
          v18 = v15-- == 0;
        }
        while ( !v18 );
        v14 = *a1;
      }
      qfree(v14, nullptr);
      *a1 = (const char **)v3;
      v5 = a1[1];
      a1[2] = v13;
    }
    *(_QWORD *)(v3 + 8LL * (_QWORD)v5) = *a2;
    *a2 = nullptr;
  }
  a1[1] = (const char **)((char *)a1[1] + 1);
  return v27 - __readfsqword(0x28u);
}

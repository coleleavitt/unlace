int __fastcall sub_291E0(__int64 *a1, const void *a2)
{
  const char *file_ext; // rax
  size_t v4; // r12
  const char *v5; // rdi
  size_t v6; // r12
  void *v7; // rdi
  const char *v8; // r13
  __int64 v9; // rdi
  void *v10; // rdi
  const char *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax

  file_ext = (const char *)get_file_ext(a2);
  if ( file_ext && (LODWORD(file_ext) = strcasecmp(file_ext, "pdb"), !(_DWORD)file_ext) )
  {
    if ( a2 && (file_ext = (const char *)strlen((const char *)a2), (v6 = (size_t)file_ext) != 0) )
    {
      v7 = (void *)*a1;
      v8 = file_ext + 1;
      if ( a1[2] < (unsigned __int64)(file_ext + 1) )
      {
        v13 = qvector_reserve(a1, *a1, file_ext + 1, 1);
        *a1 = v13;
        v7 = (void *)v13;
      }
      a1[1] = (__int64)v8;
      memmove(v7, a2, v6);
      file_ext = (const char *)*a1;
      *(_BYTE *)(*a1 + v6) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    v9 = a1[3];
    if ( v9 )
    {
      a1[4] = 0;
      LODWORD(file_ext) = qfree(v9);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  else
  {
    if ( a2 && (file_ext = (const char *)strlen((const char *)a2), (v4 = (size_t)file_ext) != 0) )
    {
      v10 = (void *)a1[3];
      v11 = file_ext + 1;
      if ( a1[5] < (unsigned __int64)(file_ext + 1) )
      {
        v12 = qvector_reserve(a1 + 3, a1[3], v11, 1);
        a1[3] = v12;
        v10 = (void *)v12;
      }
      a1[4] = (__int64)v11;
      memmove(v10, a2, v4);
      file_ext = (const char *)a1[3];
      file_ext[v4] = 0;
    }
    else
    {
      a1[4] = 0;
    }
    v5 = (const char *)*a1;
    if ( *a1 )
    {
      a1[1] = 0;
      LODWORD(file_ext) = qfree(v5);
      *a1 = 0;
      a1[2] = 0;
    }
  }
  return (int)file_ext;
}

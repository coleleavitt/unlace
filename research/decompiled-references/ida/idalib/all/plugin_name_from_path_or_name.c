unsigned __int64 __fastcall plugin_name_from_path_or_name(__int64 *a1, __int64 a2)
{
  const void *v3; // r12
  __int64 file_ext; // rax
  __int64 v5; // r14
  void *v6; // r15
  __int64 v7; // rbx
  size_t v8; // r13
  void *v9; // rdi
  void *v10; // rdi
  void *v12; // rdi
  size_t v13; // rax
  size_t v14; // rbx
  void *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v3 = (const void *)qbasename(a2);
  file_ext = get_file_ext(v3);
  if ( file_ext )
  {
    v5 = 0;
    v6 = nullptr;
    v7 = file_ext - (_QWORD)v3;
    ptr = nullptr;
    v19 = 0;
    v8 = file_ext - (_QWORD)v3 - 1;
    if ( file_ext - (_QWORD)v3 != 1 )
    {
      v12 = nullptr;
      if ( v7 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, file_ext - (_QWORD)v3, 1);
        v12 = ptr;
      }
      *(_QWORD *)&v19 = v7;
      memmove(v12, v3, v8);
      *((char *)ptr + v7 - 1) = 0;
      v6 = ptr;
      v5 = *((_QWORD *)&v19 + 1);
      v8 = v19;
    }
    v9 = (void *)*a1;
    ptr = nullptr;
    v19 = 0;
    if ( v9 )
    {
      a1[1] = 0;
      qfree(v9);
      v10 = ptr;
      *a1 = (__int64)v6;
      a1[1] = v8;
      a1[2] = v5;
      if ( v10 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v10);
      }
    }
    else
    {
      *a1 = (__int64)v6;
      a1[1] = v8;
      a1[2] = v5;
    }
  }
  else if ( v3 && (v13 = strlen((const char *)v3), (v14 = v13) != 0) )
  {
    v15 = (void *)*a1;
    v16 = v13 + 1;
    if ( a1[2] < v13 + 1 )
    {
      v17 = qvector_reserve(a1, *a1, v13 + 1, 1);
      *a1 = v17;
      v15 = (void *)v17;
    }
    a1[1] = v16;
    memmove(v15, v3, v14);
    *(_BYTE *)(*a1 + v14) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  return v20 - __readfsqword(0x28u);
}

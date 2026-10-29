__int64 __fastcall sub_813700(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  const char *v15; // rax
  const char *v16; // rbp
  size_t v17; // rax
  size_t v18; // r13
  void *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rax

  v10 = qlread(a2, a3, a4);
  v13 = v10;
  if ( v10 != a4 && a5 )
  {
    v13 = -1;
    set_qerrno(3, a3);
  }
  else if ( v10 >= 0 )
  {
    return v13;
  }
  v15 = (const char *)qstrerror(0xFFFFFFFFLL, a3, v11, v12);
  v16 = v15;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v15 )
    {
      v17 = strlen(v15);
      v18 = v17;
      if ( v17 )
      {
        v19 = (void *)*a1;
        v20 = v17 + 1;
        if ( a1[2] < v17 + 1 )
        {
          v21 = qvector_reserve(a1, *a1, v17 + 1, 1);
          *a1 = v21;
          v19 = (void *)v21;
        }
        a1[1] = v20;
        memmove(v19, v16, v18);
        *(_BYTE *)(*a1 + v18) = 0;
        return v13;
      }
    }
    a1[1] = 0;
    return v13;
  }
  else
  {
    sub_3573A0((char **)a1);
    return v13;
  }
}


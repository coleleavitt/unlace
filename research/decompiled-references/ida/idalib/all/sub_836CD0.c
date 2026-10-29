__int64 __fastcall sub_836CD0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v6; // rax
  const char *v8; // rax
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // r13
  void *v12; // rdi
  size_t v13; // r14
  __int64 v14; // rax

  v6 = qlseek(a2, a3, 0);
  LOBYTE(v3) = a3 == v6;
  if ( a3 == v6 )
    return v3;
  v8 = (const char *)qstrerror(0xFFFFFFFFLL);
  v9 = v8;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v8 )
    {
      v10 = strlen(v8);
      v11 = v10;
      if ( v10 )
      {
        v12 = (void *)*a1;
        v13 = v10 + 1;
        if ( a1[2] < v10 + 1 )
        {
          v14 = qvector_reserve(a1, *a1, v10 + 1, 1);
          *a1 = v14;
          v12 = (void *)v14;
        }
        a1[1] = v13;
        memmove(v12, v9, v11);
        *(_BYTE *)(*a1 + v11) = 0;
        return v3;
      }
    }
    a1[1] = 0;
    return v3;
  }
  else
  {
    sub_35A790((char **)a1);
    return v3;
  }
}

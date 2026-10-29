__int64 __fastcall sub_813900(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v12; // rax
  const char *v13; // rbx
  size_t v14; // rax
  size_t v15; // r13
  void *v16; // rdi
  size_t v17; // r14
  __int64 v18; // rax

  v8 = qlseek(a2, a3, 0);
  LOBYTE(v3) = a3 == v8;
  if ( a3 == v8 )
    return v3;
  v12 = (const char *)qstrerror(0xFFFFFFFFLL, a3, v9, v10);
  v13 = v12;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v12 )
    {
      v14 = strlen(v12);
      v15 = v14;
      if ( v14 )
      {
        v16 = (void *)*a1;
        v17 = v14 + 1;
        if ( a1[2] < v14 + 1 )
        {
          v18 = qvector_reserve(a1, *a1, v14 + 1, 1);
          *a1 = v18;
          v16 = (void *)v18;
        }
        a1[1] = v17;
        memmove(v16, v13, v15);
        *(_BYTE *)(*a1 + v15) = 0;
        return v3;
      }
    }
    a1[1] = 0;
    return v3;
  }
  else
  {
    sub_3573A0((char **)a1);
    return v3;
  }
}


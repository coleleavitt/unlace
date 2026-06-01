__int64 __fastcall sub_813810(__int64 *a1, FILE *a2, void *a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v13; // rax
  const char *v14; // rbx
  size_t v15; // rax
  size_t v16; // r13
  void *v17; // rdi
  size_t v18; // r14
  __int64 v19; // rax

  v9 = qfwrite(a2, a3);
  LOBYTE(v4) = v9 == a4;
  if ( v9 == a4 )
    return v4;
  v13 = (const char *)qstrerror(0xFFFFFFFFLL, a3, v10, v11);
  v14 = v13;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v13 )
    {
      v15 = strlen(v13);
      v16 = v15;
      if ( v15 )
      {
        v17 = (void *)*a1;
        v18 = v15 + 1;
        if ( a1[2] < v15 + 1 )
        {
          v19 = qvector_reserve(a1, *a1, v15 + 1, 1);
          *a1 = v19;
          v17 = (void *)v19;
        }
        a1[1] = v18;
        memmove(v17, v14, v16);
        *(_BYTE *)(*a1 + v16) = 0;
        return v4;
      }
    }
    a1[1] = 0;
    return v4;
  }
  else
  {
    sub_3573A0((char **)a1);
    return v4;
  }
}


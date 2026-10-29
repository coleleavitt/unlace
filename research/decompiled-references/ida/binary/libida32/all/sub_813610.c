__int64 __fastcall sub_813610(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v11; // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r13
  void *v15; // rdi
  size_t v16; // r14
  __int64 v17; // rax

  v7 = qfseek(a2, a3, 0);
  LOBYTE(v3) = v7 == 0;
  if ( !v7 )
    return v3;
  v11 = (const char *)qstrerror(0xFFFFFFFFLL, a3, v8, v9);
  v12 = v11;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v11 )
    {
      v13 = strlen(v11);
      v14 = v13;
      if ( v13 )
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
        memmove(v15, v12, v14);
        *(_BYTE *)(*a1 + v14) = 0;
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


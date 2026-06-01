__int64 __fastcall sub_91C20(__int64 *a1, FILE *a2, void *a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v7; // rax
  const char *v9; // rax
  const char *v10; // rbx
  size_t v11; // rax
  size_t v12; // r13
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax

  v7 = sub_958B0(a2, a3);
  LOBYTE(v4) = v7 == a4;
  if ( v7 == a4 )
    return v4;
  v9 = (const char *)sub_978C0(0xFFFFFFFFLL);
  v10 = v9;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v9 )
    {
      v11 = strlen(v9);
      v12 = v11;
      if ( v11 )
      {
        v13 = (void *)*a1;
        v14 = v11 + 1;
        if ( a1[2] < v11 + 1 )
        {
          v15 = sub_96080(a1, *a1, v11 + 1, 1);
          *a1 = v15;
          v13 = (void *)v15;
        }
        a1[1] = v14;
        memmove(v13, v10, v12);
        *(_BYTE *)(*a1 + v12) = 0;
        return v4;
      }
    }
    a1[1] = 0;
    return v4;
  }
  else
  {
    sub_17D80((char **)a1);
    return v4;
  }
}


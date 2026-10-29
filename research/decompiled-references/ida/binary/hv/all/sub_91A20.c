__int64 __fastcall sub_91A20(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v5; // eax
  const char *v7; // rax
  const char *v8; // r12
  size_t v9; // rax
  size_t v10; // r13
  void *v11; // rdi
  size_t v12; // r14
  __int64 v13; // rax

  v5 = sub_95990(a2, a3, 0);
  LOBYTE(v3) = v5 == 0;
  if ( !v5 )
    return v3;
  v7 = (const char *)sub_978C0(0xFFFFFFFFLL);
  v8 = v7;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v7 )
    {
      v9 = strlen(v7);
      v10 = v9;
      if ( v9 )
      {
        v11 = (void *)*a1;
        v12 = v9 + 1;
        if ( a1[2] < v9 + 1 )
        {
          v13 = sub_96080(a1, *a1, v9 + 1, 1);
          *a1 = v13;
          v11 = (void *)v13;
        }
        a1[1] = v12;
        memmove(v11, v8, v10);
        *(_BYTE *)(*a1 + v10) = 0;
        return v3;
      }
    }
    a1[1] = 0;
    return v3;
  }
  else
  {
    sub_17D80((char **)a1);
    return v3;
  }
}


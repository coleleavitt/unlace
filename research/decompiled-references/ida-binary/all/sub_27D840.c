int __fastcall sub_27D840(__int64 *a1, const char *a2, const char *a3)
{
  __int64 v5; // rdi
  int v6; // ebx
  size_t v7; // rax
  __int64 v8; // rbx
  const char *v9; // rbx
  size_t v10; // r12
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v5 = *a1;
  if ( v5 )
  {
    a1[1] = 0;
    qfree(v5, a2);
    *a1 = 0;
    a1[2] = 0;
  }
  v6 = strlen(a2);
  LODWORD(v7) = strlen(a3);
  if ( (int)v7 <= v6 )
  {
    v8 = (int)v7;
    LODWORD(v7) = strncmp(a2, a3, (int)v7);
    if ( !(_DWORD)v7 )
    {
      v9 = &a2[v8];
      if ( v9 && (v7 = strlen(v9), (v10 = v7) != 0) )
      {
        v11 = (void *)*a1;
        v12 = v7 + 1;
        if ( a1[2] < v7 + 1 )
        {
          v13 = qvector_reserve(a1, *a1, v7 + 1, 1);
          *a1 = v13;
          v11 = (void *)v13;
        }
        a1[1] = v12;
        memmove(v11, v9, v10);
        v7 = *a1;
        *(_BYTE *)(*a1 + v10) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
  }
  return v7;
}

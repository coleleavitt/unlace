int __fastcall sub_F43F0(size_t *a1, const char *a2, const char *a3)
{
  int v5; // ebx
  size_t v6; // rax
  __int64 v7; // rbx
  const char *v8; // rbx
  size_t v9; // r12
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v5 = strlen(a2);
  LODWORD(v6) = strlen(a3);
  if ( (int)v6 <= v5 )
  {
    v7 = (int)v6;
    LODWORD(v6) = strncmp(a2, a3, (int)v6);
    if ( !(_DWORD)v6 )
    {
      v8 = &a2[v7];
      if ( v8 && (v6 = strlen(v8), (v9 = v6) != 0) )
      {
        v10 = (void *)*a1;
        v11 = v6 + 1;
        if ( a1[2] < v6 + 1 )
        {
          v12 = qvector_reserve();
          *a1 = v12;
          v10 = (void *)v12;
        }
        a1[1] = v11;
        memmove(v10, v8, v9);
        v6 = *a1;
        *(_BYTE *)(*a1 + v9) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
  }
  return v6;
}


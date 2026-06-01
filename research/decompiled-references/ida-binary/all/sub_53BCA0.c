__int64 __fastcall sub_53BCA0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v3; // r12
  char v5; // al
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // rbx
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  v2 = 0;
  if ( *(_QWORD *)(a2 + 8) > 9u )
  {
    v3 = *(const char **)a2;
    if ( !strncmp(*(const char **)a2, "themeicon", 9u) )
    {
      v5 = v3[9];
      if ( v5 == 45 || v5 == 95 )
      {
        v7 = v3 + 10;
        v8 = strlen(v7);
        v9 = v8;
        if ( v8 )
        {
          v10 = (void *)*a1;
          v11 = v8 + 1;
          if ( a1[2] < v8 + 1 )
          {
            v12 = qvector_reserve(a1, *a1, v8 + 1, 1);
            *a1 = v12;
            v10 = (void *)v12;
          }
          a1[1] = v11;
          memmove(v10, v7, v9);
          *(_BYTE *)(*a1 + v9) = 0;
        }
        else
        {
          a1[1] = 0;
        }
        return 1;
      }
    }
  }
  return v2;
}

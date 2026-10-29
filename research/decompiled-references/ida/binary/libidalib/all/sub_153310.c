__int64 __fastcall sub_153310(void *src, size_t n)
{
  char *v2; // rbx
  unsigned int v3; // ebp
  char *v6; // rdi
  size_t v7; // rax
  size_t v8; // rbp
  size_t v9; // r12
  char *v10; // rax
  char *s; // [rsp+0h] [rbp-58h]
  void *v12; // [rsp+20h] [rbp-38h]

  s = nullptr;
  if ( !n )
    goto LABEL_2;
  v6 = nullptr;
  if ( n != -1 )
  {
    s = (char *)qvector_reserve();
    v6 = s;
  }
  memmove(v6, src, n);
  s[n] = 0;
  if ( n == -1 )
  {
LABEL_2:
    v2 = s;
LABEL_3:
    v3 = (unsigned __int8)byte_252100;
    goto LABEL_4;
  }
  v2 = s;
  if ( !s )
    goto LABEL_3;
  v7 = strlen(s);
  v8 = v7;
  if ( !v7 )
    goto LABEL_3;
  v9 = v7 + 1;
  v12 = (void *)qvector_reserve();
  memmove(v12, s, v8);
  *((_BYTE *)v12 + v8) = 0;
  if ( v9 )
    v10 = (char *)v12;
  else
    v10 = &byte_252100;
  v3 = (unsigned __int8)*v10;
  if ( v12 )
    qfree();
  v2 = s;
LABEL_4:
  if ( v2 )
    qfree();
  return v3;
}


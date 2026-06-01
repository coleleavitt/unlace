__m128i *__fastcall clang_parseTranslationUnit(
        __int64 a1,
        const char *a2,
        const void *a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v10; // rbx
  size_t v11; // rax
  const char **v12; // rdx
  int v13; // ecx
  char *p_dest; // rdi
  __m128i *v17; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  char *v20; // [rsp+30h] [rbp-58h] BYREF
  char dest; // [rsp+38h] [rbp-50h] BYREF

  v10 = a4;
  sub_CB4600();
  ptr = &v20;
  v20 = "clang";
  v19 = 0x400000001LL;
  v11 = 8 * v10;
  if ( (unsigned __int64)(v10 + 1) > 4 )
  {
    sub_25D6060(&ptr, &v20, v10 + 1, 8);
    v11 = 8 * v10;
    p_dest = (char *)ptr + 8 * (unsigned int)v19;
  }
  else
  {
    v12 = (const char **)&v20;
    v13 = 1;
    if ( !v11 )
      goto LABEL_3;
    p_dest = &dest;
  }
  memcpy(p_dest, a3, v11);
  v12 = (const char **)ptr;
  v13 = v10 + v19;
LABEL_3:
  LODWORD(v19) = v13;
  clang_parseTranslationUnit2FullArgv(a1, a2, v12, v13, a5, a6, a7, &v17);
  if ( ptr != &v20 )
    free(ptr);
  return v17;
}


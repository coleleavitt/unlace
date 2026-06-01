__m128i *__fastcall clang_createTranslationUnitFromSourceFile(
        __int64 a1,
        const char *a2,
        int a3,
        const void *a4,
        int a5,
        __int64 a6)
{
  __int64 v9; // rbx
  size_t v10; // rax
  const char **v11; // rdx
  int v12; // ecx
  char *p_dest; // rdi
  __m128i *v16; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+28h] [rbp-60h]
  char *v19; // [rsp+30h] [rbp-58h] BYREF
  char dest; // [rsp+38h] [rbp-50h] BYREF

  v9 = a3;
  sub_CB4600();
  ptr = &v19;
  v19 = "clang";
  v18 = 0x400000001LL;
  v10 = 8 * v9;
  if ( (unsigned __int64)(v9 + 1) > 4 )
  {
    sub_25D6060(&ptr, &v19, v9 + 1, 8);
    v10 = 8 * v9;
    p_dest = (char *)ptr + 8 * (unsigned int)v18;
  }
  else
  {
    v11 = (const char **)&v19;
    v12 = 1;
    if ( !v10 )
      goto LABEL_3;
    p_dest = &dest;
  }
  memcpy(p_dest, a4, v10);
  v11 = (const char **)ptr;
  v12 = v9 + v18;
LABEL_3:
  LODWORD(v18) = v12;
  clang_parseTranslationUnit2FullArgv(a1, a2, v11, v12, a6, a5, 1, &v16);
  if ( ptr != &v19 )
    free(ptr);
  return v16;
}


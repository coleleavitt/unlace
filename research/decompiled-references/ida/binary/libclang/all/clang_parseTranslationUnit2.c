__int64 __fastcall clang_parseTranslationUnit2(
        __int64 a1,
        const char *a2,
        const void *a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __m128i **a8)
{
  __int64 v11; // rbx
  size_t v12; // rax
  const char **v13; // rdx
  int v14; // ecx
  unsigned int v15; // ebx
  char *p_dest; // rdi
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  char *v21; // [rsp+20h] [rbp-58h] BYREF
  char dest; // [rsp+28h] [rbp-50h] BYREF

  v11 = a4;
  sub_CB4600();
  ptr = &v21;
  v21 = "clang";
  v20 = 0x400000001LL;
  v12 = 8 * v11;
  if ( (unsigned __int64)(v11 + 1) > 4 )
  {
    sub_25D6060(&ptr, &v21, v11 + 1, 8);
    v12 = 8 * v11;
    p_dest = (char *)ptr + 8 * (unsigned int)v20;
  }
  else
  {
    v13 = (const char **)&v21;
    v14 = 1;
    if ( !v12 )
      goto LABEL_3;
    p_dest = &dest;
  }
  memcpy(p_dest, a3, v12);
  v13 = (const char **)ptr;
  v14 = v11 + v20;
LABEL_3:
  LODWORD(v20) = v14;
  v15 = clang_parseTranslationUnit2FullArgv(a1, a2, v13, v14, a5, a6, a7, a8);
  if ( ptr != &v21 )
    free(ptr);
  return v15;
}


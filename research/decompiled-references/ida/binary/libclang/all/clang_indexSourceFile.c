__int64 __fastcall clang_indexSourceFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        const char *a6,
        void *src,
        int a8,
        __int64 a9,
        int a10,
        __m128i **a11,
        int a12)
{
  unsigned __int64 v16; // rdx
  size_t v17; // r9
  const char **v18; // rdx
  int v19; // eax
  unsigned int v20; // ebx
  char *p_dest; // rdi
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  char *v26; // [rsp+30h] [rbp-58h] BYREF
  char dest; // [rsp+38h] [rbp-50h] BYREF

  v26 = "clang";
  v25 = 0x400000001LL;
  v16 = a8 + 1LL;
  ptr = &v26;
  v17 = 8LL * a8;
  if ( v16 > 4 )
  {
    sub_25D6060(&ptr, &v26, v16, 8);
    v17 = 8LL * a8;
    p_dest = (char *)ptr + 8 * (unsigned int)v25;
  }
  else
  {
    v18 = (const char **)&v26;
    v19 = 1;
    if ( !v17 )
      goto LABEL_3;
    p_dest = &dest;
  }
  memcpy(p_dest, src, v17);
  v18 = (const char **)ptr;
  v19 = a8 + v25;
LABEL_3:
  LODWORD(v25) = v19;
  v20 = clang_indexSourceFileFullArgv(a1, a2, a3, a4, a5, a6, v18, v19, a9, a10, a11, a12);
  if ( ptr != &v26 )
    free(ptr);
  return v20;
}


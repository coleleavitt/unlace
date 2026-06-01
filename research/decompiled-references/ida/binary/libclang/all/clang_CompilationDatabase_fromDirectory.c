__int64 __fastcall clang_CompilationDatabase_fromDirectory(const char *a1, int *a2)
{
  size_t v2; // rax
  __int64 v3; // r12
  int v4; // eax
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  void *v7[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  LOBYTE(v8[0]) = 0;
  v7[0] = v8;
  v7[1] = nullptr;
  if ( a1 )
    v2 = strlen(a1);
  sub_1F47370(&v6, a1, v2, v7);
  v3 = v6;
  v4 = 0;
  if ( !v6 )
  {
    fprintf(stderr, "LIBCLANG TOOLING ERROR: %s\n", (const char *)v7[0]);
    v3 = v6;
    v4 = 1;
  }
  if ( a2 )
    *a2 = v4;
  v6 = 0;
  if ( v7[0] != v8 )
    operator delete(v7[0], v8[0] + 1LL);
  return v3;
}


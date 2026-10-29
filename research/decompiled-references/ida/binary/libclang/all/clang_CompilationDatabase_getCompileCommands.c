__int64 __fastcall clang_CompilationDatabase_getCompileCommands(__int64 a1, const char *a2)
{
  void (__fastcall *v2)(void **, __int64, const char *, size_t); // rbp
  size_t v3; // rax
  __int64 result; // rax
  __m128i si128; // xmm0
  void *v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]

  if ( !a1 )
    return 0;
  v2 = *(void (__fastcall **)(void **, __int64, const char *, size_t))(*(_QWORD *)a1 + 16LL);
  v3 = 0;
  if ( a2 )
    v3 = strlen(a2);
  v2(v6, a1, a2, v3);
  if ( v6[1] == v6[0] )
  {
    if ( v6[0] )
      operator delete(v6[0], v7 - (unsigned __int64)v6[0]);
    return 0;
  }
  else
  {
    result = operator new(0x18u);
    si128 = _mm_load_si128((const __m128i *)v6);
    *(_QWORD *)(result + 16) = v7;
    *(__m128i *)result = si128;
  }
  return result;
}


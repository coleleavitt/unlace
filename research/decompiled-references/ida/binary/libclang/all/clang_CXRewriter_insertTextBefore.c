__int64 __fastcall clang_CXRewriter_insertTextBefore(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  size_t v9; // rax

  v9 = 0;
  if ( a2 )
    v9 = strlen(a2);
  return sub_120A160(a1, a9, a2, v9, 0, 0);
}


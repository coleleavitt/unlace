__int64 __fastcall clang_findReferencesInFileWithBlock(
        __guard *a1,
        __int64 a2,
        __m128i a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int128 a8)
{
  __int64 (__fastcall *v8)(__int64); // rax

  v8 = sub_632330;
  if ( !a2 )
    v8 = nullptr;
  return clang_findReferencesInFile(a1, a2, (__int64)v8, a5, a6, a7, a8, a3);
}


__int64 __fastcall clang_findIncludesInFileWithBlock(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64); // rax

  v3 = sub_632330;
  if ( !a3 )
    v3 = nullptr;
  return clang_findIncludesInFile(a1, a2, a3, (__int64)v3);
}


__int64 __fastcall clang_index_getCXXClassDeclInfo(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 128) == 6 )
      return a1 + 384;
  }
  return result;
}


__int64 __fastcall clang_index_getObjCCategoryDeclInfo(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 128) == 4 )
      return a1 + 400;
  }
  return result;
}


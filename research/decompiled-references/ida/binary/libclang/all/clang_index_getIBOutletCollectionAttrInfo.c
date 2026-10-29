_DWORD *__fastcall clang_index_getIBOutletCollectionAttrInfo(_DWORD *a1)
{
  _DWORD *result; // rax

  result = nullptr;
  if ( a1 )
  {
    if ( *a1 == 3 )
      return a1 + 44;
  }
  return result;
}


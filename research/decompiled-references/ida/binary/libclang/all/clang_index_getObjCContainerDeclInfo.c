__int64 __fastcall clang_index_getObjCContainerDeclInfo(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdi
  bool v3; // cf
  __int64 result; // rax

  if ( !a1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 128);
  v2 = a1 + 384;
  v3 = (unsigned int)(v1 - 1) < 4;
  result = 0;
  if ( v3 )
    return v2;
  return result;
}


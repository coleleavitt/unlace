__int64 __fastcall clang_codeCompleteGetContainerKind(__int64 a1, _DWORD *a2)
{
  if ( !a1 )
    return 73;
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 1944);
  return *(unsigned int *)(a1 + 1904);
}


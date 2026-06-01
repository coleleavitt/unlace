__int64 __fastcall clang_getFileTime(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi

  if ( !a1 )
    return 0;
  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    return 78456304;
  while ( 1 )
  {
    v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v1 & 4) == 0 || !v2 )
      break;
    v1 = *(_QWORD *)(v2 + 8);
    if ( !v1 )
      return 78456304;
  }
  return *(_QWORD *)(v2 + 40);
}


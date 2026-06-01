__int64 __fastcall clang_getFileName(size_t *a1)
{
  size_t i; // rax
  unsigned __int64 v2; // rax

  if ( !a1 )
    return clang_CompileCommand_getMappedSourcePath_0();
  for ( i = a1[1]; i; i = *(_QWORD *)(v2 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v2 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v2 )
      break;
    a1 = (size_t *)v2;
  }
  return sub_690520(a1 + 4, *a1);
}


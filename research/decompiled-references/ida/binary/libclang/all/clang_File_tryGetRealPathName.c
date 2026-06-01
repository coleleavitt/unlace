__int64 __fastcall clang_File_tryGetRealPathName(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi

  if ( !a1 )
    return clang_CompileCommand_getMappedSourcePath_0();
  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    while ( 1 )
    {
      v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v1 & 4) == 0 || !v2 )
        break;
      v1 = *(_QWORD *)(v2 + 8);
      if ( !v1 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v2 = 0;
  }
  return sub_690520(*(void **)v2, *(_QWORD *)(v2 + 8));
}


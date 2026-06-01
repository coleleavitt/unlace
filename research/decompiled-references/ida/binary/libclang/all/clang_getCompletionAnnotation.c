__int64 __fastcall clang_getCompletionAnnotation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( !a1 )
    return clang_CompileCommand_getMappedSourcePath_0(0, a2, a3, a4);
  v4 = sub_120B9E0();
  return sub_6904A0(v4);
}


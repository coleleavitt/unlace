__int64 __fastcall clang_CompileCommand_getDirectory(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return sub_6904A0(*a1);
  else
    return clang_CompileCommand_getMappedSourcePath_0(0, a2, a3, a4);
}


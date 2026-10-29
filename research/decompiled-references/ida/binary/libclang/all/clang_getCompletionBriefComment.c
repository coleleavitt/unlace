__int64 __fastcall clang_getCompletionBriefComment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return sub_6904A0(*(_QWORD *)(a1 + 24));
  else
    return clang_CompileCommand_getMappedSourcePath_0(0, a2, a3, a4);
}


__int64 __fastcall clang_VerbatimBlockLineComment_getText(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 && *(_BYTE *)(a1 + 12) == 1 )
    return sub_690520(*(void **)(a1 + 16), *(_QWORD *)(a1 + 24));
  else
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
}


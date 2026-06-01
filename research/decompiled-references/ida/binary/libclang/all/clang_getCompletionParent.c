__int64 __fastcall clang_getCompletionParent(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  if ( a2 )
    *a2 = 72;
  if ( a1 )
    return sub_690520(*(void **)(a1 + 8), *(_QWORD *)(a1 + 16));
  else
    return clang_CompileCommand_getMappedSourcePath_0(0, a2, a3, a4);
}


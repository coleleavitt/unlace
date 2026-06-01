__int64 __fastcall clang_ParamCommandComment_getParamName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 && *(_BYTE *)(a1 + 12) == 12 && *(_DWORD *)(a1 + 24) )
    return sub_690520(*(void **)(*(_QWORD *)(a1 + 16) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
  else
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
}


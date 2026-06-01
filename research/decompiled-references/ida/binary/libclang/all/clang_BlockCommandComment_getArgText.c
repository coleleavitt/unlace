__int64 __fastcall clang_BlockCommandComment_getArgText(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  if ( !a1 || (unsigned int)*(unsigned __int8 *)(a1 + 12) - 8 > 4 || (unsigned int)a3 >= *(_DWORD *)(a1 + 24) )
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  v5 = *(_QWORD *)(a1 + 16) + 24LL * (unsigned int)a3;
  return sub_690520(*(void **)(v5 + 8), *(_QWORD *)(v5 + 16));
}


__int64 __fastcall clang_InlineCommandComment_getArgText(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  if ( !a1 || *(_BYTE *)(a1 + 12) != 3 || (unsigned int)a3 >= *(_DWORD *)(a1 + 24) )
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  v5 = *(_QWORD *)(a1 + 16) + 24LL * (unsigned int)a3;
  return sub_690520(*(void **)(v5 + 8), *(_QWORD *)(v5 + 16));
}


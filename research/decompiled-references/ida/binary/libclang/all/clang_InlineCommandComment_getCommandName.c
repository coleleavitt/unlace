__int64 __fastcall clang_InlineCommandComment_getCommandName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  size_t v5; // rax

  if ( !a1 || *(_BYTE *)(a1 + 12) != 3 )
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  if ( !a2 )
    BUG();
  v4 = *(char **)sub_76A6E0(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 80LL) + 18408LL, *(_DWORD *)(a1 + 12) >> 12);
  v5 = 0;
  if ( v4 )
    v5 = strlen(v4);
  return sub_690520(v4, v5);
}


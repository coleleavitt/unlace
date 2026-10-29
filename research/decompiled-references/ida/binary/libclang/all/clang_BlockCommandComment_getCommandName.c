__int64 __fastcall clang_BlockCommandComment_getCommandName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rbx
  size_t v6; // rax

  if ( !a1 || (unsigned int)*(unsigned __int8 *)(a1 + 12) - 8 > 4 )
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  if ( !a2 )
    BUG();
  v5 = *(char **)sub_76A6E0(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 80LL) + 18408LL, (*(_DWORD *)(a1 + 12) >> 8) & 0xFFFFF);
  v6 = 0;
  if ( v5 )
    v6 = strlen(v5);
  return sub_690520(v5, v6);
}


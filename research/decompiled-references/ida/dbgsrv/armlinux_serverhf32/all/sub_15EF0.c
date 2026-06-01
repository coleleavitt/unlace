/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15EF0
// Address: 0x00015EF0

//----- (00015EF0) --------------------------------------------------------
bool __fastcall sub_15EF0(int a1)
{
  _BOOL4 result; // r0

  if ( *(_BYTE *)(a1 + 392) && ptrace(PTRACE_SETREGS, *(_DWORD *)(a1 + 52), 0, a1 + 56) )
    return 0;
  result = 1;
  if ( *(_BYTE *)(a1 + 393) )
    return ptrace(PTRACE_SYSCALL|PTRACE_POKETEXT, *(_DWORD *)(a1 + 52), 0, a1 + 128) == 0;
  return result;
}

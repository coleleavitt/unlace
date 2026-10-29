/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23E72
// Address: 0x00023E72

//----- (00023E72) --------------------------------------------------------
bool __fastcall sub_23E72(int a1)
{
  return (!*(_BYTE *)(a1 + 384) || !ptrace(PTRACE_SETREGS, *(_DWORD *)(a1 + 44), 0, a1 + 48))
      && (!*(_BYTE *)(a1 + 385) || !ptrace(PTRACE_SYSCALL|PTRACE_POKETEXT, *(_DWORD *)(a1 + 44), 0, a1 + 120));
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23E1A
// Address: 0x00023E1A

//----- (00023E1A) --------------------------------------------------------
bool __fastcall sub_23E1A(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1)
      && (!*(_BYTE *)(a1 + 384) || !ptrace(PTRACE_GETREGS, *(_DWORD *)(a1 + 44), 0, a1 + 48))
      && (!*(_BYTE *)(a1 + 385) || !ptrace(PTRACE_SYSCALL|PTRACE_PEEKUSER, *(_DWORD *)(a1 + 44), 0, a1 + 120));
}

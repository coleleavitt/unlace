/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15EA4
// Address: 0x00015EA4

//----- (00015EA4) --------------------------------------------------------
bool __fastcall sub_15EA4(int a1)
{
  int v2; // r0
  int v3; // r4

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( *(_BYTE *)(a1 + 392) )
  {
    if ( ptrace(PTRACE_GETREGS, *(_DWORD *)(a1 + 52), 0, a1 + 56) )
      return 0;
  }
  if ( *(_BYTE *)(a1 + 393) )
    return ptrace(PTRACE_SYSCALL|PTRACE_PEEKUSER, *(_DWORD *)(a1 + 52), 0, a1 + 128) == 0;
  return v3;
}

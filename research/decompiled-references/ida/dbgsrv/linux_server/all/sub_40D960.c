/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D960
// Address: 0x000000000040D960

//----- (000000000040D960) ----------------------------------------------------
bool __fastcall sub_40D960(__int64 a1)
{
  bool result; // al
  unsigned int v2; // ebp

  if ( *(_BYTE *)(a1 + 3544) && ptrace(PTRACE_SETREGS, *(unsigned int *)(a1 + 100), 0, a1 + 104) )
    return 0;
  if ( !*(_BYTE *)(a1 + 3546) )
  {
    result = 1;
    if ( !*(_BYTE *)(a1 + 3545) )
      return result;
    return ptrace(PTRACE_SETFPREGS, *(unsigned int *)(a1 + 100), 0, a1 + 320) == 0;
  }
  v2 = *(_DWORD *)(a1 + 100);
  if ( !sub_40D550(v2) || ptrace(PTRACE_SETREGSET, v2, 514, a1 + 3528) )
    return 0;
  result = 1;
  if ( *(_BYTE *)(a1 + 3545) )
    return ptrace(PTRACE_SETFPREGS, *(unsigned int *)(a1 + 100), 0, a1 + 320) == 0;
  return result;
}

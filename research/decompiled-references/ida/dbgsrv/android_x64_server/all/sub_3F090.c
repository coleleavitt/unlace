/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F090
// Address: 0x000000000003F090

//----- (000000000003F090) ----------------------------------------------------
__int64 __fastcall sub_3F090(_QWORD *a1, __int64 a2)
{
  char v2; // r15
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r15

  v2 = ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 896, 0);
  if ( (v2 & 1) == 0 || (v3 = a1[92], v4 = 0, v3 != ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 848, 0)) )
  {
    if ( (v2 & 2) != 0 && (v5 = a1[93], v5 == ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 856, 0)) )
    {
      v4 = 1;
    }
    else if ( (v2 & 4) != 0 && (v6 = a1[94], v6 == ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 864, 0)) )
    {
      v4 = 2;
    }
    else
    {
      if ( (v2 & 8) == 0 )
      {
        LODWORD(v4) = 0;
        return (unsigned int)v4;
      }
      v7 = a1[95];
      LODWORD(v4) = 0;
      if ( v7 != ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 872, 0) )
        return (unsigned int)v4;
      v4 = 3;
    }
  }
  set_debug_event_code(a2, 5);
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
  {
    if ( !(_BYTE)under_debugger )
      interr(3298);
    BUG();
  }
  *(_QWORD *)(a2 + 24) = a1[v4 + 92];
  *(_QWORD *)(a2 + 32) = -1;
  ptrace(PTRACE_POKEUSER, *(unsigned int *)(a2 + 4), 896, 0);
  LOBYTE(v4) = 1;
  return (unsigned int)v4;
}
// 158B40: using guessed type __int64 under_debugger;

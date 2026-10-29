/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22B00
// Address: 0x00022B00

//----- (00022B00) --------------------------------------------------------
char __cdecl sub_22B00(_DWORD *a1, _DWORD *a2)
{
  char v2; // al
  int v3; // esi
  int v4; // edi
  bool v5; // zf
  int v6; // esi
  int v7; // esi
  int v8; // esi
  char v10; // [esp+8h] [ebp-14h]

  v2 = ptrace(PTRACE_PEEKUSER, a2[1], 276, 0);
  v10 = v2;
  if ( (v2 & 1) == 0 || (v3 = a1[98], v4 = 0, v5 = v3 == ptrace(PTRACE_PEEKUSER, a2[1], 252, 0), v2 = v10, !v5) )
  {
    if ( (v2 & 2) == 0 || (v6 = a1[99], v4 = 1, v5 = v6 == ptrace(PTRACE_PEEKUSER, a2[1], 256, 0), v2 = v10, !v5) )
    {
      if ( (v2 & 4) == 0 || (v7 = a1[100], v4 = 2, v5 = v7 == ptrace(PTRACE_PEEKUSER, a2[1], 260, 0), v2 = v10, !v5) )
      {
        if ( (v2 & 8) == 0 )
          return 0;
        v8 = a1[101];
        v4 = 3;
        if ( v8 != ptrace(PTRACE_PEEKUSER, a2[1], 264, 0) )
          return 0;
      }
    }
  }
  set_debug_event_code(a2, 5);
  if ( (a2[4] & 0xFFFFFFF) != 5 )
  {
    if ( !(_BYTE)under_debugger )
      interr(3298);
    BUG();
  }
  a2[5] = a1[v4 + 98];
  a2[6] = -1;
  ptrace(PTRACE_POKEUSER, a2[1], 276, 0);
  return 1;
}
// 13E34C: using guessed type int under_debugger;

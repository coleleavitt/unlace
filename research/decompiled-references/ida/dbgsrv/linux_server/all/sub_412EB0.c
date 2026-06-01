/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412EB0
// Address: 0x0000000000412EB0

//----- (0000000000412EB0) ----------------------------------------------------
__int64 __fastcall sub_412EB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ebp
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax

  v3 = 0;
  v4 = ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 896, 0);
  while ( 1 )
  {
    if ( (v4 & (1 << v3)) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8 * v3 + 864);
      if ( v6 == ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 8 * v3 + 848, 0) )
        break;
    }
    if ( ++v3 == 4 )
      return 0;
  }
  sub_4787B0(a2, 5);
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    sub_40D920();
  v7 = *(unsigned int *)(a2 + 4);
  v8 = *(_QWORD *)(a1 + 8LL * (int)v3 + 864);
  *(_QWORD *)(a2 + 32) = -1;
  *(_QWORD *)(a2 + 24) = v8;
  ptrace(PTRACE_POKEUSER, v7, 896, 0);
  return 1;
}

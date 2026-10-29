/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E70
// Address: 0x0000000000044E70

//----- (0000000000044E70) ----------------------------------------------------
__int64 __fastcall sub_44E70(__int64 a1, _QWORD *a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  unsigned int v9; // r13d
  __int64 v10; // rax
  _OWORD v12[12]; // [rsp+0h] [rbp-118h] BYREF
  __int128 v13; // [rsp+C0h] [rbp-58h]
  __int64 v14; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v15; // [rsp+E0h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  *a2 = 0;
  v6 = 1;
  if ( a4 )
  {
    v13 = -1;
    memset(v12, 255, sizeof(v12));
    v14 = -1;
    v9 = -1;
    if ( ptrace(PTRACE_GETREGS, a3, 0, v12, a5, a6) )
      return v9;
    if ( *((_QWORD *)&v13 + 1) == a4 )
      return 2 * (unsigned int)(ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, a3, a2, 4099) == 0) - 1;
    if ( v14 == a4 )
    {
      if ( *(_DWORD *)(a1 + 796) == *(_DWORD *)(a1 + 800) )
        v10 = ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, a3, a2, 4099);
      else
        v10 = ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, a3, a2, 4100);
      if ( !v10 )
        return 1;
      return v9;
    }
  }
  return v6;
}

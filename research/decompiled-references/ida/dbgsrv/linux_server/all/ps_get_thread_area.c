/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_get_thread_area
// Address: 0x0000000000412A20

//----- (0000000000412A20) ----------------------------------------------------
__int64 __fastcall ps_get_thread_area(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _DWORD v8[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( ptrace(PTRACE_SYSCALL|PTRACE_PEEKTEXT, a2, a3, v8) >= 0 )
  {
    *a4 = v8[1];
    return 0;
  }
  if ( a3 == 25 )
  {
    v7 = 4099;
    goto LABEL_7;
  }
  result = 4;
  if ( a3 == 26 )
  {
    v7 = 4100;
LABEL_7:
    ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, (unsigned int)a2, a4, v7);
    return 1;
  }
  return result;
}

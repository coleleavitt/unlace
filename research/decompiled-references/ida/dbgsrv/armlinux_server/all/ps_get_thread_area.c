/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_get_thread_area
// Address: 0x000000000040ADE0

//----- (000000000040ADE0) ----------------------------------------------------
__int64 __fastcall ps_get_thread_area(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v5; // x0
  unsigned int v6; // w1
  _BYTE v8[4]; // [xsp+28h] [xbp-18h] BYREF
  int v9; // [xsp+2Ch] [xbp-14h]

  v5 = ptrace(PTRACE_GETFPXREGS|PTRACE_POKETEXT, a2, a3, v8, &_stack_chk_guard, 0);
  v6 = 1;
  if ( (v5 & 0x8000000000000000LL) == 0 )
  {
    v6 = 0;
    *a4 = v9;
  }
  return v6;
}

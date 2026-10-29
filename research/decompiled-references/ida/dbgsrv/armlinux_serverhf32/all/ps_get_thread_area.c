/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_get_thread_area
// Address: 0x000173D8

//----- (000173D8) --------------------------------------------------------
int __fastcall ps_get_thread_area(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r0
  int v6; // r3
  bool v7; // nf
  int result; // r0
  _BYTE v9[4]; // [sp+4h] [bp-14h] BYREF
  int v10; // [sp+8h] [bp-10h]

  v5 = ptrace(PTRACE_GETFPXREGS|PTRACE_POKETEXT, a2, a3, v9);
  v7 = v5 < 0;
  if ( v5 < 0 )
  {
    result = 1;
  }
  else
  {
    v6 = v10;
    result = 0;
  }
  if ( !v7 )
    *a4 = v6;
  return result;
}
// 173FE: variable 'v6' is possibly undefined

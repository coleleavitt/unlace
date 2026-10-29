/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F27C
// Address: 0x0006F27C

//----- (0006F27C) --------------------------------------------------------
int __fastcall sub_6F27C(int a1, char *a2, void *a3)
{
  if ( !a1 )
    return callui(23, a2, a3);
  if ( a1 < 1 )
    verror(a2, a3);
  callui(24, 2, a2);
  return 0;
}
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);

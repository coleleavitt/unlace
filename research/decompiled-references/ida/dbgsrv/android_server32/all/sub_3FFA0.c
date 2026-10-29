/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FFA0
// Address: 0x0003FFA0

//----- (0003FFA0) --------------------------------------------------------
int __fastcall sub_3FFA0(int a1, const char *a2, unsigned __int8 *a3, int a4, int a5)
{
  _DWORD v10[2]; // [sp+14h] [bp-Ch] BYREF

  callui(11, v10, callui);
  v10[1] = v10[0];
  v10[0] = &off_D9BC0;
  return call_idc_func(a1, a2, a3, a4, a5, (int)v10);
}
// D9BC0: using guessed type _UNKNOWN *off_D9BC0;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);

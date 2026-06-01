/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DEB4
// Address: 0x0003DEB4

//----- (0003DEB4) --------------------------------------------------------
int __fastcall sub_3DEB4(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, int a5)
{
  int v8; // r6
  _DWORD v11[2]; // [sp+14h] [bp-10h] BYREF

  callui(11, v11, a3);
  v8 = v11[0];
  v11[0] = &off_D0AA0;
  v11[1] = v8;
  return sub_4B150(a1, a2, a3, a4, a5, (int)v11);
}
// D0AA0: using guessed type _UNKNOWN *off_D0AA0;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);

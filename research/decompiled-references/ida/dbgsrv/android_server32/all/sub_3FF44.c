/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FF44
// Address: 0x0003FF44

//----- (0003FF44) --------------------------------------------------------
int __fastcall sub_3FF44(const char *a1, int a2, const char *a3, int a4)
{
  int v4; // r4
  _DWORD v6[2]; // [sp+4h] [bp-Ch] BYREF

  v4 = 0;
  if ( a3 )
  {
    v6[1] = a2;
    v6[0] = &off_D9BC0;
    return compile_idc_snippet(a1, a3, a4, (int)v6, 0);
  }
  return v4;
}
// D9BC0: using guessed type _UNKNOWN *off_D9BC0;

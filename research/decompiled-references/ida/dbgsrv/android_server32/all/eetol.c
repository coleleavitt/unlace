/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol
// Address: 0x0007782C

//----- (0007782C) --------------------------------------------------------
int __fastcall eetol(_DWORD *a1, unsigned __int16 *a2, int a3)
{
  int result; // r0
  unsigned int v5[3]; // [sp+4h] [bp-10h] BYREF

  result = sub_77864(v5, a2, 31, a3);
  if ( result == 1 )
    *a1 = v5[0];
  return result;
}

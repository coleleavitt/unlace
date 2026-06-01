/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol64
// Address: 0x000779EC

//----- (000779EC) --------------------------------------------------------
int __fastcall eetol64(_DWORD *a1, unsigned __int16 *a2, int a3)
{
  int result; // r0
  unsigned int v5; // r2
  unsigned int v6[3]; // [sp+4h] [bp-10h] BYREF

  result = sub_77864(v6, a2, 63, a3);
  if ( result == 1 )
  {
    v5 = v6[1];
    *a1 = v6[0];
    a1[1] = v5;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E0A6
// Address: 0x0004E0A6

//----- (0004E0A6) --------------------------------------------------------
int __fastcall sub_4E0A6(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r2

  for ( result = a1[8]; result; result = a1[8] )
  {
    v3 = result - 1;
    v4 = a1[7] + 28 * (result - 1);
    *a1 = *(_DWORD *)(v4 + 12);
    a1[1] = *(_DWORD *)(v4 + 16);
    v5 = *(_DWORD *)(v4 + 24);
    a1[8] = v3;
    a1[10] = v5;
    sub_1B3BC((char **)v4);
  }
  return result;
}

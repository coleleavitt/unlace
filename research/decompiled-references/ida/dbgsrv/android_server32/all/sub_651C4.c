/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_651C4
// Address: 0x000651C4

//----- (000651C4) --------------------------------------------------------
int __fastcall sub_651C4(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r0
  int result; // r0

  v4 = a3[4] & 0xFFFFFFF;
  if ( v4 == 5 )
    goto LABEL_4;
  if ( v4 == 7 )
  {
    result = 1;
    if ( a3[7] == a4 )
      return result;
LABEL_4:
    result = 1;
    if ( a3[2] == a4 )
      return result;
  }
  return 0;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38B04
// Address: 0x00038B04

//----- (00038B04) --------------------------------------------------------
int __fastcall sub_38B04(FILE *a1, int a2)
{
  int v2; // r1
  int result; // r0

  v2 = qfputc(a2, a1);
  result = 0;
  if ( v2 == -1 )
    return -1;
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C5AD0
// Address: 0x080C5AD0

//----- (080C5AD0) --------------------------------------------------------
void sub_80C5AD0()
{
  int v0; // [esp-14h] [ebp-18h]
  int v1; // [esp-10h] [ebp-14h]
  int v2; // [esp-Ch] [ebp-10h]

  if ( !byte_811F8A1 )
    sub_80CFF40(3295, v0, v1, v2);
  JUMPOUT(0x8051F9C);
}
// 80C5AE8: control flows out of bounds to 8051F9C
// 80C5AF6: variable 'v0' is possibly undefined
// 80C5AF6: variable 'v1' is possibly undefined
// 80C5AF6: variable 'v2' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;

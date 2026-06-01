/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BA58
// Address: 0x0004BA58

//----- (0004BA58) --------------------------------------------------------
void __fastcall sub_4BA58(int a1, int a2, int *a3)
{
  int v3; // r7
  int v4; // r0

  a3[16] = v3;
  v4 = a3[12] + v3;
  if ( v4 < 0 )
    sub_4D048();
  if ( v4 >= (unsigned int)a3[4] )
    sub_4D048();
  sub_4AA10(a3 + 3, (unsigned __int8 *)(a3[3] + 24 * v4));
  JUMPOUT(0x4B8C0);
}
// 4BA80: control flows out of bounds to 4B8C0
// 4BA58: variable 'v3' is possibly undefined

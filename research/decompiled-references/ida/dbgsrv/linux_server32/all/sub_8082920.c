/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8082920
// Address: 0x08082920

//----- (08082920) --------------------------------------------------------
void sub_8082920()
{
  int v0; // [esp-14h] [ebp-18h]
  int v1; // [esp-10h] [ebp-14h]
  int v2; // [esp-Ch] [ebp-10h]

  if ( !byte_811F8A1 )
    sub_80CFF40(1834, v0, v1, v2);
  JUMPOUT(0x804DDA5);
}
// 8082938: control flows out of bounds to 804DDA5
// 8082946: variable 'v0' is possibly undefined
// 8082946: variable 'v1' is possibly undefined
// 8082946: variable 'v2' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;

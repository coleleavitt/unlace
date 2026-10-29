/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8068EB0
// Address: 0x08068EB0

//----- (08068EB0) --------------------------------------------------------
void sub_8068EB0()
{
  int v0; // [esp-14h] [ebp-18h]
  int v1; // [esp-10h] [ebp-14h]
  int v2; // [esp-Ch] [ebp-10h]

  if ( !byte_811F8A1 )
    sub_80CFF40(20099, v0, v1, v2);
  JUMPOUT(0x804CAF2);
}
// 8068EC8: control flows out of bounds to 804CAF2
// 8068ED6: variable 'v0' is possibly undefined
// 8068ED6: variable 'v1' is possibly undefined
// 8068ED6: variable 'v2' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_648B8
// Address: 0x00000000000648B8

//----- (00000000000648B8) ----------------------------------------------------
__int64 __fastcall sub_648B8(__int64 a1)
{
  char *v1; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(char **)(a1 + 40);
  else
    v1 = &byte_F154B;
  return sub_6467C(a1, v1);
}
// F154B: using guessed type char byte_F154B;

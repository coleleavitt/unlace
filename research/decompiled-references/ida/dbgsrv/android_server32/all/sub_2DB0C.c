/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DB0C
// Address: 0x0002DB0C

//----- (0002DB0C) --------------------------------------------------------
unsigned int __fastcall sub_2DB0C(int a1, int a2, int a3)
{
  char *v5; // r0
  unsigned int result; // r0

  v5 = (char *)sub_321FC(a2, a3);
  sub_1B09C(a1, v5);
  result = *(_DWORD *)(a1 + 4);
  if ( result <= 1 )
    return sub_1DA58(a1, "%X", a3);
  return result;
}

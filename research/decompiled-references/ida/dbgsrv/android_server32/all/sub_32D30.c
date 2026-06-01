/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32D30
// Address: 0x00032D30

//----- (00032D30) --------------------------------------------------------
unsigned int __fastcall sub_32D30(int a1, int a2, int a3)
{
  char *v5; // r0
  unsigned int result; // r0

  v5 = (char *)sub_329BC(a2, a3);
  sub_1B09C(a1, v5);
  result = *(_DWORD *)(a1 + 4);
  if ( result <= 1 )
    return sub_1DA58(a1, "%08X", a3);
  return result;
}

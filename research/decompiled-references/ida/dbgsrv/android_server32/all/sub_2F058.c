/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F058
// Address: 0x0002F058

//----- (0002F058) --------------------------------------------------------
unsigned int __fastcall sub_2F058(int a1, int a2)
{
  char *v4; // r0
  unsigned int result; // r0

  v4 = (char *)sub_2E6F0(a2);
  sub_1B09C(a1, v4);
  result = *(_DWORD *)(a1 + 4);
  if ( result <= 1 )
    return sub_1DA58(a1, "Unknown CPU [%u]", *(unsigned __int16 *)(a2 + 406));
  return result;
}

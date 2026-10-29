/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_684C4
// Address: 0x000684C4

//----- (000684C4) --------------------------------------------------------
int *__fastcall sub_684C4(int a1, int a2)
{
  int *result; // r0

  *(_DWORD *)(a1 + 44) = a2;
  result = _errno_location();
  *(_DWORD *)(a1 + 48) = *result;
  return result;
}

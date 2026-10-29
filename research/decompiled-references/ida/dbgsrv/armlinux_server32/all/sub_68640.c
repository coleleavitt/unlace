/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68640
// Address: 0x00068640

//----- (00068640) --------------------------------------------------------
int *__fastcall sub_68640(int a1, int a2)
{
  int *result; // r0

  *(_DWORD *)(a1 + 44) = a2;
  result = _errno_location();
  *(_DWORD *)(a1 + 48) = *result;
  return result;
}

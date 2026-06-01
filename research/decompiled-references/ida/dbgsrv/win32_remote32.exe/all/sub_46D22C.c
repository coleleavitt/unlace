/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D22C
// Address: 0x0046D22C

//----- (0046D22C) --------------------------------------------------------
int __cdecl sub_46D22C(_DWORD *a1, SIZE_T dwBytes)
{
  LPVOID v2; // eax

  v2 = sub_479531(dwBytes);
  *a1 = v2;
  return v2 != nullptr ? 0 : 12;
}

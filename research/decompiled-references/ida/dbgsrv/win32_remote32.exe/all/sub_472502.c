/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472502
// Address: 0x00472502

//----- (00472502) --------------------------------------------------------
int __cdecl sub_472502(_DWORD *a1, SIZE_T a2)
{
  LPVOID v2; // eax

  v2 = sub_46D25F(a2);
  *a1 = v2;
  return v2 != nullptr ? 0 : 12;
}

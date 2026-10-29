/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82F10
// Address: 0x00082F10

//----- (00082F10) --------------------------------------------------------
void __fastcall sub_82F10(int *a1, size_t a2, int a3)
{
  unsigned int v3; // r5

  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 > 0x3FFFFFFC )
    sub_83AE4("basic_string::resize");
  if ( a2 > v3 )
  {
    sub_82E7C(a1, a2 - v3, a3);
  }
  else if ( a2 < v3 )
  {
    sub_822F4(a1, a2, v3 - a2, 0);
  }
}

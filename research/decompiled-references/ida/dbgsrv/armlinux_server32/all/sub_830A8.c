/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_830A8
// Address: 0x000830A8

//----- (000830A8) --------------------------------------------------------
void __fastcall sub_830A8(int *a1, size_t a2, int a3)
{
  unsigned int v3; // r5

  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 > 0x3FFFFFFC )
    sub_83DCC("basic_string::resize");
  if ( a2 > v3 )
  {
    sub_83014(a1, a2 - v3, a3);
  }
  else if ( a2 < v3 )
  {
    sub_82490(a1, a2, v3 - a2, 0);
  }
}

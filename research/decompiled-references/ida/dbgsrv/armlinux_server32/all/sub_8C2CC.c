/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C2CC
// Address: 0x0008C2CC

//----- (0008C2CC) --------------------------------------------------------
int __fastcall sub_8C2CC(_DWORD *a1)
{
  if ( (_DWORD *)*a1 == a1 + 2 )
    return 15;
  else
    return a1[2];
}

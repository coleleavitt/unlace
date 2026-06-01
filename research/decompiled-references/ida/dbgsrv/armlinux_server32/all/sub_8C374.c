/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C374
// Address: 0x0008C374

//----- (0008C374) --------------------------------------------------------
void __fastcall sub_8C374(_DWORD *a1)
{
  unsigned int v1; // r3

  if ( (_DWORD *)*a1 == a1 + 2 )
    v1 = 15;
  else
    v1 = a1[2];
  if ( a1[1] < v1 )
    sub_8C2DC(a1, 0);
}

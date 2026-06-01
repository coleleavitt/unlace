/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ED14
// Address: 0x0003ED14

//----- (0003ED14) --------------------------------------------------------
int __fastcall sub_3ED14(int result, int a2)
{
  int v2; // r2
  unsigned int v3; // r1

  v2 = *(_DWORD *)(result + 68);
  v3 = a2 + *(_DWORD *)(result + 60);
  *(_DWORD *)(result + 60) = v3;
  if ( v3 >= *(_DWORD *)(v2 + 4) )
    sub_16FE4("interr: bad idc move_ip");
  return result;
}

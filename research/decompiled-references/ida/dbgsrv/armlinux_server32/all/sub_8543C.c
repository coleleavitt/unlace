/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8543C
// Address: 0x0008543C

//----- (0008543C) --------------------------------------------------------
int __fastcall sub_8543C(_DWORD *a1, int a2)
{
  unsigned __int8 *v2; // r3

  v2 = (unsigned __int8 *)a1[3];
  if ( (unsigned int)*v2 - 73 > 1 )
    return 0;
  a1[3] = v2 + 1;
  return sub_85378(a1);
}

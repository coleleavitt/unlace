/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D5E0
// Address: 0x0006D5E0

//----- (0006D5E0) --------------------------------------------------------
int __fastcall sub_6D5E0(_DWORD *a1, int a2)
{
  unsigned int v2; // r2
  unsigned __int8 *v3; // r3
  int v4; // r4

  v2 = a1[7];
  if ( !v2 )
    return a1[8];
  v3 = (unsigned __int8 *)a1[6];
  v4 = 0;
  while ( *v3 != a2 )
  {
    v3 += 8;
    if ( ++v4 >= v2 )
      return a1[8];
  }
  return *((_DWORD *)v3 + 1);
}

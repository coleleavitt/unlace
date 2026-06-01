/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084AD0
// Address: 0x08084AD0

//----- (08084AD0) --------------------------------------------------------
int __cdecl sub_8084AD0(_DWORD *a1, int a2)
{
  int v2; // eax
  int v4; // [esp-18h] [ebp-18h]
  int v5; // [esp-14h] [ebp-14h]
  int v6; // [esp-10h] [ebp-10h]

  v2 = a2 + a1[12];
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(287, v4, v5, v6);
    BUG();
  }
  return a1[3] + 20 * v2;
}
// 8084B18: variable 'v4' is possibly undefined
// 8084B18: variable 'v5' is possibly undefined
// 8084B18: variable 'v6' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;

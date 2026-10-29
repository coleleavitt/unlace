/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64F04
// Address: 0x00064F04

//----- (00064F04) --------------------------------------------------------
int __fastcall sub_64F04(_DWORD *a1)
{
  int (*v3)(); // r2
  int v4; // r0
  int v5; // r3

  if ( (int)a1[114] >= 0 )
    return a1[114];
  v3 = *(int (**)())(*a1 + 308);
  if ( v3 == sub_150C8 || (v4 = v3(), v5 = v4, v4 < 0) )
  {
    a1[114] = 0;
    return 0;
  }
  else
  {
    if ( v4 >= 16 )
      v5 = 16;
    a1[114] = v5;
    return v5;
  }
}

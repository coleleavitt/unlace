/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8353C
// Address: 0x0008353C

//----- (0008353C) --------------------------------------------------------
int __fastcall sub_8353C(int a1)
{
  int v2; // r2
  int result; // r0
  int v4; // r2
  int *v5; // r1
  int v6; // r3
  int v7; // r4

  v2 = *(_DWORD *)(a1 + 4);
  result = 0;
  v4 = 8 * v2;
  if ( v4 )
  {
    v5 = *(int **)a1;
    result = 0;
    do
    {
      v6 = *v5;
      v7 = v5[1];
      v5 += 2;
      result = v7 + result - v6;
      v4 -= 8;
    }
    while ( v4 );
  }
  return result;
}

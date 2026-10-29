/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BE0
// Address: 0x00048BE0

//----- (00048BE0) --------------------------------------------------------
int __fastcall sub_48BE0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v8; // r0
  unsigned __int8 *v9; // r7
  int v10; // r6

  v5 = a2;
  if ( a4 )
  {
    v8 = a2 - a3 + a5;
    if ( v8 >= 0 && v8 < a5 )
    {
      v9 = (unsigned __int8 *)(a4 + 24 * v8);
      v10 = a1 + 12;
      do
      {
        sub_3DC40(v10, v9);
        v9 += 24;
        ++v5;
      }
      while ( a3 != v5 );
    }
    return a3;
  }
  return v5;
}

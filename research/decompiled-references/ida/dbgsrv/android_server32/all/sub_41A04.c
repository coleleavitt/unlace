/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A04
// Address: 0x00041A04

//----- (00041A04) --------------------------------------------------------
signed int __fastcall sub_41A04(const char *a1, char *a2)
{
  signed int result; // r0
  char v5; // r1
  signed int v6; // r2
  int v7; // r3

  result = strlen(a1);
  v5 = 0;
  if ( result >= 1 )
  {
    v5 = 0;
    if ( a1[result - 1] == 4 )
    {
      do
      {
        v6 = result;
        if ( result < 2 )
          break;
        v7 = (unsigned __int8)a1[result-- - 2];
      }
      while ( v7 == 4 );
      result = v6 - 1;
      v5 = 1;
    }
  }
  if ( a2 )
    *a2 = v5;
  return result;
}

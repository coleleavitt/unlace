/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75404
// Address: 0x00075404

//----- (00075404) --------------------------------------------------------
unsigned __int64 __fastcall sub_75404(unsigned __int8 *a1, int a2, _DWORD *a3)
{
  int v4; // r4
  unsigned __int8 *v5; // r10
  unsigned __int64 v7; // r6
  int v8; // r9
  int v9; // r0
  int v10; // t1

  v4 = *a1;
  v5 = a1;
  if ( (v4 & 0x80) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = a2 >> 31;
    do
    {
      if ( !isalnum(v4) )
        break;
      if ( v4 > 57 )
      {
        if ( v4 > 96 )
          v4 -= 32;
        v4 -= 7;
      }
      v9 = v4 - 48;
      if ( v4 - 48 >= a2 )
        break;
      v10 = *++v5;
      v4 = v10;
      v7 = v7 * __PAIR64__(v8, a2) + v9;
    }
    while ( (v10 & 0x80) == 0 );
  }
  if ( a3 )
    *a3 = v5;
  return v7;
}

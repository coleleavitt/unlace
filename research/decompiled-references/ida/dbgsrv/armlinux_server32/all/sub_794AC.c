/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_794AC
// Address: 0x000794AC

//----- (000794AC) --------------------------------------------------------
int __fastcall sub_794AC(int result, int a2)
{
  _BYTE *v2; // r5
  _BYTE *v3; // r1
  _BYTE *v4; // r3
  char v5; // r2
  char v6; // t1
  char v7; // t1

  if ( a2 > 1 )
  {
    v2 = (_BYTE *)(result + ((unsigned int)(a2 - 2) >> 1));
    v3 = (_BYTE *)(a2 + result);
    v4 = (_BYTE *)(result - 1);
    do
    {
      v6 = *++v4;
      v5 = v6;
      v7 = *--v3;
      *v4 = v7;
      *v3 = v5;
    }
    while ( v4 != v2 );
  }
  return result;
}

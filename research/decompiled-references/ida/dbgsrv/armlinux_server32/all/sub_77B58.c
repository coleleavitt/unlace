/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77B58
// Address: 0x00077B58

//----- (00077B58) --------------------------------------------------------
int __fastcall sub_77B58(FILE *a1, _BYTE *a2, signed int a3, int a4)
{
  char *v7; // r1
  _BYTE *v8; // r2
  char v9; // t1
  _BYTE *v11; // r3
  char *v12; // r1
  char v13; // t1
  _BYTE ptr[32]; // [sp+4h] [bp-24h] BYREF

  if ( a3 != sub_77788(a1, ptr, a3) )
    return -1;
  if ( a4 )
  {
    v11 = &a2[a3];
    if ( a3 > 0 )
    {
      v12 = ptr;
      do
      {
        v13 = *v12++;
        *--v11 = v13;
      }
      while ( a2 != v11 );
    }
  }
  else if ( a3 > 0 )
  {
    v7 = ptr;
    v8 = &a2[a3];
    do
    {
      v9 = *v7++;
      *a2++ = v9;
    }
    while ( a2 != v8 );
  }
  return 0;
}

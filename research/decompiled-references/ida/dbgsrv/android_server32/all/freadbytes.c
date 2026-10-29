/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: freadbytes
// Address: 0x0007E528

//----- (0007E528) --------------------------------------------------------
int __fastcall freadbytes(FILE *a1, char *a2, signed int a3, int a4)
{
  signed int v5; // r4
  size_t v7; // r1
  int result; // r0
  char *v9; // r2
  _BYTE v10[32]; // [sp+4h] [bp-24h] BYREF

  v5 = a3;
  v7 = qfread(a1, v10, a3);
  result = 0;
  if ( v7 != v5 )
    return -1;
  if ( a4 )
  {
    if ( v5 >= 1 )
    {
      v9 = v10;
      do
        a2[--v5] = *v9++;
      while ( v5 );
    }
  }
  else if ( v5 >= 1 )
  {
    qmemcpy(a2, v10, v5);
    return 0;
  }
  return result;
}

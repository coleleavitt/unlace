/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fwritebytes
// Address: 0x0007E594

//----- (0007E594) --------------------------------------------------------
int __fastcall fwritebytes(FILE *a1, _BYTE *a2, size_t n, int a4)
{
  int v5; // r2
  _BYTE *v6; // r1
  _BYTE *v7; // r2
  size_t v8; // r3
  _BYTE *v9; // r2
  size_t v10; // r3
  int v11; // r0
  _BYTE v13[32]; // [sp+0h] [bp-24h] BYREF

  v5 = -1;
  if ( n <= 0x20 )
  {
    if ( a4 )
    {
      if ( n )
      {
        v6 = a2 - 1;
        v7 = v13;
        v8 = n;
        do
          *v7++ = v6[v8--];
        while ( v8 );
      }
    }
    else if ( n )
    {
      v9 = v13;
      v10 = n;
      do
      {
        *v9 = *a2;
        --v10;
        ++v9;
        ++a2;
      }
      while ( v10 );
    }
    v11 = qfwrite(a1, v13, n);
    v5 = -1;
    if ( v11 == n )
      return 0;
  }
  return v5;
}

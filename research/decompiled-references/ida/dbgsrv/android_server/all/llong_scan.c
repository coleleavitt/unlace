/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: llong_scan
// Address: 0x00000000000BAC64

//----- (00000000000BAC64) ----------------------------------------------------
__int64 __fastcall llong_scan(char *a1, signed int a2, _QWORD *a3)
{
  int v3; // w8
  char *v5; // x20
  __int64 v7; // x21
  __int64 v8; // x24
  unsigned int v9; // w23
  unsigned int v10; // w8
  int v11; // t1

  v3 = *a1;
  v5 = a1;
  if ( v3 < 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = a2;
    do
    {
      v9 = (unsigned __int8)v3;
      if ( !isalnum((unsigned __int8)v3) )
        break;
      if ( v9 >= 0x3A )
      {
        v10 = v9 - 32;
        if ( v9 <= 0x60 )
          v10 = v9;
        v9 = v10 - 7;
      }
      if ( (int)(v9 - 48) >= a2 )
        break;
      v11 = *++v5;
      LOBYTE(v3) = v11;
      v7 = v7 * v8 + (int)(v9 - 48);
    }
    while ( (v11 & 0x80000000) == 0 );
  }
  if ( a3 )
    *a3 = v5;
  return v7;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16728
// Address: 0x00016728

//----- (00016728) --------------------------------------------------------
_DWORD *__fastcall sub_16728(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  _DWORD *v5; // r3
  int v6; // r6
  int i; // r4
  void *v8; // r0
  char *v9; // r3

  v2 = (void *)a1[266];
  *a1 = &off_CF49C;
  if ( v2 )
  {
    a1[267] = 0;
    sub_77E08(v2);
  }
  v3 = (void *)a1[263];
  if ( v3 )
  {
    a1[264] = 0;
    sub_77E08(v3);
  }
  v4 = (void *)a1[260];
  if ( v4 )
  {
    a1[261] = 0;
    sub_77E08(v4);
  }
  v5 = (_DWORD *)a1[257];
  if ( v5 )
  {
    v6 = a1[258];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (void *)v5[3 * i];
        v9 = (char *)&v5[3 * i];
        if ( v8 )
        {
          *((_DWORD *)v9 + 1) = 0;
          sub_77E08(v8);
        }
        v5 = (_DWORD *)a1[257];
      }
    }
    a1[258] = 0;
    sub_77E08(v5);
  }
  return a1;
}
// CF49C: using guessed type _UNKNOWN *;

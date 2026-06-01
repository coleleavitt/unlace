/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22F38
// Address: 0x00022F38

//----- (00022F38) --------------------------------------------------------
_DWORD *__fastcall sub_22F38(_DWORD *a1)
{
  char *v2; // r0
  int v3; // r7
  int i; // r5
  char *v5; // r4
  void *v6; // r0
  void *v7; // r0

  v2 = (char *)a1[7];
  *a1 = &off_CF618;
  if ( v2 )
  {
    v3 = a1[8];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[68 * i];
        v6 = *((void **)v5 + 3);
        if ( v6 )
        {
          *((_DWORD *)v5 + 4) = 0;
          sub_77E08(v6);
        }
        v7 = *(void **)v5;
        if ( *(_DWORD *)v5 )
        {
          *((_DWORD *)v5 + 1) = 0;
          sub_77E08(v7);
        }
        v2 = (char *)a1[7];
      }
    }
    a1[8] = 0;
    sub_77E08(v2);
  }
  return a1;
}
// CF618: using guessed type _UNKNOWN *;

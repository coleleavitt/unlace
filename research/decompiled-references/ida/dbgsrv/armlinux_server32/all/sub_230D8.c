/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_230D8
// Address: 0x000230D8

//----- (000230D8) --------------------------------------------------------
_DWORD *__fastcall sub_230D8(_DWORD *a1)
{
  char *v2; // r0
  int v3; // r7
  int i; // r5
  char *v5; // r4
  void *v6; // r0
  void *v7; // r0

  v2 = (char *)a1[7];
  *a1 = &off_D0618;
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
          sub_77F70(v6);
        }
        v7 = *(void **)v5;
        if ( *(_DWORD *)v5 )
        {
          *((_DWORD *)v5 + 1) = 0;
          sub_77F70(v7);
        }
        v2 = (char *)a1[7];
      }
    }
    a1[8] = 0;
    sub_77F70(v2);
  }
  return a1;
}
// D0618: using guessed type _UNKNOWN *;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E3E0
// Address: 0x0004E3E0

//----- (0004E3E0) --------------------------------------------------------
int __fastcall sub_4E3E0(_DWORD *a1, int a2)
{
  int v4; // r5
  FILE **v5; // r6
  unsigned int v6; // r1
  unsigned int v7; // r6
  _BYTE *v8; // r0

  v4 = qgetline(a1, *(FILE **)(a2 + 140));
  v5 = (FILE **)(a2 + 140);
  if ( v4 >= 1 && a1[1] >= 4u && !strncmp((const char *)*a1, &byte_AE2BB, 3u) && v4 + 2 >= qftell(*v5) )
  {
    v6 = a1[1];
    v4 = v6 - 1;
    if ( v6 >= 2 )
    {
      v7 = 0;
      if ( (unsigned int)v4 >= 4 )
      {
        v7 = v6 - 4;
        memmove((void *)*a1, (const void *)(*a1 + 3), v6 - 4);
      }
      if ( a1[2] >= v7 + 1 )
      {
        v8 = (_BYTE *)*a1;
      }
      else
      {
        v8 = qvector_reserve((int)a1, (void *)*a1, v7 + 1, 1u);
        *a1 = v8;
      }
      a1[1] = v7 + 1;
      v8[v7] = 0;
      v6 = a1[1];
      v4 = v6 - 1;
    }
    if ( !v6 )
      return 0;
  }
  return v4;
}
// AE2BB: using guessed type char byte_AE2BB;

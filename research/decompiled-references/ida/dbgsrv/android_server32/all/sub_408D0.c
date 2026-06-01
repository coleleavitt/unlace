/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408D0
// Address: 0x000408D0

//----- (000408D0) --------------------------------------------------------
char *__fastcall sub_408D0(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r3
  int v4; // r4
  unsigned int *v5; // r5
  int *v6; // r4
  unsigned int v7; // r5
  int *v8; // r6
  unsigned int v9; // r3
  char *v10; // r2
  unsigned int *v11; // r0
  unsigned int *v12; // r0
  int v13; // r5
  bool v14; // cc

  if ( a3 )
  {
    v3 = a1[15];
    v4 = 0;
    if ( v3 )
    {
      v5 = (unsigned int *)a1[14];
      if ( *v5 <= a2 )
      {
        v6 = (int *)(v5 + 1);
        v7 = 0;
        do
        {
          v8 = v6;
          v6 += 2;
          ++v7;
        }
        while ( v7 < v3 && v8[1] <= a2 );
        v4 = *v8;
      }
    }
    *a3 = v4;
  }
  v9 = a1[12];
  v10 = nullptr;
  if ( v9 )
  {
    v11 = (unsigned int *)a1[11];
    if ( *v11 <= a2 )
    {
      v12 = v11 + 4;
      v13 = 0;
      do
      {
        v10 = &byte_B3CBE;
        if ( *(v12 - 2) )
          v10 = (char *)*(v12 - 3);
        if ( ++v13 >= v9 )
          break;
        v14 = *v12 > a2;
        v12 += 4;
      }
      while ( !v14 );
    }
  }
  return v10;
}
// B3CBE: using guessed type char byte_B3CBE;

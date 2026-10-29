/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_277B4
// Address: 0x000277B4

//----- (000277B4) --------------------------------------------------------
int **__fastcall sub_277B4(int a1, int *a2)
{
  int *v3; // r1
  int **v4; // r5
  _DWORD *v5; // r1
  int v6; // r2
  void *v7; // r0

  v3 = (int *)a2[1];
  if ( v3 )
  {
    do
    {
      v4 = (int **)v3;
      v3 = (int *)*v3;
    }
    while ( v3 );
  }
  else
  {
    v5 = a2 + 2;
    v4 = (int **)a2[2];
    if ( *v4 != a2 )
    {
      do
      {
        v6 = *v5;
        v5 = (_DWORD *)(*v5 + 8);
        v4 = *(int ***)(v6 + 8);
      }
      while ( *v4 != (int *)v6 );
    }
  }
  if ( *(int **)a1 == a2 )
    *(_DWORD *)a1 = v4;
  --*(_DWORD *)(a1 + 8);
  sub_27512(*(int **)(a1 + 4), a2);
  v7 = (void *)a2[13];
  if ( v7 )
  {
    a2[14] = 0;
    qfree(v7);
    a2[15] = 0;
    a2[13] = 0;
  }
  operator delete(a2);
  return v4;
}

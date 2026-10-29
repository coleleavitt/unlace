/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63448
// Address: 0x00063448

//----- (00063448) --------------------------------------------------------
int **__fastcall sub_63448(int a1, int *a2)
{
  int *v3; // r1
  int **v4; // r5
  _DWORD *v5; // r1
  int v6; // r2
  void *v7; // r0
  void *v8; // r0

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
  v7 = (void *)a2[7];
  if ( v7 )
  {
    a2[8] = 0;
    qfree(v7);
    a2[9] = 0;
    a2[7] = 0;
  }
  v8 = (void *)a2[4];
  if ( v8 )
  {
    a2[5] = 0;
    qfree(v8);
    a2[6] = 0;
    a2[4] = 0;
  }
  operator delete(a2);
  return v4;
}

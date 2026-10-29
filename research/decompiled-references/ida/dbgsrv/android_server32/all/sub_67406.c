/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67406
// Address: 0x00067406

//----- (00067406) --------------------------------------------------------
int **__fastcall sub_67406(int a1, int *a2)
{
  int *v3; // r1
  int **v4; // r5
  _DWORD *v5; // r1
  int v6; // r2
  void **v7; // r0
  int v8; // r6
  int v9; // r6
  int v10; // r7

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
  v7 = (void **)a2[5];
  if ( v7 )
  {
    v8 = a2[6];
    if ( v8 )
    {
      sub_5F79C(v7);
      if ( v8 != 1 )
      {
        v9 = v8 - 1;
        v10 = 24;
        do
        {
          sub_5F79C((void **)(a2[5] + v10));
          v10 += 24;
          --v9;
        }
        while ( v9 );
      }
      v7 = (void **)a2[5];
    }
    a2[6] = 0;
    qfree(v7);
    a2[7] = 0;
    a2[5] = 0;
  }
  operator delete(a2);
  return v4;
}

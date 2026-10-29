/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DD28
// Address: 0x0004DD28

//----- (0004DD28) --------------------------------------------------------
_DWORD *__fastcall sub_4DD28(int a1, int a2)
{
  _DWORD *v3; // r1
  _DWORD *v4; // r5
  _DWORD *v5; // r1
  int v6; // r2
  void *v7; // r0

  v3 = *(_DWORD **)(a2 + 4);
  if ( v3 )
  {
    do
    {
      v4 = v3;
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  else
  {
    v5 = (_DWORD *)(a2 + 8);
    v4 = *(_DWORD **)(a2 + 8);
    if ( *v4 != a2 )
    {
      do
      {
        v6 = *v5;
        v5 = (_DWORD *)(*v5 + 8);
        v4 = *(_DWORD **)(v6 + 8);
      }
      while ( *v4 != v6 );
    }
  }
  if ( *(_DWORD *)a1 == a2 )
    *(_DWORD *)a1 = v4;
  --*(_DWORD *)(a1 + 8);
  sub_27512(*(int **)(a1 + 4), (int *)a2);
  free_idcv((unsigned __int8 *)(a2 + 32));
  v7 = *(void **)(a2 + 16);
  if ( v7 )
  {
    *(_DWORD *)(a2 + 20) = 0;
    qfree(v7);
    *(_DWORD *)(a2 + 24) = 0;
    *(_DWORD *)(a2 + 16) = 0;
  }
  operator delete((void *)a2);
  return v4;
}

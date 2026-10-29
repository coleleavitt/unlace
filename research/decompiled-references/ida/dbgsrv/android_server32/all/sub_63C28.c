/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63C28
// Address: 0x00063C28

//----- (00063C28) --------------------------------------------------------
int *__fastcall sub_63C28(int *a1, int a2)
{
  int v4; // r0
  void *v5; // r0
  int v6; // r1
  size_t v7; // r6
  void *v8; // r0

  if ( a1 != (int *)a2 )
  {
    v4 = *a1;
    if ( *(int *)a2 < -1 )
    {
      if ( v4 >= -1 )
      {
        v5 = (void *)a1[2];
        if ( v5 )
        {
          a1[3] = 0;
          qfree(v5);
          a1[4] = 0;
          a1[2] = 0;
        }
      }
      v6 = *(_DWORD *)(a2 + 12);
      a1[2] = *(_DWORD *)(a2 + 8);
      a1[3] = v6;
    }
    else if ( v4 < -1 )
    {
      a1[2] = 0;
      a1[3] = 0;
      a1[4] = 0;
      v7 = *(_DWORD *)(a2 + 12);
      if ( v7 )
      {
        v8 = qalloc_or_throw(*(_DWORD *)(a2 + 12));
        a1[2] = (int)v8;
        a1[4] = v7;
        qmemcpy(v8, *(const void **)(a2 + 8), v7);
        a1[3] = v7;
      }
    }
    else
    {
      sub_63C9C((int)(a1 + 2), a2 + 8);
    }
    *a1 = *(_DWORD *)a2;
  }
  return a1;
}

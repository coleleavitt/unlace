/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433EF0
// Address: 0x00433EF0

//----- (00433EF0) --------------------------------------------------------
int __stdcall sub_433EF0(int *a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // ecx

  result = sub_45D490(a2, (int)a1, *(_DWORD *)(a2 + 152));
  v3 = result;
  if ( result > 0 && ((a1[1] - 1) & (unsigned int)-(a1[1] != 0)) >= 3 )
  {
    if ( sub_467F80(*a1, &dword_48D2C4, 3u) )
      return v3;
    v4 = sub_45D030(a2, v3, *(unsigned int **)(a2 + 152));
    if ( __SPAIR64__(v5, v4) > v3 + 2 )
    {
      return v3;
    }
    else
    {
      v6 = 0;
      v7 = a1[1] != 0 ? a1[1] - 1 : 0;
      if ( v7 )
      {
        if ( v7 > 3 )
        {
          v6 = v7 - 3;
          sub_464310(*a1, *a1 + 3, v7 - 3);
        }
        if ( v6 + 1 > a1[2] )
          *a1 = (int)sub_453B00((int)a1, (void *)*a1, v6 + 1, 1u);
        a1[1] = v6 + 1;
        *(_BYTE *)(v6 + *a1) = 0;
      }
      return a1[1] != 0 ? a1[1] - 1 : 0;
    }
  }
  return result;
}
// 433F56: variable 'v5' is possibly undefined
// 48D2C4: using guessed type int dword_48D2C4;

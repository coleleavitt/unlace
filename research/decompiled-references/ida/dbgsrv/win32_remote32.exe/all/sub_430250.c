/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430250
// Address: 0x00430250

//----- (00430250) --------------------------------------------------------
_DWORD *__cdecl sub_430250(int a1, int a2)
{
  _DWORD *result; // eax
  int *v3; // edi
  int v4; // ebx
  void *v5; // eax

  result = *(_DWORD **)(a2 + 4);
  *result = 0;
  v3 = *(int **)a2;
  if ( *(_DWORD *)a2 )
  {
    do
    {
      v4 = *v3;
      v5 = (void *)v3[8];
      if ( v5 )
      {
        v3[9] = 0;
        sub_453A20(v5);
        v3[8] = 0;
        v3[10] = 0;
      }
      sub_430D50((int)(v3 + 2), v4, (int)v3);
      result = (_DWORD *)sub_4627F2(v3);
      v3 = (int *)v4;
    }
    while ( v4 );
  }
  return result;
}

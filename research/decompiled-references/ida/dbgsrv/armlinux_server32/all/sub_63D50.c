/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63D50
// Address: 0x00063D50

//----- (00063D50) --------------------------------------------------------
int *__fastcall sub_63D50(int a1, int a2, int a3, int a4)
{
  int *result; // r0
  int (__fastcall *v9)(int, int, int); // r9
  int v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r3

  result = sub_63D10(a2, a2, a3);
  if ( result )
  {
    v9 = **(int (__fastcall ***)(int, int, int))a4;
    if ( v9 == sub_63CC0 )
    {
      v10 = (*(int (__fastcall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(a4 + 4) + 244))(*(_DWORD *)(a4 + 4), result, 0);
      if ( v10 < 0 )
        goto LABEL_7;
      v11 = *(_DWORD *)(a4 + 4);
      v12 = *(_DWORD *)(v11 + 348);
      if ( !v12 )
        v12 = *(_DWORD *)(v11 + 396);
      if ( v10 >= v12 )
      {
LABEL_7:
        if ( under_debugger )
          __und(0xFFu);
        sub_78C64(30182);
      }
      v13 = a3 + 24 * v10;
    }
    else
    {
      v13 = v9(a4, (int)result, a3);
    }
    result = *(int **)(v13 + 8);
    if ( a2 == 15 )
    {
      if ( a1 )
        v14 = 4;
      else
        v14 = 8;
      return (int *)((char *)result + v14);
    }
  }
  return result;
}
// D6C20: using guessed type char under_debugger;

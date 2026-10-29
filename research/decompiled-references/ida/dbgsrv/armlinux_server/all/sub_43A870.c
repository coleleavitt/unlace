/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A870
// Address: 0x000000000043A870

//----- (000000000043A870) ----------------------------------------------------
__int64 __fastcall sub_43A870(int *a1, __int64 **a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // w4
  int v8; // w0
  __int64 *v10; // x0

  v5 = *a1 - 1;
  *a1 = v5;
  if ( v5 <= 0 )
    goto LABEL_4;
  if ( *(_BYTE *)*a2 == 2 )
  {
    *a3 = 0;
  }
  else
  {
    v8 = sub_4498D8(*a2);
    *a3 = v8;
    if ( v8 )
    {
LABEL_4:
      *a4 = 0;
      return 0;
    }
  }
  *a4 = 64;
  v10 = *a2;
  *a2 += 4;
  return v10[1];
}

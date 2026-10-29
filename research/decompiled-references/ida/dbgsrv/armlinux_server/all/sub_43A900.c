/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A900
// Address: 0x000000000043A900

//----- (000000000043A900) ----------------------------------------------------
__int64 __fastcall sub_43A900(int *a1, __int64 **a2, _DWORD *a3)
{
  int v3; // w3
  int v6; // w0
  __int64 *v7; // x0

  v3 = *a1 - 1;
  *a1 = v3;
  if ( v3 <= 0 )
    return 0;
  v6 = sub_4497A0(*a2);
  *a3 = v6;
  if ( v6 )
    return 0;
  v7 = *a2;
  *a2 += 4;
  return v7[1];
}

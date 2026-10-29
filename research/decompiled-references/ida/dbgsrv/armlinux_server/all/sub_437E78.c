/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437E78
// Address: 0x0000000000437E78

//----- (0000000000437E78) ----------------------------------------------------
__int64 __fastcall sub_437E78(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  unsigned int v4; // w20
  int v5; // w2
  unsigned int v6; // w21

  v3 = *(_QWORD *)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v4 = *(_DWORD *)(v3 + 4 * v2 - 4);
  v5 = v4;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v5 = *(_DWORD *)(v3 + 4 * (v2 - 1) - 4);
    if ( v2 != 1 )
      *(_QWORD *)(a1 + 304) = v2 - 2;
  }
  v6 = sub_437D48(a1, -85, v5);
  if ( v6 )
  {
    return (unsigned int)-1;
  }
  else if ( v4 )
  {
    sub_43D210(*(_QWORD *)(a1 + 200), v4, *(_DWORD *)(a1 + 208) - 4 - v4);
  }
  return v6;
}

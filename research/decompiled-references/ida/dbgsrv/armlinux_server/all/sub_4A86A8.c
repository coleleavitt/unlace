/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A86A8
// Address: 0x00000000004A86A8

//----- (00000000004A86A8) ----------------------------------------------------
__int64 __fastcall sub_4A86A8(__int64 a1)
{
  _BYTE *v1; // x1
  __int64 v3; // x0
  __int64 result; // x0
  _BYTE *v5; // x1

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 != 70 )
    return 0;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  if ( v1[1] == 89 )
    *(_QWORD *)(a1 + 24) = v1 + 2;
  v3 = sub_4A8628(a1, 1);
  result = sub_4A5118(a1, v3);
  v5 = *(_BYTE **)(a1 + 24);
  if ( *v5 != 69 )
    return 0;
  *(_QWORD *)(a1 + 24) = v5 + 1;
  return result;
}

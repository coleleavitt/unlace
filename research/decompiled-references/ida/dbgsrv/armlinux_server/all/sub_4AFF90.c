/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFF90
// Address: 0x00000000004AFF90

//----- (00000000004AFF90) ----------------------------------------------------
__int64 __fastcall sub_4AFF90(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x3
  size_t v7; // x2
  bool v8; // zf
  __int64 result; // x0
  __int64 v10; // x3

  v5 = a1[1];
  v6 = *a1;
  v7 = v5 - a2 - a3;
  if ( v7 )
    v8 = a3 == 0;
  else
    v8 = 1;
  if ( v8 )
    goto LABEL_7;
  if ( v7 != 1 )
  {
    memmove((void *)(v6 + a2), (const void *)(v6 + a2 + a3), v7);
    v6 = *a1;
    v5 = a1[1];
LABEL_7:
    result = v5 - a3;
    a1[1] = result;
    *(_BYTE *)(v6 + result) = 0;
    return result;
  }
  *(_BYTE *)(v6 + a2) = *(_BYTE *)(v6 + a2 + a3);
  v10 = *a1;
  result = a1[1] - a3;
  a1[1] = result;
  *(_BYTE *)(v10 + result) = 0;
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434930
// Address: 0x0000000000434930

//----- (0000000000434930) ----------------------------------------------------
__int64 __fastcall sub_434930(__int64 a1)
{
  unsigned int v1; // w1
  __int64 v4; // x20
  __int64 v5; // x1
  _BYTE *v6; // x0

  v1 = *(unsigned __int8 *)(a1 + 212);
  if ( v1 <= 0xBE )
  {
    if ( v1 >= 0xB4 || v1 >= 0xA0 && (v1 <= 0xA1 || v1 == 167) )
      return 0;
    goto LABEL_10;
  }
  if ( v1 == 211 )
    return 0;
  if ( v1 > 0xD3 )
  {
    if ( v1 - 224 > 0xF )
      goto LABEL_10;
    return 0;
  }
  if ( v1 - 200 <= 6 )
    return 0;
LABEL_10:
  *(_BYTE *)(a1 + 212) = -50;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(_QWORD *)(v4 + 8);
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(v4 + 16) )
  {
    v6 = sub_491288(v4, *(void **)v4, v5 + 1, 1u);
    *(_QWORD *)v4 = v6;
    v5 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v6 = *(_BYTE **)v4;
  }
  v6[v5] = -50;
  ++*(_QWORD *)(v4 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}

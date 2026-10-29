/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84484
// Address: 0x00084484

//----- (00084484) --------------------------------------------------------
_DWORD *__fastcall sub_84484(int a1)
{
  _BYTE *v1; // r3
  int v3; // r5
  __int64 v4; // kr00_8
  _DWORD *result; // r0

  v1 = *(_BYTE **)(a1 + 12);
  if ( *v1 != 84 )
    return nullptr;
  *(_DWORD *)(a1 + 12) = v1 + 1;
  v3 = sub_84450(a1);
  if ( v3 < 0 )
    return nullptr;
  v4 = *(_QWORD *)(a1 + 20);
  ++*(_DWORD *)(a1 + 40);
  if ( (int)v4 >= SHIDWORD(v4) )
    return nullptr;
  result = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v4);
  result[1] = 0;
  *(_DWORD *)(a1 + 20) = v4 + 1;
  *result = 5;
  result[2] = v3;
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_842D4
// Address: 0x000842D4

//----- (000842D4) --------------------------------------------------------
_DWORD *__fastcall sub_842D4(int a1)
{
  __int64 v1; // r2
  _DWORD *v2; // r4

  v1 = *(_QWORD *)(a1 + 20);
  if ( (int)v1 >= SHIDWORD(v1) )
    return nullptr;
  v2 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v1);
  v2[1] = 0;
  *(_DWORD *)(a1 + 20) = v1 + 1;
  *v2 = 65;
  v2[2] = sub_84278((unsigned __int8 **)(a1 + 12));
  return v2;
}

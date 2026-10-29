/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D500
// Address: 0x0008D500

//----- (0008D500) --------------------------------------------------------
int __fastcall sub_8D500(int a1, int a2)
{
  size_t v2; // r5
  size_t v3; // r4
  size_t v4; // r2
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = v3;
  if ( v3 >= v2 )
    v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 )
    return v2 - v3;
  result = memcmp(*(const void **)a1, *(const void **)a2, v4);
  if ( !result )
    return v2 - v3;
  return result;
}

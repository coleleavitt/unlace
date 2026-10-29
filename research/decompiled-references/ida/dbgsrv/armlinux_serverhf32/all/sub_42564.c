/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42564
// Address: 0x00042564

//----- (00042564) --------------------------------------------------------
int *__fastcall sub_42564(int *result)
{
  int v1; // r0
  int v2; // r3
  int v3; // r0
  int v4; // r0

  if ( result )
  {
    if ( *(_BYTE *)result != 5 )
      return nullptr;
    v1 = result[2];
    v2 = *(_DWORD *)(v1 + 12);
    v3 = v1 + 4;
    if ( v2 == v3 )
    {
      return nullptr;
    }
    else
    {
      v4 = sub_812CC(v3);
      if ( *(_DWORD *)(v4 + 20) )
        return *(int **)(v4 + 16);
      else
        return &dword_8DA5C;
    }
  }
  return result;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
// 8DA5C: using guessed type int dword_8DA5C;

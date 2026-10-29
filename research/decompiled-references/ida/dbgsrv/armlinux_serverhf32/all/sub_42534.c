/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42534
// Address: 0x00042534

//----- (00042534) --------------------------------------------------------
int *__fastcall sub_42534(int *result)
{
  int v1; // r3
  int v2; // r2

  if ( result )
  {
    if ( *(_BYTE *)result != 5 )
      return nullptr;
    v1 = result[2];
    v2 = *(_DWORD *)(v1 + 12);
    if ( v2 == v1 + 4 )
    {
      return nullptr;
    }
    else if ( *(_DWORD *)(v2 + 20) )
    {
      return *(int **)(v2 + 16);
    }
    else
    {
      return &dword_8DA5C;
    }
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;

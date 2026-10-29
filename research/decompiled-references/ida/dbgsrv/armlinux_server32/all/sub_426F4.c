/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426F4
// Address: 0x000426F4

//----- (000426F4) --------------------------------------------------------
int *__fastcall sub_426F4(int *result)
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
      v4 = sub_8147C(v3);
      if ( *(_DWORD *)(v4 + 20) )
        return *(int **)(v4 + 16);
      else
        return &dword_8DB98;
    }
  }
  return result;
}
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
// 8DB98: using guessed type int dword_8DB98;

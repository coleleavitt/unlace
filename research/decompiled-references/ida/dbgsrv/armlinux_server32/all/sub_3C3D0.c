/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C3D0
// Address: 0x0003C3D0

//----- (0003C3D0) --------------------------------------------------------
int __fastcall sub_3C3D0(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  const char *v4; // r1

  if ( a1[31] != 1 )
    return 0;
  result = *(_DWORD *)(a1[26] + 24);
  if ( result )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1[16] + 40) + 4 * result);
    if ( *(_DWORD *)(v3 + 36) )
      v4 = *(const char **)(v3 + 32);
    else
      v4 = (const char *)&dword_8DB98;
    result = sub_3C1F8(a1, v4);
    if ( !result )
      return sub_3BE0C(a1);
  }
  return result;
}
// 8DB98: using guessed type int dword_8DB98;

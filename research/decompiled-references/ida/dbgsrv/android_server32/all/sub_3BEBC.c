/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BEBC
// Address: 0x0003BEBC

//----- (0003BEBC) --------------------------------------------------------
int __fastcall sub_3BEBC(_DWORD *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  int v5; // r0
  const char *v6; // r1

  v2 = a1[31];
  result = 0;
  if ( v2 == 1 )
  {
    v4 = *(_DWORD *)(a1[26] + 12);
    if ( v4 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(a1[16] + 40) + 4 * v4);
      if ( *(_DWORD *)(v5 + 24) )
        v6 = *(const char **)(v5 + 20);
      else
        v6 = &byte_B3CBE;
      result = sub_3BC34(a1, v6);
      if ( !result )
        return sub_3BF00(a1);
    }
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;

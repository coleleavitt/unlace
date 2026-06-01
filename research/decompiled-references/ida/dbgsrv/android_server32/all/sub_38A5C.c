/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38A5C
// Address: 0x00038A5C

//----- (00038A5C) --------------------------------------------------------
int __fastcall sub_38A5C(int a1, int a2)
{
  const char *v2; // r0

  if ( *(_DWORD *)(a1 + 12) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = &byte_B3CBE;
  *(_DWORD *)(a2 + 8) = qunlink(v2);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;

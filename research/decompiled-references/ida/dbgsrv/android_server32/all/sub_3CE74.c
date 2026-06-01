/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CE74
// Address: 0x0003CE74

//----- (0003CE74) --------------------------------------------------------
int __fastcall sub_3CE74(int a1)
{
  if ( *(_DWORD *)(a1 + 28) )
    return sub_3CCFC((_DWORD *)a1, *(const char **)(a1 + 24));
  else
    return sub_3CCFC((_DWORD *)a1, &byte_B3CBE);
}
// B3CBE: using guessed type char byte_B3CBE;

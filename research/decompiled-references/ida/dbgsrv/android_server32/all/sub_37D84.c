/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37D84
// Address: 0x00037D84

//----- (00037D84) --------------------------------------------------------
int __fastcall sub_37D84(int a1, int a2)
{
  char *v2; // r0

  if ( *(_DWORD *)(a1 + 12) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = &byte_B3CBE;
  *(_DWORD *)(a2 + 8) = call_system((int)v2);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;

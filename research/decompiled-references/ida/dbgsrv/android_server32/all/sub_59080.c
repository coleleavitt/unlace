/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59080
// Address: 0x00059080

//----- (00059080) --------------------------------------------------------
void *__fastcall sub_59080(int a1, int a2)
{
  char *v3; // r1

  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_B3CBE;
  return sub_590A0(a2, v3);
}
// B3CBE: using guessed type char byte_B3CBE;

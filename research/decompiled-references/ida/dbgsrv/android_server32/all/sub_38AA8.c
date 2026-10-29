/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38AA8
// Address: 0x00038AA8

//----- (00038AA8) --------------------------------------------------------
int __fastcall sub_38AA8(_DWORD *a1, int a2)
{
  const char *v2; // r2

  if ( a1[3] )
    v2 = (const char *)a1[2];
  else
    v2 = &byte_B3CBE;
  *(_DWORD *)(a2 + 8) = qmkdir(v2, a1[8]);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;

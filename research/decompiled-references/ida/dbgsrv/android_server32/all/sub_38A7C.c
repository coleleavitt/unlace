/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38A7C
// Address: 0x00038A7C

//----- (00038A7C) --------------------------------------------------------
int __fastcall sub_38A7C(_DWORD *a1, int a2)
{
  const char *v3; // r1
  const char *v4; // r2

  v3 = &byte_B3CBE;
  v4 = &byte_B3CBE;
  if ( a1[3] )
    v4 = (const char *)a1[2];
  if ( a1[9] )
    v3 = (const char *)a1[8];
  *(_DWORD *)(a2 + 8) = qrename(v4, v3);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;

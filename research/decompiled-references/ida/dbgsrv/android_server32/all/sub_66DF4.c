/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66DF4
// Address: 0x00066DF4

//----- (00066DF4) --------------------------------------------------------
int __fastcall sub_66DF4(int result, _DWORD *a2, int a3)
{
  int v3; // r2
  int v4; // r4
  char *v5; // r3
  int v6; // r5
  int v7; // r1

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (a2[4] & 0xFFFFFFF) != 7 )
    {
      if ( !under_debugger )
        interr(3299);
      __debugbreak();
    }
    v3 = a2[2];
    v4 = a2[7];
    if ( a2[9] )
      v5 = (char *)a2[8];
    else
      v5 = &byte_B3CBE;
    v6 = a2[1];
    v7 = a2[5];
    if ( v4 == -1 )
      return sub_1BC48(result, "%a: %s (exc.code %x, tid %d)\n", v3, v5, v7, v6);
    else
      return sub_1BC48(result, "%a: %s -> %a (exc.code %x, tid %d)\n", v3, v5, v4, v7, v6);
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;

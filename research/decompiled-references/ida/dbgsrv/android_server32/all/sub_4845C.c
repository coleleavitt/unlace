/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4845C
// Address: 0x0004845C

//----- (0004845C) --------------------------------------------------------
int __fastcall sub_4845C(_DWORD *a1, int a2)
{
  int v2; // r1

  v2 = a1[13] + a2;
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( !under_debugger )
      interr(286);
    __debugbreak();
  }
  return a1[3] + 24 * v2;
}
// E0550: using guessed type char under_debugger;

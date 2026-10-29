/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48490
// Address: 0x00048490

//----- (00048490) --------------------------------------------------------
int __fastcall sub_48490(_DWORD *a1, int a2)
{
  int v2; // r1

  v2 = a1[12] + a2;
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( !under_debugger )
      interr(287);
    __debugbreak();
  }
  return a1[3] + 24 * v2;
}
// E0550: using guessed type char under_debugger;

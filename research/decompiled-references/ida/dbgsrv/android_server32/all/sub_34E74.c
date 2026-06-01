/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34E74
// Address: 0x00034E74

//----- (00034E74) --------------------------------------------------------
int __fastcall sub_34E74(int a1, int a2)
{
  int v2; // r2

  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !under_debugger )
      interr(20098);
    __debugbreak();
  }
  v2 = 12;
  if ( a2 != 1 )
    v2 = 4;
  return *(_DWORD *)(a1 + v2);
}
// E0550: using guessed type char under_debugger;

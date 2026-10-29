/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BA40
// Address: 0x0002BA40

//----- (0002BA40) --------------------------------------------------------
int __fastcall sub_2BA40(int a1, unsigned int a2)
{
  int v2; // r2

  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !under_debugger )
      interr(20099);
    __debugbreak();
  }
  v2 = 0;
  if ( *(_DWORD *)(a1 + 20) > a2 )
    return *(_DWORD *)(a1 + 16) + (a2 << 6);
  return v2;
}
// E0550: using guessed type char under_debugger;

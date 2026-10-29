/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34E44
// Address: 0x00034E44

//----- (00034E44) --------------------------------------------------------
int __fastcall sub_34E44(int a1, int a2)
{
  int v2; // r2

  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !under_debugger )
      interr(20098);
    __debugbreak();
  }
  v2 = 0;
  if ( a2 == 2 )
    return *(_DWORD *)(a1 + 12);
  return v2;
}
// E0550: using guessed type char under_debugger;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B9CC
// Address: 0x0002B9CC

//----- (0002B9CC) --------------------------------------------------------
int __fastcall sub_2B9CC(int a1, int a2, int a3)
{
  int result; // r0
  unsigned int v5; // r2
  int v6; // r1

  result = *(_DWORD *)(a1 + 56);
  if ( !*(_BYTE *)(a2 + 176) || !*(_DWORD *)(a2 + 60) || *(_WORD *)(a2 + 404) != 1 )
  {
    if ( *(_WORD *)(a2 + 406) != 8 || *(unsigned __int16 *)(a2 + 404) != 65440 )
    {
      result += a3;
      return result;
    }
    if ( !*(_BYTE *)(a2 + 176) )
    {
      if ( !under_debugger )
        interr(20099);
      __debugbreak();
    }
  }
  v5 = *(_DWORD *)(a1 + 60);
  if ( *(_DWORD *)(a2 + 60) > v5 )
  {
    v6 = *(_DWORD *)(a2 + 56) + (v5 << 6);
    if ( v6 )
      result += *(_DWORD *)(v6 + 16);
  }
  return result;
}
// E0550: using guessed type char under_debugger;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33000
// Address: 0x00033000

//----- (00033000) --------------------------------------------------------
int __cdecl sub_33000(int a1, int a2, int a3)
{
  int result; // eax
  char v4; // dl
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // edx

  result = *(_DWORD *)(a1 + 56);
  v4 = *(_BYTE *)(a2 + 176);
  if ( !v4 || !*(_DWORD *)(a2 + 60) || *(_WORD *)(a2 + 400) != 1 )
  {
    if ( *(_WORD *)(a2 + 402) != 8 || *(unsigned __int16 *)(a2 + 400) != 65440 )
    {
      result += a3;
      return result;
    }
    if ( !v4 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20099);
      BUG();
    }
  }
  v5 = *(_DWORD *)(a1 + 60);
  if ( *(_DWORD *)(a2 + 60) > v5 )
  {
    v6 = *(_DWORD *)(a2 + 56);
    v7 = v5 << 6;
    if ( v7 + v6 )
      result += *(_DWORD *)(v6 + v7 + 16);
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;

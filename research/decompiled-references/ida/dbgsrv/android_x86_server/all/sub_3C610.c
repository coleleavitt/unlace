/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C610
// Address: 0x0003C610

//----- (0003C610) --------------------------------------------------------
int __cdecl sub_3C610(int a1, int a2, bool *a3)
{
  int v3; // esi
  int result; // eax
  int v5; // esi
  int v6; // edi

  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
LABEL_19:
    BUG();
  }
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20056);
    goto LABEL_19;
  }
  v3 = *(_DWORD *)(a1 + 20);
  if ( (v3 & 0x3FFFFFF) == 0 )
    return 0;
  result = *(_DWORD *)(a1 + 16);
  v5 = v3 << 6;
  while ( 1 )
  {
    if ( *(_DWORD *)(result + 44) == a2 )
    {
      v6 = *(_DWORD *)(result + 4);
      if ( v6 == 9 || v6 == 4 )
        break;
    }
    result += 64;
    v5 -= 64;
    if ( !v5 )
      return 0;
  }
  if ( a3 )
    *a3 = v6 == 4;
  return result;
}
// 13E34C: using guessed type int under_debugger;

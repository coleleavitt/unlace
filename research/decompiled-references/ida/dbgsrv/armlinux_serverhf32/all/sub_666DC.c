/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_666DC
// Address: 0x000666DC

//----- (000666DC) --------------------------------------------------------
int __fastcall sub_666DC(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r0

  if ( !a3 )
    return a3;
  v6 = a3;
  while ( 1 )
  {
    v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 32))(a1, a2, v6);
    a2 += v7;
    if ( v7 <= 0 )
      break;
    v6 -= v7;
    if ( !v6 )
      return a3;
  }
  return a3 - v6;
}

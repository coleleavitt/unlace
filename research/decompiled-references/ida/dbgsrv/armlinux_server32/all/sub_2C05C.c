/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C05C
// Address: 0x0002C05C

//----- (0002C05C) --------------------------------------------------------
int __fastcall sub_2C05C(int a1, unsigned __int64 a2)
{
  int v3; // r8
  unsigned __int64 *v4; // r1
  int v5; // lr
  unsigned __int64 v6; // r4

  v3 = *(_DWORD *)(a1 + 464);
  if ( !v3 )
    return -1;
  v4 = *(unsigned __int64 **)(a1 + 460);
  v5 = 0;
  while ( 1 )
  {
    v6 = *v4;
    ++v5;
    if ( a2 >= *v4 && a2 < v6 + v4[1] )
      break;
    v4 += 3;
    if ( v5 == v3 )
      return -1;
  }
  return *((_DWORD *)v4 + 4) + a2 - v6;
}

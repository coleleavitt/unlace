/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96CC0
// Address: 0x00096CC0

//----- (00096CC0) --------------------------------------------------------
int __fastcall sub_96CC0(_DWORD *a1, int a2)
{
  int v4; // r8
  int i; // r6
  int v6; // r10
  int v7; // r5
  int result; // r0

  v4 = 1;
  for ( i = 0; ; ++i )
  {
    result = a1[1];
    if ( i == result )
      break;
    v6 = *(_DWORD *)(a2 + 4);
    v7 = v6;
    if ( !(v4 << 31) )
    {
      sub_93B8C(a2, ", ", "");
      v7 = *(_DWORD *)(a2 + 4);
    }
    sub_923F8(*(unsigned __int8 **)(*a1 + 4 * i), a2);
    if ( v7 == *(_DWORD *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v6;
    else
      v4 = 0;
  }
  return result;
}

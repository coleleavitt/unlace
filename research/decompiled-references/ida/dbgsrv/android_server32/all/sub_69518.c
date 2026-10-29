/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69518
// Address: 0x00069518

//----- (00069518) --------------------------------------------------------
int __fastcall sub_69518(int result, _DWORD *a2, int a3, int a4)
{
  unsigned int i; // r7
  int v8; // [sp+0h] [bp-4h]

  v8 = result;
  if ( a3 >= 1 )
  {
    for ( i = 0; i != a3; ++i )
    {
      if ( !a4 || (result = *(unsigned __int8 *)(a4 + (i >> 3)), ((1 << (i & 7)) & result) != 0) )
        result = sub_69554(v8, a2);
      a2 += 6;
    }
  }
  return result;
}

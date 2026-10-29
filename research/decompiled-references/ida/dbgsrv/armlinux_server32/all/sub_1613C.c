/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1613C
// Address: 0x0001613C

//----- (0001613C) --------------------------------------------------------
int __fastcall sub_1613C(int a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r2

  v1 = a1 + 1004;
  v2 = *(_DWORD *)(a1 + 1012);
  if ( v2 == a1 + 1004 )
    return 0;
  while ( 1 )
  {
    v3 = *(unsigned __int8 *)(v2 + 45);
    if ( *(_BYTE *)(v2 + 45) )
    {
      if ( !*(_DWORD *)(v2 + 28) && !*(_DWORD *)(v2 + 24) )
        break;
    }
    v2 = sub_81440(v2);
    if ( v2 == v1 )
      return 0;
  }
  return v3;
}

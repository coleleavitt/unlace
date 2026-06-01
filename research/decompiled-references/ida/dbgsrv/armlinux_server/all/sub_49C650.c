/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C650
// Address: 0x000000000049C650

//----- (000000000049C650) ----------------------------------------------------
__int64 __fastcall sub_49C650(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x2
  unsigned __int64 v6; // x20
  unsigned int v7; // w21
  _DWORD v9[2]; // [xsp+30h] [xbp-10h] BYREF

  sub_49C5C8((__int64)a1);
  a1[1] = a2;
  a1[2] = (unsigned __int64)sub_4910B0(a2, 4u);
  a1[3] = (unsigned __int64)sub_4910B0(a1[1], 4u);
  v4 = 0;
  if ( !a1[1] )
    return 0;
  do
  {
    *(_DWORD *)(a1[2] + 4 * v4) = -1;
    *(_DWORD *)(a1[3] + 4 * v4++) = -1;
    v5 = a1[1];
  }
  while ( v5 > v4 );
  if ( v5 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_49C430(v9);
      if ( v7 )
        break;
      *(_DWORD *)(a1[2] + 4 * v6) = v9[0];
      *(_DWORD *)(a1[3] + 4 * v6++) = v9[1];
      if ( a1[1] <= v6 )
        return 0;
    }
    sub_49C5C8((__int64)a1);
  }
  else
  {
    return 0;
  }
  return v7;
}

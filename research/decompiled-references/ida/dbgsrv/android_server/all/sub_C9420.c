/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9420
// Address: 0x00000000000C9420

//----- (00000000000C9420) ----------------------------------------------------
__int64 __fastcall sub_C9420(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // x21
  __int64 result; // x0
  int v5; // w8
  signed int v7; // w20
  int v8; // w8
  signed int v9; // w24

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 || *(_QWORD **)v3 != a1 )
    return 4294967294LL;
  v5 = *(_DWORD *)(v3 + 8);
  v7 = a2;
  if ( ((unsigned int)(v5 - 57) > 0x38 || ((1LL << ((unsigned __int8)v5 - 57)) & 0x100400400011001LL) == 0)
    && v5 != 666
    && v5 != 42 )
  {
    return 4294967294LL;
  }
  if ( a2 > 0x10 || *(_QWORD *)(v3 + 5888) < (unsigned __int64)(*(_QWORD *)(v3 + 32) + 2LL) )
    return 4294967291LL;
  do
  {
    v8 = *(_DWORD *)(v3 + 5940);
    if ( 16 - v8 <= v7 )
      v9 = 16 - v8;
    else
      v9 = v7;
    *(_WORD *)(v3 + 5936) |= ((unsigned __int16)a3 & (unsigned __int16)~(-1 << v9)) << v8;
    *(_DWORD *)(v3 + 5940) = v9 + v8;
    sub_CFC1C(v3);
    result = 0;
    v7 -= v9;
    a3 >>= v9;
  }
  while ( v7 );
  return result;
}

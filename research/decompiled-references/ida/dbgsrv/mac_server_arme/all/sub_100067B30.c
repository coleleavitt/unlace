/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067B30
// Address: 0x0000000100067B30

//----- (0000000100067B30) ----------------------------------------------------
__int64 __fastcall sub_100067B30(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64, __int64); // x2
  __int64 v3; // x0
  __int64 v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( !strcmp(*(const char **)(a1 + 64), "irs") )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_100062468(v5);
  }
  else
  {
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(qword_1000A5AD8 + 232);
    v3 = *(_QWORD *)(a1 + 88);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v2(v3, 0xFFFFFFFFLL);
  }
}
// 100067B78: variable '_18' is possibly undefined
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;

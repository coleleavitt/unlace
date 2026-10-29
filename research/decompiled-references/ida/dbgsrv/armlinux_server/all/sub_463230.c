/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463230
// Address: 0x0000000000463230

//----- (0000000000463230) ----------------------------------------------------
__int64 __fastcall sub_463230(__int64 a1, __int64 a2)
{
  _BYTE *v3; // x0
  _BYTE v5[10]; // [xsp+28h] [xbp-18h] BYREF
  _BYTE v6[6]; // [xsp+32h] [xbp-Eh] BYREF
  __int64 v7; // [xsp+38h] [xbp-8h]

  v3 = sub_48E4D8(v5, (unsigned __int64)v6, a2);
  if ( v3 != v5 )
    sub_4630F0(a1, v5, v3 - v5);
  return v7 ^ _stack_chk_guard;
}

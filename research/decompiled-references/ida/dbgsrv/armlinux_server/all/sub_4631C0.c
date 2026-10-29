/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4631C0
// Address: 0x00000000004631C0

//----- (00000000004631C0) ----------------------------------------------------
__int64 __fastcall sub_4631C0(__int64 a1, unsigned int a2)
{
  _BYTE *v3; // x0
  _BYTE v5[5]; // [xsp+20h] [xbp-10h] BYREF
  _BYTE v6[3]; // [xsp+25h] [xbp-Bh] BYREF
  __int64 v7; // [xsp+28h] [xbp-8h]

  v3 = sub_48E2D8(v5, (unsigned __int64)v6, a2);
  if ( v3 != v5 )
    sub_4630F0(a1, v5, v3 - v5);
  return v7 ^ _stack_chk_guard;
}

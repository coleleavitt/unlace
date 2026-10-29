/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4708
// Address: 0x00000000000D4708

//----- (00000000000D4708) ----------------------------------------------------
__int64 __fastcall sub_D4708(int a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x14
  unsigned __int64 v4; // x11
  unsigned __int64 v5; // x14
  unsigned __int64 v6; // x8
  __int64 v7; // x8

  if ( (a3 & 0x8000000000000000LL) != 0 )
    return 0xFFFFFFFFLL;
  v3 = (unsigned __int16)a1 + (unsigned __int64)(unsigned __int16)a2;
  v4 = v3 + 65520;
  v5 = v3 - 1;
  if ( v4 > 0xFFF0 )
    v4 = v5;
  v6 = HIWORD(a1) + (unsigned __int64)HIWORD(a2) + 65521 - a3 % 0xFFF1 + a3 % 0xFFF1 * (unsigned __int16)a1 % 0xFFF1;
  if ( v4 > 0xFFF0 )
    v4 -= 65521LL;
  if ( v6 > 0x1FFE1 )
    v6 -= 131042LL;
  if ( v6 <= 0xFFF0 )
    v7 = v6 << 16;
  else
    v7 = (v6 << 16) - 4293984256u;
  return v7 | v4;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dq
// Address: 0x00000001000728E0

//----- (00000001000728E0) ----------------------------------------------------
_BYTE *__fastcall pack_dq(_BYTE *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // x19^4
  _BYTE *v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v3 = HIDWORD(a3);
  v5 = pack_dd(a1, a2, a3);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return pack_dd(v5, a2, v3);
}
// 100072910: variable '_18' is possibly undefined

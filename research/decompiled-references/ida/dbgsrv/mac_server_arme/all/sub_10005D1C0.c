/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D1C0
// Address: 0x000000010005D1C0

//----- (000000010005D1C0) ----------------------------------------------------
_QWORD *__fastcall sub_10005D1C0(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *result; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  sub_100061584(a1, a2, a3);
  result = cliopts_t_add(a2, (__int128 *)&qword_10009F4F8, 1);
  if ( *(_BYTE *)(a1 + 136) == 1 )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return cliopts_t_add(a2, (__int128 *)&qword_10009F520, 2);
  }
  return result;
}
// 10005D218: variable '_18' is possibly undefined
// 10009F4F8: using guessed type __int64 qword_10009F4F8;
// 10009F520: using guessed type __int64 qword_10009F520;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061584
// Address: 0x0000000100061584

//----- (0000000100061584) ----------------------------------------------------
_QWORD *__fastcall sub_100061584(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *result; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  result = cliopts_t_add(a2, (__int128 *)&qword_10009FA08, 5);
  if ( (a3 & 1) != 0 )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return cliopts_t_add(a2, (__int128 *)&qword_10009FAD0, 1);
  }
  return result;
}
// 1000615DC: variable '_18' is possibly undefined
// 10009FA08: using guessed type __int64 qword_10009FA08;
// 10009FAD0: using guessed type __int64 qword_10009FAD0;

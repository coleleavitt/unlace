/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059934
// Address: 0x0000000100059934

//----- (0000000100059934) ----------------------------------------------------
_QWORD *__fastcall sub_100059934(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *result; // x0

  sub_10005D620(a1, a2, a3);
  result = cliopts_t_add(a2, (__int128 *)&qword_10009B4B8, 1);
  if ( *(_BYTE *)(a1 + 136) == 1 )
    return cliopts_t_add(a2, (__int128 *)&qword_10009B4E0, 2);
  return result;
}
// 10009B4B8: using guessed type __int64 qword_10009B4B8;
// 10009B4E0: using guessed type __int64 qword_10009B4E0;

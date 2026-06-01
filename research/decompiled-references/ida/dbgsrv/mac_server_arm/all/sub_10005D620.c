/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D620
// Address: 0x000000010005D620

//----- (000000010005D620) ----------------------------------------------------
_QWORD *__fastcall sub_10005D620(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *result; // x0

  result = cliopts_t_add(a2, (__int128 *)&qword_10009B9C8, 5);
  if ( (a3 & 1) != 0 )
    return cliopts_t_add(a2, (__int128 *)&qword_10009BA90, 1);
  return result;
}
// 10009B9C8: using guessed type __int64 qword_10009B9C8;
// 10009BA90: using guessed type __int64 qword_10009BA90;

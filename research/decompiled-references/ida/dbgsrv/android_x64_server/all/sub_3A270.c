/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A270
// Address: 0x000000000003A270

//----- (000000000003A270) ----------------------------------------------------
__int64 *__fastcall sub_3A270(unsigned int a1)
{
  if ( a1 < 0x15 )
    return (__int64 *)off_146EE0[a1];
  qsnprintf((char *)qword_155730, 64, "tdb error %d", a1);
  return qword_155730;
}
// 146EE0: using guessed type char *off_146EE0[21];
// 155730: using guessed type __int64 qword_155730[8];

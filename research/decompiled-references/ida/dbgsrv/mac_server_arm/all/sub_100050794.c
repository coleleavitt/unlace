/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050794
// Address: 0x0000000100050794

//----- (0000000100050794) ----------------------------------------------------
char *__fastcall sub_100050794(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v8; // x19

  if ( a1 <= 0x38 && ((0x20000000003C0uLL >> a1) & 1) == 0 )
    return off_10009AF60[a1];
  v8 = qword_10009DA98;
  qsnprintf((char *)qword_10009DA98, 0x10u, "RPC_%d", a4, a5, a6, a7, a8, a1);
  return (char *)v8;
}
// 10009AF60: using guessed type char *off_10009AF60[6];
// 10009DA98: using guessed type __int64 qword_10009DA98[2];

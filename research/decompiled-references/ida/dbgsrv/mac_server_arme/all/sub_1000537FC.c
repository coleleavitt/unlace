/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000537FC
// Address: 0x00000001000537FC

//----- (00000001000537FC) ----------------------------------------------------
char *__fastcall sub_1000537FC(
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
    return off_10009EFA0[a1];
  v8 = qword_1000A5A98;
  qsnprintf((char *)qword_1000A5A98, 0x10u, "RPC_%d", a4, a5, a6, a7, a8, a1);
  return (char *)v8;
}
// 10009EFA0: using guessed type char *off_10009EFA0[6];
// 1000A5A98: using guessed type __int64 qword_1000A5A98[2];

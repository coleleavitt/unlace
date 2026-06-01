/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_timed
// Address: 0x00000001000778F4

//----- (00000001000778F4) ----------------------------------------------------
__int64 __fastcall qwait_timed(unsigned int *a1, pid_t a2, unsigned int a3, int a4)
{
  __int64 v8; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v8 = sub_1000760CC();
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_10007596C(v8, a1, a2, a3, a4);
}
// 10007793C: variable '_28' is possibly undefined

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BA64
// Address: 0x000000010000BA64

//----- (000000010000BA64) ----------------------------------------------------
void __fastcall sub_10000BA64(_QWORD *a1)
{
  void *v1; // x8
  _QWORD *v2; // x19
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = off_10009CBD0;
  v1 = (void *)a1[6];
  if ( v1 )
  {
    a1[7] = 0;
    v2 = a1;
    qfree(v1);
    a1 = v2;
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(a1);
}
// 10000BAB8: variable '_18' is possibly undefined
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();

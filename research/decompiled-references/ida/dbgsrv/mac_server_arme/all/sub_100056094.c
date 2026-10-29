/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056094
// Address: 0x0000000100056094

//----- (0000000100056094) ----------------------------------------------------
void __fastcall sub_100056094(_QWORD *__p)
{
  void *v2; // x0
  void *v3; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  *__p = off_10009EEF8;
  v2 = (void *)__p[7];
  if ( v2 )
  {
    __p[8] = 0;
    qfree(v2);
    __p[7] = 0;
    __p[9] = 0;
  }
  v3 = (void *)__p[4];
  if ( v3 )
  {
    __p[5] = 0;
    qfree(v3);
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(__p);
}
// 1000560FC: variable '_18' is possibly undefined
// 10009EEF8: using guessed type __int64 (__fastcall *off_10009EEF8[3])();

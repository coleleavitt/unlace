/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A0B0
// Address: 0x000000010001A0B0

//----- (000000010001A0B0) ----------------------------------------------------
void __fastcall sub_10001A0B0(void **__p)
{
  void *v2; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  *__p = off_10009D548;
  if ( *((_BYTE *)__p + 48) == 1 )
    close_linput(__p[4]);
  v2 = __p[1];
  if ( v2 )
  {
    __p[2] = nullptr;
    qfree(v2);
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(__p);
}
// 10001A114: variable '_18' is possibly undefined
// 10009D548: using guessed type void (__fastcall __noreturn *off_10009D548[2])();

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020368
// Address: 0x0000000100020368

//----- (0000000100020368) ----------------------------------------------------
void __fastcall sub_100020368(_QWORD *__p)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  *__p = off_10009DBD0;
  v2 = (_QWORD *)__p[7];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (void *)__p[5];
  __p[5] = 0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)__p[2];
  if ( v5 )
  {
    __p[3] = 0;
    qfree(v5);
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(__p);
}
// 1000203E0: variable '_18' is possibly undefined
// 10009DBD0: using guessed type void (__fastcall __noreturn *off_10009DBD0[2])();

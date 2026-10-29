/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BBAC
// Address: 0x000000010000BBAC

//----- (000000010000BBAC) ----------------------------------------------------
void __fastcall sub_10000BBAC(__int64 a1, _QWORD *a2)
{
  void *v4; // x0
  void *v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_10000BBAC(a1, *a2);
    sub_10000BBAC(a1, a2[1]);
    v4 = (void *)a2[10];
    if ( v4 )
    {
      a2[11] = 0;
      qfree(v4);
      a2[10] = 0;
      a2[12] = 0;
    }
    v5 = (void *)a2[7];
    if ( v5 )
    {
      a2[8] = 0;
      qfree(v5);
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 10000BC14: variable '_18' is possibly undefined

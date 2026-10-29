/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003EEC8
// Address: 0x000000010003EEC8

//----- (000000010003EEC8) ----------------------------------------------------
void __fastcall sub_10003EEC8(__int64 a1, unsigned __int8 *a2)
{
  int v4; // w8
  void *v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_10003EEC8(a1, *(_QWORD **)a2);
    sub_10003EEC8(a1, *((_QWORD **)a2 + 1));
    v4 = a2[40];
    if ( v4 == 5 )
    {
      sub_10003307C(*((_QWORD *)a2 + 6), a2 + 40);
    }
    else if ( v4 == 7 )
    {
      v5 = *((void **)a2 + 6);
      if ( v5 )
      {
        *((_QWORD *)a2 + 7) = 0;
        qfree(v5);
      }
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 10003EF48: variable '_18' is possibly undefined

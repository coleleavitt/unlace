/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E334
// Address: 0x000000010003E334

//----- (000000010003E334) ----------------------------------------------------
void __fastcall sub_10003E334(__int64 a1, _QWORD *a2)
{
  void *v4; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_10003E334(a1, *a2);
    sub_10003E334(a1, a2[1]);
    v4 = (void *)a2[4];
    if ( v4 )
    {
      a2[5] = 0;
      qfree(v4);
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 10003E384: variable '_18' is possibly undefined

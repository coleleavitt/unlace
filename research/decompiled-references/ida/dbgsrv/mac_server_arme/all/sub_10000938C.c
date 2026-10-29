/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000938C
// Address: 0x000000010000938C

//----- (000000010000938C) ----------------------------------------------------
void __fastcall sub_10000938C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_10000938C(a1, *a2);
    sub_10000938C(a1, a2[1]);
    v4 = a2[5];
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 1000093F8: variable '_18' is possibly undefined

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004DA4C
// Address: 0x000000010004DA4C

//----- (000000010004DA4C) ----------------------------------------------------
__int64 __fastcall sub_10004DA4C(__int64 a1, int a2)
{
  _QWORD **v2; // x0
  __int64 (*v4)(void); // x6
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a1 )
    v2 = (_QWORD **)(a1 - 192);
  else
    v2 = nullptr;
  if ( a2 >= 0x1000000 )
    return ((__int64 (__fastcall *)(_QWORD **))(*v2)[4])(v2);
  v4 = *(__int64 (**)(void))(*v2[55] + 400LL);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v4();
}
// 10004DB28: variable '_28' is possibly undefined

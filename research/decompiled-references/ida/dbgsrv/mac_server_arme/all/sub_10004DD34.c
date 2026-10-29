/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004DD34
// Address: 0x000000010004DD34

//----- (000000010004DD34) ----------------------------------------------------
void __fastcall sub_10004DD34(_QWORD *a1)
{
  _QWORD *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = sub_10004DC0C(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 10004DD4C: variable '_8' is possibly undefined

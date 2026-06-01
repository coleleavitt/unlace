/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000623AC
// Address: 0x00000001000623AC

//----- (00000001000623AC) ----------------------------------------------------
void __fastcall sub_1000623AC(_QWORD *a1)
{
  _QWORD *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = sub_1000656C4(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 1000623C4: variable '_8' is possibly undefined

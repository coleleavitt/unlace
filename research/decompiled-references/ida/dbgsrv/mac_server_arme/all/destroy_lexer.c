/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destroy_lexer
// Address: 0x00000001000401A8

//----- (00000001000401A8) ----------------------------------------------------
void __fastcall destroy_lexer(_QWORD *a1)
{
  _QWORD *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( a1 )
  {
    v1 = sub_10003FDFC(a1);
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(v1);
  }
}
// 1000401C4: variable '_8' is possibly undefined

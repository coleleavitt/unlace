/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F090
// Address: 0x000000000047F090

//----- (000000000047F090) ----------------------------------------------------
void __fastcall sub_47F090(_QWORD *a1)
{
  bool v1; // zf

  v1 = a1[13] == 0;
  *a1 = &off_4C4210;
  if ( !v1 )
    sub_487E80(a1 + 6);
  sub_47F840((__int64)a1);
  operator delete(a1, 0x80A8u);
}
// 4C4210: using guessed type _UNKNOWN *off_4C4210;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400907F0
// Address: 0x00000001400907F0

//----- (00000001400907F0) ----------------------------------------------------
void __fastcall sub_1400907F0()
{
  if ( xmmword_1400CB100 )
  {
    *(&xmmword_1400CB100 + 1) = nullptr;
    j_free(xmmword_1400CB100);
    xmmword_1400CB100 = nullptr;
    qword_1400CB110 = 0;
  }
  sub_140053340(&qword_1400CB090);
}
// 1400CB090: using guessed type __int64 qword_1400CB090;
// 1400CB110: using guessed type __int64 qword_1400CB110;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140090880
// Address: 0x0000000140090880

//----- (0000000140090880) ----------------------------------------------------
void __fastcall sub_140090880()
{
  if ( xmmword_1400CB158 )
  {
    *(&xmmword_1400CB158 + 1) = nullptr;
    j_free(xmmword_1400CB158);
    xmmword_1400CB158 = nullptr;
    qword_1400CB168 = 0;
  }
}
// 1400CB168: using guessed type __int64 qword_1400CB168;

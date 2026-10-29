/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064BE0
// Address: 0x0000000140064BE0

//----- (0000000140064BE0) ----------------------------------------------------
__int64 __fastcall sub_140064BE0(__int64 a1)
{
  __int64 v2; // rbx

  if ( !a1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(552);
  }
  sub_140064580(a1);
  sub_140064520(a1);
  v2 = sub_140064580(a1);
  sub_140064520(a1);
  return v2;
}
// 1400CB61C: using guessed type char byte_1400CB61C;

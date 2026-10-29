/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028B50
// Address: 0x0000000140028B50

//----- (0000000140028B50) ----------------------------------------------------
void __fastcall sub_140028B50(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm3

  if ( !a1 || !a2 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(2657);
  }
  v2 = *a1;
  v3 = a1[1];
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = v2;
  a2[1] = v3;
}
// 1400CB61C: using guessed type char byte_1400CB61C;

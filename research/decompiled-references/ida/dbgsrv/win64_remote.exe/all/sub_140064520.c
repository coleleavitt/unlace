/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064520
// Address: 0x0000000140064520

//----- (0000000140064520) ----------------------------------------------------
__int64 __fastcall sub_140064520(__int64 a1)
{
  unsigned int v2; // ebx

  if ( a1 )
  {
    v2 = common_fseek();
    if ( v2 )
      sub_1400640B0(1u);
    return v2;
  }
  else
  {
    sub_1400640B0(1u);
    *errno() = 9;
    sub_1400640B0(1u);
    return 0xFFFFFFFFLL;
  }
}
// 14007FBF8: using guessed type __int64 common_fseek(void);

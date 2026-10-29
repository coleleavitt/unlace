/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064580
// Address: 0x0000000140064580

//----- (0000000140064580) ----------------------------------------------------
__int64 __fastcall sub_140064580(__int64 a1)
{
  __int64 v2; // rbx

  if ( a1 )
  {
    v2 = common_ftell<__int64>();
    if ( v2 == -1 )
      sub_1400640B0(1u);
    return v2;
  }
  else
  {
    sub_1400640B0(1u);
    *errno() = 9;
    sub_1400640B0(1u);
    return -1;
  }
}
// 1400800D0: using guessed type __int64 common_ftell<__int64>(void);

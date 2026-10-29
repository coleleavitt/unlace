/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025A90
// Address: 0x0000000100025A90

//----- (0000000100025A90) ----------------------------------------------------
__int64 __fastcall sub_100025A90(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v3 && (v4 = *(_QWORD *)(xmmword_1000AE250 + 8 * v3)) != 0 )
  {
    --*(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = (int)sub_10002EB10(
                                 (__int64 (__fastcall *)(__int64, __int64))sub_100025FF0,
                                 v4,
                                 a1 + 32,
                                 a2,
                                 a3);
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 1000AE250: using guessed type __int128 xmmword_1000AE250;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60800
// Address: 0x0000000000060800

//----- (0000000000060800) ----------------------------------------------------
__int64 __fastcall sub_60800(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  if ( *((_QWORD *)&xmmword_155780 + 1) <= v5 )
  {
    v8 = -1;
    v7 = (__int64 *)(a2 + 8);
  }
  else
  {
    v6 = *(_QWORD *)(xmmword_155780 + 8 * v5);
    v7 = (__int64 *)(a2 + 8);
    if ( v6 )
    {
      --*(_QWORD *)(a2 + 8);
      v8 = (int)sub_69590((__int64 (__fastcall *)(__int64, __int64))sub_60DA0, v6, a1 + 32, a2, a3, a4);
    }
    else
    {
      v8 = -1;
    }
  }
  *v7 = v8;
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;

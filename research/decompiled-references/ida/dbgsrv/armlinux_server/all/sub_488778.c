/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_488778
// Address: 0x0000000000488778

//----- (0000000000488778) ----------------------------------------------------
__int64 __fastcall sub_488778(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  unsigned __int16 *v3; // x7
  __int64 v5; // [xsp+10h] [xbp-20h] BYREF
  __int64 v6; // [xsp+18h] [xbp-18h]
  int v7; // [xsp+20h] [xbp-10h]
  __int16 v8; // [xsp+24h] [xbp-Ch]
  __int64 v9; // [xsp+28h] [xbp-8h]

  v2 = a2;
  v3 = (unsigned __int16 *)&v5;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( a1 )
  {
    WORD2(v5) = HIWORD(a1);
    HIWORD(v5) = WORD2(a1);
    LOWORD(v6) = WORD1(a1);
    WORD1(v6) = a1;
    WORD1(v5) = 16430 - sub_487650((__int64)&v5);
  }
  sub_4878F8(v3, v2);
  return v9 ^ _stack_chk_guard;
}
// 4887E0: variable 'v3' is possibly undefined
// 4887E0: variable 'v2' is possibly undefined

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4584F8
// Address: 0x00000000004584F8

//----- (00000000004584F8) ----------------------------------------------------
__int64 __fastcall sub_4584F8(__int64 a1, __int64 a2, char a3)
{
  _BOOL8 v5; // x0
  char v7[8]; // [xsp+48h] [xbp-18h] BYREF
  __int64 v8; // [xsp+50h] [xbp-10h]
  __int64 v9; // [xsp+58h] [xbp-8h]

  sub_458430(a1, a2, a3);
  for ( ; *(_WORD *)(*(_QWORD *)(a1 + 672) + 24LL) == 31868; *(_QWORD *)(a2 + 8) = v5 )
  {
    v7[0] = 1;
    v8 = 0;
    sub_458430(a1, (__int64)v7, 1);
    v5 = 1;
    if ( !*(_QWORD *)(a2 + 8) )
      v5 = v8 != 0;
    *(_BYTE *)a2 = 0;
  }
  return v9 ^ _stack_chk_guard;
}

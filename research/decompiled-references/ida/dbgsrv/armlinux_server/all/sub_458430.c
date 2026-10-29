/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458430
// Address: 0x0000000000458430

//----- (0000000000458430) ----------------------------------------------------
__int64 __fastcall sub_458430(__int64 a1, __int64 a2, char a3)
{
  _BOOL8 v5; // x0
  char v7[8]; // [xsp+48h] [xbp-18h] BYREF
  __int64 v8; // [xsp+50h] [xbp-10h]
  __int64 v9; // [xsp+58h] [xbp-8h]

  sub_458380(a1, a2, a3);
  for ( ; *(_WORD *)(*(_QWORD *)(a1 + 672) + 24LL) == 9766; *(_QWORD *)(a2 + 8) = v5 )
  {
    v7[0] = 1;
    v8 = 0;
    sub_458380(a1, (__int64)v7, 1);
    v5 = 0;
    if ( *(_QWORD *)(a2 + 8) )
      v5 = v8 != 0;
    *(_BYTE *)a2 = 0;
  }
  return v9 ^ _stack_chk_guard;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458380
// Address: 0x0000000000458380

//----- (0000000000458380) ----------------------------------------------------
__int64 __fastcall sub_458380(__int64 a1, __int64 a2, char a3)
{
  char v6[8]; // [xsp+38h] [xbp-18h] BYREF
  __int64 v7; // [xsp+40h] [xbp-10h]
  __int64 v8; // [xsp+48h] [xbp-8h]

  sub_4582D0(a1, a2, a3);
  for ( ; *(_WORD *)(*(_QWORD *)(a1 + 672) + 24LL) == 124; *(_QWORD *)(a2 + 8) |= v7 )
  {
    v6[0] = 1;
    v7 = 0;
    sub_4582D0(a1, (__int64)v6, 1);
  }
  return v8 ^ _stack_chk_guard;
}

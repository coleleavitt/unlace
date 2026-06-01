/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001390
// Address: 0x0000000100001390

//----- (0000000100001390) ----------------------------------------------------
__int64 __fastcall sub_100001390(__int64 a1)
{
  __int64 v2; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = *(_QWORD *)(a1 + 536);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    sub_100001520(a1 + 544);
  }
  *(_QWORD *)(a1 + 536) = 0;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return nullsub_21(0);
}
// 1000013EC: variable '_18' is possibly undefined
// 10005D108: using guessed type __int64 __fastcall nullsub_21(_QWORD);

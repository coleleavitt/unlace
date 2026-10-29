/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000501B0
// Address: 0x00000001000501B0

//----- (00000001000501B0) ----------------------------------------------------
void __fastcall sub_1000501B0(__int64 a1, _QWORD **a2, signed int a3, __int64 a4)
{
  __int64 v8; // [xsp+10h] [xbp-50h] BYREF
  void *v9; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h]
  __int64 v11; // [xsp+28h] [xbp-38h]
  int v12; // [xsp+30h] [xbp-30h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  sub_10002E2F0(a2, a3);
  if ( a3 < 1 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    sub_10004ED18(a2, a4);
  }
  else
  {
    v8 = 0x800000028LL;
    v10 = 0;
    v11 = 0;
    v9 = nullptr;
    v12 = -1;
    (*(void (**)(void))(**(_QWORD **)(a1 + 440) + 552LL))();
    sub_10005FA50(a2, (__int64)&v8);
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000B44();
    j__serialize_dynamic_register_set(a2, *(_QWORD *)(a1 + 440) + 544LL);
    if ( v9 )
    {
      v10 = 0;
      qfree(v9);
    }
  }
}
// 10005FB84: using guessed type __int64 __fastcall j__serialize_dynamic_register_set(_QWORD, _QWORD);

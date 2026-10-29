/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D5E8
// Address: 0x000000010004D5E8

//----- (000000010004D5E8) ----------------------------------------------------
void __fastcall sub_10004D5E8(__int64 a1, _QWORD **a2, signed int a3, __int64 a4)
{
  __int64 v8; // [xsp+10h] [xbp-50h] BYREF
  void *v9; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h]
  __int64 v11; // [xsp+28h] [xbp-38h]
  int v12; // [xsp+30h] [xbp-30h]

  sub_10002CF84(a2, a3);
  if ( a3 < 1 )
  {
    sub_10004C294(a2, a4);
  }
  else
  {
    v8 = 0x800000028LL;
    v10 = 0;
    v11 = 0;
    v9 = nullptr;
    v12 = -1;
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 440) + 552LL))(*(_QWORD *)(a1 + 440), &v8);
    sub_10005BE6C(a2, (__int64)&v8);
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000AA0();
    j__serialize_dynamic_register_set(a2, *(_QWORD *)(a1 + 440) + 544LL);
    if ( v9 )
    {
      v10 = 0;
      qfree(v9);
    }
  }
}
// 10005BF9C: using guessed type __int64 __fastcall j__serialize_dynamic_register_set(_QWORD, _QWORD);

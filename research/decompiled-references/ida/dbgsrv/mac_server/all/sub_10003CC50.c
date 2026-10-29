/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CC50
// Address: 0x000000010003CC50

//----- (000000010003CC50) ----------------------------------------------------
__int64 __fastcall sub_10003CC50(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 v3[8]; // [rsp+0h] [rbp-30h] BYREF
  void *__p[2]; // [rsp+8h] [rbp-28h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v3[0] = 2;
    *(_OWORD *)__p = 0;
    v5 = 0;
    sub_10002E5F0(a1, a2, v3);
    if ( v3[0] == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__p[0], v3);
    }
    else if ( v3[0] == 7 && __p[0] )
    {
      __p[1] = nullptr;
      qfree(__p[0]);
    }
  }
  return __stack_chk_guard;
}

__int64 __fastcall sub_4FF360(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  _QWORD v8[4]; // [rsp+18h] [rbp-20h] BYREF

  if ( a1 != *(_QWORD *)(a2 + 8) )
    return 0;
  v5 = *(_QWORD *)(a3 + 8);
  sub_180C5A0(v8, "interval_relation");
  if ( v8[0] == *(_QWORD *)(v5 + 16) )
  {
    if ( !a4 || a1 == *(_QWORD *)(a4 + 8) )
    {
      result = sub_186B270(0x10u);
      *(_QWORD *)result = off_1C50338;
      *(_BYTE *)(result + 8) = 0;
      return result;
    }
    return 0;
  }
  if ( a1 != *(_QWORD *)(a2 + 8) || a1 != *(_QWORD *)(a3 + 8) || a4 && a1 != *(_QWORD *)(a4 + 8) )
    return 0;
  result = sub_186B270(0x10u);
  *(_QWORD *)result = off_1C50310;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


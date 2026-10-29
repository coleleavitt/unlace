__int64 __fastcall sub_72D010(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v4[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2;
  sub_17F9A60(v4, "smt");
  *(_BYTE *)(a1 + 856) = sub_1859630(a2, "candidate_models", v4, 0);
  *(_BYTE *)(a1 + 857) = sub_1859610(a2, "fail_if_inconclusive", 1);
  sub_18572D0(v4);
  sub_15B6B30(a1 + 24, a2);
  sub_1863170(a1 + 784, a2);
  sub_180C5A0(&v3, "logic");
  result = sub_1858A00(a2, &v3, a1 + 840);
  *(_QWORD *)(a1 + 840) = result;
  if ( result )
  {
    result = *(_QWORD *)(a1 + 832);
    if ( result )
      return sub_8E35E0(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840));
  }
  return result;
}


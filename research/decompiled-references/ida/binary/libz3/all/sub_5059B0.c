bool __fastcall sub_5059B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  sub_180C5A0(&v4, "interval_relation");
  return v4 == *(_QWORD *)(v2 + 16);
}


bool __fastcall sub_4FFEB0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  sub_180C5A0(&v3, "interval_relation");
  return v3 == *(_QWORD *)(v1 + 16);
}


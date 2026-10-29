__int64 __fastcall sub_CAFF70(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
  v4[0] = a2 | 4;
  return sub_CA3CC0(a1, v2, v4);
}

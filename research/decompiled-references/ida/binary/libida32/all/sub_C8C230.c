__int64 __fastcall sub_C8C230(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
  v4[0] = a2 | 4;
  return sub_C7FF80(a1, v2, v4);
}


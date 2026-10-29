bool __fastcall sub_13B39C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[0] = a2;
  v3 = *(_QWORD *)(a1 + 48);
  v5[1] = a3;
  return sub_2246AB0(v5, v3, *(_QWORD *)(a1 + 56), 0) != -1;
}

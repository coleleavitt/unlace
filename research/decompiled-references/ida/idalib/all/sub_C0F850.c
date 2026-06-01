__int64 __fastcall sub_C0F850(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a2[1];
  v3 = sub_EEC8C0(*a2);
  v4 = *(_QWORD *)(v2 + 2312);
  v6[0] = v3;
  sub_101B0B0(a1, v6, v4);
  return a1;
}

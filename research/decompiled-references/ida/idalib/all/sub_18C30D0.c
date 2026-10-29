__int64 __fastcall sub_18C30D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rbp
  _DWORD v9[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = sub_F583D0(v3, *(_QWORD **)(a1 + 248));
  v6 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  v7 = sub_A64980(*(_QWORD *)(a1 + 248), v6, 1);
  sub_A649E0((__int64)v9, *(_QWORD **)(a1 + 248), v4);
  return sub_A980E0(*(_QWORD *)(a1 + 248), v7, v9[2], 1);
}

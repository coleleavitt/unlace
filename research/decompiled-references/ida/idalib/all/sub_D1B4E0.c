__int64 __fastcall sub_D1B4E0(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v8; // rax
  _BYTE v9[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 400);
  if ( v4 && !*(_DWORD *)(v5 + 24) )
    return 0;
  v6 = sub_DCA720(a1, a2, v5 + 40);
  if ( !(_BYTE)v6 )
    return 0;
  sub_E23220(
    v9,
    *(_QWORD *)(v5 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v5 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v5 + 40)));
  sub_D09010((__int64)v10, *(_QWORD *)(a1 + 176));
  v8 = sub_D0EA30((__int64)v9);
  sub_E23400(v8, v10);
  sub_E232A0(v10);
  sub_E23CF0(v9);
  sub_E24D00(v9);
  sub_E232A0(v9);
  return v6;
}

__int64 __fastcall sub_8CF4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r14d
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  _BYTE v8[56]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h]
  int v10; // [rsp+40h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 72);
  sub_A1C070(v8, v5);
  v9 = *(_QWORD *)(v5 + 56);
  v10 = *(_DWORD *)(v5 + 64);
  sub_A1A5E0(v4, 72);
  *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v3;
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v6, v8);
  *(_QWORD *)(v6 + 56) = v9;
  *(_DWORD *)(v6 + 64) = v10;
  return sub_A1C0C0(v8);
}


__int64 __fastcall sub_8CF5A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rbp
  _BYTE v7[56]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h]
  int v9; // [rsp+40h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v7, v3);
  v8 = *(_QWORD *)(v3 + 56);
  v9 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 568);
  LOWORD(v2) = *(_WORD *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v5, v7);
  *(_QWORD *)(v5 + 56) = v8;
  *(_DWORD *)(v5 + 64) = v9;
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v2;
  return sub_A1C0C0(v7);
}


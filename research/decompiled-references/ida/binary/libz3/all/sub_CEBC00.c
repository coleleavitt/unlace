__int64 __fastcall sub_CEBC00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 _0; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars8[32]; // [rsp+8h] [rbp+8h] BYREF

  sub_1858590(&_0, a2);
  sub_180C5A0(vars8, "full");
  sub_18625B0(&_0, "mode", vars8);
  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C59BC0;
  sub_1858590(v2 + 16, a2);
  *(_QWORD *)(v2 + 24) = 0;
  v3 = sub_EE8E00(v2, &_0);
  sub_18572D0(&_0);
  return v3;
}


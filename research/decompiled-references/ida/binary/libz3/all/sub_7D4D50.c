__int64 __fastcall sub_7D4D50(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rbp
  __int64 v4; // rbp
  _BYTE v6[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v2 == sub_79EFD0 )
    v3 = a2[18];
  else
    v3 = v2((__int64)a2);
  sub_180C5A0(v6, "quant");
  sub_15DA4C0(v3 + 560, v6);
  v4 = sub_186B270(0xC60u);
  sub_7D4B20(v4, (_DWORD)a2);
  return v4;
}


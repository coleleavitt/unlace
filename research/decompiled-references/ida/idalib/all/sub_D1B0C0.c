__int64 __fastcall sub_D1B0C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v5; // r12
  unsigned int v6; // eax
  void *v7; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-70h]
  char v9; // [rsp+Ch] [rbp-6Ch]
  int v10; // [rsp+10h] [rbp-68h]
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  sub_D0AF80((__int64)&v7, *(_QWORD *)(a1 + 176));
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v11);
  sub_E21790(v2, 48);
  v3 = sub_DCA140(a1, a2, v11);
  if ( (_BYTE)v3 )
  {
    sub_E23CF0(v11);
    sub_E24D00(v11);
    v5 = sub_D0F1C0((__int64)v11);
    v6 = v8;
    *(_DWORD *)(v5 + 8) = v8;
    if ( v6 > 0x40 )
      sub_2205510(v5);
    else
      *(_QWORD *)v5 = v7;
    *(_BYTE *)(v5 + 12) = v9;
    *(_DWORD *)(v5 + 16) = v10;
  }
  sub_E232A0(v11);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  return v3;
}

__int64 __fastcall sub_D41D80(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // r12d
  __int64 v5; // rax
  void *v6; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-B0h]
  _BYTE v8[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v9[48]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v10; // [rsp+80h] [rbp-38h]

  sub_D0AF80((__int64)&v6, *(_QWORD *)(a1 + 176));
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v8);
  sub_E21790(v2, 48);
  sub_D41890((__int64)v9, a1, a2, (__int64)&v6, (__int64)v8, 1);
  v3 = v10;
  if ( v10 )
  {
    v5 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v5, v9);
    if ( v10 )
      sub_E232A0(v9);
  }
  sub_E232A0(v8);
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return v3;
}

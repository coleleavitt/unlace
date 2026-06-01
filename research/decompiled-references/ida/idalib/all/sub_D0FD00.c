__int64 __fastcall sub_D0FD00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  int v6; // eax
  unsigned __int8 v7; // si
  _BYTE *v8; // rax
  unsigned int v9; // ebx
  void *v11; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-80h]
  void *v13; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-70h]
  void *v15; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-50h]

  sub_D0AF80((__int64)&v13, *(_QWORD *)(a1 + 176));
  sub_D0AF80((__int64)&v15, *(_QWORD *)(a1 + 176));
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v6 = sub_21EE7D0(&v15, &v13);
  if ( v6 )
    v7 = (v6 >= 0) + 2;
  else
    v7 = *(_BYTE *)(a3 + 112) != 2;
  v8 = sub_B614A0(a3, v7);
  sub_B601C0((__int64)&v11, (__int64)v8);
  v9 = sub_D8C850(a1, a2, v5, &v11);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v9;
}

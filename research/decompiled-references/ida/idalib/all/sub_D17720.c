__int64 __fastcall sub_D17720(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  char v7; // al
  __int64 v9; // r13
  unsigned int v10; // ebp
  __int64 v11; // r12
  __int64 v12; // rax
  _BYTE v13[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (_QWORD **)a1[3];
  v6 = (__int64 (*)(void))(*v5)[3];
  if ( (char *)v6 == (char *)sub_CF0250 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 24LL))(v5[3]);
  else
    v7 = v6();
  if ( v7 )
    return 0;
  v9 = a1[50];
  if ( !(unsigned __int8)sub_DCA720(a1, a2, v9 + 40) )
    return 0;
  sub_E23220(
    v13,
    *(_QWORD *)(v9 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v9 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v9 + 40)));
  v10 = sub_DCC160(a1, a2, v13, 0);
  if ( (_BYTE)v10 )
  {
    v11 = sub_D0EA30((__int64)v13);
    v12 = sub_E216C0(a1[22], 48);
    sub_E231E0(v12, v11);
  }
  sub_E232A0(v13);
  return v10;
}

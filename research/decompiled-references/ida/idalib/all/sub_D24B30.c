__int64 __fastcall sub_D24B30(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  char v7; // al
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  unsigned int v12; // ebx
  _BYTE v13[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (_QWORD **)a1[3];
  v6 = (__int64 (*)(void))(*v5)[3];
  if ( (char *)v6 == (char *)sub_CF0250 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 24LL))(v5[3]);
  else
    v7 = v6();
  if ( v7 )
    return 0;
  v9 = sub_D24B00(a1[22]);
  v10 = a1[50];
  v11 = v9;
  if ( !(unsigned __int8)sub_DCA720(a1, a2, v10 + 40) )
    return 0;
  sub_E23220(
    v13,
    *(_QWORD *)(v10 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v10 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v10 + 40)));
  v12 = sub_DCBF60(a1, a2, v13);
  if ( (_BYTE)v12 )
    *(_QWORD *)sub_D0DBD0((__int64)v13) = v11;
  sub_E232A0(v13);
  return v12;
}

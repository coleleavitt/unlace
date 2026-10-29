__int64 __fastcall sub_D1CFB0(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  char v7; // al
  unsigned int v8; // ebp
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  _BYTE v13[48]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v14[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = (_QWORD **)a1[3];
  v6 = (__int64 (*)(void))(*v5)[3];
  if ( (char *)v6 == (char *)sub_CF0250 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 24LL))(v5[3]);
  else
    v7 = v6();
  v8 = 0;
  if ( !v7 )
  {
    v10 = a1[22];
    sub_E21760(v10, 48);
    sub_E23260(v13);
    sub_E21790(v10, 48);
    v11 = a1[50];
    v8 = sub_DCA720(a1, a2, v11 + 40);
    if ( (_BYTE)v8 )
    {
      sub_E23220(
        v14,
        *(_QWORD *)(v11 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v11 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v11 + 40)));
      v8 = sub_DCBF60(a1, a2, v14);
      if ( (_BYTE)v8 )
      {
        v12 = sub_D0EA30((__int64)v14);
        sub_E23300(v12, v13);
      }
      sub_E232A0(v14);
    }
    sub_E232A0(v13);
  }
  return v8;
}

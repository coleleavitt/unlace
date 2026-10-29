__int64 __fastcall sub_DCAC60(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rcx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  __int64 (*v11)(void); // rdx
  char v12; // al
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // rax
  _BYTE v17[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 != sub_CF0250 )
    goto LABEL_10;
  v7 = (_QWORD *)v5[3];
  v8 = *(__int64 (**)(void))(*v7 + 24LL);
  if ( (char *)v8 != (char *)v6 )
  {
    v12 = v8();
    goto LABEL_6;
  }
  v9 = (_QWORD *)v7[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
  if ( (char *)v6 == (char *)v8 )
  {
    v10 = (_QWORD **)v9[3];
    v11 = (__int64 (*)(void))(*v10)[3];
    if ( (char *)v11 == (char *)v6 )
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
    else
      v12 = v11();
  }
  else
  {
LABEL_10:
    v12 = ((__int64 (*)(void))v6)();
  }
LABEL_6:
  if ( v12 )
    return 0;
  v13 = a1[50];
  v14 = sub_DCA720((__int64)a1, a2, v13 + 40);
  if ( !(_BYTE)v14 )
    return 0;
  sub_E23220(
    v17,
    *(_QWORD *)(v13 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v13 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v13 + 40)));
  nullsub_501(v13 + 40);
  sub_E23CF0(v17);
  v15 = sub_E216C0(a1[22], 48);
  sub_E23260(v15);
  sub_E232A0(v17);
  return v14;
}

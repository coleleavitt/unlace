__int64 __fastcall sub_DA2FA0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rcx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  __int64 (*v11)(void); // rdx
  char v12; // al
  unsigned int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // rax
  _BYTE v17[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 != sub_CCC510 )
    goto LABEL_9;
  v7 = (_QWORD *)v5[3];
  v8 = *(__int64 (**)(void))(*v7 + 24LL);
  if ( (char *)v8 != (char *)v6 )
  {
    v12 = v8();
    goto LABEL_6;
  }
  v9 = (_QWORD *)v7[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
  if ( (char *)v6 != (char *)v8 )
  {
LABEL_9:
    v12 = ((__int64 (*)(void))v6)();
    goto LABEL_6;
  }
  v10 = (_QWORD **)v9[3];
  v11 = (__int64 (*)(void))(*v10)[3];
  if ( (char *)v11 == (char *)v6 )
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
  else
    v12 = v11();
LABEL_6:
  v13 = 0;
  if ( !v12 )
  {
    v14 = a1[22];
    sub_DFCD50(v17, a1[50], a3);
    v15 = sub_DFD980(v14, 48);
    sub_DFF520(v15);
    sub_DFF560(v17);
    return 1;
  }
  return v13;
}


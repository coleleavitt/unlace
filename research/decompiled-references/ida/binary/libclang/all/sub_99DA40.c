__int64 __fastcall sub_99DA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rax

  v7 = *(_QWORD **)(a1 + 24);
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 104LL);
  if ( v8 != sub_8D7E60 )
    goto LABEL_8;
  v9 = (_QWORD *)v7[3];
  v10 = *(__int64 (**)(void))(*v9 + 104LL);
  if ( (char *)v10 != (char *)v8 )
  {
LABEL_7:
    v13 = v10();
    goto LABEL_6;
  }
  v11 = (_QWORD *)v9[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 104LL);
  if ( (char *)v8 != (char *)v10 )
  {
LABEL_8:
    v13 = ((__int64 (*)(void))v8)();
    goto LABEL_6;
  }
  v12 = (_QWORD **)v11[3];
  v10 = (__int64 (*)(void))(*v12)[13];
  if ( (char *)v10 != (char *)v8 )
    goto LABEL_7;
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 104LL))(v12[3]);
LABEL_6:
  v14 = sub_8E8FB0(a4);
  v15 = sub_70E2F0(v13, v14);
  return sub_99D7B0(a1, a2, a3, a4, v15);
}


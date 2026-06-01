__int64 __fastcall sub_DA8C70(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  char v13; // al

  if ( a4 != 227 )
    return sub_D79BA0(a1, a2, a3, a4);
  v7 = *(_QWORD **)(a1 + 24);
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 != sub_CCC510 )
    goto LABEL_10;
  v9 = (_QWORD *)v7[3];
  v10 = *(__int64 (**)(void))(*v9 + 24LL);
  if ( (char *)v10 == (char *)v8 )
  {
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (__int64 (*)(void))(*v12)[3];
      if ( (char *)v10 == (char *)v8 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 24LL))(v12[3]);
        goto LABEL_7;
      }
      goto LABEL_11;
    }
LABEL_10:
    v13 = ((__int64 (*)(void))v8)();
    goto LABEL_7;
  }
LABEL_11:
  v13 = v10();
LABEL_7:
  if ( !v13 )
    return sub_D79BA0(a1, a2, a3, a4);
  return 0;
}


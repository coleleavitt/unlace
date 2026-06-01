_QWORD *__fastcall sub_9F27C0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // r12
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  _QWORD *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r13
  void *v15; // rdi
  _QWORD *result; // rax

  v3 = a1[23];
  v4 = *(_QWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_14:
      v11 = v8();
      goto LABEL_6;
    }
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (__int64 (*)(void))(*v10)[3];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
        goto LABEL_6;
      }
      goto LABEL_14;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = (_QWORD *)a1[25];
  if ( v11 && !v12[1] )
    goto LABEL_16;
  v13 = v12[4];
  if ( !sub_97DAC0(v13) )
    sub_9BD280((__int64)a1, v13);
  v12 = (_QWORD *)a1[25];
  v14 = v12[1];
  if ( v14 )
  {
    *a2 = v12[19];
    v15 = (void *)a1[25];
    if ( v15 )
      sub_A16FA0(v15);
    a1[25] = v14;
    result = (_QWORD *)sub_A1A4E0(a1[23], 8);
    *result = v4;
  }
  else
  {
LABEL_16:
    result = (_QWORD *)sub_A16FA0(v12);
    a1[25] = 0;
  }
  return result;
}


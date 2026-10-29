__int64 __fastcall sub_D98E10(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rdx
  _QWORD *v6; // rdi
  _QWORD **v7; // rdi
  char v8; // al
  unsigned int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rax

  v2 = (_QWORD *)a1[3];
  v3 = *(__int64 (__fastcall **)(__int64))(*v2 + 24LL);
  if ( v3 == sub_CCC510 )
  {
    v4 = (_QWORD *)v2[3];
    v5 = *(__int64 (**)(void))(*v4 + 24LL);
    if ( (char *)v5 != (char *)v3 )
    {
LABEL_9:
      v8 = v5();
      goto LABEL_6;
    }
    v6 = (_QWORD *)v4[3];
    v3 = *(__int64 (__fastcall **)(__int64))(*v6 + 24LL);
    if ( (char *)v3 == (char *)v5 )
    {
      v7 = (_QWORD **)v6[3];
      v5 = (__int64 (*)(void))(*v7)[3];
      if ( (char *)v5 == (char *)v3 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v7[3] + 24LL))(v7[3]);
        goto LABEL_6;
      }
      goto LABEL_9;
    }
  }
  v8 = ((__int64 (*)(void))v3)();
LABEL_6:
  v9 = 0;
  if ( !v8 )
  {
    v10 = a1[50] + 88LL;
    v11 = sub_DFD980(a1[22], 48);
    sub_DFF4A0(v11, v10);
    return 1;
  }
  return v9;
}


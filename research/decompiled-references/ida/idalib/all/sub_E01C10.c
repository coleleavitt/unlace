__int64 __fastcall sub_E01C10(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  char v9; // al
  __int64 v10; // rdi
  __int64 v11; // r12
  _BYTE *v12; // rdi

  v3 = (_QWORD *)a1[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 24LL);
  if ( v4 == sub_CF0250 )
  {
    v5 = (_QWORD *)v3[3];
    v6 = *(__int64 (**)(void))(*v5 + 24LL);
    if ( (char *)v6 != (char *)v4 )
    {
LABEL_12:
      v9 = v6();
      goto LABEL_6;
    }
    v7 = (_QWORD *)v5[3];
    v4 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
    if ( (char *)v4 == (char *)v6 )
    {
      v8 = (_QWORD **)v7[3];
      v6 = (__int64 (*)(void))(*v8)[3];
      if ( (char *)v6 == (char *)v4 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[3] + 24LL))(v8[3]);
        goto LABEL_6;
      }
      goto LABEL_12;
    }
  }
  v9 = ((__int64 (*)(void))v4)();
LABEL_6:
  v10 = a1[50];
  if ( (!v9 || *(_QWORD *)(v10 + 8))
    && (sub_DC79D0(a1, *a2, *(_QWORD *)(v10 + 32)), v10 = a1[50], (v11 = *(_QWORD *)(v10 + 8)) != 0) )
  {
    *a2 = *(_QWORD *)(v10 + 136);
    v12 = (_BYTE *)a1[50];
    if ( !v12[200] )
      sub_E20A70(v12);
    a1[50] = v11;
    return 1;
  }
  else
  {
    if ( !*(_BYTE *)(v10 + 200) )
      sub_E20A70((void *)v10);
    a1[50] = 0;
    return 1;
  }
}

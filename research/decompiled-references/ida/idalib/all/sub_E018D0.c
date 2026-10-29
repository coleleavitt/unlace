__int64 __fastcall sub_E018D0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // rbp
  _BYTE *v14; // rdi
  __int64 v15; // rbx
  _BYTE v17[48]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+38h] [rbp-30h]

  v3 = a1[22];
  v4 = sub_E21760(v3, 64);
  sub_E23260(v17);
  v18 = *(_QWORD *)(v4 + 48);
  v19 = *(_DWORD *)(v4 + 56);
  sub_E21790(v3, 64);
  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_CF0250 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_13:
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
      goto LABEL_13;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = a1[50];
  if ( (!v11 || *(_QWORD *)(v12 + 8))
    && (sub_DC79D0(a1, *a2, *(_QWORD *)(v12 + 32)), v12 = a1[50], (v13 = *(_QWORD *)(v12 + 8)) != 0) )
  {
    *a2 = *(_QWORD *)(v12 + 136);
    v14 = (_BYTE *)a1[50];
    if ( !v14[200] )
      sub_E20A70(v14);
    a1[50] = v13;
    v15 = sub_E216C0(a1[22], 64);
    sub_E231E0(v15, v17);
    *(_QWORD *)(v15 + 48) = v18;
    *(_DWORD *)(v15 + 56) = v19;
  }
  else
  {
    if ( !*(_BYTE *)(v12 + 200) )
      sub_E20A70((void *)v12);
    a1[50] = 0;
  }
  sub_E232A0(v17);
  return 1;
}

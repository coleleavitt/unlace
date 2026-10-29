__int64 __fastcall sub_90EFA0(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  unsigned int v12; // ebp
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE v19[64]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v20[15]; // [rsp+40h] [rbp-78h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
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
  v12 = 0;
  if ( !v11 )
  {
    v13 = a1[23];
    v14 = sub_A1A5A0(v13, 56);
    sub_A1C070(v19, v14);
    sub_A1A5E0(v13, 56);
    v15 = a1[25];
    v12 = sub_9D9870(a1, a2, v15 + 40);
    if ( (_BYTE)v12 )
    {
      sub_A1C030(
        v20,
        *(_QWORD *)(v15 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v15 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v15 + 40)));
      v12 = sub_9E26A0(a1, a2, v20);
      if ( (_BYTE)v12 )
      {
        v17 = sub_8F9CB0(v20);
        sub_A1C120(v17, v19, v18);
      }
      sub_A1C0C0(v20);
    }
    sub_A1C0C0(v19);
  }
  return v12;
}


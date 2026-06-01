__int64 __fastcall sub_9F1CE0(_QWORD *a1, _QWORD *a2)
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
  _QWORD *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbp
  void *v15; // rdi
  __int64 v16; // rbx
  _BYTE v18[56]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+40h] [rbp-38h]

  v3 = a1[23];
  v4 = sub_A1A5A0(v3, 72);
  sub_A1C070(v18, v4);
  v19 = *(_QWORD *)(v4 + 56);
  v20 = *(_DWORD *)(v4 + 64);
  sub_A1A5E0(v3, 72);
  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_15:
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
      goto LABEL_15;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = (_QWORD *)a1[25];
  if ( v11 && !v12[1] )
    goto LABEL_17;
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
    v16 = sub_A1A4E0(a1[23], 72);
    sub_A1BFE0(v16, v18);
    *(_QWORD *)(v16 + 56) = v19;
    *(_DWORD *)(v16 + 64) = v20;
  }
  else
  {
LABEL_17:
    sub_A16FA0(v12);
    a1[25] = 0;
  }
  return sub_A1C0C0(v18);
}


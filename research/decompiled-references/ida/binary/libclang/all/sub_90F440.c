__int64 __fastcall sub_90F440(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  unsigned int v12; // ebp
  __int64 v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24[4]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v25[15]; // [rsp+20h] [rbp-78h] BYREF

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
  v12 = 0;
  if ( !v11 )
  {
    v13 = a1[23];
    v14 = (_QWORD *)sub_A1A5A0(v13, 24);
    v15 = *v14;
    v16 = v14;
    if ( v15 == sub_2575D20(v13, 24, v17) )
      sub_257D000(v24, v16, v18, v19);
    else
      sub_2576960(v24, v16);
    sub_A1A5E0(v13, 24);
    v20 = a1[25];
    v12 = sub_9D9870(a1, a2, v20 + 40);
    if ( (_BYTE)v12 )
    {
      sub_A1C030(
        v25,
        *(_QWORD *)(v20 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v20 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v20 + 40)));
      v12 = sub_9E26A0(a1, a2, v25);
      if ( (_BYTE)v12 )
      {
        v22 = (__int64 *)sub_8F8D80(v25);
        sub_8DBB60(v22, v24, v23);
      }
      sub_A1C0C0(v25);
    }
    sub_5FF3B0(v24);
  }
  return v12;
}


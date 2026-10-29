__int64 __fastcall sub_90F280(_QWORD *a1, __int64 a2, int a3)
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
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rbx
  _QWORD v21[4]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+20h] [rbp-A8h]
  int v23; // [rsp+30h] [rbp-98h]
  _BYTE v24[56]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v25; // [rsp+78h] [rbp-50h]
  int v26; // [rsp+80h] [rbp-48h]

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_12:
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
      goto LABEL_12;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = 0;
  if ( !v11 )
  {
    v13 = a1[23];
    v14 = sub_A1A5A0(v13, 72);
    sub_A1C070(v24, v14);
    v25 = *(_QWORD *)(v14 + 56);
    v26 = *(_DWORD *)(v14 + 64);
    sub_A1A5E0(v13, 72);
    v15 = a1[25];
    v12 = sub_9D9870(a1, a2, v15 + 40);
    if ( (_BYTE)v12 )
    {
      sub_A1C030(
        v21,
        *(_QWORD *)(v15 + 64),
        (unsigned int)(a3 + *(_DWORD *)(v15 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v15 + 40)));
      v12 = sub_9E26A0(a1, a2, v21);
      if ( (_BYTE)v12 )
      {
        v18 = v21[3];
        v19 = v21[0];
        if ( !v23 && *(_BYTE *)(sub_8E5480((__int64)v21) + 51) && v22 == v19 )
          v20 = v18 + v22 + 72;
        else
          v20 = v18 + v19 + 40;
        sub_A1C120(v20, v24, v16);
        *(_QWORD *)(v20 + 56) = v25;
        *(_DWORD *)(v20 + 64) = v26;
      }
      sub_A1C0C0(v21);
    }
    sub_A1C0C0(v24);
  }
  return v12;
}


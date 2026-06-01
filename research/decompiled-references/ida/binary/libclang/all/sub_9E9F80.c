__int64 __fastcall sub_9E9F80(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  unsigned __int8 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19[13]; // [rsp+0h] [rbp-68h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(unsigned __int8 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
      goto LABEL_10;
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (unsigned __int8 (*)(void))(*v10)[3];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
        goto LABEL_6;
      }
LABEL_10:
      if ( v8() )
        return 0;
      goto LABEL_7;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  if ( v11 )
    return 0;
LABEL_7:
  v12 = a1[25];
  if ( !(unsigned __int8)sub_9D9870((__int64)a1, a2, v12 + 40) )
    return 0;
  sub_A1C030(
    v19,
    *(_QWORD *)(v12 + 64),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)));
  v13 = sub_9E82D0((__int64)a1, a2, (__int64)v19);
  if ( (_BYTE)v13 )
  {
    v15 = a1[23];
    v16 = sub_8F8D30(v19);
    v17 = sub_A1A4E0(v15, 16);
    v18 = *(_DWORD *)(v16 + 8);
    *(_DWORD *)(v17 + 8) = v18;
    if ( v18 > 0x40 )
      sub_2585B30(v17);
    else
      *(_QWORD *)v17 = *(_QWORD *)v16;
  }
  sub_A1C0C0(v19);
  return v13;
}


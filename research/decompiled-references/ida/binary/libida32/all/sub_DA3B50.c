__int64 __fastcall sub_DA3B50(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v14; // rax
  unsigned __int8 **v15; // rax
  unsigned __int8 **v16; // rbp

  if ( *(_QWORD *)(a1 + 416) == a3 )
    return 1;
  v4 = *(_QWORD **)(a1 + 24);
  v6 = *(__int64 (__fastcall **)(__int64))(*v4 + 104LL);
  if ( v6 != sub_D66930 )
    goto LABEL_10;
  v7 = (_QWORD *)v4[3];
  v8 = *(__int64 (**)(void))(*v7 + 104LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_13;
  v9 = (_QWORD *)v7[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 104LL);
  if ( (char *)v6 != (char *)v8 )
  {
LABEL_10:
    v14 = ((__int64 (*)(void))v6)();
    v12 = sub_B59570(a3, v14);
    if ( (_BYTE)v12 )
      return 1;
    goto LABEL_11;
  }
  v10 = (_QWORD **)v9[3];
  v8 = (__int64 (*)(void))(*v10)[13];
  if ( (char *)v8 == (char *)v6 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 104LL))(v10[3]);
    goto LABEL_7;
  }
LABEL_13:
  v11 = v8();
LABEL_7:
  v12 = sub_B59570(a3, v11);
  if ( (_BYTE)v12 )
    return 1;
LABEL_11:
  v15 = (unsigned __int8 **)sub_E0FDF0(a1, *(unsigned int *)(a3 + 24), 2483, 0);
  v16 = v15;
  if ( v15 )
  {
    sub_AC60B0(v15, (*(_BYTE *)(a3 + 96) & 0x18) != 0, 2u);
    sub_AC60B0(v16, a3, 0xAu);
  }
  return v12;
}


__int64 __fastcall sub_671FF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v6; // rbx
  __int64 (__fastcall *v7)(); // r14
  _QWORD *v8; // rbx
  __int64 (__fastcall *v9)(); // r15
  _QWORD **v10; // rbx
  __int64 (__fastcall *v11)(); // rax

  sub_66E8A0(a2);
  v6 = *(_QWORD **)(a2 + 184);
  v7 = *(__int64 (__fastcall **)())(*v6 + 288LL);
  if ( v7 != sub_671FF0 )
    goto LABEL_12;
  sub_66E8A0((__int64)v6);
  v8 = (_QWORD *)v6[23];
  v9 = *(__int64 (__fastcall **)())(*v8 + 288LL);
  if ( v9 != v7 )
    goto LABEL_10;
  sub_66E8A0((__int64)v8);
  v6 = (_QWORD *)v8[23];
  v7 = *(__int64 (__fastcall **)())(*v6 + 288LL);
  if ( v7 != v9 )
  {
LABEL_12:
    ((void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v7)(a1, v6, a3, a4);
    return a1;
  }
  sub_66E8A0((__int64)v6);
  v8 = (_QWORD *)v6[23];
  v9 = *(__int64 (__fastcall **)())(*v8 + 288LL);
  if ( v9 != v7 )
  {
LABEL_10:
    ((void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v9)(a1, v8, a3, a4);
    return a1;
  }
  sub_66E8A0((__int64)v8);
  v6 = (_QWORD *)v8[23];
  v7 = *(__int64 (__fastcall **)())(*v6 + 288LL);
  if ( v7 != v9 )
    goto LABEL_12;
  sub_66E8A0((__int64)v6);
  v8 = (_QWORD *)v6[23];
  v9 = *(__int64 (__fastcall **)())(*v8 + 288LL);
  if ( v9 != v7 )
    goto LABEL_10;
  sub_66E8A0((__int64)v8);
  v6 = (_QWORD *)v8[23];
  v7 = *(__int64 (__fastcall **)())(*v6 + 288LL);
  if ( v7 != v9 )
    goto LABEL_12;
  sub_66E8A0((__int64)v6);
  v10 = (_QWORD **)v6[23];
  v11 = (__int64 (__fastcall *)())(*v10)[36];
  if ( v11 == v7 )
  {
    sub_66E8A0((__int64)v10);
    (*(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD))(*v10[23] + 288LL))(a1, v10[23], a3, a4);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD **, __int64, _QWORD))v11)(a1, v10, a3, a4);
  }
  return a1;
}


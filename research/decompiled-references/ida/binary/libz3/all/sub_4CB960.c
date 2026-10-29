__int64 __fastcall sub_4CB960(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 (__fastcall *v3)(); // rax
  _QWORD *v4; // rsi
  __int64 (__fastcall *v5)(); // rdx
  _QWORD *v6; // rsi
  _QWORD *v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  _QWORD *v10; // rsi
  _QWORD **v11; // rsi

  v2 = *(_QWORD **)(a2 + 48);
  v3 = *(__int64 (__fastcall **)())(*v2 + 208LL);
  if ( v3 != sub_4CB960 )
    goto LABEL_11;
  v4 = (_QWORD *)v2[6];
  v5 = *(__int64 (__fastcall **)())(*v4 + 208LL);
  if ( v5 != v3 )
    goto LABEL_10;
  v6 = (_QWORD *)v4[6];
  v3 = *(__int64 (__fastcall **)())(*v6 + 208LL);
  if ( v3 != v5 )
    goto LABEL_11;
  v7 = (_QWORD *)v6[6];
  v5 = *(__int64 (__fastcall **)())(*v7 + 208LL);
  if ( v5 != v3 )
    goto LABEL_10;
  v8 = (_QWORD *)v7[6];
  v3 = *(__int64 (__fastcall **)())(*v8 + 208LL);
  if ( v3 != v5 )
    goto LABEL_11;
  v9 = (_QWORD *)v8[6];
  v5 = *(__int64 (__fastcall **)())(*v9 + 208LL);
  if ( v5 != v3 )
  {
LABEL_10:
    ((void (__fastcall *)(__int64))v5)(a1);
    return a1;
  }
  v10 = (_QWORD *)v9[6];
  v3 = *(__int64 (__fastcall **)())(*v10 + 208LL);
  if ( v3 == v5 )
  {
    v11 = (_QWORD **)v10[6];
    v5 = (__int64 (__fastcall *)())(*v11)[26];
    if ( v5 == v3 )
    {
      (*(void (**)(void))(*v11[6] + 208LL))();
      return a1;
    }
    goto LABEL_10;
  }
LABEL_11:
  ((void (__fastcall *)(__int64))v3)(a1);
  return a1;
}


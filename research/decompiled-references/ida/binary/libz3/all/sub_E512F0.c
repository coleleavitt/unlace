__int64 __fastcall sub_E512F0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 (__fastcall *v4)(); // rax
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(); // r8

  v3 = *(_QWORD **)(a2 + 104);
  v4 = *(__int64 (__fastcall **)())(*v3 + 288LL);
  if ( v4 != sub_E512F0 )
    goto LABEL_11;
  v5 = (_QWORD *)v3[13];
  v6 = *(__int64 (__fastcall **)())(*v5 + 288LL);
  if ( v6 != v4 )
    goto LABEL_10;
  v3 = (_QWORD *)v5[13];
  v4 = *(__int64 (__fastcall **)())(*v3 + 288LL);
  if ( v4 != v6 )
    goto LABEL_11;
  v5 = (_QWORD *)v3[13];
  v6 = *(__int64 (__fastcall **)())(*v5 + 288LL);
  if ( v6 != v4 )
    goto LABEL_10;
  v3 = (_QWORD *)v5[13];
  v4 = *(__int64 (__fastcall **)())(*v3 + 288LL);
  if ( v4 != v6 )
    goto LABEL_11;
  v5 = (_QWORD *)v3[13];
  v6 = *(__int64 (__fastcall **)())(*v5 + 288LL);
  if ( v6 != v4 )
  {
LABEL_10:
    ((void (__fastcall *)(__int64, _QWORD *, __int64))v6)(a1, v5, a3);
    return a1;
  }
  v3 = (_QWORD *)v5[13];
  v4 = *(__int64 (__fastcall **)())(*v3 + 288LL);
  if ( v4 == v6 )
  {
    v5 = (_QWORD *)v3[13];
    v6 = *(__int64 (__fastcall **)())(*v5 + 288LL);
    if ( v6 == v4 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5[13] + 288LL))(a1, v5[13], a3);
      return a1;
    }
    goto LABEL_10;
  }
LABEL_11:
  ((void (__fastcall *)(__int64, _QWORD *, __int64))v4)(a1, v3, a3);
  return a1;
}


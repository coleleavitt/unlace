__int64 __fastcall sub_672C10(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 (__fastcall *v4)(); // rax
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(); // rcx

  v3 = *(_QWORD **)(a2 + 128);
  v4 = *(__int64 (__fastcall **)())(*v3 + 352LL);
  if ( v4 != sub_672C10 )
    goto LABEL_11;
  v5 = (_QWORD *)v3[16];
  v6 = *(__int64 (__fastcall **)())(*v5 + 352LL);
  if ( v6 != v4 )
    goto LABEL_10;
  v3 = (_QWORD *)v5[16];
  v4 = *(__int64 (__fastcall **)())(*v3 + 352LL);
  if ( v4 != v6 )
    goto LABEL_11;
  v5 = (_QWORD *)v3[16];
  v6 = *(__int64 (__fastcall **)())(*v5 + 352LL);
  if ( v6 != v4 )
    goto LABEL_10;
  v3 = (_QWORD *)v5[16];
  v4 = *(__int64 (__fastcall **)())(*v3 + 352LL);
  if ( v4 != v6 )
    goto LABEL_11;
  v5 = (_QWORD *)v3[16];
  v6 = *(__int64 (__fastcall **)())(*v5 + 352LL);
  if ( v6 != v4 )
  {
LABEL_10:
    ((void (__fastcall *)(__int64, _QWORD *, _QWORD))v6)(a1, v5, a3);
    return a1;
  }
  v3 = (_QWORD *)v5[16];
  v4 = *(__int64 (__fastcall **)())(*v3 + 352LL);
  if ( v4 == v6 )
  {
    v5 = (_QWORD *)v3[16];
    v6 = *(__int64 (__fastcall **)())(*v5 + 352LL);
    if ( v6 == v4 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5[16] + 352LL))(a1, v5[16], a3);
      return a1;
    }
    goto LABEL_10;
  }
LABEL_11:
  ((void (__fastcall *)(__int64, _QWORD *, _QWORD))v4)(a1, v3, a3);
  return a1;
}


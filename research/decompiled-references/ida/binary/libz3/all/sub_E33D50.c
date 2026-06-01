__int64 __fastcall sub_E33D50(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(); // rax
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(); // rcx

  v3 = *(_QWORD **)(a1 + 160);
  v4 = *(__int64 (__fastcall **)())(*v3 + 360LL);
  if ( v4 != sub_E33D50 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v4)(v3, a2, a3);
  v5 = (_QWORD *)v3[20];
  v6 = *(__int64 (__fastcall **)())(*v5 + 360LL);
  if ( v6 != v4 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v6)(v5, a2, a3);
  v3 = (_QWORD *)v5[20];
  v4 = *(__int64 (__fastcall **)())(*v3 + 360LL);
  if ( v4 != v6 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v4)(v3, a2, a3);
  v5 = (_QWORD *)v3[20];
  v6 = *(__int64 (__fastcall **)())(*v5 + 360LL);
  if ( v6 != v4 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v6)(v5, a2, a3);
  v3 = (_QWORD *)v5[20];
  v4 = *(__int64 (__fastcall **)())(*v3 + 360LL);
  if ( v4 != v6 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v4)(v3, a2, a3);
  v5 = (_QWORD *)v3[20];
  v6 = *(__int64 (__fastcall **)())(*v5 + 360LL);
  if ( v6 != v4 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6)(v5, a2, a3);
  v3 = (_QWORD *)v5[20];
  v4 = *(__int64 (__fastcall **)())(*v3 + 360LL);
  if ( v4 == v6 )
  {
    v5 = (_QWORD *)v3[20];
    v6 = *(__int64 (__fastcall **)())(*v5 + 360LL);
    if ( v6 == v4 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v5[20] + 360LL))(v5[20], a2, a3);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6)(v5, a2, a3);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v4)(v3, a2, a3);
}


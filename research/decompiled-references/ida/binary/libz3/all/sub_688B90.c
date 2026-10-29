__int64 __fastcall sub_688B90(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 (__fastcall *v3)(); // r12
  _QWORD *v4; // rbp
  __int64 (__fastcall *v5)(); // r13
  _QWORD **v6; // rbp
  __int64 (__fastcall *v7)(); // rax

  sub_1474000(a1 + 168);
  v2 = *(_QWORD **)(a1 + 144);
  v3 = *(__int64 (__fastcall **)())(*v2 + 16LL);
  if ( v3 != sub_688B90 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64))v3)(v2, a2);
  sub_1474000(v2 + 21);
  v4 = (_QWORD *)v2[18];
  v5 = *(__int64 (__fastcall **)())(*v4 + 16LL);
  if ( v5 != v3 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64))v5)(v4, a2);
  sub_1474000(v4 + 21);
  v2 = (_QWORD *)v4[18];
  v3 = *(__int64 (__fastcall **)())(*v2 + 16LL);
  if ( v3 != v5 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64))v3)(v2, a2);
  sub_1474000(v2 + 21);
  v4 = (_QWORD *)v2[18];
  v5 = *(__int64 (__fastcall **)())(*v4 + 16LL);
  if ( v5 != v3 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64))v5)(v4, a2);
  sub_1474000(v4 + 21);
  v2 = (_QWORD *)v4[18];
  v3 = *(__int64 (__fastcall **)())(*v2 + 16LL);
  if ( v3 != v5 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v3)(v2, a2);
  sub_1474000(v2 + 21);
  v4 = (_QWORD *)v2[18];
  v5 = *(__int64 (__fastcall **)())(*v4 + 16LL);
  if ( v5 != v3 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v5)(v4, a2);
  sub_1474000(v4 + 21);
  v2 = (_QWORD *)v4[18];
  v3 = *(__int64 (__fastcall **)())(*v2 + 16LL);
  if ( v3 != v5 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v3)(v2, a2);
  sub_1474000(v2 + 21);
  v6 = (_QWORD **)v2[18];
  v7 = (__int64 (__fastcall *)())(*v6)[2];
  if ( v7 != v3 )
    return ((__int64 (__fastcall *)(_QWORD **, __int64))v7)(v6, a2);
  sub_1474000(v6 + 21);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6[18] + 16LL))(v6[18], a2);
}


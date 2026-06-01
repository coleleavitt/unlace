__int64 __fastcall sub_1EAF30(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  void (*v6)(); // rax
  __int64 v7; // rdi
  void (*v8)(); // rax

  v3 = a1[91];
  a1[91] = a2;
  v4 = a1[111];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 376LL))(v4);
  v5 = a1[112];
  if ( v5 )
  {
    v6 = *(void (**)())(*(_QWORD *)v5 + 376LL);
    if ( v6 != nullsub_37 )
      ((void (__fastcall *)(__int64, _QWORD))v6)(v5, a1[91]);
  }
  v7 = a1[113];
  if ( !v7 )
    return v3;
  v8 = *(void (**)())(*(_QWORD *)v7 + 376LL);
  if ( v8 == nullsub_37 )
    return v3;
  ((void (__fastcall *)(__int64, _QWORD))v8)(v7, a1[91]);
  return v3;
}

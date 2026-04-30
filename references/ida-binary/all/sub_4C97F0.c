unsigned __int64 __fastcall sub_4C97F0(_QWORD *a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( *((_BYTE *)a2 + 44) )
    return v9 - __readfsqword(0x28u);
  v3 = *a2;
  *((_BYTE *)a2 + 44) = 1;
  (*(void (__fastcall **)(__int64 *, _QWORD))(v3 + 104))(a2, 0);
  v4 = sub_4CE740(a2);
  ++dword_8D1D3C;
  v5 = v4;
  if ( !v4 )
  {
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(a1[1] + 16LL)) )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 104LL))(a1, 0);
LABEL_4:
    v6 = dword_8D1D3C;
    if ( dword_8D1D3C > 0 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 512LL))(v4) )
    goto LABEL_4;
  sub_4C97F0(a1, v5);
  v6 = dword_8D1D3C;
  if ( dword_8D1D3C > 0 )
  {
LABEL_5:
    dword_8D1D3C = v6 - 1;
    if ( v6 != 1 )
      return v9 - __readfsqword(0x28u);
  }
LABEL_7:
  v8 = sub_47A690((__int64)QT::QCoreApplication::self);
  if ( v8 )
    sub_4C9440(v8, a3);
  return v9 - __readfsqword(0x28u);
}

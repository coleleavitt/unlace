__int64 __fastcall form_actions_impl_t__::vfunc_6(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // [rsp+Fh] [rbp-19h]
  char v8; // [rsp+17h] [rbp-11h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v3 = sub_4F9180(a1, a2, &v8, nullptr);
  if ( !v3 )
    return 0;
  v4 = v3;
  result = *(_BYTE *)(*(_QWORD *)(v3 + 8) + 48LL) & 1;
  if ( !(_DWORD)result )
    return result;
  if ( v8 == 104 || v8 == 32 )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(char *)(*(_QWORD *)(v6 + 32) + 9LL) < 0 )
  {
    v7 = result;
    QT::QWidget::setFocus(v4, 7);
    return v7;
  }
  else
  {
    *(_QWORD *)(v6 + 304) = v4;
  }
  return result;
}

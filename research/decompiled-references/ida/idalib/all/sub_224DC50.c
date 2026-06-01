_QWORD *__fastcall sub_224DC50(std::_V2 *a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 v2; // rbx
  __int64 v3; // rbx
  std::_V2 *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx

  v1 = a1;
  if ( !qword_2D0ABB0 )
  {
    a1 = (std::_V2 *)&qword_2D0ABB0;
    sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
  }
  v2 = *(_QWORD *)(qword_2D0ABB0 + 8);
  if ( !v2 )
  {
    v3 = operator new(0x60u);
    sub_227D340(v3, 2, 0, 0, 0);
    *v1 = v3;
    return v1;
  }
  if ( v2 > 1 )
  {
    a1 = *(std::_V2 **)qword_2D0ABB0;
    if ( memcmp(*(const void **)qword_2D0ABB0, "-", 1u) )
      goto LABEL_7;
    v6 = v2 - 1;
    if ( v6 > 0x7FFFFFFF || v6 < (__int64)0xFFFFFFFF80000000LL || (_DWORD)v6 )
      goto LABEL_7;
  }
  else if ( **(_BYTE **)qword_2D0ABB0 != 45 )
  {
LABEL_7:
    std::_V2::system_category(a1);
    v5 = (std::_V2 *)operator new(0x60u);
    sub_227D450(v5);
    *v1 = v5;
    return v1;
  }
  v7 = operator new(0x60u);
  sub_227D340(v7, 1, 0, 0, 0);
  *v1 = v7;
  return v1;
}

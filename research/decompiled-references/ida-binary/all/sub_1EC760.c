__int64 __fastcall sub_1EC760(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 (__fastcall *v5)(__int64, __int64); // rax

  if ( (_BYTE)a2 )
    return -1;
  v5 = (__int64 (__fastcall *)(__int64, __int64))(*a1)[89];
  if ( a1[53] )
  {
    if ( v5 == sub_1E6950 )
    {
      if ( (unsigned __int8)sub_331080() )
        return (*(__int64 (__fastcall **)(_QWORD *))(*a1[53] + 128LL))(a1[53]);
      else
        return -1;
    }
    else
    {
      return v5((__int64)a1, (__int64)(a1 + 48));
    }
  }
  else
  {
    sub_1E69C0(a5, (__int64)a1, a2, a3, a4);
    return sub_1EC7E0(a1);
  }
}

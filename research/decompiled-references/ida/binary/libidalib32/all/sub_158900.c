__int64 __fastcall sub_158900(_QWORD **a1, char a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  if ( a2 )
    return 0xFFFFFFFFLL;
  v2 = (__int64 (__fastcall *)(__int64, __int64))(*a1)[51];
  if ( a1[60] )
  {
    if ( v2 == sub_1583D0 )
    {
      if ( (unsigned __int8)sub_13BCE0((__int64)a1) )
        return (*(__int64 (__fastcall **)(_QWORD *))(*a1[60] + 128LL))(a1[60]);
      else
        return 0xFFFFFFFFLL;
    }
    else
    {
      return v2((__int64)a1, (__int64)(a1 + 55));
    }
  }
  else
  {
    sub_1582F0();
    return sub_158980();
  }
}


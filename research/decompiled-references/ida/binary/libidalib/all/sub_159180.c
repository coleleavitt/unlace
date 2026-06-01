__int64 __fastcall sub_159180(_QWORD **a1, char a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  if ( a2 )
    return -1;
  v2 = (__int64 (__fastcall *)(__int64, __int64))(*a1)[51];
  if ( a1[60] )
  {
    if ( v2 == sub_158C10 )
    {
      if ( (unsigned __int8)sub_13C2E0((__int64)a1) )
        return (*(__int64 (__fastcall **)(_QWORD *))(*a1[60] + 128LL))(a1[60]);
      else
        return -1;
    }
    else
    {
      return v2((__int64)a1, (__int64)(a1 + 55));
    }
  }
  else
  {
    sub_158B30();
    return sub_159200();
  }
}


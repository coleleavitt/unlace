__int64 __fastcall sub_838E40(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = sub_18290A0(*(_QWORD *)(a1 + 72));
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(a1 + 472) && (unsigned __int8)sub_1021C70() )
    {
      result = sub_1021C80(*(_QWORD *)(a1 + 472));
      if ( (_DWORD)result == -1 )
      {
        sub_838C10(a1);
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}


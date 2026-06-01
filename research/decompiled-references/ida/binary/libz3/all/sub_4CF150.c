__int64 __fastcall sub_4CF150(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 && *(_DWORD *)(v4 - 4) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3) )
      return sub_4C6F80(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL), (__int64 *)(a2 + 16), *(_DWORD *)(a2 + 24));
    else
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    return sub_4C6F80(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL), (__int64 *)(a3 + 16), *(_DWORD *)(a3 + 24));
  }
  else
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 72LL))(a3);
  }
}


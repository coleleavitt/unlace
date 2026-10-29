__int64 __fastcall sub_4CF2F0(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  unsigned int v5; // eax

  if ( !a2 )
    return 0;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( v3 )
    return v3;
  if ( !a2[10] || (int)v3 >= (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 464LL))(a2) )
    return 0;
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a2 + 456LL))(a2, v3);
    v5 = sub_4CF2F0(a1);
    if ( v5 )
      break;
    if ( (int)++v3 >= (*(int (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 464LL))(a2, v4) )
      return 0;
  }
  return v5;
}

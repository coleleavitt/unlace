__int64 __fastcall sub_4CF380(__int64 a1, _DWORD *a2)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 result; // rax

  if ( !a2 )
    return 0;
  if ( !a2[10] )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v2 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 464LL))(a2) - 1;
  if ( v2 < 0 )
    return 0;
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a2 + 456LL))(a2, (unsigned int)v2);
    result = sub_4CF380(a1, v3);
    if ( (_DWORD)result )
      break;
    if ( v2-- == 0 )
      return 0;
  }
  return result;
}

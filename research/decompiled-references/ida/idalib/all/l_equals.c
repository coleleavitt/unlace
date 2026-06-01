bool __fastcall l_equals(_DWORD *a1, _DWORD *a2)
{
  if ( a1 == a2 )
    return 1;
  if ( a1 && a2 && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 168LL))(a1) )
    return a1[2] == a2[2];
  return 0;
}

__int64 __fastcall sub_101D590(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 0;
  if ( *(_DWORD *)(a1 + 312) > a2 )
    return sub_101D3D0(a1, a2);
  result = 0;
  if ( a2 >= *(_DWORD *)(a1 + 316) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464));
  return result;
}

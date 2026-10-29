__int64 __fastcall sub_D89D10(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = sub_E1E550(*(_QWORD *)(a1 + 784));
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  sub_E33C80(a1 + 384, HIDWORD(v4), 2455, 0);
  return 0;
}

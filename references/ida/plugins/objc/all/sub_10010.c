__int64 __fastcall sub_10010(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebp

  v3 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 136LL))(a1, a2, a1[33] + a3);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 520LL))(a1, a2);
    return v3;
  }
  return 0;
}

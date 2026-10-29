char __fastcall sub_FF780(_BYTE *a1, unsigned int a2, int a3)
{
  __int64 v4; // r12

  if ( a3 == 2 )
    return sub_FDED0((__int64)a1, a2);
  if ( a3 > 2 )
  {
    if ( a3 != 3 )
      return 0;
    return sub_1644F0(a2);
  }
  if ( a3 )
  {
    if ( a3 == 1 )
      return (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 704LL))(a1, a2, 1, 0) == 1;
    return 0;
  }
  if ( !a1[1192] )
    return (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 704LL))(a1, a2, 1, 0) == 1;
  (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 416LL))(a1, 0);
  v4 = getseg();
  if ( v4 == getseg() )
    return (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 704LL))(a1, a2, 1, 0) == 1;
  if ( (unsigned __int8)segtype() == 2 )
    return sub_1644F0(a2);
  return sub_FDED0((__int64)a1, a2);
}


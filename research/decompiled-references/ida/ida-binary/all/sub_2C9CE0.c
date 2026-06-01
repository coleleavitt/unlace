bool __fastcall sub_2C9CE0(_BYTE *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // r12

  if ( a3 == 2 )
    return sub_2C7E30((__int64)a1, a2);
  if ( a3 > 2 )
  {
    if ( a3 != 3 )
      return 0;
    return sub_1F48F0(a2);
  }
  if ( a3 )
  {
    if ( a3 == 1 )
      return (*(unsigned int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 1104LL))(a1, a2, 1, 0) == 1;
    return 0;
  }
  if ( !a1[1032] )
    return (*(unsigned int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 1104LL))(a1, a2, 1, 0) == 1;
  v4 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 720LL))(a1, 0);
  v5 = getseg(v4);
  if ( v5 == getseg(a2) )
    return (*(unsigned int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 1104LL))(a1, a2, 1, 0) == 1;
  if ( (unsigned __int8)segtype(a2) == 2 )
    return sub_1F48F0(a2);
  return sub_2C7E30((__int64)a1, a2);
}

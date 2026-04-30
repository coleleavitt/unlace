bool __fastcall sub_2C7E30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // edx
  __int64 *i; // rcx

  v3 = qword_8CCB60;
  if ( qword_8CCB60 )
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 1104LL))(v3, a2, 1, 0) == 1;
  v5 = xmmword_8CCBC8 - 1;
  if ( (int)xmmword_8CCBC8 - 1 >= 0 )
  {
    for ( i = (__int64 *)(qword_8CCBC0 + 8LL * v5); ; --i )
    {
      v3 = *i;
      if ( *i )
      {
        if ( v3 != a1 )
          break;
      }
      if ( --v5 == -1 )
        return 0;
    }
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 1104LL))(v3, a2, 1, 0) == 1;
  }
  return 0;
}

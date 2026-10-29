bool __fastcall sub_FDED0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // edx
  __int64 *i; // rcx

  v3 = qword_251730;
  if ( qword_251730 )
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 704LL))(v3, a2, 1, 0) == 1;
  v5 = xmmword_251788 - 1;
  if ( (int)xmmword_251788 - 1 >= 0 )
  {
    for ( i = (__int64 *)(qword_251780 + 8LL * v5); ; --i )
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
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 704LL))(v3, a2, 1, 0) == 1;
  }
  return 0;
}


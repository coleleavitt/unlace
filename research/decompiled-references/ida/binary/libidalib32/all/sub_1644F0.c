bool __fastcall sub_1644F0(unsigned int a1)
{
  __int64 v2; // rax
  char *v3; // rdi
  __int64 v4; // rdi
  bool result; // al

  if ( dword_2515A4 )
  {
    if ( dword_24411C >= 0 && dword_24411C < (unsigned __int64)xmmword_251378 )
    {
      v2 = qword_251370 + 56LL * dword_24411C;
      if ( v2 )
      {
        v3 = (char *)s1;
        if ( *(_QWORD *)(v2 + 8) )
          v3 = *(char **)v2;
        v4 = sub_164480(v3);
        if ( v4 )
          return (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v4 + 704LL))(
                   v4,
                   a1,
                   1,
                   0) == 1;
      }
    }
  }
  v4 = qword_2532B0;
  result = 0;
  if ( qword_2532B0 )
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v4 + 704LL))(v4, a1, 1, 0) == 1;
  return result;
}


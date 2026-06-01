bool __fastcall sub_164E50(__int64 a1)
{
  __int64 v2; // rax
  char *v3; // rdi
  __int64 v4; // rdi
  bool result; // al

  if ( dword_25274C )
  {
    if ( dword_245174 >= 0 && dword_245174 < (unsigned __int64)xmmword_2524F8 )
    {
      v2 = qword_2524F0 + 56LL * dword_245174;
      if ( v2 )
      {
        v3 = (char *)s1;
        if ( *(_QWORD *)(v2 + 8) )
          v3 = *(char **)v2;
        v4 = sub_164DE0(v3);
        if ( v4 )
          return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 704LL))(
                   v4,
                   a1,
                   1,
                   0) == 1;
      }
    }
  }
  v4 = qword_254470;
  result = 0;
  if ( qword_254470 )
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 704LL))(v4, a1, 1, 0) == 1;
  return result;
}


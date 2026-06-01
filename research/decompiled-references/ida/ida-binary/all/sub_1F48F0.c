bool __fastcall sub_1F48F0(__int64 a1)
{
  __int64 v2; // rax
  const char *v3; // rdi
  __int64 v4; // rdi
  bool result; // al

  if ( dword_8CC5F0 )
  {
    if ( dword_8BA594 >= 0 && dword_8BA594 < (unsigned __int64)xmmword_8CC398 )
    {
      v2 = qword_8CC390 + 56LL * dword_8BA594;
      if ( v2 )
      {
        v3 = &s1;
        if ( *(_QWORD *)(v2 + 8) )
          v3 = *(const char **)v2;
        v4 = sub_2E09C0(v3);
        if ( v4 )
          return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 1104LL))(
                   v4,
                   a1,
                   1,
                   0) == 1;
      }
    }
  }
  v4 = unk_8CD7E8;
  result = 0;
  if ( unk_8CD7E8 )
    return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 1104LL))(v4, a1, 1, 0) == 1;
  return result;
}

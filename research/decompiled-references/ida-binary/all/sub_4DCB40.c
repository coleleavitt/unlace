__int64 sub_4DCB40()
{
  char *v0; // rcx
  _QWORD *v1; // rdi

  v0 = *(char **)*std::__once_callable;
  v1 = (_QWORD *)(*(_QWORD *)std::__once_callable[1] + *(_QWORD *)(*std::__once_callable + 8LL));
  if ( ((unsigned __int8)v0 & 1) != 0 )
    v0 = *(char **)&v0[*v1 - 1];
  return ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v0)(
           v1,
           *(_QWORD *)std::__once_callable[2],
           *(_QWORD *)std::__once_callable[3]);
}

char __fastcall sub_38A3B0(
        _QWORD *a1,
        unsigned int (__fastcall *a2)(_QWORD, __int64, _QWORD, _QWORD),
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  if ( a2 )
    return a2(a1[1], a3, a4, a5) != 0;
  tag_remove();
  return (*(__int64 (**)(_QWORD, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL))(*a1, a1[1], "%s\n", haystack);
}


__int64 __fastcall sub_571630(_QWORD *a1, unsigned int a2)
{
  const char *v3; // rsi
  __int64 result; // rax

  sub_3E0180((__int64)(a1 + 3));
  v3 = haystack;
  if ( a1[4] )
    v3 = (const char *)a1[3];
  result = (*(__int64 (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, v3, a2);
  a1[4] = 0;
  return result;
}

__int64 (__fastcall *__fastcall sub_787B0(_QWORD *a1))(_QWORD *, _QWORD *, __int64)
{
  __int64 v2; // rdi
  __int64 (__fastcall *result)(_QWORD *, _QWORD *, __int64); // rax

  *a1 = off_163B78;
  v2 = a1[8];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  a1[1] = &off_163B40;
  result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[6];
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result(a1 + 4, a1 + 4, 3);
  return result;
}


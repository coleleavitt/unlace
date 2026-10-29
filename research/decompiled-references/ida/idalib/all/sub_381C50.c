__int64 __fastcall sub_381C50(_QWORD *a1, const char *a2)
{
  __int64 result; // rax

  sub_381B20((__int64)a1, a2);
  result = *(_QWORD *)(a1[12] + 8LL);
  if ( !result )
  {
    (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, " ", 0);
    return *(_QWORD *)(a1[12] + 8LL);
  }
  return result;
}

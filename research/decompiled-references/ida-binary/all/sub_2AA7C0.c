__int64 __fastcall sub_2AA7C0(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  __int64 result; // rax

  result = a3;
  if ( (*(_BYTE *)(a2[13] + a3) & 1) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 280LL))(a2, a3, a4);
  return result;
}

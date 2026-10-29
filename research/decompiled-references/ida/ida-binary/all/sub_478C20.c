unsigned __int64 __fastcall sub_478C20(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  struct sigaction *v5; // rax

  result = (unsigned int)dword_8D1550++;
  if ( !(_DWORD)result )
  {
    sub_478B60((__int64)"Oops, IDA has almost crashed! (signum=%d)\n", a1);
    v5 = &act;
    if ( a1 != 11 )
    {
      v5 = &stru_8D1560;
      if ( a1 == 7 )
        v5 = &stru_8D1600;
    }
    result = (unsigned __int64)v5->sa_handler;
    if ( result > 1 )
      result = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))result)(a1, a2, a3);
    if ( qword_8D1750 )
      __longjmp_chk(*((_QWORD *)&xmmword_8D1740 + 1) + 16LL, 1);
  }
  return result;
}

__int64 (*__fastcall sub_A55CA0(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( result != sub_A55C50 )
    return (__int64 (*)(void))result();
  return result;
}

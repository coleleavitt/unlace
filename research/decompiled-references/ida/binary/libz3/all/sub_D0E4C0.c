__int64 (*__fastcall sub_D0E4C0(__int64 a1))(void)
{
  __int64 (*v1)(void); // rdx
  __int64 (*result)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 160LL);
  if ( (char *)v1 != (char *)sub_D0E490 )
    return (__int64 (*)(void))v1();
  result = *(__int64 (**)(void))(*(_QWORD *)a1 + 152LL);
  if ( (char *)result != (char *)nullsub_793 )
    return (__int64 (*)(void))result();
  return result;
}


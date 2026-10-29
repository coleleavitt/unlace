__int64 (*__fastcall sub_E5CAB0(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)a1 + 152LL);
  if ( (char *)result != (char *)nullsub_856 )
    return (__int64 (*)(void))result();
  return result;
}


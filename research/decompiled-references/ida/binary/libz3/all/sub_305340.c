__int64 (*__fastcall sub_305340(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)result != (char *)nullsub_153 )
    return (__int64 (*)(void))result();
  return result;
}


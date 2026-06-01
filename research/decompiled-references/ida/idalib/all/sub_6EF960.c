__int64 (*__fastcall sub_6EF960(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(**(_QWORD **)(a1 + 24) + 64LL);
  if ( (char *)result != (char *)nullsub_161 )
    return (__int64 (*)(void))result();
  return result;
}

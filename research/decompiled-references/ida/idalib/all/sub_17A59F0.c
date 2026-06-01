__int64 (*__fastcall sub_17A59F0(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(**(_QWORD **)(a1 + 256) + 32LL);
  if ( (char *)result != (char *)nullsub_149 )
    return (__int64 (*)(void))result();
  return result;
}

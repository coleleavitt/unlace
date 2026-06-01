unsigned __int64 __fastcall sub_EFF230(_QWORD *a1)
{
  unsigned __int64 result; // rax

  result = 0;
  if ( *a1 )
  {
    if ( (((unsigned __int8)*a1 ^ 6) & 6) == 0 )
      return *a1 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return result;
}


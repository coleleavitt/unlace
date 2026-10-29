const char *__fastcall sub_78DC70(_QWORD *a1, int a2)
{
  const char *result; // rax
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rsi

  if ( a2 < 0 )
  {
    result = &byte_22F0C30;
    if ( a2 != -1 )
    {
      v4 = -a2;
      if ( v4 < unk_2C7C620 )
        return *(const char **)&off_2C7C628[40 * v4];
    }
  }
  else
  {
    result = &byte_22F0C30;
    if ( (unsigned __int64)a2 < a1[1] )
    {
      v3 = *(_QWORD **)(*a1 + 8LL * a2);
      result = haystack;
      if ( v3[1] )
        return (const char *)*v3;
    }
  }
  return result;
}

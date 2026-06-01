__int64 __fastcall sub_2F17C0(const char *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+Ch] [rbp-Ch]

  result = sub_2EE840(a1, a2, 0, a3);
  if ( (unsigned int)result <= 3 )
  {
    v4 = result;
    sub_2EE810(a2, (__int64)"Metadata History");
    return v4;
  }
  return result;
}

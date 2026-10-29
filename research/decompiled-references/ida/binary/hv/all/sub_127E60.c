unsigned __int64 __fastcall sub_127E60(
        unsigned int *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        char a8)
{
  unsigned __int64 result; // rax
  unsigned __int8 *v12; // rdx
  unsigned __int64 v13; // rcx

  result = sub_127310(a1, a4, a5, a6, a7, a8);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    if ( a5 <= result )
    {
      return -72;
    }
    else
    {
      v12 = &a4[result];
      v13 = a5 - result;
      if ( (a8 & 1) != 0 )
        return sub_11EBF0(a2, a3, v12, v13, (int *)a1);
      else
        return sub_11EFF0(a2, a3, v12, v13, (int *)a1);
    }
  }
  return result;
}


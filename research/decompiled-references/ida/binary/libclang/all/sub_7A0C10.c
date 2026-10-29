__int64 __fastcall sub_7A0C10(__int64 **a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  v2 = sub_7868A0(a2);
  result = 1;
  if ( v2 )
  {
    **a1 = a2;
    return 0;
  }
  return result;
}


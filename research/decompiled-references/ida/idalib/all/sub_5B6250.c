__int64 __fastcall sub_5B6250(unsigned __int64 **a1, unsigned __int64 **a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v2 = **a1;
  v3 = **a2;
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
  {
    result = 1;
    if ( v3 >= v2 )
    {
      v5 = (unsigned __int64)a1[1];
      v6 = (unsigned __int64)a2[1];
      result = 0xFFFFFFFFLL;
      if ( v5 >= v6 )
        return v6 < v5;
    }
  }
  return result;
}

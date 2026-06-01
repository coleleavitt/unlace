__int64 __fastcall sub_991330(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-10h]

  result = **a1;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 8) )
    {
      v2 = **a1;
      sub_15D7BC0((*a1)[1], result);
      return v2;
    }
  }
  return result;
}


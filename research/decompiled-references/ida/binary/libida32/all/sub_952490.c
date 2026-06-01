unsigned __int64 __fastcall sub_952490(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 result; // rax

  if ( a2 )
  {
    v2 = sub_950C90(a2);
    *(_DWORD *)(a1 + 30204) = *(_QWORD *)(a1 + 29912) != sub_950CA0(a2) + v2;
    result = sub_9522A0(a1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      sub_950CB0(a1, a2);
      return 0;
    }
  }
  else
  {
    result = sub_9522A0(a1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      return 0;
  }
  return result;
}


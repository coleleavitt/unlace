unsigned __int64 __fastcall sub_9761D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 result; // rax

  if ( a2 )
  {
    v2 = sub_9749D0(a2);
    *(_DWORD *)(a1 + 30204) = *(_QWORD *)(a1 + 29912) != sub_9749E0(a2) + v2;
    result = sub_975FE0(a1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      sub_9749F0(a1, a2);
      return 0;
    }
  }
  else
  {
    result = sub_975FE0(a1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      return 0;
  }
  return result;
}

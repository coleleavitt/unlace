unsigned __int64 __fastcall sub_109A40(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 result; // rax

  if ( a2 )
  {
    v2 = sub_1280E0(a2);
    *(_DWORD *)(a1 + 30204) = *(_QWORD *)(a1 + 29912) != sub_1280F0(a2, a2, v3, v4, v5, v6) + v2;
    result = sub_109850(a1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      sub_128100(a1, a2);
      return 0;
    }
  }
  else
  {
    result = sub_109850(a1);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      return 0;
  }
  return result;
}


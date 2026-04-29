char __fastcall sub_77A90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( sub_691E0(a1, a2) )
  {
    v2 = getseg();
    if ( v2 )
      return *(_BYTE *)(v2 + 43) != 2;
  }
  if ( (unsigned __int8)sub_779C0(a1)
    || !(unsigned __int8)getinf_flag() && (unsigned int)sub_690D0(a1, a2, "SEH_prolog", 3u, 1)
    || (unsigned int)sub_690D0(a1, a2, "EH_prolog", 1u, 1)
    || (unsigned __int8)sub_77910(a1, a2, 0) )
  {
    return 1;
  }
  return (unsigned int)sub_690D0(a1, a2, "longjump", 0, 0) != 0;
}

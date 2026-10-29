char __fastcall sub_1A427C0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax

  v6 = *(_QWORD *)(a2 + 8) & 6LL;
  if ( a3 )
  {
    if ( v6 )
    {
      a3 = 1;
      return sub_1A42350(a1, a2, a3, a4, a5, a6);
    }
  }
  else if ( v6 )
  {
    return sub_1A42350(a1, a2, a3, a4, a5, a6);
  }
  return 1;
}

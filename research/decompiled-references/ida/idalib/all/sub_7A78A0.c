__int64 __fastcall sub_7A78A0(__int64 a1)
{
  __int64 v1; // rbx

  if ( *(_BYTE *)(a1 + 648) )
  {
    if ( !under_debugger )
      interr(302);
    BUG();
  }
  v1 = *(_QWORD *)(a1 + 584);
  *(_QWORD *)(a1 + 584) = 0;
  sub_7A71C0(a1, 0, 0);
  return v1;
}

bool __fastcall sub_B75790(__int64 a1, __int64 a2)
{
  if ( !a2 )
  {
    a2 = *(_QWORD *)(a1 + 168);
    if ( !a2 )
      return 1;
  }
  if ( sub_B50EE0(a2) )
    return sub_AC9870(a1);
  return 1;
}


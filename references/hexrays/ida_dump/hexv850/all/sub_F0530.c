bool __fastcall sub_F0530(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 8 )
  {
    if ( !under_debugger )
      sub_37CFE0(50097);
    BUG();
  }
  return (unsigned int)sub_EFBA0(a1, 1) == 1;
}

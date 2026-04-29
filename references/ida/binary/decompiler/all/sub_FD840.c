bool __fastcall sub_FD840(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 8 )
  {
    if ( !under_debugger )
      sub_37EA20(50097);
    BUG();
  }
  return (unsigned int)sub_FCDD0(a1, 1) == 1;
}

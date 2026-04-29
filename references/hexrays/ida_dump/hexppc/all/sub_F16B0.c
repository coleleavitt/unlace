bool __fastcall sub_F16B0(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 8 )
  {
    if ( !under_debugger )
      sub_37EEE0(50097);
    BUG();
  }
  return (unsigned int)sub_F0D20(a1, 1) == 1;
}

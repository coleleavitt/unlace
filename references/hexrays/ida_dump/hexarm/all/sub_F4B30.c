bool __fastcall sub_F4B30(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 8 )
  {
    if ( !under_debugger )
      sub_3835A0(50097);
    BUG();
  }
  return (unsigned int)sub_F41A0(a1, 1) == 1;
}

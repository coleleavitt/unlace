__int64 __fastcall idt_get_by_ordinal(__int64 a1, int a2)
{
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(608);
    BUG();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
}


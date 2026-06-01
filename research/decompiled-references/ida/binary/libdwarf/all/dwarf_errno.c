__int64 __fastcall dwarf_errno(__int64 a1)
{
  if ( a1 )
    return *(_QWORD *)a1;
  else
    return 0;
}


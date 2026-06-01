__int64 __fastcall sub_148010(__int64 a1, _QWORD **a2)
{
  getinf_flag();
  setinf_flag();
  do
  {
    while ( !(unsigned __int8)getn_sreg_range() || !(unsigned __int8)del_sreg_range() )
    {
      if ( !(unsigned __int8)sub_193150(a2) )
        goto LABEL_6;
    }
    auto_mark_range();
  }
  while ( (unsigned __int8)sub_193150(a2) );
LABEL_6:
  setinf_flag();
  sub_1931A0(a1, a2, **a2);
  return 1;
}


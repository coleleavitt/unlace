_QWORD *__fastcall set_dbg_pointer(__int64 a1)
{
  if ( (unsigned __int8)sub_3E8690() )
    *(_QWORD *)(qword_2CA1698 + 536) = a1;
  dbg = a1;
  return &dbg;
}


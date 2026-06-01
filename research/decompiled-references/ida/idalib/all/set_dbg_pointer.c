_QWORD *__fastcall set_dbg_pointer(__int64 a1)
{
  if ( (unsigned __int8)sub_3FB5F0() )
    *(_QWORD *)(qword_2CCB598 + 624) = a1;
  dbg = a1;
  return &dbg;
}

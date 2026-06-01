__int64 __fastcall decode_insn(__int64 a1, unsigned int a2)
{
  if ( !a1 )
  {
    if ( !under_debugger )
      interr(1406);
    BUG();
  }
  return sub_559920(*(_QWORD **)(qword_2CA1698 + 1480), a1, a2, 0);
}


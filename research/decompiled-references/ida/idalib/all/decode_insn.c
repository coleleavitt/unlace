__int64 __fastcall decode_insn(__int64 a1, char *a2)
{
  if ( !a1 )
  {
    if ( !under_debugger )
      interr(1406);
    BUG();
  }
  return sub_573440(*(_QWORD **)(qword_2CCB598 + 1672), a1, a2, 0);
}

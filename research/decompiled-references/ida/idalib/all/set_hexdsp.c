__int64 __fastcall set_hexdsp(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_2CCB5A4 )
  {
    if ( !under_debugger )
      interr(1855);
    BUG();
  }
  result = qword_2CCB598;
  *(_QWORD *)(qword_2CCB598 + 96) = a1;
  return result;
}

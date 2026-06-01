__int64 __fastcall set_hexdsp(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_2CA16A4 )
  {
    if ( !under_debugger )
      interr(1855);
    BUG();
  }
  result = qword_2CA1698;
  *(_QWORD *)(qword_2CA1698 + 96) = a1;
  return result;
}


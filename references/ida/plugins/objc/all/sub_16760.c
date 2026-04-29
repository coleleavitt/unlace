__int64 __fastcall sub_16760(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  result = clear_tinfo_t();
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

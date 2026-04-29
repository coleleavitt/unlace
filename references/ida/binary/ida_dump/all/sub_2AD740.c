__int64 __fastcall sub_2AD740(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4E0F10;
  result = merge_handler_dtr();
  if ( a1[12] )
  {
    a1[13] = 0;
    result = qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

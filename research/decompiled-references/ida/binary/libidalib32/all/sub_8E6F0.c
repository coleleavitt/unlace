__int64 (__fastcall **__fastcall sub_8E6F0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  result = &off_22E2B8;
  *a1 = &off_22E2B8;
  if ( a1[16] )
  {
    a1[17] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[13] )
  {
    a1[14] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[10] )
  {
    a1[11] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}


__int64 __fastcall sub_37F480(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4C72C8;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree(result);
  }
  return result;
}

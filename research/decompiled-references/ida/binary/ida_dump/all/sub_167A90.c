__int64 __fastcall sub_167A90(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4DDD78;
  result = a1[7];
  if ( result )
  {
    a1[8] = 0;
    return qfree();
  }
  return result;
}

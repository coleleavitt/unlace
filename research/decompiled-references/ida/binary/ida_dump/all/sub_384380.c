__int64 __fastcall sub_384380(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4E6BA8;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

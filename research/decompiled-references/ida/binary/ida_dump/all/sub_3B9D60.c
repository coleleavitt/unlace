__int64 __fastcall sub_3B9D60(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4E7588;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

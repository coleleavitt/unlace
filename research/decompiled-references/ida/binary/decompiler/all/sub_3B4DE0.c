__int64 __fastcall sub_3B4DE0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4E6AE8;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

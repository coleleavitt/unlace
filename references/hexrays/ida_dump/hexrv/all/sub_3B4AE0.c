__int64 __fastcall sub_3B4AE0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4B9FA8;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree(result);
  }
  return result;
}

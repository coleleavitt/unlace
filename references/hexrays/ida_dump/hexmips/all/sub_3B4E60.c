__int64 __fastcall sub_3B4E60(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4C7CA8;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree(result);
  }
  return result;
}

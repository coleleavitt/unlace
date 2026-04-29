__int64 __fastcall sub_2AD800(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4DC098;
  result = a1[5];
  if ( result )
  {
    a1[6] = 0;
    return qfree(result);
  }
  return result;
}

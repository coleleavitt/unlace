__int64 __fastcall sub_B7A00(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_230730;
  result = a1[4];
  if ( result )
  {
    a1[5] = 0;
    return qfree();
  }
  return result;
}


__int64 __fastcall sub_B79C0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_2306B8;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}


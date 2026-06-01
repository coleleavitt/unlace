__int64 __fastcall sub_B73A0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_22F6B0;
  result = a1[4];
  if ( result )
  {
    a1[5] = 0;
    return qfree();
  }
  return result;
}


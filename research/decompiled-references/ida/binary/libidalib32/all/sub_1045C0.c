__int64 __fastcall sub_1045C0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_230660;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}


__int64 __fastcall sub_A0A90(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4DBF00;
  result = a1[5];
  if ( result )
  {
    a1[6] = 0;
    return qfree();
  }
  return result;
}

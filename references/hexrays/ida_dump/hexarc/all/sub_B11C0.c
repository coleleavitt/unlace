__int64 __fastcall sub_B11C0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4A8A10;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree(result);
  }
  return result;
}

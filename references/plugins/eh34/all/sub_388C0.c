__int64 __fastcall sub_388C0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_8C260;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree(result);
  }
  return result;
}

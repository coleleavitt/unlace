__int64 __fastcall sub_1AA550(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4CB538;
  result = a1[5];
  if ( result )
  {
    a1[6] = 0;
    return qfree(result);
  }
  return result;
}

__int64 __fastcall sub_1ECC80(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4D9408;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree(result);
  }
  return result;
}

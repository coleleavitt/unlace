__int64 __fastcall sub_11C050(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  result = a1[3];
  if ( result )
    --*(_DWORD *)(result + 12);
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}


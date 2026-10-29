__int64 __fastcall sub_18EBE0(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] )
  {
    a1[2] = 0;
    result = qfree();
    a1[1] = 0;
    a1[3] = 0;
  }
  return result;
}


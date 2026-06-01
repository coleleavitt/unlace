__int64 __fastcall sub_174CF0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &unk_23B298;
  result = qmutex_free();
  if ( a1[5] )
  {
    a1[6] = 0;
    result = qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}


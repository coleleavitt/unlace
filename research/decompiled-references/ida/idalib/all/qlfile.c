__int64 __fastcall qlfile(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(int *)a1 <= 1 )
      return *(_QWORD *)(a1 + 8);
  }
  return result;
}

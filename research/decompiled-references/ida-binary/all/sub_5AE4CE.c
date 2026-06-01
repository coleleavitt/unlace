__int64 __fastcall sub_5AE4CE(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *a1 = a2;
  if ( a2 )
    result = a3;
  else
    result = 0;
  a1[1] = result;
  return result;
}

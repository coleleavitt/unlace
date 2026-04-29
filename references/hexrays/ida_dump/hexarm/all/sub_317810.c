__int64 __fastcall sub_317810(__int64 *a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( !(16 * a1[1]) )
    return 0;
  while ( 1 )
  {
    result = (**a2)(a2, v2);
    if ( (_DWORD)result )
      break;
    v2 += 16;
    if ( v2 == *a1 + 16 * a1[1] )
      return 0;
  }
  return result;
}

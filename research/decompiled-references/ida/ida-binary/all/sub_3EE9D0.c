__int64 __fastcall sub_3EE9D0(__int64 a1, _QWORD *a2)
{
  __int64 *func; // rax
  __int64 result; // rax

  func = (__int64 *)get_func(*a2);
  if ( !func )
    return *a2;
  result = *func;
  if ( result == -1 )
    return *a2;
  return result;
}

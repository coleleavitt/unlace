unsigned __int64 __fastcall sub_6297D0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 120);
  if ( a3 == 1 )
  {
    result = -1;
    if ( a2 >= v3 )
      return result;
    result = a2 + 1;
  }
  else
  {
    v4 = a2;
    if ( v3 <= a2 )
      v4 = *(_QWORD *)(a1 + 120);
    result = v4 - 1;
    if ( a3 != 2 )
      result = a2;
  }
  if ( result >= v3 )
    return -1;
  return result;
}

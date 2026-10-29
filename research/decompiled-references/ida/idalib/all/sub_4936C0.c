unsigned __int64 __fastcall sub_4936C0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(v3 + 8);
  if ( a3 == 1 )
  {
    result = -1;
    if ( a2 >= v4 )
      return result;
    result = a2 + 1;
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( a2 <= v4 )
      v5 = a2;
    result = v5 - 1;
    if ( a3 != 2 )
      result = a2;
  }
  if ( result >= v4 )
    return -1;
  return result;
}

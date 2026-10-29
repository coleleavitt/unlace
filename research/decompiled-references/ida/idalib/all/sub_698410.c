__int64 __fastcall sub_698410(__int64 a1, int a2)
{
  unsigned __int64 i; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 **v7; // r9
  int v8; // r10d
  unsigned __int64 v9; // r11

  if ( a2 <= 0 )
    return 0;
  for ( i = -1; ; i = v5 )
  {
    result = sub_698000(a1);
    if ( (_DWORD)result )
      break;
    v4 = **v7;
    v5 = (*v7)[1];
    if ( v8 )
    {
      if ( v4 < v9 || v4 == v9 && i < v5 )
        return 3;
      if ( i < v5 && v9 < v4 && v4 < i )
        return 7;
    }
    a1 = (__int64)(v7 + 13);
    if ( a2 == v8 + 1 )
      return result;
  }
  return result;
}

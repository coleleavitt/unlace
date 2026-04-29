char __fastcall sub_1C3E90(__int64 a1, int a2)
{
  char result; // al
  _QWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0;
  if ( a2 > 0 )
  {
    if ( *(_DWORD *)a1 == 4 )
    {
      return (a2 & 1) == 0;
    }
    else
    {
      result = 1;
      if ( *(_DWORD *)a1 == 2 )
      {
        v3 = *(_QWORD **)(a1 + 8);
        result = 0;
        v4 = v3[1];
        if ( v4 )
          return *(unsigned __int16 *)(*v3 + 24 * v4 - 24 + 18) + *(unsigned __int16 *)(*v3 + 24 * v4 - 24 + 16) == a2;
      }
    }
  }
  return result;
}

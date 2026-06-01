__int64 __fastcall sub_511D50(int *a1, int *a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // edi
  int v5; // esi
  __int64 result; // rax

  v2 = *a1;
  v3 = *a2;
  if ( *a1 == -1 || (v4 = a1[1], v4 == -1) )
  {
    result = 0;
    if ( v3 != -1 )
      return (unsigned int)-(a2[1] != -1);
  }
  else if ( v3 == -1 )
  {
    return 1;
  }
  else
  {
    v5 = a2[1];
    result = 1;
    if ( v5 != -1 )
    {
      if ( v4 == v5 )
      {
        result = (unsigned int)(v2 - v3);
        if ( v2 == v3 )
          return 0;
      }
      else
      {
        return (unsigned int)(v4 - v5);
      }
    }
  }
  return result;
}

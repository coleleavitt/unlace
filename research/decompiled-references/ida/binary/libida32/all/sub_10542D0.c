__int64 __fastcall sub_10542D0(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // al

  if ( a2 == 2 )
    return *(_WORD *)a1 == 13618 || *(_WORD *)a1 == 13619 || *(_WORD *)a1 == 12597;
  if ( a2 == 1 )
  {
    v3 = *a1;
    return *a1 == 52 || v3 == 53 || v3 == 54;
  }
  result = 0;
  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 12337 && a1[2] == 50
      || *(_WORD *)a1 == 12337 && a1[2] == 51
      || *(_WORD *)a1 == 12337 && a1[2] == 52
      || *(_WORD *)a1 == 12337 && a1[2] == 53
      || *(_WORD *)a1 == 12337 && a1[2] == 54 )
    {
      return 1;
    }
    return memcmp(a1, "107", 3u) == 0;
  }
  return result;
}


char __fastcall sub_3E4DB0(__int64 a1, int a2)
{
  char result; // al
  int v3; // edx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  result = 1;
  if ( *(_DWORD *)(a1 + 608) > a2 )
  {
    if ( a2 < *(_DWORD *)(a1 + 352) || (v4 = *(_DWORD *)(a1 + 80), a2 > v4 + *(_DWORD *)(a1 + 476) - 1) )
    {
      v3 = *(_DWORD *)(a1 + 692);
      result = 0;
      if ( v3 )
      {
        if ( a2 >= *(_DWORD *)(a1 + 480) )
          return a2 <= *(_DWORD *)(a1 + 604) + v3 - 1;
      }
    }
    else
    {
      v5 = **(_DWORD **)(a1 + 648);
      if ( a2 < v5 || (v6 = v4 + v5 - 1, result = 0, a2 > v6) )
      {
        v7 = *(_DWORD *)(a1 + 60);
        result = 1;
        if ( a2 >= v7 )
          return a2 > v4 + v7 - 1;
      }
    }
  }
  return result;
}

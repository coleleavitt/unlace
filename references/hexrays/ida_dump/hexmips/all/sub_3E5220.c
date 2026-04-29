__int64 __fastcall sub_3E5220(__int64 a1, int a2)
{
  unsigned int v4; // ecx
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  unsigned int v10; // ecx

  v4 = 1;
  if ( *(_DWORD *)(a1 + 676) <= a2
    || *(_DWORD *)(a1 + 616) <= a2 && *(_DWORD *)(a1 + 636) + *(_DWORD *)(a1 + 80) - 1 >= a2 )
  {
    return v4;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    if ( a2 >= *(_DWORD *)(a1 + 480) )
    {
      v5 = *(_DWORD *)(a1 + 80);
      if ( a2 <= v5 + *(_DWORD *)(a1 + 356) - 1 )
        goto LABEL_7;
    }
  }
  else if ( a2 >= *(_DWORD *)(a1 + 356) )
  {
    v5 = *(_DWORD *)(a1 + 80);
    if ( a2 <= v5 + *(_DWORD *)(a1 + 480) - 1 )
    {
LABEL_7:
      v4 = 1;
      if ( *(_DWORD *)(a1 + 748) != 1 )
      {
        v6 = **(_DWORD **)(a1 + 712);
        if ( a2 < v6 || (v7 = v6 + v5 - 1, v4 = 0, a2 > v7) )
        {
          v8 = *(_DWORD *)(a1 + 60);
          v4 = 1;
          if ( a2 >= v8 )
            LOBYTE(v4) = a2 > v8 + v5 - 1;
        }
      }
      return v4;
    }
  }
  v4 = 0;
  if ( a2 < *(_DWORD *)(a1 + 484) )
    return v4;
  v10 = *(_DWORD *)(a1 + 608) + *(_DWORD *)(a1 + 80);
  LOBYTE(v10) = a2 <= (int)(v10 - 1);
  return v10;
}

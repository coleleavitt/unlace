bool __fastcall sub_919010(__int64 a1, int *a2)
{
  int v2; // edx
  bool result; // al
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rsi

  v2 = sub_8E7030(*(_QWORD *)(a1 + 8));
  result = 1;
  if ( v2 )
  {
    v4 = *a2;
    v5 = *(_QWORD *)(a1 + 40);
    result = 0;
    v6 = (unsigned int)*a2 >> 5;
    if ( v5 )
    {
      if ( (unsigned int)v6 < *(_DWORD *)(v5 - 4) )
        return (*(_DWORD *)(v5 + 4 * v6) & (1 << v4)) != 0;
    }
  }
  return result;
}


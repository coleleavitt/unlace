__int64 __fastcall sub_A3FF40(_QWORD *a1)
{
  unsigned int v1; // eax
  int v2; // esi

  v1 = *(_DWORD *)(a1[2181] + 136LL);
  if ( v1 == 6 )
  {
    v2 = 5;
    return sub_A3FE00(a1, v2);
  }
  if ( v1 <= 6 )
  {
    if ( v1 == 4 )
    {
      v2 = 3;
      return sub_A3FE00(a1, v2);
    }
  }
  else
  {
    if ( v1 == 8 )
    {
      v2 = 7;
      return sub_A3FE00(a1, v2);
    }
    if ( v1 == 10 )
    {
      v2 = 9;
      return sub_A3FE00(a1, v2);
    }
  }
  return sub_A3FFA0();
}


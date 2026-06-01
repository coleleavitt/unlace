__int64 __fastcall sub_365EC0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // eax
  __int64 v5; // rax
  __int64 func; // rax

  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 8) = -1;
  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
    {
      if ( v3 == 1 )
        *(_DWORD *)(a2 + 8) = get_item_color(v2);
      return 0;
    }
    v5 = getseg(v2);
    if ( v5 )
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v5 + 100);
      return 0;
    }
    return 0;
  }
  func = get_func(v2);
  if ( !func )
    return 0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(func + 36);
  return 0;
}


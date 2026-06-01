__int64 __fastcall sub_365E20(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ebp
  int v4; // eax
  __int64 v6; // rax
  __int64 func; // rax

  v2 = a1[2];
  v3 = a1[18];
  *(_DWORD *)(a2 + 8) = 0;
  v4 = a1[10];
  if ( v4 != 2 )
  {
    if ( v4 != 3 )
    {
      if ( v4 == 1 )
      {
        set_item_color(v2, v3);
        *(_DWORD *)(a2 + 8) = 1;
      }
      return 0;
    }
    v6 = getseg(v2);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 100) = v3;
      update_segm(v6);
      *(_DWORD *)(a2 + 8) = 1;
      return 0;
    }
    return 0;
  }
  func = get_func(v2);
  if ( !func )
    return 0;
  *(_DWORD *)(func + 36) = v3;
  update_func(func);
  *(_DWORD *)(a2 + 8) = 1;
  return 0;
}


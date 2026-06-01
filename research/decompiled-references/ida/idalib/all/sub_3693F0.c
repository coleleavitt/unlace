__int64 __fastcall sub_3693F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 func; // rax

  v2 = a1[1];
  v3 = a1[9];
  *(_QWORD *)(a2 + 8) = 0;
  v4 = a1[5];
  if ( v4 != 2 )
  {
    if ( v4 != 3 )
    {
      if ( v4 == 1 )
      {
        set_item_color(v2, (unsigned int)v3);
        *(_QWORD *)(a2 + 8) = 1;
      }
      return 0;
    }
    v6 = getseg(v2);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 188) = v3;
      update_segm(v6);
      *(_QWORD *)(a2 + 8) = 1;
      return 0;
    }
    return 0;
  }
  func = get_func(v2);
  if ( !func )
    return 0;
  *(_DWORD *)(func + 64) = v3;
  update_func(func);
  *(_QWORD *)(a2 + 8) = 1;
  return 0;
}

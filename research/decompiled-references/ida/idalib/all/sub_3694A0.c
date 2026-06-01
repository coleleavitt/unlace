__int64 __fastcall sub_3694A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 func; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
    {
      if ( v3 == 1 )
        *(_QWORD *)(a2 + 8) = (unsigned int)get_item_color(v2);
      return 0;
    }
    v5 = getseg(v2);
    if ( v5 )
    {
      *(_QWORD *)(a2 + 8) = *(unsigned int *)(v5 + 188);
      return 0;
    }
    return 0;
  }
  func = get_func(v2);
  if ( !func )
    return 0;
  *(_QWORD *)(a2 + 8) = *(unsigned int *)(func + 64);
  return 0;
}

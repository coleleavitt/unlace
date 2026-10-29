__int64 __fastcall sub_51C570(__int64 a1, unsigned __int64 *a2, signed int a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = a3 - *(_DWORD *)(a1 + 996);
  if ( a2[v4 + 7] == a4 )
    return 1;
  a2[v4 + 7] = a4;
  update_segm(a2);
  auto_mark_range(*a2, a2[1], 40);
  return sub_51C400(a1, *a2, a3, a4, 4u, 0);
}

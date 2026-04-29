__int64 __fastcall sub_3C8EA0(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r14
  int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v13; // r15

  v4 = 0;
  v7 = sub_3C5160(a1[3], a4, a4);
  v8 = *(_QWORD *)(*(_QWORD *)(a1[1] + 136) + 8 * a3);
  v9 = *(_QWORD *)(*a1 + 64);
  if ( v9 != -1 )
    v4 = v9 == sub_3C5340((unsigned __int8 *)v8, a1[2]);
  if ( *(_BYTE *)v8 == 4 )
  {
    sub_3C8BD0(a1, *(_QWORD *)(v8 + 8), v7, v4);
  }
  else
  {
    if ( *(_BYTE *)v8 == 2
      && (v13 = a1[1], (unsigned __int8)is_mapped())
      && *(_QWORD *)(v13 + 24)
      && rangeset_t_find_range() )
    {
      v10 = **(_QWORD **)(v8 + 8);
    }
    else
    {
      v10 = -1;
    }
    sub_3C8D50((__int64)a1, v10, v7, v4);
  }
  v11 = -1;
  if ( a2 == 2 )
    v11 = *(_QWORD *)(v8 + 16);
  return sub_3C8D50((__int64)a1, v11, v7, v4);
}

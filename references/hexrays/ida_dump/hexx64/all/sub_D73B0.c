__int64 __fastcall sub_D73B0(__int64 a1, __int64 a2)
{
  __int64 item_end; // r12
  __int64 func; // rax
  __int64 v5; // rax

  item_end = get_item_end(a2);
  if ( !*(_QWORD *)(a1 + 8) )
    return sub_1CFBE0(a1, item_end);
  func = get_func(a2);
  if ( func )
  {
    if ( (int)get_func_chunknum(func, item_end) >= 0 )
      return sub_1CFBE0(a1, item_end);
  }
  else
  {
    v5 = sub_330F80(a1, item_end);
    if ( (unsigned __int8)sub_332920(a1 + 8, v5) )
      return sub_1CFBE0(a1, item_end);
  }
  return -1;
}

__int64 __fastcall sub_D73B0(__int64 a1)
{
  __int64 item_end; // r12
  __int64 v3; // rax

  item_end = get_item_end();
  if ( !*(_QWORD *)(a1 + 8) )
    return sub_1CFBE0(a1, item_end);
  if ( get_func() )
  {
    if ( (int)get_func_chunknum() >= 0 )
      return sub_1CFBE0(a1, item_end);
  }
  else
  {
    v3 = sub_330F80(a1);
    if ( (unsigned __int8)sub_332920(a1 + 8, v3) )
      return sub_1CFBE0(a1, item_end);
  }
  return -1;
}

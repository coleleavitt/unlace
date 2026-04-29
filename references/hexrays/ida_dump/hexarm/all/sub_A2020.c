__int64 __fastcall sub_A2020(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 item_end; // rbx
  __int64 v4; // rax

  v2 = sub_3312A0(a1, a2);
  item_end = get_item_end(v2);
  v4 = getseg(v2);
  return item_end - get_segm_base(v4);
}

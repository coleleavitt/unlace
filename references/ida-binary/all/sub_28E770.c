__int64 __fastcall sub_28E770(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 spd; // rax
  __int64 item_end; // rbx
  int v4; // r8d
  int v5; // r9d
  __int64 func_ranges; // rax
  __int64 that; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 sp_delta; // [rsp+8h] [rbp-30h] BYREF
  __int16 v11; // [rsp+16h] [rbp-22h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 104);
  if ( !v1 )
    return 0;
  spd = get_spd(*(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 88));
  v9 = spd;
  if ( spd < 0 )
  {
    v11 = 45;
    v9 = -spd;
  }
  else
  {
    LOBYTE(v11) = 0;
  }
  item_end = get_item_end(*(_QWORD *)(a1 + 88));
  if ( (int)get_func_chunknum(v1, item_end) >= 0 || (item_end = get_next_func_addr(v1, item_end), item_end != -1) )
  {
    sp_delta = get_sp_delta(v1, item_end);
    if ( !(unsigned int)sub_507F10(1190, (unsigned int)&v11, (unsigned int)&v9, (unsigned int)&sp_delta, v4, v5, v9) )
      return 1;
    if ( (unsigned __int8)add_user_stkpnt(item_end, sp_delta) )
    {
      func_ranges = get_func_ranges(0, v1);
      if ( func_ranges != -1 )
      {
        that = prev_that(func_ranges, *v1, sub_20A790, 0);
        auto_mark_range(that, that + 1, 40);
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

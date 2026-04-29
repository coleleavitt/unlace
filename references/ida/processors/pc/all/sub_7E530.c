void *__fastcall sub_7E530(__int64 a1, __int64 a2, __int64 a3)
{
  int item_flag; // edx
  void *v4; // rbp

  if ( a3 != -1 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      get_name_base_ea();
      if ( (get_aflags() & 0x4000) == 0 )
        goto LABEL_4;
    }
    else if ( (get_aflags() & 0x4000) == 0 )
    {
LABEL_4:
      item_flag = get_item_flag();
      goto LABEL_7;
    }
    get_func();
    if ( (int)get_func_chunknum() < 0 )
      goto LABEL_4;
  }
  item_flag = 0;
LABEL_7:
  v4 = sub_7DD90(a1, *(unsigned __int8 *)(a2 + 5), item_flag);
  if ( v4 )
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v4, 0);
  return v4;
}

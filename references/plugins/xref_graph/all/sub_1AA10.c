unsigned __int64 __fastcall sub_1AA10(__int64 a1, __int64 a2)
{
  __int64 *func; // rax
  char i; // al
  bool v4; // zf
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  func = (__int64 *)get_func();
  if ( func )
  {
    v9 = -1;
    v7[0] = 0;
    v7[1] = 0xFFFFFFFFLL;
    v8 = 0;
    v9 = *func;
    for ( i = func_tail_iterator_set(v7, func, -1); i; i = func_item_iterator_next(v7, sub_1A0F0, 0) )
    {
      v4 = *(_QWORD *)(a2 + 16) == 0;
      v6 = v9;
      if ( v4 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, __int64 *))(a2 + 24))(a2, &v6);
    }
    if ( v7[0] )
      lock_func_range(v7[0], 0);
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 16) == 0;
    v7[0] = a1;
    if ( v4 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, _QWORD *))(a2 + 24))(a2, v7);
  }
  return v10 - __readfsqword(0x28u);
}

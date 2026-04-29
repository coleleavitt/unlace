unsigned __int64 __fastcall sub_387550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  char i; // al
  _QWORD v9[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+10h] [rbp-38h]
  __int64 v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, v9, &callui, a4, a5, a6);
  v6 = (__int64 *)sub_3B95C0(v9[0]);
  if ( v6 )
  {
    v9[1] = 0xFFFFFFFFLL;
    v11 = -1;
    v9[0] = 0;
    v10 = 0;
    v11 = *v6;
    for ( i = func_tail_iterator_set(v9, v6, -1); i; i = func_item_iterator_next(v9, sub_1B3B30, 0) )
      delete_extra_cmts(v11, 1000);
    if ( v9[0] )
      lock_func_range(v9[0], 0);
  }
  return v12 - __readfsqword(0x28u);
}

__int64 __fastcall sub_371700(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const char *v4; // rsi
  __int64 v5; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16) == 0;
  v7[1] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)(a1 + 8);
  v5 = sub_6B9860(*(_QWORD *)(qword_2CCB598 + 1672), v4, 0, 0);
  v7[0] = 0;
  *(_QWORD *)(a2 + 8) = v5;
  get_type_by_tid(v7, v5);
  if ( (get_tinfo_property(v7[0], 2) & 0x2F) != 0xD )
    *(_QWORD *)(a2 + 8) = -1;
  clear_tinfo_t(v7);
  return 0;
}

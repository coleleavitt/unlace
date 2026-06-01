unsigned __int64 __fastcall sub_69AC30(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int tinfo_tid; // eax
  __int64 v5; // rdx
  unsigned int v6; // edx
  __int64 tinfo_property; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a3 + 64), 289);
  tinfo_tid = get_tinfo_tid(&tinfo_property, 1);
  if ( tinfo_tid != -1 )
    sub_3FE080(a1, a2, tinfo_tid, 3u);
  v5 = 2304;
  if ( _bittest64(&v5, *(_QWORD *)(a3 + 72) & 0xFLL) )
  {
    v6 = sub_69AA70(*(_QWORD **)(qword_2CA1698 + 1480), 0, *(_DWORD *)(a3 + 84));
    if ( v6 != -1 )
      sub_3FE080(a1, a2, v6, 2 * ((*(_QWORD *)(a3 + 72) & 0xFLL) != 11) + 1);
  }
  clear_tinfo_t(&tinfo_property);
  return v9 - __readfsqword(0x28u);
}


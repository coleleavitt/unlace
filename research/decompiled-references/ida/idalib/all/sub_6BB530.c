__int64 __fastcall sub_6BB530(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 tinfo_tid; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v8[0] = 0;
  v8[0] = get_tinfo_property(*(_QWORD *)(a3 + 64), 289);
  tinfo_tid = get_tinfo_tid(v8, 0);
  sub_411F00(a1, a2, tinfo_tid);
  clear_tinfo_t(v8);
  v5 = 2304;
  v6 = -1;
  if ( _bittest64(&v5, *(_QWORD *)(a3 + 72) & 0xFLL) )
    v6 = sub_6BB440(*(_QWORD **)(qword_2CCB598 + 1672), 0, *(_DWORD *)(a3 + 88));
  return sub_411F00(a1, a2, v6);
}

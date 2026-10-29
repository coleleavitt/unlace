unsigned __int64 __fastcall sub_6BB600(__int64 *a1, unsigned __int64 a2, __int64 a3, double a4, __m128 a5)
{
  char **tinfo_tid; // rax
  __int64 v7; // rdx
  char **v8; // rdx
  __int64 tinfo_property; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a3 + 64), 289);
  tinfo_tid = (char **)get_tinfo_tid(&tinfo_property, 1);
  if ( tinfo_tid != (char **)-1LL )
    sub_411350(a1, a2, tinfo_tid, 3u, a4, a5);
  v7 = 2304;
  if ( _bittest64(&v7, *(_QWORD *)(a3 + 72) & 0xFLL) )
  {
    v8 = (char **)sub_6BB440(*(_QWORD **)(qword_2CCB598 + 1672), 0, *(_DWORD *)(a3 + 88));
    if ( v8 != (char **)-1LL )
      sub_411350(a1, a2, v8, 2 * ((*(_QWORD *)(a3 + 72) & 0xFLL) != 11) + 1, a4, a5);
  }
  clear_tinfo_t(&tinfo_property);
  return v11 - __readfsqword(0x28u);
}

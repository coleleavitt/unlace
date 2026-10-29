__int64 __fastcall sub_5B6F10(__int64 a1, unsigned __int64 *a2, __m256i *a3, int a4)
{
  __int64 tinfo_property4; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // rax

  tinfo_property4 = get_tinfo_property4(*a2, 300, 0, 0, 0, 0);
  if ( tinfo_property4 == -1 )
    return 0;
  v7 = tinfo_property4;
  v8 = (_QWORD *)sub_5CAA10(a1);
  if ( !v8 || *v8 != v7 )
    return 0;
  v10 = sub_5340D0(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), *a2);
  return sub_5401F0(*(__m256i ***)(*(_QWORD *)a1 + 1824LL), v10, a3, a4);
}

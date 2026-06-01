__int64 __fastcall sub_194E20(__int64 a1, __int64 *a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  _QWORD *v5; // rdi

  sub_8F680((__int64)a2, 2, "gcc_va_collector.va_collector");
  sub_901C0(a1, a2);
  sub_8F680((__int64)a2, 2, "gcc_va_collector.prolog_attrs");
  sub_8FEB0(a1 + 64, a2);
  sub_8F680((__int64)a2, 2, "gcc_va_collector.vaseq");
  sub_7F8E0(a2);
  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      sub_8FC50((__int64)a2, 4);
      ++v3;
      v5 = (_QWORD *)((v4 << 7) + *(_QWORD *)(a1 + 120));
      v4 = v3;
      sub_8FF80(v5, a2);
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 128) );
  }
  sub_8F680((__int64)a2, 2, "gcc_va_collector.initial_gva");
  sub_8FF80((_QWORD *)(a1 + 144), a2);
  sub_8F680((__int64)a2, 2, "gcc_va_collector.min_gva");
  sub_8FF80((_QWORD *)(a1 + 272), a2);
  if ( *(_QWORD *)(a1 + 408) > 1u )
  {
    if ( !under_debugger )
      sub_383060(52169);
LABEL_17:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 432) > 1u )
  {
    if ( !under_debugger )
      sub_383060(52170);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 448) )
  {
    if ( !under_debugger )
      sub_383060(52171);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 456) )
  {
    if ( !under_debugger )
      sub_383060(52172);
    goto LABEL_17;
  }
  sub_8F680((__int64)a2, 2, "gcc_va_collector.va_size");
  sub_7F8E0(a2);
  sub_8F680((__int64)a2, 2, "gcc_va_collector.use_pfinder");
  return sub_7F6F0(a2, *(_BYTE *)(a1 + 468));
}

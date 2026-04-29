__int64 __fastcall sub_190960(__int64 a1, __int64 *a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdi

  sub_8B1C0((__int64)a2, 2, "gcc_va_collector.va_collector");
  sub_8BD00(a1, a2);
  sub_8B1C0((__int64)a2, 2, "gcc_va_collector.prolog_attrs");
  sub_8B9F0(a1 + 64, a2);
  sub_8B1C0((__int64)a2, 2, "gcc_va_collector.vaseq");
  sub_7B4E0(a2, *(_DWORD *)(a1 + 128));
  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      sub_8B790((__int64)a2, 4, v3++);
      v5 = (v4 << 7) + *(_QWORD *)(a1 + 120);
      v4 = v3;
      sub_8BAC0(v5, a2);
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 128) );
  }
  sub_8B1C0((__int64)a2, 2, "gcc_va_collector.initial_gva");
  sub_8BAC0(a1 + 144, a2);
  sub_8B1C0((__int64)a2, 2, "gcc_va_collector.min_gva");
  sub_8BAC0(a1 + 272, a2);
  if ( *(_QWORD *)(a1 + 408) > 1u )
  {
    if ( !under_debugger )
      sub_37DDE0(52169);
LABEL_17:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 432) > 1u )
  {
    if ( !under_debugger )
      sub_37DDE0(52170);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 448) )
  {
    if ( !under_debugger )
      sub_37DDE0(52171);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 456) )
  {
    if ( !under_debugger )
      sub_37DDE0(52172);
    goto LABEL_17;
  }
  sub_8B1C0((__int64)a2, 2, "gcc_va_collector.va_size");
  sub_7B4E0(a2, *(_DWORD *)(a1 + 464));
  sub_8B1C0((__int64)a2, 2, "gcc_va_collector.use_pfinder");
  return sub_7B2F0(a2, *(_BYTE *)(a1 + 468));
}

__int64 __fastcall sub_297DF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int tinfo_property; // eax

  v2 = sub_2502B0(a2, a1, 0);
  if ( v2 )
  {
    v3 = v2;
    if ( (get_tinfo_property(*(_QWORD *)(v2 + 48), 2) & 0xF) != 0xA )
      return sub_2503C0(v3);
    tinfo_property = get_tinfo_property(*(_QWORD *)(v3 + 48), 14);
    if ( tinfo_property > 0 )
    {
      *a1 *= tinfo_property;
      return sub_2503C0(v3);
    }
  }
  return 0;
}

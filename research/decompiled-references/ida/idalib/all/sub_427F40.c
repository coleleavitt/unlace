void __fastcall sub_427F40(__int64 a1)
{
  int v1; // esi

  v1 = *(_DWORD *)(a1 + 160);
  *(_QWORD *)a1 = &off_2B28328;
  if ( v1 != -1 )
  {
    sub_580A80(*(_QWORD *)(a1 + 144));
    register_undo_handler(*(unsigned int *)(a1 + 160), sub_42A1D0, 0, 0);
  }
  sub_427D40(a1);
}

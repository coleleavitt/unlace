void __fastcall sub_427F90(_DWORD *a1)
{
  int v1; // esi

  v1 = a1[40];
  *(_QWORD *)a1 = &off_2B28328;
  if ( v1 != -1 )
  {
    sub_580A80(*((_QWORD *)a1 + 18));
    register_undo_handler((unsigned int)a1[40], sub_42A1D0, 0, 0);
  }
  sub_427D40((__int64)a1);
  operator delete(a1, 0xA8u);
}

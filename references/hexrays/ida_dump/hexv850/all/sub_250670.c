__int64 __fastcall sub_250670(__int64 *a1, _QWORD *a2)
{
  int tinfo_size; // ebx
  int tinfo_property; // eax
  __int64 v4; // rdi
  bool v5; // zf
  unsigned int v6; // eax

  tinfo_size = get_tinfo_size(0, *a2, 0);
  tinfo_property = get_tinfo_property(*a2, 3);
  v4 = *a1;
  v5 = tinfo_property == 1;
  v6 = 16;
  if ( tinfo_size <= 16 )
    v6 = tinfo_size;
  return sub_325150(v4, v6, v5);
}

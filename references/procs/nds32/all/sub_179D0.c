__int64 __fastcall sub_179D0(int *a1, _DWORD *a2, _QWORD *a3)
{
  unsigned __int64 tinfo_size; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  int v8; // ebx

  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( tinfo_size == -1 )
    return 0;
  v5 = tinfo_size;
  if ( tinfo_size == 8 )
  {
    LODWORD(v6) = *a1;
    if ( (*a1 & 1) != 0 )
    {
      LODWORD(v6) = v6 + 1;
      *a1 = v6;
    }
    goto LABEL_9;
  }
  if ( tinfo_size > 4 )
  {
    if ( (get_tinfo_property(*a3, 2) & 0x2F) != 0xD && (get_tinfo_property(*a3, 2) & 0xF) != 0xB )
      return 0;
    v6 = *a1;
    if ( v5 > 8 )
      goto LABEL_5;
LABEL_9:
    if ( (int)v6 + 2 > 6 )
      return 0;
    sub_17730(a1, (__int64)a2, 2);
    return 1;
  }
  v6 = *a1;
LABEL_5:
  if ( (int)v6 + 1 > 6 )
    return 0;
  *a1 = v6 + 1;
  v8 = dword_231E0[v6];
  cleanup_argloc(a2);
  *a2 = 3;
  a2[2] = v8;
  return 1;
}

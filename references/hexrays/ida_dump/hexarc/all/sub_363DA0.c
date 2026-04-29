__int64 __fastcall sub_363DA0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  int v5; // r15d
  int v6; // r14d
  unsigned int v7; // ebx
  int tinfo_size; // r12d
  int v9; // eax
  char v11; // [rsp+Fh] [rbp-39h]

  v11 = HIBYTE(a4);
  v5 = (get_tinfo_property(*a2, 2) & 0xF) == 9;
  v6 = (get_tinfo_property(*a3, 2) & 0xF) == 9;
  v7 = sub_3639E0((__int64)a2, (__int64)a3);
  if ( v7 || v6 != v5 )
  {
    tinfo_size = get_tinfo_size(0, *a2, 0);
    v9 = get_tinfo_size(0, *a3, 0);
    if ( v7 )
      goto LABEL_9;
  }
  else
  {
    if ( (v11 & 4) == 0 )
      return 0;
    tinfo_size = get_tinfo_size(0, *a2, 0);
    v9 = get_tinfo_size(0, *a3, 0);
  }
  if ( tinfo_size < v9 )
  {
    v7 = -1;
LABEL_9:
    if ( (-*(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL)
        & ((tinfo_size + *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) - 1)
         ^ (*(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) - 1 + v9))) == 0 )
      return v7;
    return 0;
  }
  if ( tinfo_size > v9 )
  {
    v7 = 1;
    goto LABEL_9;
  }
  return (unsigned int)(v5 - v6);
}

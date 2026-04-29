bool __fastcall sub_1F78D0(unsigned int *a1, __int64 a2, _QWORD *a3, char a4, char a5)
{
  int tinfo_size; // r12d
  __int64 v11; // r12
  int v12; // edi
  int v13; // edi
  int v14; // ebp
  int v15; // edi
  char v16; // al
  int v17; // eax

  if ( a3 )
  {
    tinfo_size = get_tinfo_size(0, *a3, 0);
    if ( (get_tinfo_property(*a3, 2) & 0x2F) == 0xD )
      return (int)a1[3] <= tinfo_size;
    if ( tinfo_size > 0 && a1[3] == tinfo_size )
      return 1;
  }
  v11 = *(_QWORD *)(a2 + 1504);
  if ( *((_BYTE *)a1 + 8) != 1 )
  {
    v12 = a1[3];
    if ( !a5 )
      goto LABEL_8;
LABEL_15:
    v14 = 16;
    if ( (*(_BYTE *)(v11 + 50) & 8) == 0 )
      v14 = 2 * *(_DWORD *)(v11 + 80);
    if ( !a4 )
      goto LABEL_21;
    if ( sub_119100(v12) )
      return 1;
    v15 = a1[3];
    if ( v14 > v15 )
    {
      while ( 1 )
      {
        v12 = v15 + 1;
        a1[3] = v12;
LABEL_21:
        if ( (unsigned __int8)sub_224250(a2, a1, 0, (unsigned int)v12) )
          break;
        v15 = a1[3];
        if ( v14 <= v15 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 32LL))(*(_QWORD *)(a2 + 1504), *a1);
  v12 = a1[3];
  if ( v12 == v17 )
    return 1;
  if ( a5 )
    goto LABEL_15;
LABEL_8:
  if ( !a4 )
    goto LABEL_12;
  if ( sub_119090(v12) )
    return 1;
  v13 = a1[3];
  if ( v13 <= 15 )
  {
    while ( 1 )
    {
      v12 = v13 + 1;
      a1[3] = v12;
LABEL_12:
      if ( v12 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1496) + 112LL) + 88LL) && *((_BYTE *)a1 + 8) != 1
        || sub_119040(v12) )
      {
        break;
      }
      v13 = a1[3];
      if ( v13 > 15 )
      {
        v16 = *((_BYTE *)a1 + 8);
        if ( v16 == 5 )
          return 1;
        if ( v16 == 1 )
          return *(_DWORD *)(v11 + 68) <= (int)*a1;
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

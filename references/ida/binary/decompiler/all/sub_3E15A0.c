__int64 __fastcall sub_3E15A0(__int64 a1, _DWORD *a2, int *a3)
{
  int tinfo_size; // eax
  char tinfo_property; // al
  int v7; // edx
  unsigned int v8; // eax
  int v9; // r12d

  tinfo_size = get_tinfo_size();
  *a3 = tinfo_size;
  if ( tinfo_size != -1 )
  {
    tinfo_property = get_tinfo_property();
    v7 = *a3;
    if ( (tinfo_property & 0xF) == 9 )
    {
      v8 = (v7 - 4) & 0xFFFFFFFB;
      if ( a2[21] != 8 )
      {
        if ( v8 && v7 != a2[112] )
          goto LABEL_10;
        v9 = a2[130];
LABEL_14:
        if ( v9 == -1 )
          goto LABEL_10;
        goto LABEL_6;
      }
      if ( v8 )
      {
        if ( a2[112] != v7 )
          goto LABEL_10;
        if ( (getinf() & 0xF) != 6 )
        {
          if ( (getinf() & 0xF) == 1 )
            get_abi_name();
          goto LABEL_10;
        }
        v9 = a2[130];
        goto LABEL_14;
      }
    }
    else
    {
      if ( a2[20] >= v7 || v7 == 8 )
      {
LABEL_6:
        cleanup_argloc();
LABEL_10:
        *(_DWORD *)a1 = 0;
        copy_argloc();
        cleanup_argloc();
        return a1;
      }
      if ( v7 != 16 )
        goto LABEL_10;
    }
    v9 = a2[140];
    goto LABEL_14;
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return a1;
}

__int64 __fastcall sub_633350(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdi
  char v9; // al
  char v10; // dl
  int v11; // eax
  char tinfo_property; // al
  __int64 tinfo_pdata; // rax
  _DWORD *v14; // [rsp+0h] [rbp-20h]
  _DWORD *v15; // [rsp+0h] [rbp-20h]

  if ( !a2 )
    return 0;
  v7 = *a4;
  if ( (*a4 & 1) == 0 || (v7 & 4) != 0 && (v7 & 2) == 0 )
  {
    v8 = *a3;
    if ( (*(_BYTE *)a3 & 0x3F) == 0x3D )
    {
      v15 = a4;
      tinfo_property = get_tinfo_property(v8, 2);
      a4 = v15;
      if ( (tinfo_property & 0x2F) != 0xD )
        goto LABEL_8;
      v8 = *a3;
      if ( (*a3 & 0x100) != 0 )
      {
        tinfo_pdata = get_tinfo_pdata(0, *a3, 1);
        a4 = v15;
        if ( tinfo_pdata )
          goto LABEL_8;
        v8 = *a3;
      }
    }
    v14 = a4;
    v9 = get_tinfo_property(v8, 2);
    a4 = v14;
    if ( (v9 & 0x3F) != 0x2D )
      return 1;
LABEL_8:
    v10 = *(_BYTE *)(*(_QWORD *)(a1 + 32) + (unsigned int)(a2 - 1));
    if ( (v10 & 1) != 0 )
      return 0;
    v11 = *a4;
    if ( ((*a4 & 1) == 0 || (v11 & 4) != 0 && (v11 & 2) == 0) && (v10 & 2) != 0 )
      return 0;
    goto LABEL_14;
  }
  v10 = *(_BYTE *)(*(_QWORD *)(a1 + 32) + (unsigned int)(a2 - 1));
  if ( (v10 & 1) != 0 )
    return 0;
LABEL_14:
  result = 2;
  if ( (v10 & 8) != 0 )
  {
    *(_BYTE *)(a1 + 56) = 1;
    return 0;
  }
  return result;
}


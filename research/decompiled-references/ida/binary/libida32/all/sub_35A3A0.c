__int64 __fastcall sub_35A3A0(_QWORD *a1, __int64 a2, int a3, _QWORD *a4, char a5)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  unsigned int tinfo_property4; // eax
  __int64 v13; // rax
  int tinfo_size; // eax
  __int64 tinfo_property; // rax
  unsigned __int8 tinfo_details; // [rsp+Fh] [rbp-59h]
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  *((_DWORD *)a1 + 56) = a3;
  *((_BYTE *)a1 + 293) = 0;
  v18[0] = get_tinfo_property(*a4, 289);
  copy_tinfo_t(a1);
  clear_tinfo_t(v18);
  if ( (*a1 & 0x100) == 0 )
    return 0;
  if ( !get_tinfo_pdata(a1 + 33, *a1, 0) )
    return 0;
  tinfo_details = get_tinfo_details(*a1, 13, a1 + 1);
  if ( !tinfo_details )
    return 0;
  v7 = a1[2];
  if ( a1[9] != v7 )
  {
    sub_359590(a1 + 8, v7);
    v7 = a1[2];
  }
  v8 = a1[1];
  v9 = v7 << 7;
  v10 = a1[8];
  v11 = v8 + v9;
  if ( v8 + v9 != v8 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      if ( v13 )
        goto LABEL_16;
LABEL_14:
      if ( (*(_BYTE *)(v8 + 64) & 0xF) != 0xE )
        break;
LABEL_12:
      v8 += 128;
      v10 += 160;
      if ( v8 == v11 )
        goto LABEL_22;
    }
    v13 = 0;
LABEL_16:
    if ( a5 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v8 + 117) & 4) != 0 )
        {
          v8 += 128;
          v10 += 160;
          if ( v8 == v11 )
            goto LABEL_22;
        }
        else
        {
          if ( ((*(_BYTE *)(v8 + 64) & 0xF) != 0xE || *(_QWORD *)(v8 + 24) > 1u)
            && (v13 || get_tinfo_property(*(_QWORD *)(v8 + 64), 287)) )
          {
            break;
          }
          v8 += 128;
          v10 += 160;
          if ( v11 == v8 )
            goto LABEL_22;
        }
        v13 = *(_QWORD *)(v8 + 8);
        if ( !v13 )
          goto LABEL_14;
      }
    }
    get_idainfo_by_udm(v10, v10 + 12, v8, 0xFFFFFFFFLL);
    tinfo_property4 = get_tinfo_property4(*a1, 297, (v8 - a1[1]) >> 7, 0, 0, 0);
    *(_DWORD *)(v10 + 8) = tinfo_property4;
    if ( (*(_QWORD *)v10 & 0x600LL) == 0x400 && (*(_QWORD *)v10 & 0xF0000000LL) == 0x60000000 )
    {
      v18[0] = 0;
      v18[0] = get_tinfo_property(*(_QWORD *)(v8 + 64), 289);
      *(_DWORD *)(v10 + 8) = get_tinfo_tid(v18, 0);
      clear_tinfo_t(v18);
    }
    else
    {
      sub_35A300(a2, v10 + 148, tinfo_property4, a5, v8);
    }
    goto LABEL_12;
  }
LABEL_22:
  tinfo_size = get_tinfo_size(0, *a1, 0);
  *((_DWORD *)a1 + 57) = tinfo_size;
  if ( tinfo_size )
  {
    get_tinfo_pdata(a1 + 30, *a1, 7);
    tinfo_property = get_tinfo_property(*a1, 286);
    *(_WORD *)((char *)a1 + 293) = 257;
    *((_BYTE *)a1 + 292) = tinfo_property != 0;
    return tinfo_details;
  }
  return 0;
}


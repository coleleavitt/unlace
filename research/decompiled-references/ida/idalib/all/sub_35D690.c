__int64 __fastcall sub_35D690(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // r13
  unsigned __int64 v10; // rbp
  __int64 tinfo_property4; // rax
  __int64 v12; // rax
  __int64 tinfo_size; // rax
  __int64 tinfo_property; // rax
  unsigned __int8 tinfo_details; // [rsp+1Bh] [rbp-4Dh]
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  a1[45] = a3;
  *((_BYTE *)a1 + 437) = 0;
  v17[0] = get_tinfo_property(*a4, 289);
  copy_tinfo_t(a1);
  clear_tinfo_t(v17);
  if ( (*a1 & 0x100) == 0 )
    return 0;
  if ( !get_tinfo_pdata(a1 + 51, *a1, 0) )
    return 0;
  tinfo_details = get_tinfo_details(*a1, 13, a1 + 1);
  if ( !tinfo_details )
    return 0;
  v7 = a1[2];
  if ( a1[9] != v7 )
  {
    sub_35C9C0(a1 + 8, v7);
    v7 = a1[2];
  }
  v8 = a1[1];
  v9 = (_QWORD *)a1[8];
  v10 = v8 + 144 * v7;
  if ( v10 != v8 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v8 + 8);
      if ( v12 )
        goto LABEL_16;
LABEL_14:
      if ( (*(_BYTE *)(v8 + 64) & 0xF) != 0xE )
        break;
LABEL_12:
      v8 += 144;
      v9 += 38;
      if ( v8 == v10 )
        goto LABEL_22;
    }
    v12 = 0;
LABEL_16:
    if ( a5 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v8 + 133) & 4) != 0 )
        {
          v8 += 144;
          v9 += 38;
          if ( v8 == v10 )
            goto LABEL_22;
        }
        else
        {
          if ( ((*(_BYTE *)(v8 + 64) & 0xF) != 0xE || *(_QWORD *)(v8 + 24) > 1u)
            && (v12 || get_tinfo_property(*(_QWORD *)(v8 + 64), 287)) )
          {
            break;
          }
          v8 += 144;
          v9 += 38;
          if ( v10 == v8 )
            goto LABEL_22;
        }
        v12 = *(_QWORD *)(v8 + 8);
        if ( !v12 )
          goto LABEL_14;
      }
    }
    get_idainfo_by_udm(v9, v9 + 2, v8, -1);
    tinfo_property4 = get_tinfo_property4(*a1, 297, 0x8E38E38E38E38E39LL * ((v8 - a1[1]) >> 4), 0, 0, 0);
    v9[1] = tinfo_property4;
    if ( (*v9 & 0x600LL) == 0x400 && (*v9 & 0xF0000000LL) == 0x60000000 )
    {
      v17[0] = 0;
      v17[0] = get_tinfo_property(*(_QWORD *)(v8 + 64), 289);
      v9[1] = get_tinfo_tid(v17, 0);
      clear_tinfo_t(v17);
    }
    else
    {
      sub_35D5F0(a2, (__int64)(v9 + 36), tinfo_property4, a5, v8);
    }
    goto LABEL_12;
  }
LABEL_22:
  tinfo_size = get_tinfo_size(0, *a1, 0);
  a1[46] = tinfo_size;
  if ( tinfo_size )
  {
    get_tinfo_pdata(a1 + 48, *a1, 7);
    tinfo_property = get_tinfo_property(*a1, 286);
    *(_WORD *)((char *)a1 + 437) = 257;
    *((_BYTE *)a1 + 436) = tinfo_property != 0;
    return tinfo_details;
  }
  return 0;
}

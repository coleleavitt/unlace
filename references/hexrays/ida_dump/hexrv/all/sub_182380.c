__int64 __fastcall sub_182380(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  unsigned int v6; // r15d
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  char tinfo_property; // al
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+10h] [rbp-88h]
  unsigned int v18; // [rsp+1Ch] [rbp-7Ch]
  _QWORD *v19; // [rsp+20h] [rbp-78h]
  _QWORD *v20; // [rsp+28h] [rbp-70h]
  unsigned __int64 tinfo_size; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v23[9]; // [rsp+50h] [rbp-48h] BYREF

  v23[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(v4 + 1) & 0x10) == 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 4) & 0x90) != 0 )
    return 0;
  v6 = sub_17FDC0(a1 + 24, a2, a3, 1, a4);
  if ( !(_BYTE)v6 )
    return 0;
  v22 = 0;
  v18 = *(_DWORD *)a3 - 56;
  if ( v18 > 1 )
  {
    if ( *(_BYTE *)(a1 + 24) == 4 || *(_DWORD *)a3 == 1 )
    {
LABEL_16:
      *(_DWORD *)(a1 + 136) &= ~8u;
      clear_tinfo_t(&v22);
      goto LABEL_17;
    }
    v17 = a3 + 64;
LABEL_10:
    if ( *(_BYTE *)v17 == 5
      && (v9 = *(_QWORD *)(v4 + 800)) != 0
      && (unsigned int)sub_1F7160(&v22, v23, v9, v17) != -1
      && (v23[0] & 0x8000000000000000LL) == 0LL )
    {
      *(_QWORD *)(a1 + 104) = v23[0];
      copy_tinfo_t(a1 + 112, &v22);
    }
    else if ( !(unsigned __int8)sub_A4380(v4, (char *)v17, &v22, (unsigned __int64 *)(a1 + 104), 0) )
    {
LABEL_15:
      if ( v18 <= 1 )
        goto LABEL_26;
      goto LABEL_16;
    }
    tinfo_property = get_tinfo_property(v22, 2);
    v23[0] = 0;
    if ( (tinfo_property & 0xF) == 0xB )
      v23[0] = get_tinfo_property(v22, 11);
    else
      copy_tinfo_t(v23, &v22);
    tinfo_size = get_tinfo_size(0, v23[0], 0);
    v13 = *(_QWORD *)(v4 + 1496);
    v14 = (_QWORD *)(v13 + 376);
    v20 = (_QWORD *)(v13 + 408);
    while ( 1 )
    {
      v19 = v14;
      if ( !(unsigned int)lexcompare_tinfo(v23[0], *v14, 0) )
        break;
      v14 = v19 + 1;
      if ( v20 == v19 + 1 )
      {
        if ( (get_tinfo_property(v22, 2) & 0xF) != 0xB )
        {
          if ( *(_QWORD *)(a1 + 104)
            && (get_tinfo_property(v23[0], 2) & 0x2F) != 0xD
            && tinfo_size >= *(_QWORD *)(a1 + 104) + *(int *)(v17 + 4) )
          {
            goto LABEL_54;
          }
LABEL_43:
          clear_tinfo_t(v23);
          goto LABEL_15;
        }
        if ( (get_tinfo_property(v23[0], 2) & 0x1F) == 0x12
          || (get_tinfo_property(v23[0], 2) & 0x3F) == 0x22
          || *(_BYTE *)v17 == 5 && (v23[0] & 0x3F) == 0x11 )
        {
          clear_tinfo_t(v23);
          goto LABEL_26;
        }
        if ( tinfo_size && !(*(_QWORD *)(a1 + 104) % tinfo_size) )
          goto LABEL_43;
LABEL_54:
        clear_tinfo_t(v23);
        clear_tinfo_t(&v22);
        return 0;
      }
    }
    if ( tinfo_size && !(*(_QWORD *)(a1 + 104) % tinfo_size) )
    {
      *(_DWORD *)(a1 + 124) = tinfo_size;
      clear_tinfo_t(v23);
      goto LABEL_26;
    }
    goto LABEL_54;
  }
  if ( *(_BYTE *)(a3 + 64) == 8 )
  {
    v15 = *(_QWORD *)(a3 + 72);
    if ( *(_DWORD *)(v15 + 284) == 2 )
    {
      v16 = *(_QWORD *)(v15 + 24);
      if ( *(_BYTE *)v16 == 10 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        if ( v17 )
          goto LABEL_10;
      }
    }
  }
LABEL_26:
  *(_DWORD *)(a1 + 136) |= 8u;
  clear_tinfo_t(&v22);
LABEL_17:
  if ( a4 )
  {
    v10 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 4 )
    {
      if ( v10 != 67 )
        goto LABEL_20;
      if ( *(_DWORD *)(a3 + 36) != *(_DWORD *)(a3 + 68) )
        return v6;
    }
    v22 = 0;
    if ( (unsigned __int8)sub_A4380(v4, (char *)(a3 + 32), &v22, v23, 0) && (get_tinfo_property(v22, 2) & 0x2F) == 0xD )
    {
      clear_tinfo_t(&v22);
      return 0;
    }
    clear_tinfo_t(&v22);
    v10 = *(_DWORD *)a3;
  }
  else
  {
    if ( !(unsigned __int8)sub_17FB30(a1, a2, a3) )
      return 0;
    v10 = *(_DWORD *)a3;
  }
LABEL_20:
  if ( (unsigned int)(v10 - 56) <= 1 )
  {
    v11 = 32;
    if ( *(_BYTE *)(a3 + 32) == 11 )
      v11 = (*(_DWORD *)(*(_QWORD *)(a3 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
    *(_DWORD *)(a1 + 136) |= v11;
  }
  return v6;
}

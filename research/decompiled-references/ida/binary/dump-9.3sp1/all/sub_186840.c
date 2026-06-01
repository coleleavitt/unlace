__int64 __fastcall sub_186840(__int64 a1, __int64 a2, __int64 a3, char a4, __m128i a5)
{
  __int64 v5; // r14
  unsigned int v7; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  char tinfo_property; // al
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+10h] [rbp-88h]
  unsigned int v20; // [rsp+1Ch] [rbp-7Ch]
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  unsigned __int64 tinfo_size; // [rsp+30h] [rbp-68h]
  __int64 v24; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v25[9]; // [rsp+50h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(v5 + 1) & 0x10) == 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 4) & 0x90) != 0 )
    return 0;
  v7 = sub_184280(a1 + 24, a2, a3, 1, a4, a5);
  if ( !(_BYTE)v7 )
    return 0;
  v24 = 0;
  v20 = *(_DWORD *)a3 - 56;
  if ( v20 > 1 )
  {
    if ( *(_BYTE *)(a1 + 24) == 4 || *(_DWORD *)a3 == 1 )
    {
LABEL_16:
      *(_DWORD *)(a1 + 136) &= ~8u;
      clear_tinfo_t();
      goto LABEL_17;
    }
    v19 = a3 + 64;
LABEL_10:
    if ( *(_BYTE *)v19 == 5
      && (v10 = *(_QWORD *)(v5 + 800)) != 0
      && (unsigned int)sub_1FBD60(&v24, v25, v10, v19) != -1
      && (v25[0] & 0x8000000000000000LL) == 0LL )
    {
      *(_QWORD *)(a1 + 104) = v25[0];
      copy_tinfo_t();
    }
    else if ( !(unsigned __int8)sub_A8840(v5, (char *)v19, &v24, (unsigned __int64 *)(a1 + 104), 0) )
    {
LABEL_15:
      if ( v20 <= 1 )
        goto LABEL_26;
      goto LABEL_16;
    }
    tinfo_property = get_tinfo_property();
    v25[0] = 0;
    if ( (tinfo_property & 0xF) == 0xB )
      v25[0] = get_tinfo_property();
    else
      copy_tinfo_t();
    tinfo_size = get_tinfo_size();
    v15 = *(_QWORD *)(v5 + 1496);
    v16 = v15 + 376;
    v22 = v15 + 408;
    while ( 1 )
    {
      v21 = v16;
      if ( !(unsigned int)lexcompare_tinfo() )
        break;
      v16 = v21 + 8;
      if ( v22 == v21 + 8 )
      {
        if ( (get_tinfo_property() & 0xF) != 0xB )
        {
          if ( *(_QWORD *)(a1 + 104)
            && (get_tinfo_property() & 0x2F) != 0xD
            && tinfo_size >= *(_QWORD *)(a1 + 104) + *(int *)(v19 + 4) )
          {
            goto LABEL_54;
          }
LABEL_43:
          clear_tinfo_t();
          goto LABEL_15;
        }
        if ( (get_tinfo_property() & 0x1F) == 0x12
          || (get_tinfo_property() & 0x3F) == 0x22
          || *(_BYTE *)v19 == 5 && (v25[0] & 0x3F) == 0x11 )
        {
          clear_tinfo_t();
          goto LABEL_26;
        }
        if ( tinfo_size && !(*(_QWORD *)(a1 + 104) % tinfo_size) )
          goto LABEL_43;
LABEL_54:
        clear_tinfo_t();
        clear_tinfo_t();
        return 0;
      }
    }
    if ( tinfo_size && !(*(_QWORD *)(a1 + 104) % tinfo_size) )
    {
      *(_DWORD *)(a1 + 124) = tinfo_size;
      clear_tinfo_t();
      goto LABEL_26;
    }
    goto LABEL_54;
  }
  if ( *(_BYTE *)(a3 + 64) == 8 )
  {
    v17 = *(_QWORD *)(a3 + 72);
    if ( *(_DWORD *)(v17 + 284) == 2 )
    {
      v18 = *(_QWORD *)(v17 + 24);
      if ( *(_BYTE *)v18 == 10 )
      {
        v19 = *(_QWORD *)(v18 + 8);
        if ( v19 )
          goto LABEL_10;
      }
    }
  }
LABEL_26:
  *(_DWORD *)(a1 + 136) |= 8u;
  clear_tinfo_t();
LABEL_17:
  if ( a4 )
  {
    v12 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 4 )
    {
      if ( v12 != 67 )
        goto LABEL_20;
      if ( *(_DWORD *)(a3 + 36) != *(_DWORD *)(a3 + 68) )
        return v7;
    }
    v24 = 0;
    if ( (unsigned __int8)sub_A8840(v5, (char *)(a3 + 32), &v24, v25, 0) && (get_tinfo_property() & 0x2F) == 0xD )
    {
      clear_tinfo_t();
      return 0;
    }
    clear_tinfo_t();
    v12 = *(_DWORD *)a3;
  }
  else
  {
    if ( !(unsigned __int8)sub_183FF0(a1, a2, a3, v11) )
      return 0;
    v12 = *(_DWORD *)a3;
  }
LABEL_20:
  if ( (unsigned int)(v12 - 56) <= 1 )
  {
    v13 = 32;
    if ( *(_BYTE *)(a3 + 32) == 11 )
      v13 = (*(_DWORD *)(*(_QWORD *)(a3 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
    *(_DWORD *)(a1 + 136) |= v13;
  }
  return v7;
}

__int64 __fastcall sub_698A40(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  char v8; // si
  char *v9; // rcx
  __int64 result; // rax
  __int64 *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r12
  char tinfo_property; // al
  __int64 v21; // rdx
  bool v22; // zf
  unsigned __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rax
  char *v27; // r9
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  char *v30; // rbx
  char *v31; // r8
  __int64 i; // rax
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rax
  bool v36; // [rsp+Fh] [rbp-39h]

  v7 = *a1;
  v8 = *(_BYTE *)(*a1 + 28) & 0x3F;
  if ( v8 == 45 )
  {
    v16 = *(_QWORD **)(v7 + 112);
    v17 = &v16[*(_QWORD *)(v7 + 120)];
    if ( v16 != v17 )
    {
      v18 = v16;
      while ( *(_QWORD *)(*(_QWORD *)(a2 + 112) + 8 * a3) != *v18 )
      {
        if ( v17 == ++v18 )
          return -1;
      }
      if ( v17 != v18 )
        return v18 - v16;
    }
    return -1;
  }
  v9 = (char *)(*(_BYTE *)(*a1 + 28) & 0x2F);
  result = -1;
  if ( (_BYTE)v9 != 13 )
    return result;
  v12 = (__int64 *)(*(_QWORD *)(a2 + 136) + (a3 << 7));
  if ( (*(_BYTE *)(v7 + 29) & 1) != 0 || (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v13 = *(_QWORD *)(v7 + 144);
    if ( (*((_BYTE *)v12 + 116) & 0x20) != 0 )
    {
      v14 = 0;
      if ( !v13 )
        return -1;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v7 + 136) + (v14 << 7);
        if ( (*(_BYTE *)(v15 + 116) & 0x20) == 0 )
          break;
        if ( !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v15 + 64), v12[8], 0, v9, a5) )
          return v14;
        v7 = *a1;
        ++v14;
        v13 = *(_QWORD *)(*a1 + 144);
        if ( v14 >= v13 )
          goto LABEL_16;
      }
      v13 = *(_QWORD *)(v7 + 144);
    }
LABEL_16:
    if ( a3 < v13 )
      return a3;
    return -1;
  }
  if ( v8 == 13 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x3F) != 0xD )
      return -1;
    v27 = *(char **)(v7 + 136);
    v28 = *v12;
    v29 = *(_QWORD *)(v7 + 144) << 7;
    v30 = v27;
    v31 = &v27[v29];
    for ( i = v29 >> 7; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v9 = &v30[128 * (i >> 1)];
        if ( *(_QWORD *)v9 >= v28 )
          break;
        v30 = v9 + 128;
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_40;
      }
    }
LABEL_40:
    if ( v30 == v31 || v28 != *(_QWORD *)v30 )
      return -1;
    if ( v12[1] )
    {
      do
      {
        if ( *(_QWORD *)v30 != v28 )
          break;
        if ( *((_QWORD *)v30 + 1) )
          return (v30 - v27) >> 7;
        v30 += 128;
      }
      while ( v30 != v31 );
      return -1;
    }
    do
    {
      if ( *((_QWORD *)v30 + 1) )
        break;
      v33 = lexcompare_tinfo(*((_QWORD *)v30 + 8), v12[8], 0, v9, v31);
      v7 = *a1;
      v34 = v33;
      v35 = *(_QWORD *)(*a1 + 136);
      if ( !v34 )
        return (__int64)&v30[-v35] >> 7;
      v30 += 128;
      v9 = (char *)(*(_QWORD *)(v7 + 144) << 7);
    }
    while ( v30 != &v9[v35] );
    if ( (*(_BYTE *)(v7 + 28) & 0x3F) != 0x1D )
      return -1;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x3F) != 0x1D )
    return -1;
  v19 = v12[1];
  tinfo_property = get_tinfo_property(v12[8], 2);
  v21 = *a1;
  v22 = (tinfo_property & 0xF) == 9;
  result = -1;
  v36 = v22;
  if ( *(_QWORD *)(*a1 + 144) )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v21 + 136) + (v24 << 7);
      if ( v19 == *(_QWORD *)(v25 + 8) )
        break;
LABEL_26:
      if ( (unsigned __int64)++v24 >= *(_QWORD *)(v21 + 144) )
        return result;
    }
    if ( (unsigned __int8)compare_tinfo(*(_QWORD *)(v25 + 64), v12[8], 0) )
      return v24;
    v26 = 9;
    if ( _bittest64(&v26, v23) )
    {
      v23 = 3;
      if ( v36 != ((get_tinfo_property(*(_QWORD *)(v25 + 64), 2) & 0xF) == 9) )
        goto LABEL_31;
    }
    else if ( (_DWORD)v23 == 1 )
    {
      goto LABEL_32;
    }
    v23 = 2;
LABEL_31:
    if ( !(unsigned __int8)compare_tinfo(*(_QWORD *)(v25 + 64), v12[8], 1) )
    {
LABEL_33:
      v21 = *a1;
      result = v24;
      goto LABEL_26;
    }
LABEL_32:
    v23 = 1;
    goto LABEL_33;
  }
  return result;
}


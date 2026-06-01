__int64 __fastcall sub_6B9340(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rcx
  char v8; // si
  __int64 result; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rbp
  char tinfo_property; // al
  __int64 v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rax
  char *v27; // rdi
  unsigned __int64 v28; // rsi
  char *v29; // rbp
  __int64 v30; // rdx
  char *v31; // r8
  __int64 i; // rdx
  char *v33; // rax
  int v34; // eax
  int v35; // edx
  __int64 v36; // rax
  bool v37; // [rsp+Fh] [rbp-39h]

  v7 = *a1;
  v8 = *(_BYTE *)(*a1 + 32) & 0x3F;
  if ( v8 == 45 )
  {
    v15 = *(_QWORD **)(v7 + 120);
    v16 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * a3);
    v17 = &v15[*(_QWORD *)(v7 + 128)];
    if ( v15 != v17 )
    {
      v18 = *(_QWORD **)(v7 + 120);
      while ( v16 != *v18 )
      {
        if ( v17 == ++v18 )
          return -1;
      }
      if ( v17 != v18 )
        return v18 - v15;
    }
    return -1;
  }
  result = -1;
  if ( (*(_BYTE *)(*a1 + 32) & 0x2F) != 0xD )
    return result;
  v11 = *(_QWORD *)(a2 + 144) + 144 * a3;
  if ( (*(_BYTE *)(v7 + 33) & 1) != 0 || (*(_BYTE *)(a2 + 33) & 1) != 0 )
  {
    v12 = *(_QWORD *)(v7 + 152);
    if ( (*(_BYTE *)(v11 + 132) & 0x20) != 0 )
    {
      v13 = 0;
      if ( !v12 )
        return -1;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v7 + 144) + 144 * v13;
        if ( (*(_BYTE *)(v14 + 132) & 0x20) == 0 )
          break;
        if ( !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v14 + 64), *(_QWORD *)(v11 + 64), 0, v7, a5) )
          return v13;
        v7 = *a1;
        ++v13;
        v12 = *(_QWORD *)(*a1 + 152);
        if ( v13 >= v12 )
          goto LABEL_16;
      }
      v12 = *(_QWORD *)(v7 + 152);
    }
LABEL_16:
    if ( a3 < v12 )
      return a3;
    return -1;
  }
  if ( v8 == 13 )
  {
    if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0xD )
      return -1;
    v27 = *(char **)(v7 + 144);
    v28 = *(_QWORD *)v11;
    v29 = v27;
    v30 = 144LL * *(_QWORD *)(v7 + 152);
    v31 = &v27[v30];
    for ( i = 0x8E38E38E38E38E39LL * (v30 >> 4); i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v33 = &v29[144 * (i >> 1)];
        if ( *(_QWORD *)v33 >= v28 )
          break;
        v29 = v33 + 144;
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_40;
      }
    }
LABEL_40:
    if ( v29 == v31 || v28 != *(_QWORD *)v29 )
      return -1;
    if ( *(_QWORD *)(v11 + 8) )
    {
      do
      {
        if ( *(_QWORD *)v29 != v28 )
          break;
        if ( *((_QWORD *)v29 + 1) )
          return 0x8E38E38E38E38E39LL * ((v29 - v27) >> 4);
        v29 += 144;
      }
      while ( v29 != v31 );
      return -1;
    }
    do
    {
      if ( *((_QWORD *)v29 + 1) )
        break;
      v34 = lexcompare_tinfo(*((_QWORD *)v29 + 8), *(_QWORD *)(v11 + 64), 0, v7, v31);
      v7 = *a1;
      v35 = v34;
      v36 = *(_QWORD *)(*a1 + 144);
      if ( !v35 )
        return 0x8E38E38E38E38E39LL * ((__int64)&v29[-v36] >> 4);
      v29 += 144;
    }
    while ( v29 != (char *)(144LL * *(_QWORD *)(v7 + 152) + v36) );
    if ( (*(_BYTE *)(v7 + 32) & 0x3F) != 0x1D )
      return -1;
  }
  if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0x1D )
    return -1;
  v19 = *(_QWORD *)(v11 + 8);
  tinfo_property = get_tinfo_property(*(_QWORD *)(v11 + 64), 2);
  v21 = *a1;
  v22 = (tinfo_property & 0xF) == 9;
  result = -1;
  v37 = v22;
  if ( *(_QWORD *)(*a1 + 152) )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v21 + 144) + 144 * v24;
      if ( v19 == *(_QWORD *)(v25 + 8) )
        break;
LABEL_26:
      if ( (unsigned __int64)++v24 >= *(_QWORD *)(v21 + 152) )
        return result;
    }
    if ( (unsigned __int8)compare_tinfo(*(_QWORD *)(v25 + 64), *(_QWORD *)(v11 + 64), 0) )
      return v24;
    v26 = 9;
    if ( _bittest64(&v26, v23) )
    {
      v23 = 3;
      if ( v37 != ((get_tinfo_property(*(_QWORD *)(v25 + 64), 2) & 0xF) == 9) )
        goto LABEL_31;
    }
    else if ( (_DWORD)v23 == 1 )
    {
      goto LABEL_32;
    }
    v23 = 2;
LABEL_31:
    if ( !(unsigned __int8)compare_tinfo(*(_QWORD *)(v25 + 64), *(_QWORD *)(v11 + 64), 1) )
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

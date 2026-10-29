__int64 __fastcall sub_20C5D10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  unsigned int v8; // r14d
  __int64 *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rdi
  char i; // al
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // edx

  v6 = 1;
  if ( (*(_DWORD *)(a1 + 8) & 0x1000) != 0 )
    return v6;
  if ( (*(_DWORD *)(a1 + 8) & 0x2000) != 0 )
    return 0;
  v8 = *(unsigned __int8 *)(a2 + 20);
  if ( (_BYTE)v8 )
  {
    v11 = *(__int64 **)a2;
    v12 = *(unsigned int *)(a2 + 12);
    v13 = 8 * v12;
    v14 = &v11[v12];
    if ( v11 != v14 )
    {
      v15 = v11;
      if ( a1 == *v11 )
      {
LABEL_8:
        v8 = 0;
        goto LABEL_13;
      }
      while ( v14 != ++v15 )
      {
        if ( a1 == *v15 )
          goto LABEL_8;
      }
    }
    if ( (unsigned int)v12 < *(_DWORD *)(a2 + 8) )
    {
      *(_DWORD *)(a2 + 12) = v12 + 1;
      *v14 = a1;
      v11 = *(__int64 **)a2;
      v15 = (_QWORD *)(*(_QWORD *)a2 + v13);
      goto LABEL_13;
    }
  }
  v13 = a1;
  v23 = sub_2236760(a2, a1);
  v8 = v24;
  v15 = (_QWORD *)v23;
  v11 = *(__int64 **)a2;
  if ( !*(_BYTE *)(a2 + 20) )
  {
    v16 = (__int64)&v11[*(unsigned int *)(a2 + 8)];
    goto LABEL_14;
  }
LABEL_13:
  v16 = (__int64)&v11[*(unsigned int *)(a2 + 12)];
LABEL_14:
  if ( (_QWORD *)v16 != v15 && *v15 >= 0xFFFFFFFFFFFFFFFELL )
  {
    ++v15;
    do
    {
      v17 = v15;
      if ( (_QWORD *)v16 == v15 )
        break;
      ++v15;
    }
    while ( *v17 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( !(_BYTE)v8 )
    return 0;
  v18 = *(__int64 **)(a1 + 16);
  v19 = &v18[*(unsigned int *)(a1 + 12)];
  if ( v19 == v18 )
  {
LABEL_26:
    v22 = *(_DWORD *)(a1 + 8);
    if ( (v22 & 0x100) != 0 )
      *(_DWORD *)(a1 + 8) = (((*(_DWORD *)(a1 + 8) >> 8) | 0x20) << 8) | (unsigned __int8)v22;
    return 0;
  }
  while ( 1 )
  {
    v20 = *v18;
    for ( i = *(_BYTE *)(*v18 + 8); i == 16; i = *(_BYTE *)(v20 + 8) )
      v20 = *(_QWORD *)(v20 + 24);
    if ( i != 15 )
      break;
    v13 = a2;
    if ( (unsigned __int8)sub_20C5D10(v20, a2, v16, v15) )
      goto LABEL_31;
LABEL_25:
    if ( v19 == ++v18 )
      goto LABEL_26;
  }
  if ( i != 18 && (i != 20 || *((_BYTE *)sub_20C5940(v20, v13, v16, (__int64)v15, a5, a6) + 8) != 18) )
    goto LABEL_25;
LABEL_31:
  *(_DWORD *)(a1 + 8) |= 0x1000u;
  return v8;
}

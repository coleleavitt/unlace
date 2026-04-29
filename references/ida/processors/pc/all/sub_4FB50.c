__int64 __fastcall sub_4FB50(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        double a7,
        __m128i a8,
        __m128i a9,
        int a10,
        unsigned __int64 a11,
        unsigned __int64 a12)
{
  const void *v16; // r15
  __int16 v17; // ax
  unsigned __int16 v18; // dx
  __int64 v19; // rdi
  unsigned int v20; // r9d
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-40h]
  unsigned int v29; // [rsp+8h] [rbp-40h]

  if ( !*(_BYTE *)(a5 + 32) )
  {
    if ( a6 || (unsigned __int8)(*(_BYTE *)(a5 + 1) - 3) > 1u )
      return 0;
    v22 = *(unsigned __int16 *)(a5 + 6);
    v23 = *(_DWORD *)(a1 + 44) & 0x1018;
    if ( v23 == 4096 || v23 == 8 )
    {
      if ( (unsigned __int16)v22 <= 3u )
        return 0;
      if ( (unsigned __int16)(v22 - 4) > 3u )
      {
        if ( under_debugger )
          BUG();
        interr();
        return sub_4FE40(10260);
      }
      LODWORD(v22) = dword_95CA0[v22];
    }
    if ( *(_WORD *)(a5 + 26) != 31 || (unsigned int)(v22 - 4) > 1 )
    {
      v24 = sub_7F460(a1 + 16, a5);
      v25 = 0;
      if ( v24 != -1 )
        v25 = 16 * sel2para();
      *a2 = v25;
      *a3 = -1;
      *a4 = v22;
      return 1;
    }
    return 0;
  }
  v16 = (const void *)(a1 + 16);
  v17 = (*(char *)(a5 + 33) >> 3) & 7;
  if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 && (*(_BYTE *)(a1 + 49) & 2) != 0 )
    v17 = (*(char *)(a5 + 33) >> 3) & 7 | 8;
  v18 = *(_WORD *)(a1 + 40);
  if ( v18 > 0x5C0u )
  {
    if ( v18 > 0x5F1u )
    {
      if ( (unsigned __int16)(v18 - 1532) > 0xFu )
        goto LABEL_12;
    }
    else if ( v18 <= 0x5EDu )
    {
      goto LABEL_12;
    }
  }
  else if ( v18 <= 0x5BCu )
  {
    if ( v18 > 0x378u )
    {
      if ( (unsigned __int16)(v18 - 993) > 3u )
        goto LABEL_12;
    }
    else if ( v18 <= 0x374u )
    {
      goto LABEL_12;
    }
  }
  v19 = a1 + 16;
  v28 = a5;
  if ( (*(_BYTE *)(a1 + 289) & 0x10) != 0 )
    v17 |= 0x10u;
  v17 = sub_22710(v19, v17);
  a5 = v28;
LABEL_12:
  *a4 = v17;
  if ( *(_BYTE *)(a5 + 1) == 2 )
  {
    v26 = sub_7F460(v16, a5);
    v27 = 0;
    if ( v26 != -1 )
      v27 = 16 * sel2para();
    *a2 = v27;
    *a3 = -1;
    return 1;
  }
  else
  {
    v20 = *(_BYTE *)(a5 + 33) & 7;
    if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 && (*(_BYTE *)(a1 + 49) & 1) != 0 )
      v20 = *(_BYTE *)(a5 + 33) & 7 | 8;
    if ( v17 == v20 )
      return 0;
    if ( a10 != v20 )
    {
      if ( !a6 && v17 == a10 )
      {
        *a2 = a11;
        *a3 = a12;
        *a4 = v20;
        return 1;
      }
      v29 = v20;
      if ( (unsigned __int8)sub_4F830(*(_QWORD *)(a1 + 888), a2, a3, v16, v20, a7, a8, a9) )
        return 1;
      if ( !a6 && (unsigned __int8)sub_4F830(*(_QWORD *)(a1 + 888), a2, a3, v16, *a4, a7, a8, a9) )
      {
        *a4 = v29;
        return 1;
      }
      return 0;
    }
    *a2 = a11;
    *a3 = a12;
    return 1;
  }
}

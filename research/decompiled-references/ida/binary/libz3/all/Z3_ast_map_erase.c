char __fastcall Z3_ast_map_erase(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bl
  __int64 v7; // r10
  __int64 v8; // rdi
  __int64 *v9; // r11
  int v10; // r14d
  __int64 v11; // r10
  __int64 *v12; // rsi
  __int64 v13; // r14
  __int64 *v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r14
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  unsigned int v24; // esi
  int v25; // eax
  __m128i *v26; // r9
  __m128i *v27; // rdx
  __m128i *v28; // rax
  __int64 v29; // rdx
  __m128i *v30; // rdi
  const __m128i *v31; // r14
  const __m128i *v32; // r11
  __m128i *v33; // r10
  __int64 v34; // rdx
  __m128i *v35; // rsi
  __m128i *v36; // rdx
  unsigned int v38; // [rsp+8h] [rbp-60h]
  int v39; // [rsp+8h] [rbp-60h]
  __m128i *v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+10h] [rbp-58h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29EBE0();
  v7 = *(unsigned int *)(a2 + 40);
  v8 = *(unsigned int *)(a3 + 12);
  *(_DWORD *)(a1 + 1520) = 0;
  v9 = *(__int64 **)(a2 + 32);
  v10 = v7 - 1;
  v11 = 16 * v7;
  v12 = &v9[(unsigned __int64)v11 / 8];
  v13 = 16LL * ((unsigned int)v8 & v10);
  v14 = &v9[(unsigned __int64)v13 / 8];
  v15 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 == v11 )
  {
LABEL_25:
    if ( v9 == v14 )
      goto LABEL_10;
    v15 = *(__int64 **)(a2 + 32);
    while ( 1 )
    {
      v21 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
      {
        if ( *(_DWORD *)(v21 + 12) == (_DWORD)v8 && a3 == v21 )
          goto LABEL_12;
      }
      else if ( !v21 )
      {
        goto LABEL_10;
      }
      v15 += 2;
      if ( v14 == v15 )
        goto LABEL_10;
    }
  }
  while ( 1 )
  {
    v16 = *v15;
    if ( (unsigned __int64)*v15 <= 1 )
    {
      if ( !v16 )
        goto LABEL_10;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(v16 + 12) == (_DWORD)v8 && a3 == v16 )
      break;
LABEL_7:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_25;
  }
LABEL_12:
  v17 = v15[1];
  v15 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 == v11 )
  {
LABEL_33:
    if ( v9 != v14 )
    {
      v15 = *(__int64 **)(a2 + 32);
      while ( 1 )
      {
        v22 = *v15;
        if ( (unsigned __int64)*v15 > 1 )
        {
          if ( *(_DWORD *)(v22 + 12) == (_DWORD)v8 && a3 == v22 )
            goto LABEL_43;
        }
        else if ( !v22 )
        {
          goto LABEL_19;
        }
        v15 += 2;
        if ( v14 == v15 )
          goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
  while ( 2 )
  {
    v18 = *v15;
    if ( (unsigned __int64)*v15 <= 1 )
    {
      if ( !v18 )
        goto LABEL_19;
      goto LABEL_16;
    }
    if ( *(_DWORD *)(v18 + 12) != (_DWORD)v8 || a3 != v18 )
    {
LABEL_16:
      v15 += 2;
      if ( v12 == v15 )
        goto LABEL_33;
      continue;
    }
    break;
  }
LABEL_43:
  v23 = v15 + 2;
  if ( v12 == v15 + 2 )
    v23 = *(_QWORD **)(a2 + 32);
  v24 = *(_DWORD *)(a2 + 44) - 1;
  if ( !*v23 )
  {
    *v15 = 0;
    v19 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 44) = v24;
    goto LABEL_20;
  }
  *v15 = 1;
  v25 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 44) = v24;
  LODWORD(v15) = v25 + 1;
  *(_DWORD *)(a2 + 48) = (_DWORD)v15;
  if ( v24 >= (unsigned int)v15 || (unsigned int)v15 <= 0x40 || (LOBYTE(v15) = sub_186AF10(v8), (_BYTE)v15) )
  {
LABEL_19:
    v19 = *(_QWORD *)(a2 + 24);
    goto LABEL_20;
  }
  v38 = *(_DWORD *)(a2 + 40);
  v26 = (__m128i *)sub_186B270(16LL * v38);
  v27 = v26;
  v28 = &v26[v38];
  if ( v38 )
  {
    if ( ((16 * (_BYTE)v38) & 0x10) == 0 || (v27 = v26 + 1, *v26 = 0, v28 != &v26[1]) )
    {
      do
      {
        *v27 = 0;
        v27 += 2;
        v27[-1] = 0;
      }
      while ( v28 != v27 );
    }
  }
  v29 = *(unsigned int *)(a2 + 40);
  v30 = *(__m128i **)(a2 + 32);
  v31 = v30;
  v39 = v29 - 1;
  LOBYTE(v15) = 16 * v29;
  v32 = &v30[v29];
  v41 = 16 * v29;
  v33 = &v26[v29];
  if ( v30 != v32 )
  {
    do
    {
      if ( v31->m128i_i64[0] > 1uLL )
      {
        LODWORD(v15) = *(_DWORD *)(v31->m128i_i64[0] + 12) & v39;
        v34 = 16LL * (unsigned int)v15;
        v35 = &v26[(unsigned __int64)v34 / 0x10];
        if ( v41 == v34 )
        {
LABEL_63:
          if ( v26 == v35 )
          {
LABEL_72:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v36 = v26;
          while ( v36->m128i_i64[0] )
          {
            if ( v35 == ++v36 )
              goto LABEL_72;
          }
        }
        else
        {
          v36 = &v26[(unsigned __int64)v34 / 0x10];
          while ( v36->m128i_i64[0] )
          {
            if ( v33 == ++v36 )
              goto LABEL_63;
          }
        }
        *v36 = _mm_loadu_si128(v31);
      }
      ++v31;
    }
    while ( v32 != v31 );
    v30 = *(__m128i **)(a2 + 32);
  }
  if ( v30 )
  {
    v40 = v26;
    LOBYTE(v15) = sub_186B220(v30);
    v26 = v40;
  }
  *(_QWORD *)(a2 + 32) = v26;
  v19 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 48) = 0;
LABEL_20:
  v20 = (*(_DWORD *)(a3 + 8))-- == 1;
  if ( !v20 )
  {
    if ( v17 )
      goto LABEL_22;
LABEL_10:
    if ( !v6 )
      return (char)v15;
LABEL_24:
    LOBYTE(v15) = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
    return (char)v15;
  }
  LOBYTE(v15) = sub_15D7BC0(v19, a3);
  if ( !v17 )
    goto LABEL_10;
LABEL_22:
  v20 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( !v20 )
    goto LABEL_10;
  LOBYTE(v15) = sub_15D7BC0(v19, v17);
  if ( v6 )
    goto LABEL_24;
  return (char)v15;
}


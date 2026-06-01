void __fastcall sub_20B2580(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r13
  __int64 v12; // r9
  char *v13; // rdi
  int v14; // r8d
  char *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rsi
  char *v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  bool v23; // zf
  int v24; // esi
  int v25; // r10d
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  int v30; // esi
  __int64 v31; // r8
  __int64 v32[2]; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-40h] BYREF
  __m128 v34[3]; // [rsp+20h] [rbp-38h] BYREF

  v32[0] = a2;
  v3 = *(_QWORD *)sub_20CB0D0(a1);
  v4 = (__int64 *)(v3 + 2736);
  if ( (*(_BYTE *)(a1 + 7) & 0x20) == 0 )
    goto LABEL_28;
  v5 = sub_20AF750(a1, 38);
  if ( !v5 )
    goto LABEL_28;
  if ( v32[0] == v5 )
    return;
  v6 = *(unsigned int *)(v3 + 2752);
  v7 = *(_QWORD *)(v3 + 2736);
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
    v9 = (__int64 *)(v7 + 32LL * v8);
    v10 = *v9;
    if ( *v9 == v5 )
    {
LABEL_6:
      sub_206B9F0(v34, v9, (_QWORD *)(32 * v6 + v7), (__int64)v4, 1);
      v11 = v34[0].m128_u64[0];
      goto LABEL_7;
    }
    v24 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v25 = v24 + 1;
        v8 = (v6 - 1) & (v24 + v8);
        v9 = (__int64 *)(v7 + 32LL * v8);
        v26 = *v9;
        if ( v5 == *v9 )
          goto LABEL_6;
        v24 = v25;
      }
      while ( v26 != -4096 );
    }
  }
  sub_206B9F0(v34, (_QWORD *)(v7 + 32LL * (unsigned int)v6), (_QWORD *)(v7 + 32LL * (unsigned int)v6), (__int64)v4, 1);
  v11 = v34[0].m128_u64[0];
LABEL_7:
  v12 = *(unsigned int *)(v11 + 16);
  v13 = *(char **)(v11 + 8);
  v14 = *(_DWORD *)(v11 + 16);
  v15 = &v13[8 * v12];
  v16 = (8 * v12) >> 3;
  if ( !((8 * v12) >> 5) )
  {
    v18 = *(char **)(v11 + 8);
LABEL_20:
    if ( v16 != 2 )
    {
      if ( v16 != 3 )
      {
        if ( v16 != 1 )
        {
          v18 = &v13[8 * v12];
          goto LABEL_24;
        }
LABEL_54:
        if ( a1 != *(_QWORD *)v18 )
          v18 = &v13[8 * v12];
        goto LABEL_24;
      }
      if ( a1 == *(_QWORD *)v18 )
        goto LABEL_24;
      v18 += 8;
    }
    if ( a1 == *(_QWORD *)v18 )
      goto LABEL_24;
    v18 += 8;
    goto LABEL_54;
  }
  if ( *(_QWORD *)v13 == a1 )
  {
    v18 = *(char **)(v11 + 8);
  }
  else if ( a1 == *((_QWORD *)v13 + 1) )
  {
    v18 = v13 + 8;
  }
  else if ( a1 == *((_QWORD *)v13 + 2) )
  {
    v18 = v13 + 16;
  }
  else
  {
    v17 = *(char **)(v11 + 8);
    v18 = v13 + 24;
    if ( a1 != *((_QWORD *)v13 + 3) )
    {
      while ( 1 )
      {
        v18 = v17 + 32;
        if ( &v13[32 * ((8 * v12) >> 5)] == v17 + 32 )
        {
          v16 = (v15 - v18) >> 3;
          goto LABEL_20;
        }
        if ( a1 == *((_QWORD *)v17 + 4) )
          goto LABEL_24;
        if ( a1 == *((_QWORD *)v17 + 5) )
        {
          v18 = v17 + 40;
          goto LABEL_24;
        }
        if ( a1 == *((_QWORD *)v17 + 6) )
        {
          v18 = v17 + 48;
          goto LABEL_24;
        }
        if ( a1 == *((_QWORD *)v17 + 7) )
          break;
        v17 += 32;
      }
      v18 = v17 + 56;
    }
  }
LABEL_24:
  if ( v12 == 1 )
  {
    if ( v13 != (char *)(v11 + 24) )
      free(v13);
    *(_QWORD *)v11 = -8192;
    --*(_DWORD *)(v3 + 2744);
    ++*(_DWORD *)(v3 + 2748);
LABEL_28:
    if ( !v32[0] )
      return;
LABEL_29:
    if ( (unsigned __int8)sub_20A1660(v4, v32, &v33) )
    {
      v20 = v33;
      v21 = *(unsigned int *)(v33 + 16);
      v22 = v33 + 8;
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(v33 + 20) )
      {
        sub_2237220(v33 + 8, v33 + 24, v21 + 1, 8);
        v21 = *(unsigned int *)(v20 + 16);
      }
      *(_QWORD *)(*(_QWORD *)v22 + 8 * v21) = a1;
      ++*(_DWORD *)(v22 + 8);
      return;
    }
    v27 = *(unsigned int *)(v3 + 2752);
    v28 = (_QWORD *)v33;
    v29 = (unsigned int)(*(_DWORD *)(v3 + 2744) + 1);
    v30 = 2 * v27;
    v31 = (unsigned int)(4 * v29);
    v34[0].m128_u64[0] = v33;
    if ( (unsigned int)v31 < 3 * (int)v27 )
    {
      if ( (int)v27 - *(_DWORD *)(v3 + 2748) - (int)v29 > (unsigned int)v27 >> 3 )
      {
LABEL_44:
        v23 = *v28 == -4096;
        *(_DWORD *)(v3 + 2744) = v29;
        if ( !v23 )
          --*(_DWORD *)(v3 + 2748);
        *v28 = v32[0];
        v28[1] = v28 + 3;
        v28[2] = 0x100000000LL;
        *(_QWORD *)v28[1] = a1;
        ++*((_DWORD *)v28 + 4);
        return;
      }
      v30 = v27;
    }
    sub_20B22E0((__int64)v4, v30, v29, v27, v31, v19);
    sub_20A1660(v4, v32, v34);
    LODWORD(v29) = *(_DWORD *)(v3 + 2744) + 1;
    v28 = (_QWORD *)v34[0].m128_u64[0];
    goto LABEL_44;
  }
  if ( v15 != v18 + 8 )
  {
    memmove(v18, v18 + 8, v15 - (v18 + 8));
    v14 = *(_DWORD *)(v11 + 16);
  }
  v23 = v32[0] == 0;
  *(_DWORD *)(v11 + 16) = v14 - 1;
  if ( !v23 )
    goto LABEL_29;
}

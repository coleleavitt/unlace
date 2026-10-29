__int64 __fastcall sub_65EA60(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdx
  unsigned int v7; // r12d
  size_t v8; // rbp
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  _OWORD *v11; // rdx
  char *v12; // rdi
  int v13; // ecx
  __int64 v14; // rsi
  char *v15; // rax
  char *v16; // rdx
  unsigned int v17; // r12d
  size_t v18; // rbp
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  _OWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 result; // rax
  unsigned int v25; // esi
  unsigned int v26; // esi

  if ( *(_DWORD *)(a1 + 196) || *(_DWORD *)(a1 + 200) )
  {
    v2 = *(char **)(a1 + 184);
    v3 = 0;
    v4 = *(unsigned int *)(a1 + 192);
    v5 = v2;
    v6 = &v2[16 * v4];
    if ( v2 == v6 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)v5 )
      {
        *(_QWORD *)v5 = 0;
        v5 += 16;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 16;
      ++v3;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_16;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 192);
      *(_QWORD *)(a1 + 184) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 192) = v7;
      v8 = 16LL * v7;
      v9 = (_OWORD *)sub_186B270(v8);
      if ( !v7 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 184) = v9;
LABEL_16:
        *(_QWORD *)(a1 + 196) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 184) = 0;
      v26 = (unsigned int)v4 >> 1;
      *(_DWORD *)(a1 + 192) = v26;
      v8 = 16LL * v26;
      v9 = (_OWORD *)sub_186B270(v8);
    }
    v10 = &v9[v8 / 0x10];
    v11 = v9;
    if ( (v8 & 0x10) == 0 || (v11 = v9 + 1, *v9 = 0, v10 != v9 + 1) )
    {
      do
      {
        *v11 = 0;
        v11 += 2;
        *(v11 - 1) = 0;
      }
      while ( v10 != v11 );
    }
    goto LABEL_15;
  }
LABEL_17:
  if ( *(_DWORD *)(a1 + 220) || *(_DWORD *)(a1 + 224) )
  {
    v12 = *(char **)(a1 + 208);
    v13 = 0;
    v14 = *(unsigned int *)(a1 + 216);
    v15 = v12;
    v16 = &v12[16 * v14];
    if ( v12 == v16 )
      goto LABEL_32;
    do
    {
      while ( *(_QWORD *)v15 )
      {
        *(_QWORD *)v15 = 0;
        v15 += 16;
        if ( v16 == v15 )
          goto LABEL_24;
      }
      v15 += 16;
      ++v13;
    }
    while ( v16 != v15 );
LABEL_24:
    if ( (unsigned int)v14 <= 0x10 || 3 * (int)v14 >= (unsigned int)(4 * v13) )
      goto LABEL_32;
    if ( v12 )
    {
      sub_186B220(v12);
      v17 = *(_DWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 208) = 0;
      v17 >>= 1;
      *(_DWORD *)(a1 + 216) = v17;
      v18 = 16LL * v17;
      v19 = (_OWORD *)sub_186B270(v18);
      if ( !v17 )
      {
LABEL_31:
        *(_QWORD *)(a1 + 208) = v19;
LABEL_32:
        *(_QWORD *)(a1 + 220) = 0;
        goto LABEL_33;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 208) = 0;
      v25 = (unsigned int)v14 >> 1;
      *(_DWORD *)(a1 + 216) = v25;
      v18 = 16LL * v25;
      v19 = (_OWORD *)sub_186B270(v18);
    }
    v20 = &v19[v18 / 0x10];
    v21 = v19;
    if ( (v18 & 0x10) == 0 || (v21 = v19 + 1, *v19 = 0, v19 + 1 != v20) )
    {
      do
      {
        *v21 = 0;
        v21 += 2;
        *(v21 - 1) = 0;
      }
      while ( v21 != v20 );
    }
    goto LABEL_31;
  }
LABEL_33:
  v22 = *(_QWORD *)(a1 + 232);
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  v23 = *(_QWORD *)(a1 + 240);
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  result = *(_QWORD *)(a1 + 248);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  *(_BYTE *)(a1 + 256) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  return result;
}


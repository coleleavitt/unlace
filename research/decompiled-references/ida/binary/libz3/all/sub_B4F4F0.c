__int64 __fastcall sub_B4F4F0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // eax
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  _QWORD *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  char *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rax
  char *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // rdx
  char *v20; // rdi
  int v21; // ecx
  __int64 v22; // rsi
  char *v23; // rax
  char *v24; // rdx
  unsigned int v25; // r13d
  size_t v26; // rbx
  _OWORD *v27; // rax
  _OWORD *v28; // rcx
  _OWORD *v29; // rdx
  unsigned int v31; // esi

  v4 = sub_B4F040(a1, *(unsigned int **)(a2 + 24), a3);
  v5 = *(_QWORD **)(a1 + 96);
  v6 = v4;
  if ( v5 )
  {
    v7 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( *v5 )
        {
          v9 = *(_QWORD *)(a1 + 88);
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v9, v8);
      ++v5;
    }
    while ( v5 < v7 );
LABEL_8:
    v5 = *(_QWORD **)(a1 + 96);
    if ( v5 )
LABEL_9:
      *((_DWORD *)v5 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 132) || *(_DWORD *)(a1 + 136) )
  {
    v11 = *(char **)(a1 + 120);
    v12 = 0;
    v13 = *(unsigned int *)(a1 + 128);
    v14 = v11;
    v15 = &v11[32 * v13];
    if ( v11 == v15 )
      goto LABEL_24;
    do
    {
      while ( *((_DWORD *)v14 + 1) )
      {
        *((_DWORD *)v14 + 1) = 0;
        v14 += 32;
        if ( v15 == v14 )
          goto LABEL_17;
      }
      v14 += 32;
      ++v12;
    }
    while ( v15 != v14 );
LABEL_17:
    if ( (unsigned int)v13 <= 0x10 || 3 * (int)v13 >= (unsigned int)(4 * v12) )
      goto LABEL_24;
    if ( v11 )
    {
      sub_186B220(v11);
      v16 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = 0;
      v16 >>= 1;
      v17 = v16;
      *(_DWORD *)(a1 + 128) = v16;
      v18 = sub_186B270(32LL * v16);
      if ( !v16 )
      {
LABEL_23:
        *(_QWORD *)(a1 + 120) = v18;
LABEL_24:
        *(_QWORD *)(a1 + 132) = 0;
        goto LABEL_25;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 120) = 0;
      v17 = (unsigned int)v13 >> 1;
      *(_DWORD *)(a1 + 128) = (unsigned int)v13 >> 1;
      v18 = sub_186B270(32 * v17);
    }
    v19 = (_QWORD *)v18;
    do
    {
      *v19 = 0;
      v19 += 4;
      *(v19 - 3) = 0;
      *((_BYTE *)v19 - 16) = 0;
    }
    while ( (_QWORD *)(v18 + 32 * v17) != v19 );
    goto LABEL_23;
  }
LABEL_25:
  if ( *(_DWORD *)(a1 + 156) || *(_DWORD *)(a1 + 160) )
  {
    v20 = *(char **)(a1 + 144);
    v21 = 0;
    v22 = *(unsigned int *)(a1 + 152);
    v23 = v20;
    v24 = &v20[16 * v22];
    if ( v20 == v24 )
      goto LABEL_40;
    do
    {
      while ( *(_QWORD *)v23 )
      {
        *(_QWORD *)v23 = 0;
        v23 += 16;
        if ( v24 == v23 )
          goto LABEL_32;
      }
      v23 += 16;
      ++v21;
    }
    while ( v24 != v23 );
LABEL_32:
    if ( (unsigned int)v22 <= 0x10 || 3 * (int)v22 >= (unsigned int)(4 * v21) )
      goto LABEL_40;
    if ( v20 )
    {
      sub_186B220(v20);
      v25 = *(_DWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 144) = 0;
      v25 >>= 1;
      *(_DWORD *)(a1 + 152) = v25;
      v26 = 16LL * v25;
      v27 = (_OWORD *)sub_186B270(v26);
      if ( !v25 )
      {
LABEL_39:
        *(_QWORD *)(a1 + 144) = v27;
LABEL_40:
        *(_QWORD *)(a1 + 156) = 0;
        return v6;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 144) = 0;
      v31 = (unsigned int)v22 >> 1;
      *(_DWORD *)(a1 + 152) = v31;
      v26 = 16LL * v31;
      v27 = (_OWORD *)sub_186B270(v26);
    }
    v28 = &v27[v26 / 0x10];
    v29 = v27;
    if ( (v26 & 0x10) == 0 || (v29 = v27 + 1, *v27 = 0, v27 + 1 != v28) )
    {
      do
      {
        *v29 = 0;
        v29 += 2;
        *(v29 - 1) = 0;
      }
      while ( v29 != v28 );
    }
    goto LABEL_39;
  }
  return v6;
}


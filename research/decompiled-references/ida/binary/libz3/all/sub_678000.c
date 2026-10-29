__int64 __fastcall sub_678000(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD **v7; // rbx
  _QWORD **v8; // r13
  _QWORD *v9; // r12
  void *v10; // rdi
  char *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rdx
  char *v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rdx
  unsigned int v23; // esi

  v2 = *(_QWORD **)(a1 + 56);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(a1 + 48);
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(_QWORD **)(a1 + 56);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = *(_QWORD ***)(a1 + 112);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 == v8 )
      goto LABEL_18;
    do
    {
      v9 = *v7;
      if ( *v7 )
      {
        v10 = (void *)v9[2];
        if ( v10 )
          sub_186B220(v10);
        sub_186B220(v9);
      }
      ++v7;
    }
    while ( v8 != v7 );
    v8 = *(_QWORD ***)(a1 + 112);
    if ( v8 )
LABEL_18:
      *((_DWORD *)v8 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 132) || *(_DWORD *)(a1 + 136) )
  {
    v11 = *(char **)(a1 + 120);
    v12 = 0;
    v13 = *(unsigned int *)(a1 + 128);
    v14 = &v11[24 * v13];
    v15 = v11;
    if ( v11 == v14 )
      goto LABEL_38;
    do
    {
      while ( *(_QWORD *)v15 )
      {
        *(_QWORD *)v15 = 0;
        v15 += 24;
        if ( v14 == v15 )
          goto LABEL_26;
      }
      v15 += 24;
      ++v12;
    }
    while ( v14 != v15 );
LABEL_26:
    if ( (unsigned int)v13 <= 0x10 || 3 * (int)v13 >= (unsigned int)(4 * v12) )
      goto LABEL_38;
    if ( v11 )
    {
      sub_186B220(v11);
      v16 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = 0;
      v17 = v16 >> 1;
      *(_DWORD *)(a1 + 128) = v17;
      v18 = sub_186B270(24LL * v17);
      if ( !v17 )
        goto LABEL_37;
      if ( v17 - 1 <= 2 )
      {
        v20 = v17;
        v21 = v18;
        goto LABEL_34;
      }
    }
    else
    {
      v23 = (unsigned int)v13 >> 1;
      *(_QWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 128) = v23;
      v17 = v23;
      v18 = sub_186B270(24LL * v23);
    }
    v19 = v18;
    do
    {
      *(_DWORD *)(v19 + 20) = 0;
      v19 += 96;
      *(_OWORD *)(v19 - 96) = 0;
      *(_OWORD *)(v19 - 72) = 0;
      *(_OWORD *)(v19 - 48) = 0;
      *(_OWORD *)(v19 - 24) = 0;
      *(_DWORD *)(v19 - 52) = 0;
      *(_DWORD *)(v19 - 28) = 0;
      *(_DWORD *)(v19 - 4) = 0;
    }
    while ( v19 != v18 + 96LL * (v17 >> 2) );
    v20 = v17 & 3;
    v21 = v18 + 24LL * (v17 & 0x7FFFFFFC);
    if ( (v17 & 3) != 0 )
    {
LABEL_34:
      *(_QWORD *)(v21 + 16) = 0;
      *(_OWORD *)v21 = 0;
      if ( v20 != 1 )
      {
        *(_QWORD *)(v21 + 40) = 0;
        *(_OWORD *)(v21 + 24) = 0;
        if ( v20 != 2 )
        {
          *(_QWORD *)(v21 + 64) = 0;
          *(_OWORD *)(v21 + 48) = 0;
        }
      }
    }
LABEL_37:
    *(_QWORD *)(a1 + 120) = v18;
LABEL_38:
    *(_QWORD *)(a1 + 132) = 0;
  }
  return sub_2FCDE0((__int64 *)(a1 + 32));
}


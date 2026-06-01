__int64 __fastcall sub_97C740(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  _QWORD *v7; // rbp
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r13
  void *v14; // r12
  __int64 v15; // rsi
  void *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rax
  char *v23; // rdi
  int v24; // ecx
  __int64 v25; // rsi
  char *v26; // rax
  char *v27; // rdx
  unsigned int v28; // ebp
  unsigned int v29; // ebp
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 result; // rax
  unsigned int v36; // esi

  v1 = *(_QWORD **)(a1 + 672);
  if ( v1 )
  {
    v3 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v1;
        if ( *v1 )
        {
          v5 = *(_QWORD *)(a1 + 664);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v1 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v1;
    }
    while ( v1 < v3 );
LABEL_8:
    v1 = *(_QWORD **)(a1 + 672);
    if ( v1 )
LABEL_9:
      *((_DWORD *)v1 - 1) = 0;
  }
  v7 = *(_QWORD **)(a1 + 688);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 680);
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = *(_QWORD **)(a1 + 688);
    if ( v7 )
LABEL_18:
      *((_DWORD *)v7 - 1) = 0;
  }
  v11 = *(_QWORD *)(a1 + 696);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = v11 + 32 * v12;
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11);
        v15 = v11 + 16;
        v11 += 32;
        sub_182CBA0(v14, v15);
      }
      while ( v11 != v13 );
      v11 = *(_QWORD *)(a1 + 696);
    }
    *(_DWORD *)(v11 - 4) = 0;
  }
  v16 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1 + 768);
  sub_182CBA0(v16, a1 + 784);
  v17 = *(_QWORD *)(a1 + 704);
  *(_BYTE *)(a1 + 788) &= ~1u;
  *(_DWORD *)(a1 + 784) = 1;
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 - 4);
    if ( !(_DWORD)v18 )
      goto LABEL_30;
    v19 = 16 * v18;
    v20 = 0;
    do
    {
      v21 = v20 + v17;
      v20 += 16;
      sub_182EF00(*(_QWORD *)(a1 + 712), v21);
      v17 = *(_QWORD *)(a1 + 704);
    }
    while ( v19 != v20 );
    if ( v17 )
LABEL_30:
      *(_DWORD *)(v17 - 4) = 0;
  }
  sub_182F200(*(_QWORD *)(a1 + 800), a1 + 808);
  sub_182F200(*(_QWORD *)(a1 + 824), a1 + 832);
  v22 = *(_QWORD *)(a1 + 760);
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  if ( *(_DWORD *)(a1 + 868) || *(_DWORD *)(a1 + 872) )
  {
    v23 = *(char **)(a1 + 856);
    v24 = 0;
    v25 = *(unsigned int *)(a1 + 864);
    v26 = v23;
    v27 = &v23[16 * v25];
    if ( v23 == v27 )
      goto LABEL_51;
    do
    {
      while ( *((_DWORD *)v26 + 1) )
      {
        *((_DWORD *)v26 + 1) = 0;
        v26 += 16;
        if ( v27 == v26 )
          goto LABEL_40;
      }
      v26 += 16;
      ++v24;
    }
    while ( v27 != v26 );
LABEL_40:
    if ( (unsigned int)v25 <= 0x10 || 3 * (int)v25 >= (unsigned int)(4 * v24) )
      goto LABEL_51;
    if ( v23 )
    {
      sub_186B220(v23);
      v28 = *(_DWORD *)(a1 + 864);
      *(_QWORD *)(a1 + 856) = 0;
      v29 = v28 >> 1;
      *(_DWORD *)(a1 + 864) = v29;
      v30 = sub_186B270(16LL * v29);
      if ( !v29 )
      {
LABEL_50:
        *(_QWORD *)(a1 + 856) = v30;
LABEL_51:
        *(_QWORD *)(a1 + 868) = 0;
        goto LABEL_52;
      }
      if ( v29 == 1 )
      {
        v32 = (_QWORD *)v30;
LABEL_49:
        *v32 = 0;
        goto LABEL_50;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 856) = 0;
      v36 = (unsigned int)v25 >> 1;
      *(_DWORD *)(a1 + 864) = v36;
      v29 = v36;
      v30 = sub_186B270(16LL * v36);
    }
    v31 = (_QWORD *)v30;
    do
    {
      *v31 = 0;
      v31 += 4;
      *(v31 - 2) = 0;
    }
    while ( (_QWORD *)(v30 + 32LL * (v29 >> 1)) != v31 );
    if ( (v29 & 1) == 0 )
      goto LABEL_50;
    v32 = (_QWORD *)(v30 + 16LL * (v29 & 0x7FFFFFFE));
    goto LABEL_49;
  }
LABEL_52:
  v33 = *(_QWORD *)(a1 + 880);
  if ( v33 )
    *(_DWORD *)(v33 - 4) = 0;
  *(_BYTE *)(a1 + 848) = 0;
  *(_WORD *)(a1 + 888) = 0;
  v34 = *(_QWORD *)(a1 + 928);
  if ( v34 )
    *(_DWORD *)(v34 - 4) = 0;
  result = *(_QWORD *)(a1 + 936);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}


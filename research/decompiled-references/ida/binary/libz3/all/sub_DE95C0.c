void __fastcall sub_DE95C0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 *v17; // rdi
  __int64 *v18; // rdx
  int v19; // ecx
  unsigned int v20; // ebp
  size_t v21; // rbx
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  _OWORD *v24; // rdx
  size_t v25; // rsi

  if ( *(_DWORD *)a1 )
  {
    v7 = *(__int64 **)(a1 + 16);
    v8 = v7;
    v9 = &v7[2 * *(unsigned int *)(a1 + 24)];
    if ( v7 == v9 )
    {
      if ( *(_DWORD *)(a1 + 28) )
        goto LABEL_9;
    }
    else
    {
      while ( (unsigned __int64)*v8 <= 1 )
      {
        v8 += 2;
        if ( v9 == v8 )
          goto LABEL_44;
      }
      if ( v9 == v8 )
      {
LABEL_44:
        if ( !*(_DWORD *)(a1 + 28) )
          goto LABEL_30;
        v17 = *(__int64 **)(a1 + 16);
        v16 = *(unsigned int *)(a1 + 24);
        v18 = &v7[2 * v16];
        goto LABEL_32;
      }
      v10 = *v8;
      v11 = v8[1];
      if ( *v8 )
        goto LABEL_24;
LABEL_14:
      if ( *(_DWORD *)a1 == 1 )
      {
LABEL_15:
        if ( v11 )
        {
          v12 = *a2;
          v6 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v12, v11);
        }
        goto LABEL_18;
      }
      while ( 1 )
      {
        sub_DE95C0(v11, a2);
        v15 = *(void **)(v11 + 16);
        if ( v15 )
          sub_186B220(v15);
        sub_17E9C40(a2[1], 40, v11);
LABEL_18:
        v13 = v8 + 2;
        if ( v9 == v8 + 2 )
          break;
        while ( 1 )
        {
          v10 = *v13;
          v8 = v13;
          if ( (unsigned __int64)*v13 > 1 )
            break;
          v13 += 2;
          if ( v9 == v13 )
            goto LABEL_29;
        }
        if ( v9 == v13 )
          break;
        v11 = v13[1];
LABEL_24:
        v14 = *a2;
        v6 = (*(_DWORD *)(v10 + 8))-- == 1;
        if ( !v6 )
          goto LABEL_14;
        sub_15D7BC0(v14, v10);
        if ( *(_DWORD *)a1 == 1 )
          goto LABEL_15;
      }
LABEL_29:
      if ( *(_DWORD *)(a1 + 28) )
        goto LABEL_31;
    }
LABEL_30:
    if ( !*(_DWORD *)(a1 + 32) )
      return;
LABEL_31:
    v7 = *(__int64 **)(a1 + 16);
    v16 = *(unsigned int *)(a1 + 24);
    v17 = v7;
    v18 = &v7[2 * v16];
    if ( v7 == v18 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 28) = 0;
      return;
    }
LABEL_32:
    v19 = 0;
    do
    {
      while ( *v7 )
      {
        *v7 = 0;
        v7 += 2;
        if ( v7 == v18 )
          goto LABEL_36;
      }
      v7 += 2;
      ++v19;
    }
    while ( v7 != v18 );
LABEL_36:
    if ( (unsigned int)v16 <= 0x10 || 3 * (int)v16 >= (unsigned int)(4 * v19) )
      goto LABEL_9;
    if ( v17 )
    {
      sub_186B220(v17);
      v20 = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = 0;
      v20 >>= 1;
      *(_DWORD *)(a1 + 24) = v20;
      v21 = v20;
      v22 = (_OWORD *)sub_186B270(v21 * 16);
      if ( !v20 )
      {
LABEL_43:
        *(_QWORD *)(a1 + 16) = v22;
        *(_QWORD *)(a1 + 28) = 0;
        return;
      }
    }
    else
    {
      v25 = (unsigned int)v16 >> 1;
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v25;
      v21 = v25;
      v22 = (_OWORD *)sub_186B270(16 * v25);
    }
    v23 = &v22[v21];
    v24 = v22;
    if ( ((v21 * 16) & 0x10) == 0 || (v24 = v22 + 1, *v22 = 0, v22 + 1 != v23) )
    {
      do
      {
        *v24 = 0;
        v24 += 2;
        *(v24 - 1) = 0;
      }
      while ( v24 != v23 );
    }
    goto LABEL_43;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = *a2;
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  *(_QWORD *)(a1 + 8) = 0;
}


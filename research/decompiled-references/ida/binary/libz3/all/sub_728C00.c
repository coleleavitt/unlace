void __fastcall sub_728C00(__int64 a1)
{
  __int64 v2; // rbp
  _OWORD *v3; // rdi
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rsi
  _OWORD *v11; // rdx
  _QWORD *v12; // rax
  int v13; // ecx
  unsigned int v14; // ebp
  size_t v15; // rbx
  _OWORD *v16; // rdx
  _OWORD *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  size_t v22; // rsi

  v2 = *(unsigned int *)(a1 + 848);
  *(_QWORD *)a1 = &off_1C53A50;
  v3 = *(_OWORD **)(a1 + 840);
  v4 = &v3[v2];
  v5 = v3;
  if ( v3 != (_OWORD *)v4 )
  {
    while ( *v5 <= 1u )
    {
      v5 += 2;
      if ( v4 == v5 )
        goto LABEL_15;
    }
    if ( v4 != v5 )
    {
      do
      {
        v6 = v5[1];
        if ( v6 )
        {
          v7 = *(_QWORD *)(a1 + 16);
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v7, v6);
        }
        v9 = v5 + 2;
        if ( v4 == v5 + 2 )
          break;
        while ( 1 )
        {
          v5 = v9;
          if ( *v9 > 1u )
            break;
          v9 += 2;
          if ( v4 == v9 )
            goto LABEL_14;
        }
      }
      while ( v4 != v9 );
LABEL_14:
      v3 = *(_OWORD **)(a1 + 840);
    }
  }
LABEL_15:
  if ( !*(_DWORD *)(a1 + 852) && !*(_DWORD *)(a1 + 856) )
  {
LABEL_40:
    if ( !v3 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v10 = *(unsigned int *)(a1 + 848);
  v11 = &v3[v10];
  if ( v11 == v3 )
    goto LABEL_39;
  v12 = v3;
  v13 = 0;
  do
  {
    while ( *v12 )
    {
      *v12 = 0;
      v12 += 2;
      if ( v11 == (_OWORD *)v12 )
        goto LABEL_22;
    }
    v12 += 2;
    ++v13;
  }
  while ( v11 != (_OWORD *)v12 );
LABEL_22:
  if ( (unsigned int)v10 <= 0x10 || 3 * (int)v10 >= (unsigned int)(4 * v13) )
  {
LABEL_39:
    *(_QWORD *)(a1 + 852) = 0;
    goto LABEL_40;
  }
  if ( !v3 )
  {
    *(_QWORD *)(a1 + 840) = 0;
    v22 = (unsigned int)v10 >> 1;
    *(_DWORD *)(a1 + 848) = v22;
    v15 = v22;
    v3 = (_OWORD *)sub_186B270(16 * v22);
    goto LABEL_26;
  }
  sub_186B220(v3);
  v14 = *(_DWORD *)(a1 + 848);
  *(_QWORD *)(a1 + 840) = 0;
  v14 >>= 1;
  *(_DWORD *)(a1 + 848) = v14;
  v15 = v14;
  v3 = (_OWORD *)sub_186B270(v15 * 16);
  if ( v14 )
  {
LABEL_26:
    v16 = &v3[v15];
    v17 = v3;
    if ( ((v15 * 16) & 0x10) == 0 || (v17 = v3 + 1, *v3 = 0, v16 != v3 + 1) )
    {
      do
      {
        *v17 = 0;
        v17 += 2;
        *(v17 - 1) = 0;
      }
      while ( v16 != v17 );
    }
  }
  *(_QWORD *)(a1 + 840) = v3;
  *(_QWORD *)(a1 + 852) = 0;
LABEL_30:
  sub_186B220(v3);
LABEL_31:
  v18 = *(_QWORD *)(a1 + 824);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 832);
    v8 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v19, v18);
  }
  sub_14476A0(a1 + 816);
  sub_8E4B60(a1 + 792);
  v20 = *(void **)(a1 + 168);
  if ( v20 != (void *)(a1 + 184) )
    operator delete(v20, *(_QWORD *)(a1 + 184) + 1LL);
  v21 = *(void **)(a1 + 136);
  if ( v21 != (void *)(a1 + 152) )
    operator delete(v21, *(_QWORD *)(a1 + 152) + 1LL);
  sub_18572D0((void *)(a1 + 24));
}


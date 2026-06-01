__int64 __fastcall sub_AFA7C0(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rsi
  void *v19; // rdi
  _QWORD *v20; // rdx
  int v21; // ecx
  unsigned int v22; // ebp
  size_t v23; // rbx
  _OWORD *v24; // rdx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  size_t v28; // rsi

  v2 = *(_QWORD **)(a1 + 96);
  v3 = v2;
  v4 = &v2[2 * *(unsigned int *)(a1 + 104)];
  if ( v2 == v4 )
  {
    if ( *(_DWORD *)(a1 + 108) )
      goto LABEL_47;
  }
  else
  {
    while ( *v3 <= 1u )
    {
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_52;
    }
    if ( v4 == v3 )
    {
LABEL_52:
      if ( !*(_DWORD *)(a1 + 108) )
        goto LABEL_33;
      v19 = *(void **)(a1 + 96);
      v18 = *(unsigned int *)(a1 + 104);
      v20 = &v2[2 * v18];
      goto LABEL_35;
    }
    do
    {
      v5 = (_QWORD *)v3[1];
      if ( v5 )
      {
        v6 = v5[68];
        if ( v6 )
          sub_186B220((void *)(v6 - 8));
        v7 = v5[65];
        if ( v7 )
          sub_186B220((void *)(v7 - 8));
        v8 = v5[64];
        if ( v8 )
          sub_186B220((void *)(v8 - 8));
        v9 = v5[63];
        if ( v9 )
          sub_186B220((void *)(v9 - 8));
        sub_180C0E0(v5 + 56);
        v10 = v5[55];
        if ( v10 )
          sub_186B220((void *)(v10 - 8));
        v11 = v5[54];
        if ( v11 )
          sub_186B220((void *)(v11 - 8));
        sub_AFACA0(v5 + 8);
        v12 = v5[7];
        if ( v12 )
          sub_186B220((void *)(v12 - 8));
        v13 = v5[5];
        if ( v13 )
          sub_186B220((void *)(v13 - 8));
        v14 = v5[1];
        if ( v14 )
        {
          v15 = v5[2];
          if ( (*(_DWORD *)(v14 + 8))-- == 1 )
            sub_15D7BC0(v15, v14);
        }
        sub_186B220(v5);
      }
      v17 = v3 + 2;
      if ( v4 == v3 + 2 )
        break;
      while ( 1 )
      {
        v3 = v17;
        if ( *v17 > 1u )
          break;
        v17 += 2;
        if ( v4 == v17 )
          goto LABEL_32;
      }
    }
    while ( v4 != v17 );
LABEL_32:
    if ( *(_DWORD *)(a1 + 108) )
      goto LABEL_34;
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 112) )
  {
LABEL_34:
    v2 = *(_QWORD **)(a1 + 96);
    v18 = *(unsigned int *)(a1 + 104);
    v19 = v2;
    v20 = &v2[2 * v18];
    if ( v2 == v20 )
    {
LABEL_47:
      *(_QWORD *)(a1 + 108) = 0;
      return sub_AFA580(a1, 0);
    }
LABEL_35:
    v21 = 0;
    do
    {
      while ( *v2 )
      {
        *v2 = 0;
        v2 += 2;
        if ( v2 == v20 )
          goto LABEL_39;
      }
      v2 += 2;
      ++v21;
    }
    while ( v2 != v20 );
LABEL_39:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v21) )
      goto LABEL_47;
    if ( v19 )
    {
      sub_186B220(v19);
      v22 = *(_DWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = 0;
      v22 >>= 1;
      *(_DWORD *)(a1 + 104) = v22;
      v23 = v22;
      v24 = (_OWORD *)sub_186B270(v23 * 16);
      if ( !v22 )
      {
LABEL_46:
        *(_QWORD *)(a1 + 96) = v24;
        goto LABEL_47;
      }
    }
    else
    {
      v28 = (unsigned int)v18 >> 1;
      *(_QWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 104) = v28;
      v23 = v28;
      v24 = (_OWORD *)sub_186B270(16 * v28);
    }
    v25 = &v24[v23];
    v26 = v24;
    if ( ((v23 * 16) & 0x10) == 0 || (v26 = v24 + 1, *v24 = 0, v25 != v24 + 1) )
    {
      do
      {
        *v26 = 0;
        v26 += 2;
        *(v26 - 1) = 0;
      }
      while ( v25 != v26 );
    }
    goto LABEL_46;
  }
  return sub_AFA580(a1, 0);
}


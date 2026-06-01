void __fastcall sub_DFD590(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // r13
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // r15
  __int64 v16; // rsi
  char *v17; // r15
  char *v18; // r12
  signed __int64 v19; // rbx
  unsigned __int64 v20; // rax
  char *v21; // r14
  char *v22; // rbx
  unsigned __int64 v23; // rcx
  char *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r13
  signed __int64 v27; // rax
  __int64 v28; // rsi
  char **v29; // r13
  char *i; // rbx
  char **v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+10h] [rbp-48h]
  unsigned __int64 v37; // [rsp+18h] [rbp-40h]

  v2 = a2;
  v3 = 8LL * a2;
  sub_DFBCB0(a1);
  v33 = *(_QWORD *)(a1 + 296);
  v6 = *(_QWORD *)(a1 + 760);
  v7 = (__int64 *)(v6 + v3);
  if ( v6 )
  {
    v8 = 8LL * *(unsigned int *)(v6 - 4);
    v9 = (__int64 *)(v6 + v8);
    if ( v3 == v8 )
    {
LABEL_9:
      *(_DWORD *)(v6 - 4) = a2;
      goto LABEL_10;
    }
    do
    {
LABEL_5:
      while ( 1 )
      {
        v10 = *v7;
        if ( *v7 )
        {
          v11 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 == v9 )
          goto LABEL_8;
      }
      ++v7;
      sub_15D7BC0(v33, v10);
    }
    while ( v7 != v9 );
LABEL_8:
    v6 = *(_QWORD *)(a1 + 760);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v9 = nullptr;
    if ( v3 )
      goto LABEL_5;
  }
LABEL_10:
  if ( !*(_BYTE *)(a1 + 192) )
    goto LABEL_11;
  sub_DFBCB0(a1);
  v34 = *(_QWORD *)(a1 + 296);
  v12 = *(_QWORD *)(a1 + 792);
  v13 = (__int64 *)(v12 + v3);
  if ( v12 )
  {
    v14 = 8LL * *(unsigned int *)(v12 - 4);
    v15 = (__int64 *)(v12 + v14);
    if ( v3 == v14 )
      goto LABEL_21;
    do
    {
LABEL_17:
      while ( 1 )
      {
        v16 = *v13;
        if ( *v13 )
        {
          v11 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v13 == v15 )
          goto LABEL_20;
      }
      ++v13;
      sub_15D7BC0(v34, v16);
    }
    while ( v13 != v15 );
LABEL_20:
    v12 = *(_QWORD *)(a1 + 792);
    if ( v12 )
    {
LABEL_21:
      v11 = *(_BYTE *)(a1 + 256) == 0;
      *(_DWORD *)(v12 - 4) = a2;
      if ( v11 )
        return;
      goto LABEL_22;
    }
  }
  else
  {
    v15 = nullptr;
    if ( v3 )
      goto LABEL_17;
  }
LABEL_11:
  if ( !*(_BYTE *)(a1 + 256) )
    return;
LABEL_22:
  v17 = *(char **)(a1 + 776);
  v18 = *(char **)(a1 + 768);
  v19 = v17 - v18;
  v20 = (v17 - v18) >> 5;
  if ( v20 < v2 )
  {
    v23 = v2 - v20;
    if ( (__int64)(*(_QWORD *)(a1 + 784) - (_QWORD)v17) >> 5 < v2 - v20 )
    {
      if ( 0x3FFFFFFFFFFFFFFLL - v20 < v23 )
        std::__throw_length_error("vector::_M_default_append");
      v26 = v2 - v20;
      v37 = v2 - v20;
      if ( v20 >= v23 )
        v26 = (__int64)(*(_QWORD *)(a1 + 776) - (_QWORD)v18) >> 5;
      v36 = 32 * (v20 + v26);
      v35 = operator new(v36);
      v27 = v19 + v35;
      do
      {
        v28 = v27 + 16;
        *(_QWORD *)(v27 + 8) = 0;
        v27 += 32LL;
        *(_QWORD *)(v27 - 32) = v28;
        *(_BYTE *)(v27 - 16) = 0;
      }
      while ( v19 + v35 + 32 * v37 != v27 );
      v29 = (char **)v35;
      for ( i = v18; v17 != i; i += 32 )
      {
        v31 = v29;
        v29 += 4;
        sub_2333C0(v31, i);
        v32 = (__int64)i;
        sub_233E40(v32);
      }
      if ( v18 )
        operator delete(v18, *(_QWORD *)(a1 + 784) - (_QWORD)v18);
      *(_QWORD *)(a1 + 768) = v35;
      *(_QWORD *)(a1 + 776) = v35 + 32 * v2;
      *(_QWORD *)(a1 + 784) = v35 + v36;
    }
    else
    {
      v24 = *(char **)(a1 + 776);
      do
      {
        v25 = v24 + 16;
        *((_QWORD *)v24 + 1) = 0;
        v24 += 32;
        *((_QWORD *)v24 - 4) = v25;
        *(v24 - 16) = 0;
      }
      while ( &v17[32 * v23] != v24 );
      *(_QWORD *)(a1 + 776) = &v17[32 * v23];
    }
  }
  else if ( v2 < v20 )
  {
    v21 = &v18[32 * v2];
    if ( v17 != v21 )
    {
      v22 = v21;
      do
      {
        if ( *(char **)v22 != v22 + 16 )
          operator delete(*(void **)v22, *((_QWORD *)v22 + 2) + 1LL);
        v22 += 32;
      }
      while ( v17 != v22 );
      *(_QWORD *)(a1 + 776) = v21;
    }
  }
}


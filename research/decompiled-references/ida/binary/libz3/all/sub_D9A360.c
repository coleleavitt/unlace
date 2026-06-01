void __fastcall sub_D9A360(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // r13
  void *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // r13
  void *v10; // rdi
  _QWORD *v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = &v2[2 * *(unsigned int *)(a1 + 16)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_15;
    }
    while ( v3 != v2 )
    {
      v4 = v2[1];
      if ( v4 )
      {
        v5 = *(void **)(v4 + 24);
        if ( v5 )
          sub_186B220(v5);
        if ( *(_QWORD *)v4 )
          sub_186B220(*(void **)v4);
        sub_186B220((void *)v4);
      }
      v6 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v6;
        if ( *v6 > 1u )
          break;
        v6 += 2;
        if ( v3 == v6 )
          goto LABEL_15;
      }
    }
  }
LABEL_15:
  v7 = *(_QWORD **)(a1 + 32);
  v8 = &v7[2 * *(unsigned int *)(a1 + 40)];
  if ( v7 != v8 )
  {
    while ( *v7 <= 1u )
    {
      v7 += 2;
      if ( v8 == v7 )
        goto LABEL_29;
    }
    while ( v8 != v7 )
    {
      v9 = v7[1];
      if ( v9 )
      {
        v10 = *(void **)(v9 + 24);
        if ( v10 )
          sub_186B220(v10);
        if ( *(_QWORD *)v9 )
          sub_186B220(*(void **)v9);
        sub_186B220((void *)v9);
      }
      v11 = v7 + 2;
      if ( v8 == v7 + 2 )
        break;
      while ( 1 )
      {
        v7 = v11;
        if ( *v11 > 1u )
          break;
        v11 += 2;
        if ( v8 == v11 )
          goto LABEL_29;
      }
    }
  }
LABEL_29:
  v12 = *(void **)(a1 + 112);
  if ( v12 )
    sub_186B220(v12);
  v13 = *(void **)(a1 + 32);
  if ( v13 )
    sub_186B220(v13);
  v14 = *(void **)(a1 + 8);
  if ( v14 )
    sub_186B220(v14);
}


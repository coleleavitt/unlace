void __fastcall sub_FA6D20(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbp
  _QWORD *v4; // r12
  char *v5; // r14
  char *v6; // rbx
  char *v7; // rdi
  _QWORD *v8; // rdi
  void **v9; // rbx
  void **v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  _QWORD *v19; // rbp
  void *v20; // rdi
  __int64 v21; // rdi
  _DWORD *v22; // rbx

  v2 = a1[7];
  a1[7] = 0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  a1[6] = 0;
  v3 = a1 + 1773;
  v4 = a1 - 83;
LABEL_4:
  while ( 2 )
  {
    v5 = (char *)v3[66];
    v6 = &v5[64 * (unsigned __int64)*((unsigned int *)v3 + 134)];
    if ( v5 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 64;
          v7 = *((char **)v6 + 3);
          if ( v7 == v6 + 40 )
            break;
          operator delete(v7);
          if ( v5 == v6 )
            goto LABEL_7;
        }
      }
      while ( v5 != v6 );
LABEL_7:
      v5 = (char *)v3[66];
    }
    if ( v5 != (char *)(v3 + 68) )
      free(v5);
    v8 = (_QWORD *)v3[52];
    if ( v8 != v3 + 54 )
      free(v8);
    v9 = (void **)(v3 + 48);
    v10 = (void **)(v3 + 8);
    do
    {
      while ( *v9 != v9 + 2 )
      {
        operator delete(*v9);
        v9 -= 4;
        if ( v10 == v9 )
        {
          v3 -= 116;
          if ( v4 != v3 )
            goto LABEL_4;
          goto LABEL_16;
        }
      }
      v9 -= 4;
    }
    while ( v9 != v10 );
    v3 -= 116;
    if ( v4 != v3 )
      continue;
    break;
  }
LABEL_16:
  v11 = a1[32];
  if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v12 = (v11 >> 1) & 1;
    if ( (v11 & 4) != 0 )
    {
      v13 = a1 + 29;
      if ( !v12 )
        v13 = (_QWORD *)a1[29];
      (*(void (__fastcall **)(_QWORD *))((a1[32] & 0xFFFFFFFFFFFFFFF8LL) + 16))(v13);
    }
    if ( !v12 )
      operator delete();
  }
  v14 = (void *)a1[21];
  if ( v14 )
    operator delete(v14);
  v15 = a1[14];
  if ( v15 )
  {
    while ( 1 )
    {
      sub_FA6710((__int64)(a1 + 12), *(_QWORD **)(v15 + 24));
      v16 = *(void **)(v15 + 56);
      v17 = *(_QWORD *)(v15 + 16);
      if ( v16 == (void *)(v15 + 72) )
      {
        operator delete((void *)v15);
        if ( !v17 )
          break;
      }
      else
      {
        free(v16);
        operator delete((void *)v15);
        if ( !v17 )
          break;
      }
      v15 = v17;
    }
  }
  v18 = (_QWORD *)a1[9];
  if ( a1 + 9 != v18 )
  {
    do
    {
      v19 = (_QWORD *)*v18;
      operator delete();
      v20 = v18;
      v18 = v19;
      operator delete(v20);
    }
    while ( a1 + 9 != v19 );
  }
  v21 = a1[7];
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = (_DWORD *)a1[4];
  if ( v22 )
  {
    if ( (*v22)-- == 1 )
    {
      sub_FB1840(v22);
      operator delete(v22, 0x18u);
    }
  }
}


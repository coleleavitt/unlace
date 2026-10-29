void __fastcall sub_9A1740(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // r15
  _QWORD *v7; // r14
  _QWORD *v8; // r13
  _QWORD *v9; // rbx
  void *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  void *v13; // rdi
  _QWORD *v14; // r15
  __int64 v15; // rbp
  _QWORD *v16; // r14
  _QWORD *i; // r13
  __int64 v18; // rbx
  __int64 v19; // rdx
  void (__fastcall *v20)(_QWORD, __int64); // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  int v24; // edx
  __int64 v25; // rbp
  unsigned int v26; // eax
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rdx
  _QWORD *v33; // rdx
  _QWORD *v34; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
  {
LABEL_2:
    if ( !*(_DWORD *)(a1 + 12) )
      return;
    v2 = 0;
LABEL_4:
    v3 = *(_QWORD **)a1;
    goto LABEL_5;
  }
  v3 = *(_QWORD **)a1;
  v14 = *(_QWORD **)a1;
  v15 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16);
  if ( *(_QWORD *)a1 != v15 )
  {
    while ( *v14 == -4096 || *v14 == -8192 )
    {
      v14 += 10;
      if ( (_QWORD *)v15 == v14 )
        goto LABEL_5;
    }
    if ( (_QWORD *)v15 != v14 )
    {
      do
      {
        v16 = (_QWORD *)v14[1];
        for ( i = &v16[*((unsigned int *)v14 + 4)]; i != v16; ++v16 )
        {
          v18 = *v16;
          v19 = *(_QWORD *)(*v16 + 32LL);
          v20 = *(void (__fastcall **)(_QWORD, __int64))(v19 + 64);
          if ( v20 )
            v20(*v16, v18 + *(unsigned int *)(v19 + 16) + 40);
          v21 = *(_QWORD *)(v18 + 8);
          for ( *(_BYTE *)(v18 + 27) = 0; v21; *(_QWORD *)(v18 + 8) = v21 )
          {
            v22 = v21;
            v21 = *(_QWORD *)(v21 + 16);
            *(_QWORD *)(v22 + 24) = 0;
          }
        }
        v23 = v14 + 10;
        if ( v14 + 10 == (_QWORD *)v15 )
          break;
        while ( 1 )
        {
          v14 = v23;
          if ( *v23 != -4096 && *v23 != -8192 )
            break;
          v23 += 10;
          if ( (_QWORD *)v15 == v23 )
            goto LABEL_52;
        }
      }
      while ( (_QWORD *)v15 != v23 );
LABEL_52:
      v2 = *(_DWORD *)(a1 + 8);
      if ( v2 )
        goto LABEL_4;
      goto LABEL_2;
    }
  }
LABEL_5:
  v4 = v3;
  v5 = 4 * v2;
  v6 = 10LL * *(unsigned int *)(a1 + 16);
  v7 = &v3[v6];
  if ( (unsigned int)(4 * v2) < 0x40 )
    v5 = 64;
  if ( v5 >= *(_DWORD *)(a1 + 16) )
  {
    if ( v6 * 8 )
    {
      do
      {
        if ( *v4 != -4096 )
        {
          if ( *v4 != -8192 )
          {
            v8 = (_QWORD *)v4[1];
            v9 = &v8[*((unsigned int *)v4 + 4)];
            if ( v8 != v9 )
            {
              do
              {
                while ( 1 )
                {
                  v10 = (void *)*--v9;
                  if ( !v10 )
                    break;
                  operator delete[](v10);
                  *v9 = 0;
                  if ( v8 == v9 )
                    goto LABEL_14;
                }
              }
              while ( v8 != v9 );
LABEL_14:
              v9 = (_QWORD *)v4[1];
            }
            if ( v9 != v4 + 3 )
              free(v9);
          }
          *v4 = -4096;
        }
        v4 += 10;
      }
      while ( v4 != v7 );
    }
LABEL_19:
    *(_QWORD *)(a1 + 8) = 0;
    return;
  }
  do
  {
    while ( *v4 == -8192 )
    {
LABEL_27:
      v4 += 10;
      if ( v4 == v7 )
        goto LABEL_56;
    }
    if ( *v4 != -4096 )
    {
      v11 = (_QWORD *)v4[1];
      v12 = &v11[*((unsigned int *)v4 + 4)];
      if ( v11 != v12 )
      {
        do
        {
          while ( 1 )
          {
            v13 = (void *)*--v12;
            if ( !v13 )
              break;
            v34 = v11;
            operator delete[](v13);
            v11 = v34;
            *v12 = 0;
            if ( v34 == v12 )
              goto LABEL_24;
          }
        }
        while ( v11 != v12 );
LABEL_24:
        v12 = (_QWORD *)v4[1];
      }
      if ( v12 != v4 + 3 )
        free(v12);
      goto LABEL_27;
    }
    v4 += 10;
  }
  while ( v4 != v7 );
LABEL_56:
  v24 = *(_DWORD *)(a1 + 16);
  if ( !v2 )
  {
    if ( v24 )
    {
      operator delete();
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      return;
    }
    goto LABEL_19;
  }
  v25 = 64;
  if ( v2 != 1 )
  {
    _BitScanReverse(&v26, v2 - 1);
    v25 = (unsigned int)(1 << (v26 + 2));
    if ( (int)v25 < 64 )
      v25 = 64;
  }
  v27 = *(_QWORD **)a1;
  if ( (_DWORD)v25 == v24 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v33 = &v27[10 * v25];
    if ( ((80 * (_BYTE)v25) & 0x10) == 0 || (*v27 = -4096, v27 += 10, v33 != v27) )
    {
      do
      {
        *v27 = -4096;
        v27 += 20;
        *(v27 - 10) = -4096;
      }
      while ( v33 != v27 );
    }
  }
  else
  {
    operator delete();
    v28 = ((((((((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
             | (4 * (int)v25 / 3u + 1)
             | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 4)
           | (((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
           | (4 * (int)v25 / 3u + 1)
           | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 8)
         | (((((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
           | (4 * (int)v25 / 3u + 1)
           | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 4)
         | (((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
         | (4 * (int)v25 / 3u + 1)
         | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 16;
    v29 = (v28
         | (((((((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
             | (4 * (int)v25 / 3u + 1)
             | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 4)
           | (((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
           | (4 * (int)v25 / 3u + 1)
           | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 8)
         | (((((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
           | (4 * (int)v25 / 3u + 1)
           | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 4)
         | (((4 * (int)v25 / 3u + 1) | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1)) >> 2)
         | (4 * (int)v25 / 3u + 1)
         | ((unsigned __int64)(4 * (int)v25 / 3u + 1) >> 1))
        + 1;
    *(_DWORD *)(a1 + 16) = v29;
    v30 = (_QWORD *)sub_25CC9C0(80 * v29, 8);
    v31 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v30;
    v32 = &v30[10 * v31];
    if ( v30 != v32 )
    {
      if ( (((_BYTE)v32 - (_BYTE)v30) & 0x10) == 0 || (*v30 = -4096, v30 += 10, v32 != v30) )
      {
        do
        {
          *v30 = -4096;
          v30 += 20;
          *(v30 - 10) = -4096;
        }
        while ( v32 != v30 );
      }
    }
  }
}


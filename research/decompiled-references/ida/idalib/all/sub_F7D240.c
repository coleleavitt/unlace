__int64 __fastcall sub_F7D240(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // r13
  int v4; // eax
  __int64 v5; // rsi
  _QWORD *v6; // rbp
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rbp
  _QWORD *v15; // r15
  void *v16; // r12
  __int64 v17; // rsi
  _QWORD *v18; // r12
  unsigned int *v19; // r14
  unsigned int *v20; // r15
  unsigned int *v21; // r13
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rbp
  _QWORD *v28; // r12
  _QWORD *v29; // rdi
  _QWORD *v31; // [rsp+8h] [rbp-40h]
  _QWORD *v32; // [rsp+8h] [rbp-40h]

  v2 = *(unsigned int *)(a1 + 136);
  v3 = *(_QWORD **)(a1 + 120);
  *(_QWORD *)a1 = &off_2B4C370;
  v4 = v2;
  v5 = 2 * v2;
  if ( v4 )
  {
    v31 = &v3[v5];
    do
    {
      if ( *v3 != -8192 && *v3 != -4096 )
      {
        v6 = (_QWORD *)v3[1];
        if ( v6 )
        {
          v7 = (_QWORD *)v6[3];
          v8 = &v7[*((unsigned int *)v6 + 8)];
          if ( v7 != v8 )
          {
            do
            {
              v9 = (_QWORD *)*--v8;
              if ( *v8 )
              {
                v10 = (_QWORD *)v9[10];
                if ( v10 != v9 + 12 )
                  free(v10);
                v11 = (_QWORD *)v9[7];
                if ( v11 != v9 + 9 )
                  free(v11);
                v12 = (_QWORD *)v9[3];
                if ( v12 != v9 + 5 )
                  free(v12);
                operator delete(v9, 0x70u);
              }
            }
            while ( v7 != v8 );
            v8 = (_QWORD *)v6[3];
          }
          if ( v8 != v6 + 5 )
            free(v8);
          operator delete(*v6, 16LL * *((unsigned int *)v6 + 4), 8);
          operator delete(v6, 0x38u);
        }
      }
      v3 += 2;
    }
    while ( v31 != v3 );
    v3 = *(_QWORD **)(a1 + 120);
    v5 = 2LL * *(unsigned int *)(a1 + 136);
  }
  operator delete(v3, v5 * 8, 8);
  v13 = *(unsigned int *)(a1 + 112);
  if ( (_DWORD)v13 )
  {
    v14 = *(_QWORD **)(a1 + 96);
    v15 = &v14[3 * v13];
    while ( 1 )
    {
      while ( *v14 == -4096 )
      {
        if ( v14[1] != 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_25;
        v14 += 3;
        if ( v15 == v14 )
        {
LABEL_31:
          v13 = *(unsigned int *)(a1 + 112);
          goto LABEL_32;
        }
      }
      if ( *v14 != -8192 || v14[1] != 0x7FFFFFFFFFFFFFFELL )
      {
LABEL_25:
        v16 = (void *)v14[2];
        if ( v16 )
        {
          sub_F7D1D0(v14[2]);
          operator delete(v16, 0x68u);
        }
      }
      v14 += 3;
      if ( v15 == v14 )
        goto LABEL_31;
    }
  }
LABEL_32:
  operator delete(*(_QWORD *)(a1 + 96), 24 * v13, 8);
  v17 = *(unsigned int *)(a1 + 88);
  if ( (_DWORD)v17 )
  {
    v18 = *(_QWORD **)(a1 + 72);
    v32 = &v18[2 * v17];
    do
    {
      if ( *v18 != -8192 && *v18 != -4096 )
      {
        v19 = (unsigned int *)v18[1];
        if ( v19 )
        {
          v20 = *(unsigned int **)v19;
          v21 = (unsigned int *)(*(_QWORD *)v19 + 8LL * v19[2]);
          if ( *(unsigned int **)v19 != v21 )
          {
            do
            {
              v21 -= 2;
              v22 = *(_QWORD **)v21;
              if ( *(_QWORD *)v21 )
              {
                v23 = (_QWORD *)v22[10];
                if ( v23 != v22 + 12 )
                  free(v23);
                v24 = (_QWORD *)v22[7];
                if ( v24 != v22 + 9 )
                  free(v24);
                v25 = (_QWORD *)v22[3];
                if ( v25 != v22 + 5 )
                  free(v25);
                operator delete(v22, 0x70u);
              }
            }
            while ( v20 != v21 );
            v21 = *(unsigned int **)v19;
          }
          if ( v21 != v19 + 4 )
            free(v21);
          operator delete(v19, 0x20u);
        }
      }
      v18 += 2;
    }
    while ( v32 != v18 );
    v17 = *(unsigned int *)(a1 + 88);
  }
  operator delete(*(_QWORD *)(a1 + 72), 16 * v17, 8);
  operator delete(*(_QWORD *)(a1 + 48), 48LL * *(unsigned int *)(a1 + 64), 8);
  *(_QWORD *)a1 = &unk_2C05168;
  v26 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v26 )
  {
    v27 = *(_QWORD **)(a1 + 8);
    v28 = &v27[10 * v26];
    do
    {
      if ( *v27 != -4096 && *v27 != -8192 )
      {
        v29 = (_QWORD *)v27[1];
        if ( v29 != v27 + 3 )
          free(v29);
      }
      v27 += 10;
    }
    while ( v28 != v27 );
    v26 = *(unsigned int *)(a1 + 24);
  }
  return operator delete(*(_QWORD *)(a1 + 8), 80 * v26, 8);
}

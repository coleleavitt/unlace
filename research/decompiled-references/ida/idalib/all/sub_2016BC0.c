void __fastcall sub_2016BC0(_QWORD *a1)
{
  __int64 *v2; // r13
  __int64 v3; // r14
  __int64 v4; // rbx
  void **v5; // r15
  void **v6; // rbp
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  _QWORD *v10; // rbp
  _QWORD *v11; // r13
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  __int64 *v15; // r13
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rbp
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rbp
  _QWORD *v25; // r13
  _QWORD *v26; // rbx
  void *v27; // rdi
  _QWORD *v28; // r13
  _QWORD *v29; // rbx
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi

  v2 = (__int64 *)a1[13];
  *a1 = &off_2BE4F08;
  if ( v2 )
  {
    v3 = v2[1];
    v4 = *v2;
    if ( v3 != *v2 )
    {
      do
      {
        while ( 1 )
        {
          v5 = *(void ***)(v4 + 96);
          v6 = *(void ***)(v4 + 88);
          if ( v5 != v6 )
          {
            do
            {
              while ( *v6 )
              {
                operator delete(*v6);
                v6 += 3;
                if ( v5 == v6 )
                  goto LABEL_6;
              }
              v6 += 3;
            }
            while ( v5 != v6 );
LABEL_6:
            v6 = *(void ***)(v4 + 88);
          }
          if ( v6 )
            operator delete(v6);
          v7 = *(_QWORD **)(v4 + 72);
          v8 = *(_QWORD **)(v4 + 64);
          if ( v7 != v8 )
          {
            do
            {
              while ( 1 )
              {
                v9 = (_QWORD *)v8[1];
                if ( v9 == v8 + 3 )
                  break;
                free(v9);
                v8 += 9;
                if ( v7 == v8 )
                  goto LABEL_12;
              }
              v8 += 9;
            }
            while ( v7 != v8 );
LABEL_12:
            v8 = *(_QWORD **)(v4 + 64);
          }
          if ( v8 )
            operator delete(v8);
          if ( *(_QWORD *)v4 == v4 + 24 )
            break;
          free(*(void **)v4);
          v4 += 112;
          if ( v3 == v4 )
          {
            v4 = *v2;
            goto LABEL_18;
          }
        }
        v4 += 112;
      }
      while ( v3 != v4 );
      v4 = *v2;
    }
LABEL_18:
    if ( v4 )
      operator delete((void *)v4);
    operator delete(v2, 0x18u);
  }
  v10 = (_QWORD *)a1[12];
  if ( v10 )
  {
    v11 = (_QWORD *)v10[1];
    v12 = (_QWORD *)*v10;
    if ( v11 != (_QWORD *)*v10 )
    {
      do
      {
        while ( 1 )
        {
          v13 = (_QWORD *)v12[9];
          if ( v13 != v12 + 11 )
            free(v13);
          v14 = (_QWORD *)v12[1];
          if ( v14 == v12 + 3 )
            break;
          free(v14);
          v12 += 17;
          if ( v11 == v12 )
          {
            v12 = (_QWORD *)*v10;
            goto LABEL_28;
          }
        }
        v12 += 17;
      }
      while ( v11 != v12 );
      v12 = (_QWORD *)*v10;
    }
LABEL_28:
    if ( v12 )
      operator delete(v12);
    operator delete(v10, 0x18u);
  }
  v15 = (__int64 *)a1[11];
  if ( v15 )
  {
    v16 = v15[1];
    v17 = *v15;
    if ( v16 != *v15 )
    {
      do
      {
        v18 = *(_QWORD *)(v17 + 48);
        v19 = *(_QWORD *)(v17 + 40);
        if ( v18 != v19 )
        {
          do
          {
            if ( *(_DWORD *)(v19 + 40) > 0x40u )
            {
              v20 = *(void **)(v19 + 32);
              if ( v20 )
                operator delete[](v20);
            }
            if ( *(_DWORD *)(v19 + 24) > 0x40u )
            {
              v21 = *(void **)(v19 + 16);
              if ( v21 )
                operator delete[](v21);
            }
            v19 += 48;
          }
          while ( v18 != v19 );
          v19 = *(_QWORD *)(v17 + 40);
        }
        if ( v19 )
          operator delete((void *)v19);
        if ( *(_DWORD *)(v17 + 32) > 0x40u )
        {
          v22 = *(void **)(v17 + 24);
          if ( v22 )
            operator delete[](v22);
        }
        if ( *(_DWORD *)(v17 + 16) > 0x40u )
        {
          v23 = *(void **)(v17 + 8);
          if ( v23 )
            operator delete[](v23);
        }
        v17 += 64;
      }
      while ( v16 != v17 );
      v17 = *v15;
    }
    if ( v17 )
      operator delete((void *)v17);
    operator delete(v15, 0x18u);
  }
  v24 = a1[10];
  if ( v24 )
  {
    v25 = *(_QWORD **)(v24 + 104);
    v26 = *(_QWORD **)(v24 + 96);
    if ( v25 != v26 )
    {
      do
      {
        while ( 1 )
        {
          v27 = (void *)v26[2];
          if ( !v27 )
            break;
          operator delete(v27);
          v26 += 5;
          if ( v26 == v25 )
          {
            v26 = *(_QWORD **)(v24 + 96);
            goto LABEL_60;
          }
        }
        v26 += 5;
      }
      while ( v25 != v26 );
      v26 = *(_QWORD **)(v24 + 96);
    }
LABEL_60:
    if ( v26 )
      operator delete(v26);
    v28 = *(_QWORD **)(v24 + 80);
    v29 = *(_QWORD **)(v24 + 72);
    if ( v28 != v29 )
    {
      do
      {
        while ( 1 )
        {
          v30 = (void *)v29[2];
          if ( !v30 )
            break;
          operator delete(v30);
          v29 += 5;
          if ( v29 == v28 )
          {
            v29 = *(_QWORD **)(v24 + 72);
            goto LABEL_66;
          }
        }
        v29 += 5;
      }
      while ( v28 != v29 );
      v29 = *(_QWORD **)(v24 + 72);
    }
LABEL_66:
    if ( v29 )
      operator delete(v29);
    v31 = *(void **)(v24 + 48);
    if ( v31 )
      operator delete(v31);
    v32 = *(void **)(v24 + 24);
    if ( v32 )
      operator delete(v32);
    if ( *(_QWORD *)v24 )
      operator delete(*(void **)v24);
    operator delete((void *)v24, 0x78u);
  }
  v33 = (_QWORD *)a1[8];
  if ( a1 + 10 != v33 )
    free(v33);
  v34 = (_QWORD *)a1[5];
  *a1 = &off_2BE4EE8;
  if ( v34 != a1 + 7 )
    free(v34);
  operator delete(a1, 0x70u);
}

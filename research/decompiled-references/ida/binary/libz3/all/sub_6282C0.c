void __fastcall sub_6282C0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  void *v5; // rdi
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 *v8; // r12
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 *v14; // r13
  __int64 v15; // rax
  __int64 *v16; // r12
  __int64 *v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rbx
  __int64 *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi

  v2 = (_QWORD *)a1[11];
  *a1 = &off_1C68A28;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[v3];
      do
      {
        while ( *v2 )
        {
          v5 = (void *)(*v2++ - 8LL);
          sub_186B220(v5);
          if ( v4 == v2 )
          {
            v2 = (_QWORD *)a1[11];
            goto LABEL_7;
          }
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = (_QWORD *)a1[11];
    }
LABEL_7:
    sub_186B220(v2 - 1);
  }
  v6 = (__int64 *)a1[10];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[2 * v7];
      do
      {
        v9 = (__int64 *)v6[1];
        if ( v9 )
        {
          v10 = &v9[*((unsigned int *)v9 - 1)];
          if ( v9 >= v10 )
            goto LABEL_19;
          do
          {
            while ( 1 )
            {
              v11 = *v9;
              if ( *v9 )
              {
                v12 = *v6;
                v13 = (*(_DWORD *)(v11 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( ++v9 >= v10 )
                goto LABEL_18;
            }
            sub_15D7BC0(v12, v11);
            ++v9;
          }
          while ( v9 < v10 );
LABEL_18:
          v9 = (__int64 *)v6[1];
          if ( v9 )
LABEL_19:
            sub_186B220(v9 - 1);
        }
        v6 += 2;
      }
      while ( v6 != v8 );
      v6 = (__int64 *)a1[10];
    }
    sub_186B220(v6 - 1);
  }
  v14 = (__int64 *)a1[9];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v14[2 * v15];
      do
      {
        v17 = (__int64 *)v14[1];
        if ( v17 )
        {
          v18 = &v17[*((unsigned int *)v17 - 1)];
          if ( v17 >= v18 )
            goto LABEL_34;
          do
          {
            while ( 1 )
            {
              v19 = *v17;
              if ( *v17 )
              {
                v20 = *v14;
                v13 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( ++v17 >= v18 )
                goto LABEL_33;
            }
            sub_15D7BC0(v20, v19);
            ++v17;
          }
          while ( v17 < v18 );
LABEL_33:
          v17 = (__int64 *)v14[1];
          if ( v17 )
LABEL_34:
            sub_186B220(v17 - 1);
        }
        v14 += 2;
      }
      while ( v14 != v16 );
      v14 = (__int64 *)a1[9];
    }
    sub_186B220(v14 - 1);
  }
  v21 = (__int64 *)a1[8];
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[7];
          v13 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_45;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_45:
    v21 = (__int64 *)a1[8];
    if ( v21 )
LABEL_46:
      sub_186B220(v21 - 1);
  }
  v25 = (__int64 *)a1[6];
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 >= v26 )
      goto LABEL_55;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = a1[5];
          v13 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_54;
      }
      sub_15D7BC0(v28, v27);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_54:
    v25 = (__int64 *)a1[6];
    if ( v25 )
LABEL_55:
      sub_186B220(v25 - 1);
  }
  operator delete(a1, 0x60u);
}


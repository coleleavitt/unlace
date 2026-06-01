void __fastcall sub_437070(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  void *v9; // rdi
  void *v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // r12
  void *v18; // rdi
  void *v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 *v24; // rbx
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  void (__fastcall ***v28)(void *); // rbx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi

  v1 = a1 - 9;
  v3 = a1 + 32;
  *(v3 - 41) = &off_1C653C0;
  *(v3 - 32) = off_1C65568;
  sub_1695230(v3);
  v4 = (__int64 *)a1[18];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[17];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_8:
    v4 = (__int64 *)a1[18];
    if ( v4 )
LABEL_9:
      sub_186B220(v4 - 1);
  }
  v9 = (void *)a1[14];
  if ( v9 )
    sub_186B220(v9);
  v10 = (void *)a1[11];
  if ( v10 )
    sub_186B220(v10);
  v11 = (__int64 *)a1[10];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[9];
          v8 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_21;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_21:
    v11 = (__int64 *)a1[10];
    if ( v11 )
LABEL_22:
      sub_186B220(v11 - 1);
  }
  v15 = (_QWORD *)a1[7];
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = &v15[9 * v16];
      do
      {
        v18 = (void *)v15[6];
        if ( v18 )
          sub_186B220(v18);
        v19 = (void *)v15[3];
        if ( v19 )
          sub_186B220(v19);
        v20 = (__int64 *)v15[2];
        if ( v20 )
        {
          v21 = &v20[*((unsigned int *)v20 - 1)];
          if ( v20 >= v21 )
            goto LABEL_38;
          do
          {
            while ( 1 )
            {
              v22 = *v20;
              if ( *v20 )
              {
                v23 = v15[1];
                v8 = (*(_DWORD *)(v22 + 8))-- == 1;
                if ( v8 )
                  break;
              }
              if ( ++v20 >= v21 )
                goto LABEL_37;
            }
            sub_15D7BC0(v23, v22);
            ++v20;
          }
          while ( v20 < v21 );
LABEL_37:
          v20 = (__int64 *)v15[2];
          if ( v20 )
LABEL_38:
            sub_186B220(v20 - 1);
        }
        v15 += 9;
      }
      while ( v15 != v17 );
      v15 = (_QWORD *)a1[7];
    }
    sub_186B220(v15 - 1);
  }
  v24 = (__int64 *)a1[5];
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_50;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = a1[4];
          v8 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_49;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_49:
    v24 = (__int64 *)a1[5];
    if ( v24 )
LABEL_50:
      sub_186B220(v24 - 1);
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v28 = (void (__fastcall ***)(void *))*(a1 - 2);
  *(a1 - 9) = qword_1C63FB0;
  if ( v28 )
  {
    v8 = (*((_DWORD *)v28 + 2))-- == 1;
    if ( v8 )
    {
      (**v28)(v28);
      sub_186B220(v28);
    }
  }
  v29 = *(a1 - 5);
  if ( v29 )
  {
    v30 = *(a1 - 4);
    v8 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v30, v29);
  }
  v31 = (__int64 *)*(a1 - 6);
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 >= v32 )
      goto LABEL_65;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = *(a1 - 7);
          v8 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_64;
      }
      sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_64:
    v31 = (__int64 *)*(a1 - 6);
    if ( v31 )
LABEL_65:
      sub_186B220(v31 - 1);
  }
  operator delete(v1, 0x190u);
}


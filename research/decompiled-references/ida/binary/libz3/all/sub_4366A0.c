__int64 __fastcall sub_4366A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void *v8; // rdi
  void *v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // r12
  void *v17; // rdi
  void *v18; // rdi
  __int64 *v19; // rbx
  __int64 *v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rbx
  __int64 *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  void (__fastcall ***v27)(void *); // rbx
  __int64 result; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi

  v2 = a1 + 32;
  *(v2 - 41) = &off_1C653C0;
  *(v2 - 32) = off_1C65568;
  sub_1695230(v2);
  v3 = (__int64 *)a1[18];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[17];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = (__int64 *)a1[18];
    if ( v3 )
LABEL_9:
      sub_186B220(v3 - 1);
  }
  v8 = (void *)a1[14];
  if ( v8 )
    sub_186B220(v8);
  v9 = (void *)a1[11];
  if ( v9 )
    sub_186B220(v9);
  v10 = (__int64 *)a1[10];
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[9];
          v7 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_21;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_21:
    v10 = (__int64 *)a1[10];
    if ( v10 )
LABEL_22:
      sub_186B220(v10 - 1);
  }
  v14 = (_QWORD *)a1[7];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v14[9 * v15];
      do
      {
        v17 = (void *)v14[6];
        if ( v17 )
          sub_186B220(v17);
        v18 = (void *)v14[3];
        if ( v18 )
          sub_186B220(v18);
        v19 = (__int64 *)v14[2];
        if ( v19 )
        {
          v20 = &v19[*((unsigned int *)v19 - 1)];
          if ( v19 >= v20 )
            goto LABEL_38;
          do
          {
            while ( 1 )
            {
              v21 = *v19;
              if ( *v19 )
              {
                v22 = v14[1];
                v7 = (*(_DWORD *)(v21 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v19 >= v20 )
                goto LABEL_37;
            }
            sub_15D7BC0(v22, v21);
            ++v19;
          }
          while ( v19 < v20 );
LABEL_37:
          v19 = (__int64 *)v14[2];
          if ( v19 )
LABEL_38:
            sub_186B220(v19 - 1);
        }
        v14 += 9;
      }
      while ( v14 != v16 );
      v14 = (_QWORD *)a1[7];
    }
    sub_186B220(v14 - 1);
  }
  v23 = (__int64 *)a1[5];
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 >= v24 )
      goto LABEL_50;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = a1[4];
          v7 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_49;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_49:
    v23 = (__int64 *)a1[5];
    if ( v23 )
LABEL_50:
      sub_186B220(v23 - 1);
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v27 = (void (__fastcall ***)(void *))*(a1 - 2);
  result = (__int64)qword_1C63FB0;
  *(a1 - 9) = qword_1C63FB0;
  if ( v27 )
  {
    v7 = (*((_DWORD *)v27 + 2))-- == 1;
    if ( v7 )
    {
      (**v27)(v27);
      result = sub_186B220(v27);
    }
  }
  v29 = *(a1 - 5);
  if ( v29 )
  {
    v30 = *(a1 - 4);
    v7 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v30, v29);
  }
  v31 = (__int64 *)*(a1 - 6);
  if ( v31 )
  {
    result = *((unsigned int *)v31 - 1);
    v32 = &v31[result];
    if ( v31 >= v32 )
      return sub_186B220(v31 - 1);
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = *(a1 - 7);
          v7 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_64;
      }
      result = sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_64:
    v31 = (__int64 *)*(a1 - 6);
    if ( v31 )
      return sub_186B220(v31 - 1);
  }
  return result;
}


__int64 __fastcall sub_628040(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r12
  void *v6; // rdi
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // r12
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 *v15; // r13
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 *v18; // rbx
  __int64 *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // rbx
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi

  result = (__int64)&off_1C68A28;
  v3 = (_QWORD *)a1[11];
  *a1 = &off_1C68A28;
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[v4];
      do
      {
        while ( *v3 )
        {
          v6 = (void *)(*v3++ - 8LL);
          sub_186B220(v6);
          if ( v5 == v3 )
          {
            v3 = (_QWORD *)a1[11];
            goto LABEL_7;
          }
        }
        ++v3;
      }
      while ( v3 != v5 );
      v3 = (_QWORD *)a1[11];
    }
LABEL_7:
    result = sub_186B220(v3 - 1);
  }
  v7 = (__int64 *)a1[10];
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[2 * v8];
      do
      {
        v10 = (__int64 *)v7[1];
        if ( v10 )
        {
          v11 = &v10[*((unsigned int *)v10 - 1)];
          if ( v10 >= v11 )
            goto LABEL_19;
          do
          {
            while ( 1 )
            {
              v12 = *v10;
              if ( *v10 )
              {
                v13 = *v7;
                v14 = (*(_DWORD *)(v12 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              if ( ++v10 >= v11 )
                goto LABEL_18;
            }
            sub_15D7BC0(v13, v12);
            ++v10;
          }
          while ( v10 < v11 );
LABEL_18:
          v10 = (__int64 *)v7[1];
          if ( v10 )
LABEL_19:
            sub_186B220(v10 - 1);
        }
        v7 += 2;
      }
      while ( v7 != v9 );
      v7 = (__int64 *)a1[10];
    }
    result = sub_186B220(v7 - 1);
  }
  v15 = (__int64 *)a1[9];
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = &v15[2 * v16];
      do
      {
        v18 = (__int64 *)v15[1];
        if ( v18 )
        {
          v19 = &v18[*((unsigned int *)v18 - 1)];
          if ( v18 >= v19 )
            goto LABEL_34;
          do
          {
            while ( 1 )
            {
              v20 = *v18;
              if ( *v18 )
              {
                v21 = *v15;
                v14 = (*(_DWORD *)(v20 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              if ( ++v18 >= v19 )
                goto LABEL_33;
            }
            sub_15D7BC0(v21, v20);
            ++v18;
          }
          while ( v18 < v19 );
LABEL_33:
          v18 = (__int64 *)v15[1];
          if ( v18 )
LABEL_34:
            sub_186B220(v18 - 1);
        }
        v15 += 2;
      }
      while ( v15 != v17 );
      v15 = (__int64 *)a1[9];
    }
    result = sub_186B220(v15 - 1);
  }
  v22 = (__int64 *)a1[8];
  if ( v22 )
  {
    result = *((unsigned int *)v22 - 1);
    v23 = &v22[result];
    if ( v22 >= v23 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[7];
          v14 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_45;
      }
      result = sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_45:
    v22 = (__int64 *)a1[8];
    if ( v22 )
LABEL_46:
      result = sub_186B220(v22 - 1);
  }
  v26 = (__int64 *)a1[6];
  if ( v26 )
  {
    result = *((unsigned int *)v26 - 1);
    v27 = &v26[result];
    if ( v26 >= v27 )
      return sub_186B220(v26 - 1);
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = a1[5];
          v14 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_54;
      }
      result = sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_54:
    v26 = (__int64 *)a1[6];
    if ( v26 )
      return sub_186B220(v26 - 1);
  }
  return result;
}


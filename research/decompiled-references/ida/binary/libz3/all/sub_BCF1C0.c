__int64 __fastcall sub_BCF1C0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rbp
  __int64 *v13; // r13
  __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 *v18; // r13
  __int64 *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 result; // rax
  __int64 *v27; // [rsp+8h] [rbp-40h]

  v2 = a1[7];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[6];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[5];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[4];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[3];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = (__int64 *)a1[2];
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v27 = &v7[7 * v8];
      do
      {
        v9 = v7[5];
        if ( v9 )
          sub_186B220((void *)(v9 - 8));
        v10 = (__int64 *)v7[4];
        if ( v10 )
        {
          v11 = *((unsigned int *)v10 - 1);
          if ( (_DWORD)v11 )
          {
            v12 = &v10[4 * v11];
            do
            {
              v13 = (__int64 *)v10[3];
              if ( v13 )
              {
                v14 = &v13[*((unsigned int *)v13 - 1)];
                if ( v13 >= v14 )
                  goto LABEL_27;
                do
                {
                  while ( 1 )
                  {
                    v15 = *v13;
                    if ( *v13 )
                    {
                      v16 = v10[2];
                      v17 = (*(_DWORD *)(v15 + 8))-- == 1;
                      if ( v17 )
                        break;
                    }
                    if ( ++v13 >= v14 )
                      goto LABEL_26;
                  }
                  sub_15D7BC0(v16, v15);
                  ++v13;
                }
                while ( v13 < v14 );
LABEL_26:
                v13 = (__int64 *)v10[3];
                if ( v13 )
LABEL_27:
                  sub_186B220(v13 - 1);
              }
              v18 = (__int64 *)v10[1];
              if ( v18 )
              {
                v19 = &v18[*((unsigned int *)v18 - 1)];
                if ( v18 >= v19 )
                  goto LABEL_36;
                do
                {
                  while ( 1 )
                  {
                    v20 = *v18;
                    if ( *v18 )
                    {
                      v21 = *v10;
                      v17 = (*(_DWORD *)(v20 + 8))-- == 1;
                      if ( v17 )
                        break;
                    }
                    if ( ++v18 >= v19 )
                      goto LABEL_35;
                  }
                  sub_15D7BC0(v21, v20);
                  ++v18;
                }
                while ( v18 < v19 );
LABEL_35:
                v18 = (__int64 *)v10[1];
                if ( v18 )
LABEL_36:
                  sub_186B220(v18 - 1);
              }
              v10 += 4;
            }
            while ( v10 != v12 );
            v10 = (__int64 *)v7[4];
          }
          sub_186B220(v10 - 1);
        }
        v22 = v7[2];
        if ( v22 )
        {
          v23 = v7[3];
          v17 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v23, v22);
        }
        v24 = *v7;
        if ( *v7 )
        {
          v25 = v7[1];
          v17 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v25, v24);
        }
        v7 += 7;
      }
      while ( v7 != v27 );
      v7 = (__int64 *)a1[2];
    }
    sub_186B220(v7 - 1);
  }
  result = a1[1];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}


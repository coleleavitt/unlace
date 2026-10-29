__int64 __fastcall sub_BCF020(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // r12
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 result; // rax

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
      v9 = &v7[6 * v8];
      do
      {
        v10 = (__int64 *)v7[3];
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
                v13 = v7[2];
                v14 = (*(_DWORD *)(v12 + 8))-- == 1;
                if ( v14 )
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
          v10 = (__int64 *)v7[3];
          if ( v10 )
LABEL_22:
            sub_186B220(v10 - 1);
        }
        v15 = (__int64 *)v7[1];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_31;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = *v7;
                v14 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_30;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_30:
          v15 = (__int64 *)v7[1];
          if ( v15 )
LABEL_31:
            sub_186B220(v15 - 1);
        }
        v7 += 6;
      }
      while ( v7 != v9 );
      v7 = (__int64 *)a1[2];
    }
    sub_186B220(v7 - 1);
  }
  result = a1[1];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}


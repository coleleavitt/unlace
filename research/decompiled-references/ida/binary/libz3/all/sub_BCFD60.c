__int64 __fastcall sub_BCFD60(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi

  result = a1[5];
  if ( result )
    result = sub_186B220((void *)(result - 8));
  v3 = (__int64 *)a1[4];
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[4 * v4];
      do
      {
        v6 = (__int64 *)v3[3];
        if ( v6 )
        {
          v7 = &v6[*((unsigned int *)v6 - 1)];
          if ( v6 >= v7 )
            goto LABEL_14;
          do
          {
            while ( 1 )
            {
              v8 = *v6;
              if ( *v6 )
              {
                v9 = v3[2];
                v10 = (*(_DWORD *)(v8 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v6 >= v7 )
                goto LABEL_13;
            }
            sub_15D7BC0(v9, v8);
            ++v6;
          }
          while ( v6 < v7 );
LABEL_13:
          v6 = (__int64 *)v3[3];
          if ( v6 )
LABEL_14:
            sub_186B220(v6 - 1);
        }
        v11 = (__int64 *)v3[1];
        if ( v11 )
        {
          v12 = &v11[*((unsigned int *)v11 - 1)];
          if ( v11 >= v12 )
            goto LABEL_23;
          do
          {
            while ( 1 )
            {
              v13 = *v11;
              if ( *v11 )
              {
                v14 = *v3;
                v10 = (*(_DWORD *)(v13 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v11 >= v12 )
                goto LABEL_22;
            }
            sub_15D7BC0(v14, v13);
            ++v11;
          }
          while ( v11 < v12 );
LABEL_22:
          v11 = (__int64 *)v3[1];
          if ( v11 )
LABEL_23:
            sub_186B220(v11 - 1);
        }
        v3 += 4;
      }
      while ( v3 != v5 );
      v3 = (__int64 *)a1[4];
    }
    result = sub_186B220(v3 - 1);
  }
  v15 = a1[2];
  if ( v15 )
  {
    v16 = a1[3];
    v10 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v16, v15);
  }
  v17 = *a1;
  if ( *a1 )
  {
    v18 = a1[1];
    v10 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v18, v17);
  }
  return result;
}


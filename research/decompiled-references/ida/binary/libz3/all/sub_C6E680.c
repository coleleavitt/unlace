__int64 __fastcall sub_C6E680(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // rsi
  bool v7; // zf
  __int64 **v8; // r15
  __int64 **v9; // r13
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 **v16; // rbx
  __int64 *v17; // rdi
  __int64 result; // rax

  v2 = (__int64 *)a1[5];
  *a1 = &off_1C74668;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = a1[4];
      v5 = &v2[v3];
      do
      {
        while ( 1 )
        {
          v6 = *v2;
          if ( *v2 )
          {
            v7 = (*(_DWORD *)(v6 + 8))-- == 1;
            if ( v7 )
              break;
          }
          if ( ++v2 == v5 )
            goto LABEL_8;
        }
        ++v2;
        sub_15D7BC0(v4, v6);
      }
      while ( v2 != v5 );
    }
  }
LABEL_8:
  v8 = (__int64 **)a1[6];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    v10 = *((unsigned int *)v8 - 1);
    if ( v9 == v8 )
    {
LABEL_20:
      if ( (_DWORD)v10 )
      {
        v16 = &v8[v10];
        do
        {
          while ( *v8 )
          {
            v17 = *v8++ - 1;
            sub_186B220(v17);
            if ( v8 == v16 )
            {
              v8 = (__int64 **)a1[6];
              goto LABEL_25;
            }
          }
          ++v8;
        }
        while ( v8 != v16 );
        v8 = (__int64 **)a1[6];
      }
LABEL_25:
      sub_186B220(v8 - 1);
      goto LABEL_26;
    }
    do
    {
      v11 = *v8;
      if ( *v8 )
      {
        v12 = *((unsigned int *)v11 - 1);
        if ( (_DWORD)v12 )
        {
          v13 = a1[4];
          v14 = &v11[v12];
          do
          {
            while ( 1 )
            {
              v15 = *v11;
              if ( *v11 )
              {
                v7 = (*(_DWORD *)(v15 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( v14 == ++v11 )
                goto LABEL_17;
            }
            ++v11;
            sub_15D7BC0(v13, v15);
          }
          while ( v14 != v11 );
        }
      }
LABEL_17:
      ++v8;
    }
    while ( v9 != v8 );
    v8 = (__int64 **)a1[6];
    if ( v8 )
    {
      v10 = *((unsigned int *)v8 - 1);
      goto LABEL_20;
    }
  }
LABEL_26:
  result = a1[5];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}


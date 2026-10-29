__int64 *__fastcall sub_57FDC0(__int64 *a1)
{
  char *v1; // rax
  char *v2; // r15
  __int64 v3; // r12
  unsigned int *v4; // r13
  char *v5; // r14
  __int64 v6; // rax
  char *v7; // rbx
  char *v8; // rbp
  __int64 v9; // rdi
  char *v10; // rax
  __int64 *result; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  char *v14; // rbp
  __int64 v15; // rdx
  int v16; // ecx
  char *v17; // rbx
  char *v18; // r13
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // ebx
  __int64 v22; // rbp
  __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned int v25; // esi

  v1 = (char *)*a1;
  v2 = (char *)*a1;
  v3 = *a1 + 24LL * *((unsigned int *)a1 + 2);
  if ( *a1 == v3 )
  {
    if ( *((_DWORD *)a1 + 3) )
      goto LABEL_36;
  }
  else
  {
    while ( *((_DWORD *)v2 + 1) != 2 )
    {
      v2 += 24;
      if ( (char *)v3 == v2 )
        goto LABEL_44;
    }
    if ( (char *)v3 == v2 )
    {
LABEL_44:
      if ( !*((_DWORD *)a1 + 3) )
        goto LABEL_20;
      v12 = *((unsigned int *)a1 + 2);
      v14 = v1;
      v13 = *((_DWORD *)a1 + 2);
      v15 = (__int64)&v1[24 * v12];
      goto LABEL_22;
    }
    do
    {
      v4 = *((unsigned int **)v2 + 2);
      if ( v4 )
      {
        v5 = *(char **)v4;
        if ( *(_QWORD *)v4 )
        {
          v6 = v4[2];
          if ( (_DWORD)v6 )
          {
            v7 = *(char **)v4;
            v8 = &v5[24 * v6];
            do
            {
              while ( 1 )
              {
                v9 = *((_QWORD *)v7 + 2);
                if ( !v9 )
                  break;
                v7 += 24;
                sub_186B220((void *)(v9 - 8));
                if ( v8 == v7 )
                  goto LABEL_12;
              }
              v7 += 24;
            }
            while ( v7 != v8 );
          }
LABEL_12:
          sub_186B220(v5);
        }
        sub_186B220(v4);
      }
      v10 = v2 + 24;
      if ( (char *)v3 == v2 + 24 )
        break;
      while ( 1 )
      {
        v2 = v10;
        if ( *((_DWORD *)v10 + 1) == 2 )
          break;
        v10 += 24;
        if ( (char *)v3 == v10 )
          goto LABEL_19;
      }
    }
    while ( (char *)v3 != v10 );
LABEL_19:
    if ( *((_DWORD *)a1 + 3) )
      goto LABEL_21;
  }
LABEL_20:
  result = a1;
  if ( !*((_DWORD *)a1 + 4) )
    return result;
LABEL_21:
  v12 = *((unsigned int *)a1 + 2);
  v1 = (char *)*a1;
  v13 = *((_DWORD *)a1 + 2);
  v14 = (char *)*a1;
  v15 = *a1 + 24 * v12;
  if ( *a1 != v15 )
  {
LABEL_22:
    v16 = 0;
    do
    {
      while ( *((_DWORD *)v1 + 1) )
      {
        *((_DWORD *)v1 + 1) = 0;
        v1 += 24;
        if ( v1 == (char *)v15 )
          goto LABEL_26;
      }
      v1 += 24;
      ++v16;
    }
    while ( v1 != (char *)v15 );
LABEL_26:
    if ( v13 <= 0x10 || 3 * v13 >= 4 * v16 )
      goto LABEL_36;
    if ( v14 )
    {
      v17 = v14;
      v18 = &v14[24 * v12];
      do
      {
        while ( 1 )
        {
          v19 = *((_QWORD *)v17 + 1);
          if ( !v19 )
            break;
          v17 += 24;
          sub_186B220((void *)(v19 - 8));
          if ( v18 == v17 )
            goto LABEL_32;
        }
        v17 += 24;
      }
      while ( v17 != v18 );
LABEL_32:
      sub_186B220(v14);
      v20 = *((_DWORD *)a1 + 2);
      *a1 = 0;
      v21 = v20 >> 1;
      v22 = v20 >> 1;
      *((_DWORD *)a1 + 2) = v20 >> 1;
      v23 = sub_186B270(24 * v22);
      if ( !v21 )
        goto LABEL_35;
    }
    else
    {
      v25 = v13 >> 1;
      v22 = v25;
      *((_DWORD *)a1 + 2) = v25;
      *a1 = 0;
      v23 = sub_186B270(24LL * v25);
    }
    v24 = (_QWORD *)v23;
    do
    {
      *v24 = 0;
      v24 += 3;
      *(v24 - 2) = 0;
    }
    while ( v24 != (_QWORD *)(v23 + 24 * v22) );
LABEL_35:
    *a1 = v23;
  }
LABEL_36:
  result = a1;
  *(__int64 *)((char *)a1 + 12) = 0;
  return result;
}


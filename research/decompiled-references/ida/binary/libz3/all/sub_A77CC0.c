char *__fastcall sub_A77CC0(__int64 *src, char *a2, _QWORD *a3)
{
  char *result; // rax
  char *v4; // r14
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  __int64 *v8; // r15
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // rax
  unsigned __int64 *v13; // rdi
  char *v14; // r15
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rbp
  _QWORD *v20; // r8
  char *v21; // r13
  char *v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // r8
  char *v25; // r13
  char *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+8h] [rbp-50h]

  result = (char *)(a2 - (char *)src);
  v4 = (char *)a3 + a2 - (char *)src;
  v29 = a2 - (char *)src;
  v30 = (a2 - (char *)src) >> 3;
  if ( a2 - (char *)src <= 48 )
  {
    if ( a2 == (char *)src )
      return result;
    v14 = (char *)(src + 1);
    v6 = src;
    if ( a2 == (char *)(src + 1) )
      return result;
    do
    {
LABEL_19:
      while ( 1 )
      {
        v15 = *(_QWORD *)v14;
        result = (char *)*v6;
        if ( *(_QWORD *)v14 < (unsigned __int64)*v6 )
          break;
        v16 = *((_QWORD *)v14 - 1);
        result = v14 - 8;
        if ( v15 >= v16 )
        {
          *(_QWORD *)v14 = v15;
        }
        else
        {
          do
          {
            *((_QWORD *)result + 1) = v16;
            v17 = (unsigned __int64 *)result;
            v16 = *((_QWORD *)result - 1);
            result -= 8;
          }
          while ( v15 < v16 );
          *v17 = v15;
        }
        v14 += 8;
        if ( a2 == v14 )
          goto LABEL_24;
      }
      if ( v14 - (char *)v6 <= 8 )
      {
        if ( v14 - (char *)v6 == 8 )
          *(_QWORD *)v14 = result;
      }
      else
      {
        result = (char *)memmove(v6 + 1, v6, v14 - (char *)v6);
      }
      v14 += 8;
      *v6 = v15;
    }
    while ( a2 != v14 );
  }
  else
  {
    v6 = src;
    do
    {
      v7 = v6;
      v6 += 7;
      v8 = v6 - 6;
      do
      {
        while ( 1 )
        {
          v9 = *v8;
          v10 = *(v6 - 7);
          if ( *v8 < v10 )
            break;
          v11 = *(v8 - 1);
          v12 = v8 - 1;
          if ( v9 >= v11 )
          {
            *v8 = v9;
          }
          else
          {
            do
            {
              v12[1] = v11;
              v13 = (unsigned __int64 *)v12;
              v11 = *--v12;
            }
            while ( v9 < v11 );
            *v13 = v9;
          }
          if ( v6 == ++v8 )
            goto LABEL_12;
        }
        if ( (char *)v8 - (char *)v7 <= 8 )
        {
          if ( (char *)v8 - (char *)v7 == 8 )
            *v8 = v10;
        }
        else
        {
          memmove(v7 + 1, v7, (char *)v8 - (char *)v7);
        }
        ++v8;
        *(v6 - 7) = v9;
      }
      while ( v6 != v8 );
LABEL_12:
      result = (char *)(a2 - (char *)v6);
    }
    while ( a2 - (char *)v6 > 48 );
    if ( a2 != (char *)v6 )
    {
      v14 = (char *)(v7 + 8);
      if ( a2 != (char *)(v7 + 8) )
        goto LABEL_19;
    }
  }
LABEL_24:
  v18 = 7;
  if ( v29 > 56 )
  {
    while ( 1 )
    {
      v19 = 2 * v18;
      if ( v30 < 2 * v18 )
      {
        v23 = v30;
        v20 = a3;
        v21 = (char *)src;
      }
      else
      {
        v20 = a3;
        v21 = (char *)src;
        do
        {
          v22 = v21;
          v21 += 16 * v18;
          v20 = (_QWORD *)sub_A77900(v22, &v21[-8 * v18], &v21[-8 * v18], v21, v20);
          v23 = (a2 - v21) >> 3;
        }
        while ( v19 <= v23 );
      }
      if ( v18 <= v23 )
        v23 = v18;
      v18 *= 4;
      sub_A77900(v21, &v21[8 * v23], &v21[8 * v23], a2, v20);
      if ( v30 < v18 )
        break;
      v24 = src;
      v25 = (char *)a3;
      do
      {
        v26 = v25;
        v25 += 8 * v18;
        v24 = (_QWORD *)sub_A77900(v26, &v25[8 * v19 - 8 * v18], &v25[8 * v19 - 8 * v18], v25, v24);
        v27 = (v4 - v25) >> 3;
      }
      while ( v18 <= v27 );
      if ( v27 > v19 )
        v27 = v19;
      result = (char *)sub_A77900(v25, &v25[8 * v27], &v25[8 * v27], v4, v24);
      if ( v30 <= v18 )
        return result;
    }
    v28 = v30;
    if ( v30 > v19 )
      v28 = v19;
    return (char *)sub_A77900(a3, &a3[v28], (char *)&a3[v28], v4, src);
  }
  return result;
}


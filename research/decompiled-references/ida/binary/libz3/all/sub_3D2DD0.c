char *__fastcall sub_3D2DD0(char *src, char *a2, _QWORD *a3)
{
  char *result; // rax
  char *v4; // r14
  __int64 *v6; // r15
  __int64 *v7; // rbp
  __int64 *v8; // r13
  _DWORD *v9; // rbx
  unsigned int *v10; // rax
  unsigned int v11; // edi
  unsigned int *v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // r8
  char *v15; // r13
  unsigned int *v16; // rbp
  unsigned int v17; // esi
  unsigned int *v18; // rdx
  char *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rbp
  _QWORD *v22; // r8
  char *v23; // r13
  char *v24; // rdi
  __int64 v25; // rdx
  _QWORD *v26; // r8
  char *v27; // r13
  char *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]

  result = (char *)(a2 - src);
  v4 = (char *)a3 + a2 - src;
  v31 = a2 - src;
  v32 = (a2 - src) >> 3;
  if ( a2 - src <= 48 )
  {
    if ( a2 == src )
      return result;
    v15 = src + 8;
    v6 = (__int64 *)src;
    if ( a2 == src + 8 )
      return result;
    do
    {
LABEL_19:
      while ( 1 )
      {
        v16 = *(unsigned int **)v15;
        result = (char *)*v6;
        v17 = **(_DWORD **)v15;
        if ( v17 < *(_DWORD *)*v6 )
          break;
        v18 = *((unsigned int **)v15 - 1);
        result = v15 - 8;
        if ( v17 >= *v18 )
        {
          *(_QWORD *)v15 = v16;
        }
        else
        {
          do
          {
            *((_QWORD *)result + 1) = v18;
            v19 = result;
            v18 = *((unsigned int **)result - 1);
            result -= 8;
          }
          while ( v17 < *v18 );
          *(_QWORD *)v19 = v16;
        }
        v15 += 8;
        if ( a2 == v15 )
          goto LABEL_24;
      }
      if ( v15 - (char *)v6 <= 8 )
      {
        if ( v15 - (char *)v6 == 8 )
          *(_QWORD *)v15 = result;
      }
      else
      {
        result = (char *)memmove(v6 + 1, v6, v15 - (char *)v6);
      }
      v15 += 8;
      *v6 = (__int64)v16;
    }
    while ( a2 != v15 );
  }
  else
  {
    v6 = (__int64 *)src;
    do
    {
      v7 = v6;
      v6 += 7;
      v8 = v6 - 6;
      do
      {
        while ( 1 )
        {
          v9 = (_DWORD *)*v8;
          v10 = (unsigned int *)*(v6 - 7);
          v11 = *(_DWORD *)*v8;
          if ( v11 < *v10 )
            break;
          v12 = (unsigned int *)*(v8 - 1);
          v13 = v8 - 1;
          if ( v11 >= *v12 )
          {
            *v8 = (__int64)v9;
          }
          else
          {
            do
            {
              v13[1] = (__int64)v12;
              v14 = v13;
              v12 = (unsigned int *)*--v13;
            }
            while ( v11 < *v12 );
            *v14 = (__int64)v9;
          }
          if ( v6 == ++v8 )
            goto LABEL_12;
        }
        if ( (char *)v8 - (char *)v7 <= 8 )
        {
          if ( (char *)v8 - (char *)v7 == 8 )
            *v8 = (__int64)v10;
        }
        else
        {
          memmove(v7 + 1, v7, (char *)v8 - (char *)v7);
        }
        ++v8;
        *(v6 - 7) = (__int64)v9;
      }
      while ( v6 != v8 );
LABEL_12:
      result = (char *)(a2 - (char *)v6);
    }
    while ( a2 - (char *)v6 > 48 );
    if ( a2 != (char *)v6 )
    {
      v15 = (char *)(v7 + 8);
      if ( a2 != (char *)(v7 + 8) )
        goto LABEL_19;
    }
  }
LABEL_24:
  v20 = 7;
  if ( v31 > 56 )
  {
    while ( 1 )
    {
      v21 = 2 * v20;
      if ( v32 < 2 * v20 )
      {
        v25 = v32;
        v22 = a3;
        v23 = src;
      }
      else
      {
        v22 = a3;
        v23 = src;
        do
        {
          v24 = v23;
          v23 += 16 * v20;
          v22 = (_QWORD *)sub_3D2C00(v24, &v23[-8 * v20], &v23[-8 * v20], v23, v22);
          v25 = (a2 - v23) >> 3;
        }
        while ( v21 <= v25 );
      }
      if ( v20 <= v25 )
        v25 = v20;
      v20 *= 4;
      sub_3D2C00(v23, &v23[8 * v25], &v23[8 * v25], a2, v22);
      if ( v32 < v20 )
        break;
      v26 = src;
      v27 = (char *)a3;
      do
      {
        v28 = v27;
        v27 += 8 * v20;
        v26 = (_QWORD *)sub_3D2C00(v28, &v27[8 * v21 - 8 * v20], &v27[8 * v21 - 8 * v20], v27, v26);
        v29 = (v4 - v27) >> 3;
      }
      while ( v20 <= v29 );
      if ( v29 > v21 )
        v29 = v21;
      result = (char *)sub_3D2C00(v27, &v27[8 * v29], &v27[8 * v29], v4, v26);
      if ( v32 <= v20 )
        return result;
    }
    v30 = v32;
    if ( v32 > v21 )
      v30 = v21;
    return (char *)sub_3D2C00(a3, &a3[v30], (char *)&a3[v30], v4, src);
  }
  return result;
}


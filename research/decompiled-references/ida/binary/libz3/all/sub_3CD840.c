__int64 __fastcall sub_3CD840(__int64 *src, __int64 *a2, char *a3)
{
  __int64 result; // rax
  char *v4; // r15
  __int64 *v5; // r13
  char *v6; // r12
  char *v7; // rbp
  __int64 *v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 *i; // r15
  __int64 v12; // rbp
  __int64 *v13; // rcx
  __int64 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 *j; // r15
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // r13
  _QWORD *v21; // r8
  char *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r15
  char *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // r8
  char *v29; // r14
  __int64 v30; // r13
  char *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  char *v34; // [rsp+8h] [rbp-70h]
  __int64 v35; // [rsp+8h] [rbp-70h]
  char *v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+10h] [rbp-68h]
  char *v41; // [rsp+28h] [rbp-50h]
  __int64 v42; // [rsp+28h] [rbp-50h]
  char *v43; // [rsp+38h] [rbp-40h]

  result = (char *)a2 - (char *)src;
  v4 = &a3[(char *)a2 - (char *)src];
  v5 = src;
  v6 = (char *)a2;
  v38 = a2 - src;
  if ( (char *)a2 - (char *)src <= 48 )
  {
    if ( a2 == src )
      return result;
    v13 = src + 1;
    v5 = src;
    if ( a2 == src + 1 )
      return result;
  }
  else
  {
    v43 = &a3[(char *)a2 - (char *)src];
    do
    {
      v7 = (char *)v5;
      v5 += 7;
      v8 = v5 - 6;
      do
      {
        while ( 1 )
        {
          v9 = *(v5 - 7);
          v10 = *v8;
          if ( sub_3CD770(*v8, v9) )
            break;
          v34 = v7;
          for ( i = v8; ; --i )
          {
            v12 = *(i - 1);
            if ( !sub_3CD770(v10, v12) )
              break;
            *i = v12;
          }
          ++v8;
          *i = v10;
          v7 = v34;
          if ( v5 == v8 )
            goto LABEL_12;
        }
        if ( (char *)v8 - v7 <= 8 )
        {
          if ( (char *)v8 - v7 == 8 )
            *v8 = v9;
        }
        else
        {
          memmove(v7 + 8, v7, (char *)v8 - v7);
        }
        ++v8;
        *(v5 - 7) = v10;
      }
      while ( v5 != v8 );
LABEL_12:
      ;
    }
    while ( (char *)a2 - (char *)v5 > 48 );
    v6 = (char *)a2;
    result = (char *)a2 - (char *)src;
    v4 = v43;
    if ( a2 == v5 )
      goto LABEL_25;
    v13 = (__int64 *)(v7 + 64);
    if ( a2 == (__int64 *)(v7 + 64) )
      goto LABEL_25;
  }
  v35 = result;
  v14 = v13;
  v41 = v4;
  do
  {
    while ( 1 )
    {
      v15 = *v5;
      v16 = *v14;
      if ( sub_3CD770(*v14, *v5) )
        break;
      for ( j = v14; ; --j )
      {
        v18 = *(j - 1);
        if ( !sub_3CD770(v16, v18) )
          break;
        *j = v18;
      }
      ++v14;
      *j = v16;
      if ( v6 == (char *)v14 )
        goto LABEL_24;
    }
    if ( (char *)v14 - (char *)v5 <= 8 )
    {
      if ( (char *)v14 - (char *)v5 == 8 )
        *v14 = v15;
    }
    else
    {
      memmove(v5 + 1, v5, (char *)v14 - (char *)v5);
    }
    ++v14;
    *v5 = v16;
  }
  while ( v6 != (char *)v14 );
LABEL_24:
  result = v35;
  v4 = v41;
LABEL_25:
  v19 = 7;
  if ( result > 56 )
  {
    while ( 1 )
    {
      v20 = 2 * v19;
      if ( v38 < 2 * v19 )
      {
        v27 = v38;
        v21 = a3;
        v22 = (char *)src;
      }
      else
      {
        v21 = a3;
        v36 = v4;
        v22 = (char *)src;
        v42 = v19;
        v23 = -8 * v19;
        v24 = 16 * v19;
        v25 = v23;
        do
        {
          v26 = v22;
          v22 += v24;
          v21 = (_QWORD *)sub_3CD780(v26, &v22[v25], &v22[v25], v22, v21);
          v27 = (v6 - v22) >> 3;
        }
        while ( v20 <= v27 );
        v4 = v36;
        v19 = v42;
      }
      if ( v19 <= v27 )
        v27 = v19;
      v19 *= 4;
      sub_3CD780(v22, &v22[8 * v27], &v22[8 * v27], v6, v21);
      if ( v38 < v19 )
        break;
      v28 = src;
      v37 = v20;
      v29 = a3;
      v30 = 8 * v20 - 8 * v19;
      do
      {
        v31 = v29;
        v29 += 8 * v19;
        v28 = (_QWORD *)sub_3CD780(v31, &v29[v30], &v29[v30], v29, v28);
        v32 = (v4 - v29) >> 3;
      }
      while ( v19 <= v32 );
      if ( v32 > v37 )
        v32 = v37;
      result = sub_3CD780(v29, &v29[8 * v32], &v29[8 * v32], v4, v28);
      if ( v38 <= v19 )
        return result;
    }
    v33 = v38;
    if ( v38 > v20 )
      v33 = v20;
    return sub_3CD780(a3, &a3[8 * v33], &a3[8 * v33], v4, src);
  }
  return result;
}


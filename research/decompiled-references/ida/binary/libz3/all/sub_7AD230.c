char *__fastcall sub_7AD230(char *src, char *a2, char *a3)
{
  char *result; // rax
  char *v4; // r14
  char *v6; // r15
  char *v7; // rbp
  char *v8; // r13
  char *i; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rbx
  _DWORD *v12; // rax
  unsigned int v13; // edx
  size_t v14; // rdx
  bool v15; // zf
  char *v16; // r13
  _DWORD *v17; // rsi
  __int64 v18; // rbp
  unsigned int v19; // edx
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
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-58h]
  __int64 v36; // [rsp+8h] [rbp-50h]

  result = (char *)(a2 - src);
  v4 = &a3[a2 - src];
  v35 = a2 - src;
  v36 = (a2 - src) >> 3;
  if ( a2 - src > 48 )
  {
    v6 = src;
    while ( 1 )
    {
      v7 = v6;
      v6 += 56;
      v8 = v6 - 48;
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)v8;
          v12 = *((_DWORD **)v6 - 7);
          v13 = *(_DWORD *)(*(_QWORD *)v8 + 24LL);
          if ( v13 < v12[6] )
          {
LABEL_10:
            v14 = v8 - v7;
            v15 = v8 - v7 == 8;
            if ( v8 - v7 <= 8 )
              goto LABEL_47;
            goto LABEL_11;
          }
          if ( v13 != v12[6] )
            break;
          v31 = v12[7];
          if ( *(_DWORD *)(v11 + 28) < v31 )
            goto LABEL_10;
          if ( *(_DWORD *)(v11 + 28) != v31 || *(_DWORD *)(v11 + 32) >= v12[8] )
            break;
          v14 = v8 - v7;
          v15 = v8 - v7 == 8;
          if ( v8 - v7 <= 8 )
          {
LABEL_47:
            if ( v15 )
              *(_QWORD *)v8 = v12;
            goto LABEL_12;
          }
LABEL_11:
          memmove(&v8[8 - v14], v7, v14);
LABEL_12:
          v8 += 8;
          *((_QWORD *)v6 - 7) = v11;
          if ( v6 == v8 )
            goto LABEL_13;
        }
        for ( i = v8; ; i -= 8 )
        {
          v10 = *((_DWORD **)i - 1);
          if ( v13 >= v10[6] )
          {
            if ( v13 != v10[6] )
              break;
            v30 = v10[7];
            if ( *(_DWORD *)(v11 + 28) >= v30 && (*(_DWORD *)(v11 + 28) != v30 || *(_DWORD *)(v11 + 32) >= v10[8]) )
              break;
          }
          *(_QWORD *)i = v10;
        }
        v8 += 8;
        *(_QWORD *)i = v11;
      }
      while ( v6 != v8 );
LABEL_13:
      result = (char *)(a2 - v6);
      if ( a2 - v6 <= 48 )
      {
        if ( a2 != v6 )
        {
          v16 = v7 + 64;
          if ( a2 != v7 + 64 )
            goto LABEL_22;
        }
        goto LABEL_26;
      }
    }
  }
  if ( a2 != src )
  {
    v16 = src + 8;
    v6 = src;
    if ( a2 != src + 8 )
    {
      do
      {
LABEL_22:
        while ( 1 )
        {
          v18 = *(_QWORD *)v16;
          result = *(char **)v6;
          v19 = *(_DWORD *)(*(_QWORD *)v16 + 24LL);
          if ( v19 >= *(_DWORD *)(*(_QWORD *)v6 + 24LL) )
          {
            if ( v19 != *(_DWORD *)(*(_QWORD *)v6 + 24LL) )
              break;
            v33 = *((_DWORD *)result + 7);
            if ( *(_DWORD *)(v18 + 28) >= v33
              && (*(_DWORD *)(v18 + 28) != v33 || *(_DWORD *)(v18 + 32) >= *((_DWORD *)result + 8)) )
            {
              break;
            }
          }
          if ( v16 - v6 <= 8 )
          {
            if ( v16 - v6 == 8 )
              *(_QWORD *)v16 = result;
          }
          else
          {
            result = (char *)memmove(v6 + 8, v6, v16 - v6);
          }
          v16 += 8;
          *(_QWORD *)v6 = v18;
          if ( a2 == v16 )
            goto LABEL_26;
        }
        for ( result = v16; ; result -= 8 )
        {
          v17 = *((_DWORD **)result - 1);
          if ( v19 >= v17[6] )
          {
            if ( v19 != v17[6] )
              break;
            v32 = v17[7];
            if ( *(_DWORD *)(v18 + 28) >= v32 && (*(_DWORD *)(v18 + 28) != v32 || *(_DWORD *)(v18 + 32) >= v17[8]) )
              break;
          }
          *(_QWORD *)result = v17;
        }
        v16 += 8;
        *(_QWORD *)result = v18;
      }
      while ( a2 != v16 );
LABEL_26:
      v20 = 7;
      if ( v35 > 56 )
      {
        while ( 1 )
        {
          v21 = 2 * v20;
          if ( v36 < 2 * v20 )
          {
            v25 = v36;
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
              v22 = (_QWORD *)sub_7AC1D0(v24, &v23[-8 * v20], &v23[-8 * v20], v23, v22);
              v25 = (a2 - v23) >> 3;
            }
            while ( v21 <= v25 );
          }
          if ( v25 > v20 )
            v25 = v20;
          v20 *= 4;
          sub_7AC1D0(v23, &v23[8 * v25], &v23[8 * v25], a2, v22);
          if ( v36 < v20 )
            break;
          v26 = src;
          v27 = a3;
          do
          {
            v28 = v27;
            v27 += 8 * v20;
            v26 = (_QWORD *)sub_7AC1D0(v28, &v27[8 * v21 - 8 * v20], &v27[8 * v21 - 8 * v20], v27, v26);
            v29 = (v4 - v27) >> 3;
          }
          while ( v20 <= v29 );
          if ( v29 > v21 )
            v29 = v21;
          result = (char *)sub_7AC1D0(v27, &v27[8 * v29], &v27[8 * v29], v4, v26);
          if ( v36 <= v20 )
            return result;
        }
        v34 = v36;
        if ( v36 > v21 )
          v34 = v21;
        return (char *)sub_7AC1D0(a3, &a3[8 * v34], &a3[8 * v34], v4, src);
      }
    }
  }
  return result;
}


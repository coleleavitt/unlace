__int64 __fastcall sub_8E53C0(char *src, char *a2, char *a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  char *v5; // r12
  char *v6; // rbx
  __int64 v7; // r14
  char *v8; // r12
  char *v9; // r13
  char *v10; // rbx
  char *v11; // r15
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rdx
  char *v16; // rax
  char *v17; // rdi
  char *v18; // r13
  char *v19; // r14
  char *v20; // rbp
  char *v21; // r12
  __int64 v22; // r14
  unsigned int v23; // esi
  __int64 v24; // rdx
  _QWORD *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r14
  _QWORD *v28; // r8
  char *v29; // r12
  char *v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // r8
  char *v33; // r12
  char *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r13
  char *v38; // [rsp+8h] [rbp-60h]
  char *v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+10h] [rbp-58h]
  char *v43; // [rsp+28h] [rbp-40h]

  v3 = a2 - src;
  result = (a2 - src) >> 3;
  v5 = &a3[a2 - src];
  v6 = a2;
  v40 = result;
  if ( a2 - src <= 48 )
  {
    if ( a2 == src )
      return result;
    v20 = src + 8;
    v19 = src;
    if ( a2 == src + 8 )
      return result;
  }
  else
  {
    v7 = a2 - src;
    v43 = &a3[a2 - src];
    v8 = src;
    do
    {
      v9 = v8 + 8;
      v10 = v8;
      v11 = v8 + 56;
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)v9;
          v13 = *((_QWORD *)v11 - 7);
          v14 = *(_DWORD *)(*(_QWORD *)v9 + 4LL * (*(_DWORD *)(*(_QWORD *)v9 + 4LL) & 0xFFFFFF) + 8);
          if ( *(_DWORD *)(v13 + 4LL * (*(_DWORD *)(v13 + 4) & 0xFFFFFF) + 8) < v14 )
            break;
          v15 = *((_QWORD *)v9 - 1);
          v16 = v9 - 8;
          if ( *(_DWORD *)(v15 + 4LL * (*(_DWORD *)(v15 + 4) & 0xFFFFFF) + 8) >= v14 )
          {
            *(_QWORD *)v9 = v12;
          }
          else
          {
            do
            {
              *((_QWORD *)v16 + 1) = v15;
              v17 = v16;
              v15 = *((_QWORD *)v16 - 1);
              v16 -= 8;
            }
            while ( *(_DWORD *)(v15 + 4LL * (*(_DWORD *)(v15 + 4) & 0xFFFFFF) + 8) < v14 );
            *(_QWORD *)v17 = v12;
          }
          v9 += 8;
          if ( v11 == v9 )
            goto LABEL_12;
        }
        if ( v9 - v10 <= 8 )
        {
          if ( v9 - v10 == 8 )
            *(_QWORD *)v9 = v13;
        }
        else
        {
          memmove(v10 + 8, v10, v9 - v10);
        }
        v9 += 8;
        *((_QWORD *)v11 - 7) = v12;
      }
      while ( v11 != v9 );
LABEL_12:
      v8 = v11;
      result = a2 - v11;
    }
    while ( a2 - v11 > 48 );
    v18 = v10;
    v6 = a2;
    v3 = v7;
    v19 = v8;
    v5 = v43;
    if ( a2 == v19 )
      goto LABEL_25;
    v20 = v18 + 64;
    if ( a2 == v18 + 64 )
      goto LABEL_25;
  }
  v38 = v5;
  v21 = v19;
  do
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)v20;
      v23 = *(_DWORD *)(*(_QWORD *)v20 + 4LL * (*(_DWORD *)(*(_QWORD *)v20 + 4LL) & 0xFFFFFF) + 8);
      if ( *(_DWORD *)(*(_QWORD *)v21 + 4LL * (*(_DWORD *)(*(_QWORD *)v21 + 4LL) & 0xFFFFFF) + 8) < v23 )
        break;
      v24 = *((_QWORD *)v20 - 1);
      result = (__int64)(v20 - 8);
      if ( *(_DWORD *)(v24 + 4LL * (*(_DWORD *)(v24 + 4) & 0xFFFFFF) + 8) >= v23 )
      {
        *(_QWORD *)v20 = v22;
      }
      else
      {
        do
        {
          *(_QWORD *)(result + 8) = v24;
          v25 = (_QWORD *)result;
          v24 = *(_QWORD *)(result - 8);
          result -= 8;
        }
        while ( *(_DWORD *)(v24 + 4LL * (*(_DWORD *)(v24 + 4) & 0xFFFFFF) + 8) < v23 );
        *v25 = v22;
      }
      v20 += 8;
      if ( v6 == v20 )
        goto LABEL_24;
    }
    result = v20 - v21;
    if ( v20 - v21 <= 8 )
    {
      if ( v20 - v21 == 8 )
        *(_QWORD *)v20 = *(_QWORD *)v21;
    }
    else
    {
      result = (__int64)memmove(v21 + 8, v21, v20 - v21);
    }
    v20 += 8;
    *(_QWORD *)v21 = v22;
  }
  while ( v6 != v20 );
LABEL_24:
  v5 = v38;
LABEL_25:
  v26 = 7;
  if ( v3 > 56 )
  {
    v39 = v5;
    while ( 1 )
    {
      v27 = 2 * v26;
      if ( v40 < 2 * v26 )
      {
        v31 = v40;
        v28 = a3;
        v29 = src;
      }
      else
      {
        v28 = a3;
        v29 = src;
        do
        {
          v30 = v29;
          v29 += 16 * v26;
          v28 = (_QWORD *)sub_8E4CC0(v30, &v29[-8 * v26], &v29[-8 * v26], v29, v28);
          v31 = (v6 - v29) >> 3;
        }
        while ( v27 <= v31 );
      }
      if ( v26 <= v31 )
        v31 = v26;
      v26 *= 4;
      sub_8E4CC0(v29, &v29[8 * v31], &v29[8 * v31], v6, v28);
      if ( v40 < v26 )
        break;
      v32 = src;
      v33 = a3;
      do
      {
        v34 = v33;
        v33 += 8 * v26;
        v32 = (_QWORD *)sub_8E4CC0(v34, &v33[8 * v27 - 8 * v26], &v33[8 * v27 - 8 * v26], v33, v32);
        v35 = (v39 - v33) >> 3;
      }
      while ( v26 <= v35 );
      if ( v35 > v27 )
        v35 = v27;
      result = sub_8E4CC0(v33, &v33[8 * v35], &v33[8 * v35], v39, v32);
      if ( v40 <= v26 )
        return result;
    }
    v36 = v40;
    if ( v40 > v27 )
      v36 = v27;
    return sub_8E4CC0(a3, &a3[8 * v36], &a3[8 * v36], v39, src);
  }
  return result;
}


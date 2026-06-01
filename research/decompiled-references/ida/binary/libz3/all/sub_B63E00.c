__int64 __fastcall sub_B63E00(char *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 i; // rdx
  char *v8; // r8
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // edx
  char *v13; // rbx
  unsigned int v14; // edi
  char *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // rbx
  char *v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdi
  unsigned int v21; // r8d
  bool v22; // r11
  char *v23; // r12
  __int64 k; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // r12
  char *v28; // rax
  unsigned int v29; // edi
  __int64 v30; // r8
  __int64 v31; // r11
  __int64 v32; // r10
  __int64 m; // rcx
  __int64 v34; // rax
  char *v35; // r9
  __int64 v36; // rcx
  char *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // edx

  result = a2 - a1;
  if ( a2 - a1 <= 64 )
    return result;
  v5 = result >> 3;
  for ( i = (a2 - a1) >> 2; a3; i = (v13 - a1) >> 2 )
  {
    v8 = &a1[4 * v5];
    v9 = *((_DWORD *)a1 + 1);
    v10 = *((_DWORD *)a2 - 1);
    --a3;
    v11 = *(_DWORD *)v8;
    v12 = *(_DWORD *)a1;
    v13 = a1 + 4;
    if ( v9 >= *(_DWORD *)v8 )
    {
      if ( v9 < v10 )
      {
LABEL_6:
        *(_DWORD *)a1 = v9;
        *((_DWORD *)a1 + 1) = v12;
        v14 = *((_DWORD *)a2 - 1);
        goto LABEL_7;
      }
      if ( v11 < v10 )
        goto LABEL_16;
    }
    else if ( v11 >= v10 )
    {
      if ( v9 >= v10 )
        goto LABEL_6;
LABEL_16:
      *(_DWORD *)a1 = v10;
      v14 = v12;
      *((_DWORD *)a2 - 1) = v12;
      v12 = *((_DWORD *)a1 + 1);
      goto LABEL_7;
    }
    *(_DWORD *)a1 = v11;
    *(_DWORD *)v8 = v12;
    v12 = *((_DWORD *)a1 + 1);
    v14 = *((_DWORD *)a2 - 1);
LABEL_7:
    v15 = a2;
    while ( 1 )
    {
      for ( j = *(_DWORD *)a1; v12 < j; v13 += 4 )
        v12 = *((_DWORD *)v13 + 1);
      v15 -= 4;
      if ( j < v14 )
      {
        do
          v15 -= 4;
        while ( j < *(_DWORD *)v15 );
      }
      if ( v13 >= v15 )
        break;
      v13 += 4;
      *((_DWORD *)v13 - 1) = *(_DWORD *)v15;
      v14 = *((_DWORD *)v15 - 1);
      *(_DWORD *)v15 = v12;
      v12 = *(_DWORD *)v13;
    }
    sub_B63E00(v13, a2, a3);
    result = v13 - a1;
    if ( v13 - a1 <= 64 )
      return result;
    a2 = v13;
    v5 = result >> 3;
  }
  v17 = v5 - 1;
  v18 = &a1[4 * v5 - 4];
  v19 = (i - 1) >> 1;
  v20 = v5 - 1;
  v21 = *(_DWORD *)v18;
  v22 = (i & 1) == 0;
  v23 = v18;
  if ( v19 <= v5 - 1 )
    goto LABEL_34;
LABEL_20:
  for ( k = v20; ; k = v25 )
  {
    v25 = 2 * (k + 1);
    v23 = &a1[8 * k + 8];
    if ( *(_DWORD *)v23 >= *((_DWORD *)v23 - 1) )
      break;
    --v25;
    v23 = &a1[4 * v25];
    *(_DWORD *)&a1[4 * k] = *(_DWORD *)v23;
    if ( v19 <= v25 )
      goto LABEL_25;
LABEL_22:
    ;
  }
  *(_DWORD *)&a1[4 * k] = *(_DWORD *)v23;
  if ( v19 > v25 )
    goto LABEL_22;
LABEL_25:
  if ( v17 == v25 && v22 )
    goto LABEL_62;
LABEL_27:
  v26 = (v25 - 1) >> 1;
  if ( v20 >= v25 )
    goto LABEL_36;
  while ( 1 )
  {
    v27 = &a1[4 * v26];
    v28 = &a1[4 * v25];
    if ( *(_DWORD *)v27 >= v21 )
      break;
    *(_DWORD *)v28 = *(_DWORD *)v27;
    v25 = v26;
    if ( v20 >= v26 )
    {
      v28 = &a1[4 * v26];
      break;
    }
    v26 = (v26 - 1) / 2;
  }
  *(_DWORD *)v28 = v21;
  if ( v20 )
  {
    while ( 1 )
    {
      v18 -= 4;
      --v20;
      v21 = *(_DWORD *)v18;
      v23 = v18;
      if ( v19 > v20 )
        goto LABEL_20;
LABEL_34:
      if ( v17 == v20 && v22 )
      {
        v25 = v20;
LABEL_62:
        v39 = 2 * v25 + 2;
        v40 = *(_DWORD *)&a1[4 * v39 - 4];
        v25 = v39 - 1;
        *(_DWORD *)v23 = v40;
        v23 = &a1[4 * v25];
        goto LABEL_27;
      }
LABEL_36:
      *(_DWORD *)v23 = v21;
    }
  }
  result = a2 - a1;
  if ( a2 - a1 > 4 )
  {
LABEL_39:
    while ( 1 )
    {
      a2 -= 4;
      v29 = *(_DWORD *)a2;
      v30 = a2 - a1;
      *(_DWORD *)a2 = *(_DWORD *)a1;
      v31 = (a2 - a1) >> 2;
      v32 = (v31 - 1) / 2;
      if ( a2 - a1 > 8 )
        break;
      result = (__int64)a1;
      if ( (v31 & 1) == 0 && (unsigned __int64)(v31 - 1) <= 2 )
      {
        v35 = a1;
        v34 = 0;
        goto LABEL_60;
      }
LABEL_52:
      *(_DWORD *)result = v29;
      if ( v30 <= 4 )
        return result;
    }
    for ( m = 0; ; m = v34 )
    {
      v34 = 2 * (m + 1);
      v35 = &a1[8 * m + 8];
      if ( *(_DWORD *)v35 < *((_DWORD *)v35 - 1) )
      {
        --v34;
        v35 = &a1[4 * v34];
        *(_DWORD *)&a1[4 * m] = *(_DWORD *)v35;
        if ( v32 <= v34 )
          goto LABEL_45;
      }
      else
      {
        *(_DWORD *)&a1[4 * m] = *(_DWORD *)v35;
        if ( v32 <= v34 )
        {
LABEL_45:
          if ( (v31 & 1) != 0 || (v31 - 2) >> 1 != v34 )
          {
            v36 = (v34 - 1) / 2;
            if ( v34 )
              goto LABEL_51;
            *(_DWORD *)v35 = v29;
            goto LABEL_39;
          }
LABEL_60:
          v38 = 2 * v34 + 2;
          *(_DWORD *)v35 = *(_DWORD *)&a1[4 * v38 - 4];
          v34 = 2 * v34 + 1;
          v36 = (v38 >> 1) - 1;
LABEL_51:
          while ( 1 )
          {
            v37 = &a1[4 * v36];
            result = (__int64)&a1[4 * v34];
            if ( *(_DWORD *)v37 >= v29 )
              goto LABEL_52;
            *(_DWORD *)result = *(_DWORD *)v37;
            v34 = v36;
            if ( !v36 )
            {
              result = (__int64)a1;
              *(_DWORD *)v37 = v29;
              if ( v30 > 4 )
                goto LABEL_39;
              return result;
            }
            v36 = (v36 - 1) / 2;
          }
        }
      }
    }
  }
  return result;
}


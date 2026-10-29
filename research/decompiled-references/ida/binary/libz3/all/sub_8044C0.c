__int64 __fastcall sub_8044C0(char *src, char *a2, char *a3)
{
  __int64 v3; // r15
  char *v4; // r13
  __int64 result; // rax
  char *v6; // rbp
  char *v7; // rbx
  char *v8; // r14
  char *v9; // r12
  char *v10; // rbp
  char *v11; // r13
  unsigned int v12; // esi
  size_t v13; // rdx
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v16; // rax
  __int16 v17; // si
  __int16 v18; // dx
  char *j; // rax
  __int64 v20; // rdx
  char *v21; // rsi
  __int16 v22; // cx
  char *v23; // r14
  unsigned int v24; // r8d
  unsigned int v25; // esi
  size_t v26; // rdx
  bool v27; // zf
  __int64 v28; // r12
  __int16 v29; // dx
  __int16 v30; // cx
  __int64 v31; // rdx
  char *v32; // rsi
  __int16 v33; // cx
  __int64 v34; // rbx
  __int64 v35; // r14
  _QWORD *v36; // r8
  char *v37; // rbp
  char *v38; // rdi
  __int64 v39; // rdx
  _QWORD *v40; // r8
  char *v41; // rbp
  char *v42; // rdi
  __int64 v43; // rdx
  unsigned int v44; // r8d
  char *k; // rax
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int16 v48; // cx
  unsigned int v49; // r8d
  char *i; // rax
  unsigned int v51; // edi
  __int64 v52; // rdx
  __int16 v53; // cx
  unsigned int v54; // edi
  __int64 v55; // rdx
  __int16 v56; // cx
  unsigned int v57; // edi
  __int64 v58; // rdx
  __int16 v59; // cx
  unsigned int v60; // ecx
  char *v62; // [rsp+0h] [rbp-58h]
  __int64 v63; // [rsp+8h] [rbp-50h]

  v3 = a2 - src;
  v4 = &a3[a2 - src];
  result = (a2 - src) >> 3;
  v6 = a2;
  v7 = src;
  v63 = result;
  if ( a2 - src <= 48 )
  {
    if ( a2 == src )
      return result;
    v23 = src + 8;
    if ( a2 == src + 8 )
      return result;
    while ( 1 )
    {
LABEL_30:
      while ( 1 )
      {
        v28 = *(_QWORD *)v23;
        result = *(_QWORD *)v7;
        v29 = *(_WORD *)(*(_QWORD *)v23 + 4LL);
        v30 = *(_WORD *)(*(_QWORD *)v7 + 4LL);
        if ( v29 )
          break;
        v24 = *(unsigned __int16 *)(v28 + 28);
        v25 = v24;
        if ( !v30 )
        {
          if ( v24 >= *(unsigned __int16 *)(result + 28) )
          {
            for ( result = (__int64)v23; ; result -= 8 )
            {
LABEL_92:
              v55 = *(_QWORD *)(result - 8);
              v32 = (char *)result;
              v56 = *(_WORD *)(v55 + 4);
              if ( v56 )
              {
                v54 = 1;
                if ( v56 == 2 )
                  v54 = *(_DWORD *)(v55 + 40);
              }
              else
              {
                v54 = *(unsigned __int16 *)(v55 + 28);
              }
              if ( v24 >= v54 )
                break;
              *(_QWORD *)result = v55;
            }
            goto LABEL_39;
          }
          goto LABEL_27;
        }
LABEL_84:
        if ( v30 != 2 )
        {
          if ( v25 )
            goto LABEL_86;
          goto LABEL_27;
        }
        if ( v25 >= *(_DWORD *)(result + 40) )
        {
LABEL_86:
          result = (__int64)v23;
          if ( !v29 )
          {
            v24 = *(unsigned __int16 *)(v28 + 28);
            goto LABEL_92;
          }
          v57 = *(_DWORD *)(v28 + 40);
          while ( 1 )
          {
            v58 = *(_QWORD *)(result - 8);
            v32 = (char *)result;
            v59 = *(_WORD *)(v58 + 4);
            if ( v59 )
              goto LABEL_110;
            v60 = *(unsigned __int16 *)(v58 + 28);
LABEL_112:
            if ( v57 >= v60 )
              goto LABEL_39;
            *(_QWORD *)result = v58;
            result -= 8;
          }
        }
        v26 = v23 - v7;
        v27 = v23 - v7 == 8;
        if ( v23 - v7 <= 8 )
        {
LABEL_100:
          if ( v27 )
            *(_QWORD *)v23 = result;
          goto LABEL_29;
        }
LABEL_28:
        result = (__int64)memmove(&v23[-v26 + 8], v7, v26);
LABEL_29:
        v23 += 8;
        *(_QWORD *)v7 = v28;
        if ( v6 == v23 )
          goto LABEL_40;
      }
      if ( v29 == 2 )
      {
        v57 = *(_DWORD *)(v28 + 40);
        v25 = v57;
        if ( !v30 )
        {
          if ( v57 >= *(unsigned __int16 *)(result + 28) )
          {
            result = (__int64)v23;
            v58 = *((_QWORD *)v23 - 1);
            v32 = v23;
            v59 = *(_WORD *)(v58 + 4);
            if ( !v59 )
            {
              v60 = *(unsigned __int16 *)(v58 + 28);
              goto LABEL_112;
            }
LABEL_110:
            if ( v59 == 2 )
              v60 = *(_DWORD *)(v58 + 40);
            else
              v60 = 1;
            goto LABEL_112;
          }
          goto LABEL_27;
        }
        goto LABEL_84;
      }
      if ( v30 )
      {
        if ( v30 != 2 || *(_DWORD *)(result + 40) <= 1u )
          goto LABEL_34;
LABEL_27:
        v26 = v23 - v7;
        v27 = v23 - v7 == 8;
        if ( v23 - v7 <= 8 )
          goto LABEL_100;
        goto LABEL_28;
      }
      if ( *(_WORD *)(result + 28) > 1u )
        goto LABEL_27;
LABEL_34:
      result = (__int64)v23;
      v31 = *((_QWORD *)v23 - 1);
      v32 = v23;
      v33 = *(_WORD *)(v31 + 4);
      if ( v33 )
      {
LABEL_35:
        if ( v33 != 2 || *(_DWORD *)(v31 + 40) <= 1u )
          goto LABEL_39;
        goto LABEL_37;
      }
      while ( *(unsigned __int16 *)(v31 + 28) > 1u )
      {
LABEL_37:
        *(_QWORD *)result = v31;
        v31 = *(_QWORD *)(result - 16);
        result -= 8;
        v32 = (char *)result;
        v33 = *(_WORD *)(v31 + 4);
        if ( v33 )
          goto LABEL_35;
      }
LABEL_39:
      v23 += 8;
      *(_QWORD *)v32 = v28;
      if ( v6 == v23 )
        goto LABEL_40;
    }
  }
  v8 = &a3[a2 - src];
  do
  {
    v9 = v7 + 8;
    v10 = v7;
    v11 = v7 + 56;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)v9;
        v16 = *((_QWORD *)v11 - 7);
        v17 = *(_WORD *)(*(_QWORD *)v9 + 4LL);
        v18 = *(_WORD *)(v16 + 4);
        if ( v17 )
          break;
        v12 = *(unsigned __int16 *)(v15 + 28);
        if ( !v18 )
        {
          if ( (unsigned __int16)v12 < *(_WORD *)(v16 + 28) )
            goto LABEL_6;
LABEL_66:
          v49 = *(unsigned __int16 *)(v15 + 28);
          for ( i = v9; ; i -= 8 )
          {
            v52 = *((_QWORD *)i - 1);
            v21 = i;
            v53 = *(_WORD *)(v52 + 4);
            if ( v53 )
            {
              v51 = 1;
              if ( v53 == 2 )
                v51 = *(_DWORD *)(v52 + 40);
            }
            else
            {
              v51 = *(unsigned __int16 *)(v52 + 28);
            }
            if ( v49 >= v51 )
              break;
            *(_QWORD *)i = v52;
          }
          goto LABEL_20;
        }
        if ( v18 != 2 )
        {
          if ( !*(_WORD *)(v15 + 28) )
            goto LABEL_6;
          goto LABEL_66;
        }
        if ( v12 >= *(_DWORD *)(v16 + 40) )
          goto LABEL_66;
        v13 = v9 - v10;
        v14 = v9 - v10 == 8;
        if ( v9 - v10 <= 8 )
        {
LABEL_75:
          if ( v14 )
            *(_QWORD *)v9 = v16;
          goto LABEL_8;
        }
LABEL_7:
        memmove(&v9[8 - v13], v10, v13);
LABEL_8:
        v9 += 8;
        *((_QWORD *)v11 - 7) = v15;
        if ( v11 == v9 )
          goto LABEL_21;
      }
      if ( v17 != 2 )
      {
        if ( v18 )
        {
          if ( v18 != 2 || *(_DWORD *)(v16 + 40) <= 1u )
          {
LABEL_14:
            for ( j = v9; ; j -= 8 )
            {
              v20 = *((_QWORD *)j - 1);
              v21 = j;
              v22 = *(_WORD *)(v20 + 4);
              if ( v22 )
              {
                if ( v22 != 2 || *(_DWORD *)(v20 + 40) <= 1u )
                  goto LABEL_20;
              }
              else if ( *(unsigned __int16 *)(v20 + 28) <= 1u )
              {
                goto LABEL_20;
              }
              *(_QWORD *)j = v20;
            }
          }
        }
        else if ( *(_WORD *)(v16 + 28) <= 1u )
        {
          goto LABEL_14;
        }
LABEL_6:
        v13 = v9 - v10;
        v14 = v9 - v10 == 8;
        if ( v9 - v10 <= 8 )
          goto LABEL_75;
        goto LABEL_7;
      }
      v44 = *(_DWORD *)(v15 + 40);
      if ( v18 )
      {
        if ( v18 == 2 )
        {
          if ( v44 < *(_DWORD *)(v16 + 40) )
            goto LABEL_6;
        }
        else if ( !v44 )
        {
          goto LABEL_6;
        }
      }
      else if ( v44 < *(unsigned __int16 *)(v16 + 28) )
      {
        goto LABEL_6;
      }
      for ( k = v9; ; k -= 8 )
      {
        v47 = *((_QWORD *)k - 1);
        v21 = k;
        v48 = *(_WORD *)(v47 + 4);
        if ( v48 )
          v46 = v48 == 2 ? *(_DWORD *)(v47 + 40) : 1;
        else
          v46 = *(unsigned __int16 *)(v47 + 28);
        if ( v44 >= v46 )
          break;
        *(_QWORD *)k = v47;
      }
LABEL_20:
      v9 += 8;
      *(_QWORD *)v21 = v15;
    }
    while ( v11 != v9 );
LABEL_21:
    v7 = v11;
  }
  while ( a2 - v11 > 48 );
  result = (__int64)v10;
  v6 = a2;
  v4 = v8;
  if ( a2 != v7 )
  {
    v23 = (char *)(result + 64);
    if ( a2 != (char *)(result + 64) )
      goto LABEL_30;
  }
LABEL_40:
  v34 = 7;
  if ( v3 > 56 )
  {
    v62 = v6;
    while ( 1 )
    {
      v35 = 2 * v34;
      if ( v63 < 2 * v34 )
      {
        v39 = v63;
        v36 = a3;
        v37 = src;
      }
      else
      {
        v36 = a3;
        v37 = src;
        do
        {
          v38 = v37;
          v37 += 16 * v34;
          v36 = (_QWORD *)sub_803E50(v38, &v37[-8 * v34], &v37[-8 * v34], v37, v36);
          v39 = (v62 - v37) >> 3;
        }
        while ( v35 <= v39 );
      }
      if ( v39 > v34 )
        v39 = v34;
      v34 *= 4;
      sub_803E50(v37, &v37[8 * v39], &v37[8 * v39], v62, v36);
      if ( v63 < v34 )
        break;
      v40 = src;
      v41 = a3;
      do
      {
        v42 = v41;
        v41 += 8 * v34;
        v40 = (_QWORD *)sub_803E50(v42, &v41[8 * v35 - 8 * v34], &v41[8 * v35 - 8 * v34], v41, v40);
        v43 = (v4 - v41) >> 3;
      }
      while ( v34 <= v43 );
      if ( v43 > v35 )
        v43 = v35;
      result = sub_803E50(v41, &v41[8 * v43], &v41[8 * v43], v4, v40);
      if ( v63 <= v34 )
        return result;
    }
    if ( v63 <= v35 )
      v35 = v63;
    return sub_803E50(a3, &a3[8 * v35], &a3[8 * v35], v4, src);
  }
  return result;
}


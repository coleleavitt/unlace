char *__fastcall sub_59CD40(_DWORD *a1, char **a2)
{
  int v4; // edx
  unsigned int v5; // r12d
  int v6; // eax
  __int64 v7; // rbp
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r12
  int v16; // eax
  unsigned int *v17; // rdi
  char *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  char *result; // rax
  int v22; // eax
  char *v23; // rbx
  char *v24; // rsi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  char *v28; // rax
  __int64 v29; // rcx
  char *v30; // rdx
  unsigned int v31; // r9d
  __int64 v32; // rdx
  char *v33; // rbx
  char *v34; // r14
  char *v35; // r8
  char *v36; // rdx
  int v37; // edi
  __int64 v38; // rsi
  char *v39; // rdx
  char *v40; // rbp
  __int64 v41; // rdx
  char *v42; // rbx
  char *v43; // rbp
  __int64 v44; // rdi
  __int64 v45; // [rsp+0h] [rbp-58h]
  int v46; // [rsp+0h] [rbp-58h]
  char *v47; // [rsp+0h] [rbp-58h]
  __int64 v48; // [rsp+8h] [rbp-50h]
  int v49; // [rsp+8h] [rbp-50h]
  unsigned int v50; // [rsp+8h] [rbp-50h]
  int v51; // [rsp+10h] [rbp-48h]
  char *v52; // [rsp+10h] [rbp-48h]
  __int64 v53; // [rsp+18h] [rbp-40h]

  v4 = a1[2];
  v5 = 2 * v4;
  if ( 3 * v4 >= (unsigned int)(4 * (a1[3] + a1[4])) )
    goto LABEL_2;
  v28 = (char *)sub_186B270(24LL * v5);
  v29 = 24LL * v5;
  v47 = v28;
  v30 = &v28[v29];
  if ( v5 )
  {
    do
    {
      *(_QWORD *)v28 = 0;
      v28 += 24;
      *((_QWORD *)v28 - 2) = 0;
    }
    while ( v28 != v30 );
  }
  v31 = v5 - 1;
  v32 = (unsigned int)a1[2];
  v33 = (char *)(*(_QWORD *)a1 + 8LL);
  v34 = (char *)(*(_QWORD *)a1 + 24 * v32);
  v35 = &v47[v29];
  if ( *(char **)a1 != v34 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v33 - 1) != 2 )
      {
        v36 = v33 + 24;
        if ( v34 == v33 + 16 )
          goto LABEL_56;
        goto LABEL_45;
      }
      v37 = *((_DWORD *)v33 - 2);
      v38 = 24LL * (v37 & v31);
      v39 = &v47[v38];
      if ( v38 == v29 )
      {
LABEL_71:
        if ( v39 == v47 )
        {
LABEL_88:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v40 = v47;
        while ( *((_DWORD *)v40 + 1) )
        {
          v40 += 24;
          if ( v39 == v40 )
            goto LABEL_88;
        }
        *(_DWORD *)v40 = v37;
        *((_DWORD *)v40 + 1) = 2;
        if ( v33 != v40 + 8 )
        {
          v41 = *((_QWORD *)v40 + 1);
          if ( v41 )
          {
LABEL_53:
            v53 = v29;
            v52 = v35;
            v50 = v31;
            sub_186B220((void *)(v41 - 8));
            v29 = v53;
            v35 = v52;
            v31 = v50;
          }
LABEL_54:
          *((_QWORD *)v40 + 1) = 0;
          *((_QWORD *)v40 + 1) = *(_QWORD *)v33;
          *(_QWORD *)v33 = 0;
        }
      }
      else
      {
        v40 = &v47[v38];
        while ( *((_DWORD *)v40 + 1) )
        {
          v40 += 24;
          if ( v35 == v40 )
            goto LABEL_71;
        }
        *(_DWORD *)v40 = v37;
        *((_DWORD *)v40 + 1) = 2;
        if ( v33 != v40 + 8 )
        {
          v41 = *((_QWORD *)v40 + 1);
          if ( v41 )
            goto LABEL_53;
          goto LABEL_54;
        }
      }
      *((_QWORD *)v40 + 2) = *((_QWORD *)v33 + 1);
      v36 = v33 + 24;
      if ( v34 == v33 + 16 )
      {
LABEL_56:
        v32 = (unsigned int)a1[2];
        v34 = *(char **)a1;
        break;
      }
LABEL_45:
      v33 = v36;
    }
  }
  if ( v34 )
  {
    if ( (_DWORD)v32 )
    {
      v42 = v34;
      v43 = &v34[24 * v32];
      do
      {
        while ( 1 )
        {
          v44 = *((_QWORD *)v42 + 1);
          if ( !v44 )
            break;
          v42 += 24;
          sub_186B220((void *)(v44 - 8));
          if ( v43 == v42 )
            goto LABEL_62;
        }
        v42 += 24;
      }
      while ( v43 != v42 );
    }
LABEL_62:
    sub_186B220(v34);
  }
  a1[2] = v5;
  a1[4] = 0;
  *(_QWORD *)a1 = v47;
LABEL_2:
  v6 = sub_57E150(a2);
  v7 = *(_QWORD *)a1;
  v8 = v6;
  v9 = (unsigned int)a1[2];
  v10 = v9 - 1;
  v9 *= 24;
  v11 = *(_QWORD *)a1 + v9;
  v12 = 24LL * (v8 & v10);
  v13 = *(_QWORD *)a1 + v12;
  if ( v12 == v9 )
  {
    v15 = 0;
LABEL_18:
    if ( v7 == v13 )
    {
LABEL_66:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v22 = *(_DWORD *)(v7 + 4);
      if ( v22 == 2 )
      {
        if ( v8 != *(_DWORD *)v7 )
          goto LABEL_22;
        v23 = *(char **)(v7 + 8);
        v24 = *a2;
        if ( v23 )
        {
          v25 = *((unsigned int *)v23 - 1);
          if ( !v24 )
          {
            if ( !(_DWORD)v25 )
              goto LABEL_29;
            goto LABEL_22;
          }
        }
        else
        {
          if ( !v24 )
            goto LABEL_30;
          v25 = 0;
        }
        if ( (_DWORD)v25 == *((_DWORD *)v24 - 1) )
        {
          v49 = v8;
          v45 = v13;
          v26 = memcmp(*(const void **)(v7 + 8), v24, 8 * v25);
          v13 = v45;
          v8 = v49;
          if ( !v26 )
          {
LABEL_29:
            v24 = v23;
LABEL_30:
            if ( a2 != (char **)(v7 + 8) )
            {
              sub_186B220(v24 - 8);
              *(_QWORD *)(v7 + 8) = 0;
              *(_QWORD *)(v7 + 8) = *a2;
              *a2 = nullptr;
            }
            result = a2[1];
            *(_DWORD *)(v7 + 4) = 2;
            *(_QWORD *)(v7 + 16) = result;
            return result;
          }
        }
      }
      else
      {
        if ( !v22 )
        {
          if ( v15 )
            --a1[4];
          else
            v15 = v7;
          if ( a2 == (char **)(v15 + 8) )
            goto LABEL_39;
          v27 = *(_QWORD *)(v15 + 8);
          if ( !v27 )
            goto LABEL_38;
LABEL_37:
          v46 = v8;
          sub_186B220((void *)(v27 - 8));
          v8 = v46;
LABEL_38:
          *(_QWORD *)(v15 + 8) = 0;
          *(_QWORD *)(v15 + 8) = *a2;
          *a2 = nullptr;
          goto LABEL_39;
        }
        v15 = v7;
      }
LABEL_22:
      v7 += 24;
      if ( v13 == v7 )
        goto LABEL_66;
    }
  }
  v14 = *(_QWORD *)a1 + v12;
  v15 = 0;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v14 + 4);
    if ( v16 != 2 )
      break;
    if ( *(_DWORD *)v14 != v8 )
      goto LABEL_6;
    v17 = *(unsigned int **)(v14 + 8);
    v18 = *a2;
    if ( v17 )
    {
      v19 = *(v17 - 1);
      if ( !v18 )
      {
        if ( !(_DWORD)v19 )
          goto LABEL_13;
        goto LABEL_6;
      }
    }
    else
    {
      if ( !v18 )
        goto LABEL_14;
      v19 = 0;
    }
    if ( (_DWORD)v19 == *((_DWORD *)v18 - 1) )
    {
      v51 = v8;
      v48 = v13;
      v20 = memcmp(v17, v18, 8 * v19);
      v13 = v48;
      v8 = v51;
      if ( !v20 )
      {
LABEL_13:
        v18 = (char *)v17;
LABEL_14:
        if ( a2 != (char **)(v14 + 8) )
        {
          sub_186B220(v18 - 8);
          *(_QWORD *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 8) = *a2;
          *a2 = nullptr;
        }
        result = a2[1];
        *(_DWORD *)(v14 + 4) = 2;
        *(_QWORD *)(v14 + 16) = result;
        return result;
      }
    }
LABEL_6:
    v14 += 24;
    if ( v11 == v14 )
      goto LABEL_18;
  }
  if ( v16 )
  {
    v15 = v14;
    goto LABEL_6;
  }
  if ( v15 )
    --a1[4];
  else
    v15 = v14;
  if ( a2 != (char **)(v15 + 8) )
  {
    v27 = *(_QWORD *)(v15 + 8);
    if ( v27 )
      goto LABEL_37;
    goto LABEL_38;
  }
LABEL_39:
  result = a2[1];
  *(_DWORD *)v15 = v8;
  *(_DWORD *)(v15 + 4) = 2;
  *(_QWORD *)(v15 + 16) = result;
  ++a1[3];
  return result;
}


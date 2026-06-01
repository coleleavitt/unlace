char *__fastcall sub_5833A0(_DWORD *a1, char **a2)
{
  int v4; // edx
  unsigned int v5; // r12d
  char *v6; // rax
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v9; // r10
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // edx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r12
  int v19; // eax
  _DWORD *v20; // rdi
  char *v21; // rsi
  int v22; // edx
  __int64 v23; // rax
  int v24; // eax
  char *result; // rax
  int v26; // eax
  char *v27; // rbx
  char *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  char *v32; // rax
  __int64 v33; // rcx
  char *v34; // rdx
  unsigned int v35; // r9d
  __int64 v36; // rdx
  char *v37; // rbx
  char *v38; // r14
  char *v39; // r8
  char *v40; // rdx
  int v41; // edi
  __int64 v42; // rsi
  char *v43; // rdx
  char *v44; // rbp
  __int64 v45; // rdx
  char *v46; // rbx
  char *v47; // rbp
  __int64 v48; // rdi
  int v49; // [rsp+0h] [rbp-68h]
  __int64 v50; // [rsp+0h] [rbp-68h]
  int v51; // [rsp+0h] [rbp-68h]
  char *v52; // [rsp+0h] [rbp-68h]
  __int64 v53; // [rsp+8h] [rbp-60h]
  int v54; // [rsp+8h] [rbp-60h]
  unsigned int v55; // [rsp+8h] [rbp-60h]
  int v56; // [rsp+10h] [rbp-58h]
  char *v57; // [rsp+10h] [rbp-58h]
  __int64 v58; // [rsp+18h] [rbp-50h]
  _QWORD v59[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a1[2];
  v5 = 2 * v4;
  if ( 3 * v4 < (unsigned int)(4 * (a1[3] + a1[4])) )
  {
    v32 = (char *)sub_186B270(24LL * v5);
    v33 = 24LL * v5;
    v52 = v32;
    v34 = &v32[v33];
    if ( v5 )
    {
      do
      {
        *(_QWORD *)v32 = 0;
        v32 += 24;
        *((_QWORD *)v32 - 2) = 0;
      }
      while ( v32 != v34 );
    }
    v35 = v5 - 1;
    v36 = (unsigned int)a1[2];
    v37 = (char *)(*(_QWORD *)a1 + 8LL);
    v38 = (char *)(*(_QWORD *)a1 + 24 * v36);
    v39 = &v52[v33];
    if ( *(char **)a1 == v38 )
    {
LABEL_61:
      if ( v38 )
      {
        if ( (_DWORD)v36 )
        {
          v46 = v38;
          v47 = &v38[24 * v36];
          do
          {
            while ( 1 )
            {
              v48 = *((_QWORD *)v46 + 1);
              if ( !v48 )
                break;
              v46 += 24;
              sub_186B220((void *)(v48 - 8));
              if ( v47 == v46 )
                goto LABEL_66;
            }
            v46 += 24;
          }
          while ( v46 != v47 );
        }
LABEL_66:
        sub_186B220(v38);
      }
      a1[2] = v5;
      a1[4] = 0;
      *(_QWORD *)a1 = v52;
      v6 = *a2;
      if ( *a2 )
        goto LABEL_3;
LABEL_68:
      v59[0] = 0;
      v10 = sub_5783B0((__int64)v59, 0);
      goto LABEL_5;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v37 - 1) != 2 )
      {
        v40 = v37 + 24;
        if ( v38 == v37 + 16 )
          goto LABEL_60;
        goto LABEL_49;
      }
      v41 = *((_DWORD *)v37 - 2);
      v42 = 24LL * (v41 & v35);
      v43 = &v52[v42];
      if ( v42 == v33 )
      {
LABEL_75:
        if ( v43 == v52 )
        {
LABEL_92:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v44 = v52;
        while ( *((_DWORD *)v44 + 1) )
        {
          v44 += 24;
          if ( v43 == v44 )
            goto LABEL_92;
        }
        *(_DWORD *)v44 = v41;
        *((_DWORD *)v44 + 1) = 2;
        if ( v37 != v44 + 8 )
        {
          v45 = *((_QWORD *)v44 + 1);
          if ( v45 )
          {
LABEL_57:
            v58 = v33;
            v57 = v39;
            v55 = v35;
            sub_186B220((void *)(v45 - 8));
            v33 = v58;
            v39 = v57;
            v35 = v55;
          }
LABEL_58:
          *((_QWORD *)v44 + 1) = 0;
          *((_QWORD *)v44 + 1) = *(_QWORD *)v37;
          *(_QWORD *)v37 = 0;
        }
      }
      else
      {
        v44 = &v52[v42];
        while ( *((_DWORD *)v44 + 1) )
        {
          v44 += 24;
          if ( v39 == v44 )
            goto LABEL_75;
        }
        *(_DWORD *)v44 = v41;
        *((_DWORD *)v44 + 1) = 2;
        if ( v37 != v44 + 8 )
        {
          v45 = *((_QWORD *)v44 + 1);
          if ( v45 )
            goto LABEL_57;
          goto LABEL_58;
        }
      }
      *((_QWORD *)v44 + 2) = *((_QWORD *)v37 + 1);
      v40 = v37 + 24;
      if ( v38 == v37 + 16 )
      {
LABEL_60:
        v36 = (unsigned int)a1[2];
        v38 = *(char **)a1;
        goto LABEL_61;
      }
LABEL_49:
      v37 = v40;
    }
  }
  v6 = *a2;
  if ( !*a2 )
    goto LABEL_68;
LABEL_3:
  v7 = *((_DWORD *)v6 - 1);
  v59[0] = 0;
  sub_52CD90(v59, a2);
  v8 = sub_5783B0((__int64)v59, v7);
  v10 = v8;
  if ( v9 )
  {
    v49 = v8;
    sub_186B220((void *)(v9 - 8));
    v10 = v49;
  }
LABEL_5:
  v11 = (unsigned int)a1[2];
  v12 = *(_QWORD *)a1;
  v13 = v11 - 1;
  v11 *= 24;
  v14 = *(_QWORD *)a1 + v11;
  v15 = 24LL * (v10 & v13);
  v16 = *(_QWORD *)a1 + v15;
  if ( v15 == v11 )
  {
    v18 = 0;
LABEL_22:
    if ( v12 == v16 )
    {
LABEL_71:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v26 = *(_DWORD *)(v12 + 4);
      if ( v26 == 2 )
      {
        if ( *(_DWORD *)v12 != v10 )
          goto LABEL_26;
        v27 = *(char **)(v12 + 8);
        v28 = *a2;
        if ( v27 )
        {
          v29 = *((unsigned int *)v27 - 1);
          if ( !v28 )
          {
            if ( !(_DWORD)v29 )
              goto LABEL_33;
            goto LABEL_26;
          }
        }
        else
        {
          if ( !v28 )
            goto LABEL_34;
          v29 = 0;
        }
        if ( (_DWORD)v29 == *((_DWORD *)v28 - 1) )
        {
          v54 = v10;
          v50 = v16;
          v30 = memcmp(*(const void **)(v12 + 8), v28, 8 * v29);
          v16 = v50;
          v10 = v54;
          if ( !v30 )
          {
LABEL_33:
            v28 = v27;
LABEL_34:
            if ( a2 != (char **)(v12 + 8) )
            {
              sub_186B220(v28 - 8);
              *(_QWORD *)(v12 + 8) = 0;
              *(_QWORD *)(v12 + 8) = *a2;
              *a2 = nullptr;
            }
            result = a2[1];
            *(_DWORD *)(v12 + 4) = 2;
            *(_QWORD *)(v12 + 16) = result;
            return result;
          }
        }
      }
      else
      {
        if ( !v26 )
        {
          if ( v18 )
            --a1[4];
          else
            v18 = v12;
          if ( a2 == (char **)(v18 + 8) )
            goto LABEL_43;
          v31 = *(_QWORD *)(v18 + 8);
          if ( !v31 )
            goto LABEL_42;
LABEL_41:
          v51 = v10;
          sub_186B220((void *)(v31 - 8));
          v10 = v51;
LABEL_42:
          *(_QWORD *)(v18 + 8) = 0;
          *(_QWORD *)(v18 + 8) = *a2;
          *a2 = nullptr;
          goto LABEL_43;
        }
        v18 = v12;
      }
LABEL_26:
      v12 += 24;
      if ( v16 == v12 )
        goto LABEL_71;
    }
  }
  v17 = *(_QWORD *)a1 + v15;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_DWORD *)(v17 + 4);
    if ( v19 != 2 )
      break;
    if ( *(_DWORD *)v17 != v10 )
      goto LABEL_9;
    v20 = *(_DWORD **)(v17 + 8);
    v21 = *a2;
    if ( v20 )
    {
      v22 = *(v20 - 1);
      if ( !v21 )
      {
        v23 = 0;
        goto LABEL_15;
      }
    }
    else
    {
      if ( !v21 )
        goto LABEL_18;
      v22 = 0;
    }
    v23 = *((unsigned int *)v21 - 1);
LABEL_15:
    if ( (_DWORD)v23 == v22 )
    {
      v56 = v10;
      v53 = v16;
      v24 = memcmp(v20, v21, 8 * v23);
      v16 = v53;
      v10 = v56;
      if ( !v24 )
      {
        v21 = (char *)v20;
LABEL_18:
        if ( a2 != (char **)(v17 + 8) )
        {
          sub_186B220(v21 - 8);
          *(_QWORD *)(v17 + 8) = 0;
          *(_QWORD *)(v17 + 8) = *a2;
          *a2 = nullptr;
        }
        result = a2[1];
        *(_DWORD *)(v17 + 4) = 2;
        *(_QWORD *)(v17 + 16) = result;
        return result;
      }
    }
LABEL_9:
    v17 += 24;
    if ( v14 == v17 )
      goto LABEL_22;
  }
  if ( v19 )
  {
    v18 = v17;
    goto LABEL_9;
  }
  if ( v18 )
    --a1[4];
  else
    v18 = v17;
  if ( a2 != (char **)(v18 + 8) )
  {
    v31 = *(_QWORD *)(v18 + 8);
    if ( v31 )
      goto LABEL_41;
    goto LABEL_42;
  }
LABEL_43:
  result = a2[1];
  *(_DWORD *)v18 = v10;
  *(_DWORD *)(v18 + 4) = 2;
  *(_QWORD *)(v18 + 16) = result;
  ++a1[3];
  return result;
}


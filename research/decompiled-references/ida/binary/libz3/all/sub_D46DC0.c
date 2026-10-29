__int64 *__fastcall sub_D46DC0(__int64 a1, __int64 *a2, void **a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  char v7; // al
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __int64 *v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // r15
  __int64 v19; // r8
  int v20; // edi
  _QWORD *v21; // rbx
  unsigned int v22; // r10d
  __int64 v23; // r8
  _QWORD *v24; // r13
  int v25; // ecx
  __int64 v26; // r10
  _QWORD *v27; // r11
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 *result; // rax
  __int64 v36; // rdx
  __int64 *i; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  int v40; // ecx
  __int64 *v41; // r11
  char *v42; // r9
  void **v43; // rax
  __int64 *v44; // r14
  __int64 *v45; // rbp
  __int64 *v46; // r9
  _QWORD *v47; // r12
  __int64 *v48; // rbx
  void **v49; // r11
  __int64 v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 n; // [rsp+0h] [rbp-68h]
  unsigned int na; // [rsp+0h] [rbp-68h]
  int v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+8h] [rbp-60h]
  int v59; // [rsp+18h] [rbp-50h]

  v4 = a1;
  v5 = a2[9];
  if ( v5 )
  {
    v7 = *(_BYTE *)(v5 + 3) >> 6;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
LABEL_4:
        if ( v7 == 2 )
          v8 = (unsigned int)(*(_DWORD *)(v5 + 4) - 1);
        else
          v8 = *(unsigned int *)(v5 + 4);
LABEL_6:
        if ( (_DWORD)v8 )
        {
          v9 = 0;
          while ( 1 )
          {
            v11 = *a2;
            if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
            {
              v10 = *(_QWORD *)(v11 + 864);
              goto LABEL_9;
            }
            v12 = a2[9];
            v13 = 17;
            while ( 1 )
            {
              if ( *(char *)(v12 + 3) < 0 )
              {
                if ( *(_BYTE *)(v12 + 3) >> 6 != 2 )
                {
                  v14 = (__int64 *)(*(_QWORD *)(v12 + 16) + 8 * v9);
                  goto LABEL_15;
                }
                goto LABEL_17;
              }
              if ( *(_DWORD *)(v12 + 4) == (_DWORD)v9 )
                break;
LABEL_17:
              v12 = *(_QWORD *)(v12 + 16);
              if ( !--v13 )
              {
                sub_233F80((__int64 *)(v11 + 616), (_DWORD *)a2 + 18);
                v14 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8 * v9);
                goto LABEL_15;
              }
            }
            v14 = (__int64 *)(v12 + 8);
LABEL_15:
            v10 = *v14;
LABEL_9:
            ++v9;
            sub_D46CC0(a1, v10);
            if ( v9 == v8 )
              goto LABEL_19;
          }
        }
        goto LABEL_19;
      }
    }
    else
    {
      do
      {
        v5 = *(_QWORD *)(v5 + 16);
        v7 = *(_BYTE *)(v5 + 3) >> 6;
      }
      while ( !v7 );
      if ( v7 != 1 )
        goto LABEL_4;
    }
    v8 = (unsigned int)(*(_DWORD *)(v5 + 4) + 1);
    goto LABEL_6;
  }
LABEL_19:
  v15 = *(__int64 **)(a1 + 296);
  if ( !v15 )
    goto LABEL_42;
  v16 = *((unsigned int *)v15 - 1);
  if ( &v15[v16] == v15 )
    goto LABEL_42;
  v17 = &v15[v16];
  while ( 2 )
  {
    v18 = *v15;
    if ( (*(_BYTE *)(*v15 + 6) & 2) != 0 )
      goto LABEL_22;
    v19 = *((unsigned int *)a3 + 2);
    v20 = *((_DWORD *)a3 + 4);
    if ( 3 * (int)v19 < (unsigned int)(4 * (v20 + *((_DWORD *)a3 + 3))) )
    {
      v56 = 2 * v19;
      n = 8LL * (unsigned int)(2 * v19);
      v39 = (_QWORD *)sub_186B270(n);
      v40 = v56;
      v23 = n;
      v21 = v39;
      if ( v56 )
      {
        memset(v39, 0, n);
        v23 = n;
        v40 = v56;
      }
      v41 = (__int64 *)*a3;
      v22 = v40 - 1;
      v24 = (_QWORD *)((char *)v21 + v23);
      v42 = (char *)*a3 + 8 * *((unsigned int *)a3 + 2);
      if ( *a3 != v42 )
      {
        v43 = a3;
        v44 = v17;
        v45 = (__int64 *)v42;
        v46 = v15;
        v47 = v21;
        v48 = v41;
        v49 = v43;
        do
        {
          while ( (unsigned __int64)*v48 <= 1 )
          {
            if ( v45 == ++v48 )
              goto LABEL_59;
          }
          v50 = 8LL * (*(_DWORD *)(*v48 + 12) & v22);
          v51 = &v47[(unsigned __int64)v50 / 8];
          if ( v23 == v50 )
          {
LABEL_63:
            if ( v47 == v51 )
            {
LABEL_71:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v52 = v47;
            while ( *v52 )
            {
              if ( v51 == ++v52 )
                goto LABEL_71;
            }
          }
          else
          {
            v52 = &v47[(unsigned __int64)v50 / 8];
            while ( *v52 )
            {
              if ( v24 == ++v52 )
                goto LABEL_63;
            }
          }
          v53 = *v48++;
          *v52 = v53;
        }
        while ( v45 != v48 );
LABEL_59:
        v21 = v47;
        v15 = v46;
        v42 = (char *)*v49;
        v17 = v44;
        a3 = v49;
      }
      if ( v42 )
      {
        v59 = v40;
        v57 = v23;
        na = v40 - 1;
        sub_186B220(v42);
        v40 = v59;
        v23 = v57;
        v22 = na;
      }
      *a3 = v21;
      v20 = 0;
      *((_DWORD *)a3 + 2) = v40;
      *((_DWORD *)a3 + 4) = 0;
    }
    else
    {
      v21 = *a3;
      v22 = v19 - 1;
      v23 = 8 * v19;
      v24 = (char *)*a3 + v23;
    }
    v25 = *(_DWORD *)(v18 + 12);
    v26 = 8LL * (v25 & v22);
    v27 = &v21[(unsigned __int64)v26 / 8];
    if ( v26 != v23 )
    {
      v28 = &v21[(unsigned __int64)v26 / 8];
      v29 = nullptr;
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 > 1u )
        {
          if ( *(_DWORD *)(v30 + 12) == v25 && v18 == v30 )
          {
            *v28 = v18;
            goto LABEL_22;
          }
        }
        else
        {
          if ( !v30 )
          {
            if ( v29 )
              goto LABEL_69;
            v29 = v28;
            goto LABEL_70;
          }
          v29 = v28;
        }
        if ( ++v28 == v24 )
          goto LABEL_37;
      }
    }
    v29 = nullptr;
    while ( 1 )
    {
LABEL_37:
      if ( v27 == v21 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v31 = *v21;
      if ( *v21 <= 1u )
        break;
      if ( *(_DWORD *)(v31 + 12) == v25 && v18 == v31 )
      {
        *v21 = v18;
        goto LABEL_22;
      }
LABEL_36:
      ++v21;
    }
    if ( v31 )
    {
      v29 = v21;
      goto LABEL_36;
    }
    if ( v29 )
LABEL_69:
      *((_DWORD *)a3 + 4) = v20 - 1;
    else
      v29 = v21;
LABEL_70:
    *v29 = v18;
    ++*((_DWORD *)a3 + 3);
LABEL_22:
    if ( v17 != ++v15 )
      continue;
    break;
  }
  v4 = a1;
LABEL_42:
  v32 = *(__int64 **)v4;
  v33 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( *(_QWORD *)v4 != v33 )
  {
    do
    {
      v34 = *v32++;
      *(_BYTE *)(v34 + 6) &= ~1u;
    }
    while ( (__int64 *)v33 != v32 );
  }
  result = *(__int64 **)(v4 + 144);
  v36 = *(unsigned int *)(v4 + 152);
  *(_DWORD *)(v4 + 8) = 0;
  for ( i = &result[v36]; result != i; *(_BYTE *)(v38 + 6) &= ~2u )
    v38 = *result++;
  *(_DWORD *)(v4 + 152) = 0;
  return result;
}


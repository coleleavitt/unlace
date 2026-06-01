unsigned __int64 __fastcall sub_64B510(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char *v4; // rdi
  int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // esi
  char *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r12
  void *v11; // rcx
  _QWORD *v12; // rbx
  unsigned __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // edi
  int v17; // eax
  __int64 v18; // r9
  _QWORD *v19; // r12
  unsigned int v20; // r10d
  __int64 v21; // r9
  _QWORD *v22; // r13
  int v23; // ecx
  __int64 v24; // r10
  _QWORD *v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  int v31; // r8d
  char *v32; // rcx
  char *v33; // r11
  __int64 v34; // rax
  _QWORD *v35; // r15
  char *v36; // rbx
  __int64 v37; // rcx
  char *v38; // rbp
  __int64 v39; // r11
  __int64 v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // esi
  __int64 n; // [rsp+8h] [rbp-60h]
  unsigned int na; // [rsp+8h] [rbp-60h]
  int v47; // [rsp+10h] [rbp-58h]
  __int64 v48; // [rsp+10h] [rbp-58h]
  int v49; // [rsp+18h] [rbp-50h]

  v2 = a1;
  if ( !*(_DWORD *)(a1 + 2300) && !*(_DWORD *)(a1 + 2304) )
    goto LABEL_15;
  v4 = *(char **)(a1 + 2288);
  v5 = 0;
  v6 = &v4[8 * *(unsigned int *)(v2 + 2296)];
  v7 = *(_DWORD *)(v2 + 2296);
  v8 = *(char **)(v2 + 2288);
  if ( v4 != v6 )
  {
    do
    {
      while ( *(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = 0;
        v8 += 8;
        if ( v6 == v8 )
          goto LABEL_8;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != v8 );
LABEL_8:
    if ( v7 > 0x10 && 3 * v7 < 4 * v5 )
    {
      if ( v4 )
      {
        sub_186B220(v4);
        v9 = *(_DWORD *)(v2 + 2296);
        *(_QWORD *)(v2 + 2288) = 0;
        v9 >>= 1;
        *(_DWORD *)(v2 + 2296) = v9;
        v10 = v9;
        v11 = (void *)sub_186B270(8LL * v9);
        if ( !v9 )
        {
LABEL_13:
          *(_QWORD *)(v2 + 2288) = v11;
          goto LABEL_14;
        }
      }
      else
      {
        *(_QWORD *)(v2 + 2288) = 0;
        v44 = v7 >> 1;
        v10 = v44;
        *(_DWORD *)(v2 + 2296) = v44;
        v11 = (void *)sub_186B270(8LL * v44);
      }
      v11 = memset(v11, 0, 8 * v10);
      goto LABEL_13;
    }
  }
LABEL_14:
  *(_QWORD *)(v2 + 2300) = 0;
LABEL_15:
  v12 = *(_QWORD **)a2;
  result = *(unsigned int *)(a2 + 8);
  v14 = *(_QWORD *)a2 + 8 * result;
  if ( *(_QWORD *)a2 == v14 )
    return result;
  while ( *v12 <= 1u )
  {
    if ( (_QWORD *)v14 == ++v12 )
      return result;
  }
  if ( (_QWORD *)v14 == v12 )
    return result;
  v15 = *v12;
  v16 = 0;
  v17 = 0;
  while ( 2 )
  {
    v18 = *(unsigned int *)(v2 + 2296);
    if ( 3 * (int)v18 < (unsigned int)(4 * (v16 + v17)) )
    {
      v47 = 2 * v18;
      n = 8LL * (unsigned int)(2 * v18);
      v30 = (_QWORD *)sub_186B270(n);
      v31 = v47;
      v21 = n;
      v19 = v30;
      if ( v47 )
      {
        memset(v30, 0, n);
        v21 = n;
        v31 = v47;
      }
      v32 = *(char **)(v2 + 2288);
      v20 = v31 - 1;
      v22 = (_QWORD *)((char *)v19 + v21);
      v33 = &v32[8 * *(unsigned int *)(v2 + 2296)];
      if ( v32 != v33 )
      {
        v34 = v2;
        v35 = v12;
        v36 = v32;
        v37 = v15;
        v38 = v33;
        v39 = v34;
        do
        {
          while ( *(_QWORD *)v36 <= 1u )
          {
            v36 += 8;
            if ( v38 == v36 )
              goto LABEL_56;
          }
          v40 = 8LL * (*(_DWORD *)(*(_QWORD *)v36 + 12LL) & v20);
          v41 = &v19[(unsigned __int64)v40 / 8];
          if ( v21 == v40 )
          {
LABEL_60:
            if ( v19 == v41 )
            {
LABEL_69:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v42 = v19;
            while ( *v42 )
            {
              if ( v41 == ++v42 )
                goto LABEL_69;
            }
          }
          else
          {
            v42 = &v19[(unsigned __int64)v40 / 8];
            while ( *v42 )
            {
              if ( v22 == ++v42 )
                goto LABEL_60;
            }
          }
          v43 = *(_QWORD *)v36;
          v36 += 8;
          *v42 = v43;
        }
        while ( v38 != v36 );
LABEL_56:
        v12 = v35;
        v2 = v39;
        v33 = *(char **)(v39 + 2288);
        v15 = v37;
      }
      if ( v33 )
      {
        v49 = v31;
        v48 = v21;
        na = v31 - 1;
        sub_186B220(v33);
        v31 = v49;
        v21 = v48;
        v20 = na;
      }
      *(_QWORD *)(v2 + 2288) = v19;
      v16 = 0;
      *(_DWORD *)(v2 + 2296) = v31;
      *(_DWORD *)(v2 + 2304) = 0;
    }
    else
    {
      v19 = *(_QWORD **)(v2 + 2288);
      v20 = v18 - 1;
      v21 = 8 * v18;
      v22 = (_QWORD *)((char *)v19 + v21);
    }
    v23 = *(_DWORD *)(v15 + 12);
    v24 = v23 & v20;
    v25 = &v19[v24];
    if ( 8 * v24 != v21 )
    {
      v26 = &v19[v24];
      v27 = nullptr;
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 > 1u )
        {
          if ( *(_DWORD *)(v28 + 12) == v23 && v28 == v15 )
          {
            *v26 = v15;
LABEL_39:
            result = (unsigned __int64)(v12 + 1);
            if ( (_QWORD *)v14 != v12 + 1 )
              goto LABEL_42;
            return result;
          }
        }
        else
        {
          if ( !v28 )
          {
            if ( v27 )
              goto LABEL_66;
            v27 = v26;
            goto LABEL_67;
          }
          v27 = v26;
        }
        if ( ++v26 == v22 )
          goto LABEL_34;
      }
    }
    v27 = nullptr;
    while ( 1 )
    {
LABEL_34:
      if ( v25 == v19 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v29 = *v19;
      if ( *v19 <= 1u )
        break;
      if ( *(_DWORD *)(v29 + 12) == v23 && v29 == v15 )
      {
        *v19 = v15;
        goto LABEL_39;
      }
LABEL_33:
      ++v19;
    }
    if ( v29 )
    {
      v27 = v19;
      goto LABEL_33;
    }
    if ( v27 )
LABEL_66:
      *(_DWORD *)(v2 + 2304) = v16 - 1;
    else
      v27 = v19;
LABEL_67:
    result = (unsigned __int64)(v12 + 1);
    *v27 = v15;
    ++*(_DWORD *)(v2 + 2300);
    if ( (_QWORD *)v14 == v12 + 1 )
      return result;
LABEL_42:
    while ( 1 )
    {
      v15 = *(_QWORD *)result;
      v12 = (_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
        break;
      result += 8LL;
      if ( v14 == result )
        return result;
    }
    if ( v14 != result )
    {
      v17 = *(_DWORD *)(v2 + 2300);
      v16 = *(_DWORD *)(v2 + 2304);
      continue;
    }
    return result;
  }
}

